/*
 * XREFs of IpmiOpRegionHandler @ 0x1C00567D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall IpmiOpRegionHandler(__int64 a1, UCHAR *a2, _BYTE *a3)
{
  UCHAR *InOutBuffer; // rdi
  bool v5; // zf
  UCHAR *v7; // rsi
  unsigned int *v8; // r14
  unsigned int v9; // r12d
  char *PoolWithTag; // rax
  NTSTATUS v11; // ebx
  unsigned int v12; // eax
  unsigned int *v13; // rax
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  ULONG v16; // eax
  UCHAR *v17; // rax
  unsigned __int8 v18; // r8
  ULONG OutBufferSize; // [rsp+30h] [rbp-20h] BYREF
  PVOID DataBlockObject; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING InstanceName; // [rsp+40h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+90h] [rbp+40h] BYREF
  _BYTE *v24; // [rsp+A0h] [rbp+50h]

  v24 = a3;
  InOutBuffer = 0LL;
  v5 = *(_BYTE *)(a1 + 9) == 5;
  v7 = 0LL;
  InOutBufferSize = 0;
  DataBlockObject = 0LL;
  v8 = 0LL;
  OutBufferSize = 0;
  if ( !v5 || *(_BYTE *)(a1 + 10) != 1 )
    goto LABEL_22;
  v9 = a2[1] + 8;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v9, 0x4D706341u);
  InOutBuffer = (UCHAR *)PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    goto LABEL_27;
  }
  *PoolWithTag = (unsigned __int16)(*(_WORD *)(a1 + 16) + *(_WORD *)(a1 + 24)) >> 8;
  *(_WORD *)(PoolWithTag + 1) = 0x2000;
  PoolWithTag[3] = *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 24);
  v12 = a2[1];
  *((_DWORD *)InOutBuffer + 1) = v12;
  if ( v12 )
    memmove(InOutBuffer + 8, a2 + 2, v12);
  if ( *(_BYTE *)(a1 + 8) == 1 )
  {
    v11 = IoWMIOpenBlock(&GUID_IPMI_WMI, 0x11u, &DataBlockObject);
    if ( v11 < 0 )
      goto LABEL_23;
    if ( !DataBlockObject )
      goto LABEL_23;
    InOutBufferSize = 0;
    v11 = IoWMIQueryAllData(DataBlockObject, &InOutBufferSize, 0LL);
    if ( v11 != -1073741789 )
      goto LABEL_23;
    v13 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, InOutBufferSize, 0x4D706341u);
    v8 = v13;
    if ( v13 )
    {
      v11 = IoWMIQueryAllData(DataBlockObject, &InOutBufferSize, v13);
      if ( v11 < 0 )
        goto LABEL_23;
      v14 = *(unsigned int *)((char *)v8 + v8[14]);
      InstanceName.Buffer = (wchar_t *)((char *)v8 + v14 + 2);
      v15 = *(_WORD *)((char *)v8 + v14);
      OutBufferSize = 0;
      InstanceName.MaximumLength = v15;
      InstanceName.Length = v15;
      v11 = IoWMIExecuteMethod(DataBlockObject, &InstanceName, 1u, v9, &OutBufferSize, InOutBuffer);
      if ( v11 != -1073741789 )
        goto LABEL_23;
      v16 = OutBufferSize;
      if ( v9 > OutBufferSize )
        v16 = v9;
      InOutBufferSize = v16;
      v17 = (UCHAR *)ExAllocatePoolWithTag(PagedPool, v16, 0x4D706341u);
      v7 = v17;
      if ( v17 )
      {
        memmove(v17, InOutBuffer, v9);
        v11 = IoWMIExecuteMethod(DataBlockObject, &InstanceName, 1u, v9, &OutBufferSize, v7);
        if ( v11 >= 0 )
        {
          *a2 = *v7;
          v18 = *v24 - 2;
          if ( *((_DWORD *)v7 + 1) <= (unsigned int)(*(_DWORD *)v24 - 2) )
            v18 = *((_DWORD *)v7 + 1);
          a2[1] = v18;
          memmove(a2 + 2, v7 + 8, v18);
        }
        goto LABEL_23;
      }
    }
    v11 = -1073741670;
  }
  else
  {
LABEL_22:
    v11 = -1073741823;
  }
LABEL_23:
  if ( InOutBuffer )
    ExFreePoolWithTag(InOutBuffer, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_27:
  if ( DataBlockObject )
    ObfDereferenceObject(DataBlockObject);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v11;
}
