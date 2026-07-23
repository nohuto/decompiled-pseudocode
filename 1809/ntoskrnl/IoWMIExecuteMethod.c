/*
 * XREFs of IoWMIExecuteMethod @ 0x1408B3120
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x1405FCF88 (WmipQuerySetExecuteSI.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1408B3948 (WmipAllocateSingleInstanceWnode.c)
 */

NTSTATUS __stdcall IoWMIExecuteMethod(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        ULONG MethodId,
        ULONG InBufferSize,
        PULONG OutBufferSize,
        PUCHAR InOutBuffer)
{
  PULONG v6; // rsi
  ULONG v10; // r8d
  int SingleInstanceWnode; // eax
  _QWORD *v13; // rdi
  NTSTATUS SetExecuteSI; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // r15d
  unsigned __int16 *v18; // rcx
  ULONG v19; // eax
  PUCHAR v21; // rcx
  int v22; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  v6 = OutBufferSize;
  P = 0LL;
  v10 = *OutBufferSize;
  if ( InBufferSize > *OutBufferSize )
    v10 = InBufferSize;
  SingleInstanceWnode = WmipAllocateSingleInstanceWnode(
                          68,
                          (_DWORD)InstanceName,
                          v10,
                          (unsigned int)&OutBufferSize,
                          (__int64)&v22,
                          (__int64)&v24,
                          (__int64)&P);
  v13 = P;
  SetExecuteSI = SingleInstanceWnode;
  if ( SingleInstanceWnode >= 0 )
  {
    v15 = (int)OutBufferSize;
    v16 = v24;
    *((_DWORD *)P + 11) = 0x8000;
    v13[2] = 0LL;
    *(_DWORD *)v13 = v16;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 14) = MethodId;
    v17 = v22;
    *((_DWORD *)v13 + 12) = v15;
    *((_DWORD *)v13 + 15) = v17;
    *((_DWORD *)v13 + 16) = InBufferSize;
    v18 = (unsigned __int16 *)((char *)v13 + *((unsigned int *)v13 + 12));
    *v18 = InstanceName->Length;
    memmove(v18 + 1, InstanceName->Buffer, InstanceName->Length);
    memmove((char *)v13 + *((unsigned int *)v13 + 15), InOutBuffer, InBufferSize);
    LODWORD(v24) = *(_DWORD *)v13;
    SetExecuteSI = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 9u, (__int64)v13, v16, (unsigned int *)&v24);
    if ( SetExecuteSI >= 0 )
    {
      if ( (*((_DWORD *)v13 + 11) & 0x20) != 0 )
      {
        v19 = *((_DWORD *)v13 + 12) - v17;
LABEL_7:
        SetExecuteSI = -1073741789;
        *v6 = (v19 + 7) & 0xFFFFFFF8;
        goto LABEL_8;
      }
      v19 = *((_DWORD *)v13 + 16);
      if ( *v6 < v19 )
        goto LABEL_7;
      v21 = InOutBuffer;
      *v6 = v19;
      memmove(v21, (char *)v13 + *((unsigned int *)v13 + 15), *((unsigned int *)v13 + 16));
    }
  }
LABEL_8:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return SetExecuteSI;
}
