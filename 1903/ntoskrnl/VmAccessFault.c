/*
 * XREFs of VmAccessFault @ 0x1408ECEA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VmpAccessFaultBatch @ 0x140329758 (VmpAccessFaultBatch.c)
 *     VmpPrefetchForVirtualFault @ 0x1408EDE64 (VmpPrefetchForVirtualFault.c)
 */

__int64 __fastcall VmAccessFault(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        __int64 a7)
{
  PSLIST_ENTRY v7; // rbx
  unsigned __int64 *v10; // rsi
  __int64 v11; // rdi
  _SLIST_ENTRY *v12; // r15
  int v13; // edx
  unsigned __int64 *v14; // rbp
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // rcx
  int v18; // edi
  int v20; // [rsp+40h] [rbp-368h]
  volatile LONG *SpinLock; // [rsp+48h] [rbp-360h]
  unsigned __int64 v23; // [rsp+50h] [rbp-358h]
  char v24; // [rsp+60h] [rbp-348h] BYREF

  v7 = 0LL;
  v10 = a1;
  if ( (a4 & 0xFFFFFF80) != 0 )
    NT_ASSERT("(FaultTypeFlags & ~0x7F) == 0");
  SpinLock = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[19];
  if ( !SpinLock )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( (a4 & 0x38) == 0x20 )
    VmpPrefetchForVirtualFault(a1);
  v11 = 0LL;
  v12 = (_SLIST_ENTRY *)&v24;
  v13 = 16;
  v20 = 16;
  if ( a3 > 0x10 || v10[1] > 0x10 )
  {
    ++dword_140505454;
    v7 = RtlpInterlockedPopEntrySList(&VmpLargeFaultBatchLookasideList);
    if ( !v7 )
    {
      ++dword_140505458;
      v7 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140505470)(
                           (unsigned int)dword_140505464,
                           (unsigned int)dword_14050546C,
                           (unsigned int)dword_140505468,
                           &VmpLargeFaultBatchLookasideList);
    }
    if ( v7 )
    {
      HIDWORD(v7->Next) = 0;
      v12 = v7 + 2;
      *((_QWORD *)&v7->Next + 1) = v7 + 2;
      v13 = 512;
      v7[1].Next = v7 + 1538;
      *((_QWORD *)&v7[1].Next + 1) = v7 + 1538;
      v20 = 512;
      LODWORD(v7->Next) = 512;
    }
    else
    {
      v13 = 16;
    }
  }
  v14 = &v10[2 * a3];
  if ( v10 >= v14 )
    goto LABEL_25;
  do
  {
    v15 = *v10;
    v16 = *a2;
    v23 = *v10 + v10[1];
    if ( *v10 < v23 )
    {
      do
      {
        if ( v16 > 0x7FFFFFFEFLL )
          NT_ASSERT("SystemVpn <= ((ULONG_PTR)MmHighestUserAddress >> 12L)");
        v17 = 3 * v11;
        v11 = (unsigned int)(v11 + 1);
        *((_QWORD *)&v12[v17 + 1].Next + 1) = v16 & 0xFFFFFFFFFFFFFLL;
        v12[v17 + 2].Next = (_SLIST_ENTRY *)(v15 & 0xFFFFFFFFFFFFFLL);
        if ( (_DWORD)v11 == v13 )
        {
          v18 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v12, v11, (int)v7, a4, a5, a6, a7);
          if ( v18 < 0 )
            goto LABEL_26;
          v13 = v20;
          v11 = 0LL;
        }
        ++v15;
        ++v16;
      }
      while ( v15 < v23 );
    }
    v10 += 2;
    ++a2;
  }
  while ( v10 < v14 );
  if ( !(_DWORD)v11
    || (v18 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v12, v11, (int)v7, a4, a5, a6, a7), v18 >= 0) )
  {
LABEL_25:
    v18 = 0;
  }
LABEL_26:
  if ( v7 )
  {
    ++dword_14050545C;
    if ( LOWORD(VmpLargeFaultBatchLookasideList.Alignment) < (unsigned __int16)word_140505450 )
    {
      RtlpInterlockedPushEntrySList(&VmpLargeFaultBatchLookasideList, v7);
    }
    else
    {
      ++dword_140505460;
      ((void (__fastcall *)(PSLIST_ENTRY, _SLIST_HEADER *))qword_140505478)(v7, &VmpLargeFaultBatchLookasideList);
    }
  }
  return (unsigned int)v18;
}
