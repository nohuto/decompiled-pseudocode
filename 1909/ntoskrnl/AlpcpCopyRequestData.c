/*
 * XREFs of AlpcpCopyRequestData @ 0x140885590
 * Callers:
 *     NtReadRequestData @ 0x140884840 (NtReadRequestData.c)
 *     NtWriteRequestData @ 0x140884950 (NtWriteRequestData.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x1405B0AF4 (AlpcpAvailableBufferSize.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14065AD68 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsDereferencePrimaryToken @ 0x1406E5560 (PsDereferencePrimaryToken.c)
 */

NTSTATUS __fastcall AlpcpCopyRequestData(
        char a1,
        void *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char *Address,
        SIZE_T Length,
        __int64 *a7)
{
  unsigned __int64 v7; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  unsigned __int64 v13; // rdi
  __int64 *v14; // r9
  __int64 *v15; // rsi
  NTSTATUS result; // eax
  __int64 v17; // r9
  signed int v18; // ebx
  __int64 v19; // r10
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int16 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rcx
  char *v28; // r9
  __int64 v29; // r8
  char *v30; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-70h] BYREF
  PVOID PrimaryToken; // [rsp+50h] [rbp-68h] BYREF
  __int64 v33; // [rsp+58h] [rbp-60h] BYREF
  __m128i v34; // [rsp+60h] [rbp-58h]
  _OWORD v35[3]; // [rsp+70h] [rbp-48h] BYREF

  v7 = a4;
  memset(v35, 0, 0x28uLL);
  v34 = 0uLL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  HandleInformation = 0LL;
  if ( PreviousMode )
  {
    v13 = Length;
    if ( a1 )
    {
      if ( Length && ((unsigned __int64)&Address[Length] > 0x7FFFFFFF0000LL || &Address[Length] < Address) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      ProbeForWrite(Address, Length, 1u);
    }
    AlpcpProbeAndCaptureMessageHeader(a3, (__int64)v35, 0);
    v15 = a7;
    if ( a7 )
    {
      if ( a7 < v14 )
        v14 = a7;
      *v14 = *v14;
    }
  }
  else
  {
    v35[0] = *(_OWORD *)a3;
    v35[1] = *(_OWORD *)(a3 + 16);
    *(_QWORD *)&v35[2] = *(_QWORD *)(a3 + 32);
    v15 = a7;
    v13 = Length;
  }
  if ( !WORD3(v35[0]) )
    return -1073741811;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &PrimaryToken, HandleInformation);
  if ( result >= 0 )
  {
    v18 = AlpcpLookupMessage((__int64)PrimaryToken, DWORD2(v35[1]), v35[2], v17, &BugCheckParameter2);
    if ( v18 < 0 )
    {
LABEL_35:
      PsDereferencePrimaryToken(PrimaryToken);
      return v18;
    }
    v19 = *(_QWORD *)(BugCheckParameter2 + 32);
    if ( v19 )
    {
      v18 = -1073741811;
      if ( *(_WORD *)(BugCheckParameter2 + 246) )
      {
        v20 = AlpcpAvailableBufferSize(BugCheckParameter2);
        v24 = *(unsigned __int16 *)(v21 + 242);
        if ( v20 <= v24 )
          v24 = v20;
        if ( v23 >= v24 || v7 >= (v24 - v23) >> 4 )
          goto LABEL_34;
        v25 = v21 + v22;
        if ( *(_DWORD *)(v25 + 240) > (unsigned int)v7 )
        {
          v34 = *(__m128i *)(v25 + 16 * v7 + 248);
          v18 = _mm_srli_si128(v34, 8).m128i_u32[0] < v13 ? 0xC000000D : 0;
        }
      }
      if ( v18 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( a1 )
        {
          Process = (__int64)CurrentThread->ApcState.Process;
          v28 = (char *)v34.m128i_i64[0];
          v29 = *(_QWORD *)(v19 + 544);
          v30 = Address;
        }
        else
        {
          v29 = (__int64)CurrentThread->ApcState.Process;
          v28 = Address;
          v30 = (char *)v34.m128i_i64[0];
          Process = *(_QWORD *)(v19 + 544);
        }
        v18 = MmCopyVirtualMemory(Process, v30, v29, v28, v13, PreviousMode, (unsigned __int64 *)&v33);
        if ( v18 >= 0 )
        {
          if ( v15 )
            *v15 = v33;
        }
      }
    }
    else
    {
      v18 = -1073741790;
    }
LABEL_34:
    AlpcpUnlockMessage(BugCheckParameter2);
    goto LABEL_35;
  }
  return result;
}
