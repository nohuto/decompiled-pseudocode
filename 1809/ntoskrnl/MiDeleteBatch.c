/*
 * XREFs of MiDeleteBatch @ 0x140039750
 * Callers:
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiDeleteClusterPage @ 0x1402C641C (MiDeleteClusterPage.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // r12
  struct _KEVENT *v4; // r13
  unsigned __int8 i; // si
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  ULONG_PTR v8; // rbp
  unsigned __int8 v9; // r9
  unsigned __int8 *v10; // r15
  __int64 v11; // rax
  volatile signed __int64 *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdi
  ULONG_PTR BugCheckParameter4; // r8
  ULONG_PTR v16; // rdx
  unsigned __int8 j; // di
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD v22[4]; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp+10h] BYREF

  if ( !*a1 )
    return 0LL;
  v3 = 0LL;
  v24 = *((_QWORD *)a1 + 2);
  v4 = *(struct _KEVENT **)(qword_14043B808
                          + 8
                          * ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFLL)
                                        - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
  v22[0] = 0LL;
  v22[1] = (char *)v4 + 7712;
  KxAcquireQueuedSpinLock(v22);
  for ( i = 0; i < *a1; ++i )
  {
    v6 = *(_QWORD *)&a1[8 * i + 16];
    v24 = v6;
    if ( (unsigned __int64)&v24 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v24 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 8 * (((unsigned __int64)&v24 >> 3) & 0x1FF));
        v21 = v6 | 0x20;
        if ( (v20 & 0x20) == 0 )
          v21 = v6;
        v6 = v21;
        if ( (v20 & 0x42) != 0 )
          v6 = v21 | 0x42;
      }
    }
    v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL);
    v8 = v7 - 0x58000000000LL;
    v9 = *(_BYTE *)(v7 - 0x57FFFFFFFDELL);
    v10 = (unsigned __int8 *)(v7 - 0x57FFFFFFFDELL);
    if ( (v9 & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        v7 / 48,
        *(_BYTE *)(v7 - 0x57FFFFFFFDELL) & 7,
        *(_QWORD *)(v7 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL);
    v11 = 0LL;
    if ( (v24 & 0x42) != 0 && (v9 & 0x10) == 0 )
    {
      if ( (((*(_QWORD *)(v7 - 0x57FFFFFFFF0LL) & 0x400LL) == 0) & (unsigned __int8)~(v9 >> 3)) != 0 )
      {
        v11 = MiCapturePageFileInfoInline(v7 - 0x57FFFFFFFF0LL, 1LL);
        v9 = *v10;
      }
      *v10 = v9 | 0x10;
    }
    *(_QWORD *)&a1[8 * i + 16] = v11;
    v12 = (volatile signed __int64 *)(v7 - 0x57FFFFFFFE8LL);
    v13 = *v12 ^ (*v12 ^ (*v12 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
    *v12 = v13;
    if ( (v13 & 0x3FFFFFFFFFFFFFFFLL) == 0
      && (unsigned int)MiPfnShareCountIsZero(v8, 1uLL) == 3
      && (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0 )
    {
      ++v3;
    }
    _InterlockedAnd64(v12, 0x7FFFFFFFFFFFFFFFuLL);
  }
  KxReleaseQueuedSpinLock(v22);
  v14 = *((_QWORD *)a1 + 1);
  if ( a1[1] == 1 )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
  }
  BugCheckParameter4 = *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_BYTE *)(v14 + 34) & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v14 + 0x58000000000LL) / 48, *(_BYTE *)(v14 + 34) & 7, BugCheckParameter4);
  v16 = *a1;
  if ( BugCheckParameter4 < v16 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v14 + 0x58000000000LL) / 48, *(_BYTE *)(v14 + 34) & 7, BugCheckParameter4);
  *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) - v16)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( j = 0; j < *a1; ++j )
  {
    v18 = *(_QWORD *)&a1[8 * j + 16];
    if ( v18 )
      MiReleasePageFileInfo(v4, v18, 1);
  }
  result = v3;
  *a1 = 0;
  return result;
}
