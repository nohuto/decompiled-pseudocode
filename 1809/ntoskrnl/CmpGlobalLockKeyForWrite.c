/*
 * XREFs of CmpGlobalLockKeyForWrite @ 0x14068E5C4
 * Callers:
 *     CmLockKeyForWrite @ 0x14068E380 (CmLockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14068E6E0 (CmpCreateGlobalKeyLockEntry.c)
 */

__int64 __fastcall CmpGlobalLockKeyForWrite(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 GlobalKeyLockEntry; // rbx
  unsigned int v6; // edi
  struct _KTHREAD *v7; // rax
  __int64 *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  GlobalKeyLockEntry = qword_140437D88;
  v6 = 0;
  while ( 1 )
  {
    if ( (__int64 *)GlobalKeyLockEntry == &qword_140437D88 )
      goto LABEL_5;
    if ( *(_QWORD *)(GlobalKeyLockEntry + 24) == a1 )
      break;
    GlobalKeyLockEntry = *(_QWORD *)GlobalKeyLockEntry;
  }
  if ( GlobalKeyLockEntry )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(GlobalKeyLockEntry + 16)) <= 1 )
      __fastfail(0xEu);
LABEL_8:
    *a2 = GlobalKeyLockEntry;
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v6;
  }
LABEL_5:
  ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  GlobalKeyLockEntry = CmpCreateGlobalKeyLockEntry(a1);
  if ( GlobalKeyLockEntry )
  {
    *(_WORD *)(a1 + 4) |= 0x80u;
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    v8 = (__int64 *)qword_140437D90;
    if ( *(__int64 **)qword_140437D90 != &qword_140437D88 )
      __fastfail(3u);
    *(_QWORD *)GlobalKeyLockEntry = &qword_140437D88;
    *(_QWORD *)(GlobalKeyLockEntry + 8) = v8;
    *v8 = GlobalKeyLockEntry;
    qword_140437D90 = GlobalKeyLockEntry;
    goto LABEL_8;
  }
  return (unsigned int)-1073741670;
}
