/*
 * XREFs of PfpPrefetchSharedConflictNotifyStart @ 0x1408A0740
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 */

__int64 __fastcall PfpPrefetchSharedConflictNotifyStart(
        ULONG_PTR *BugCheckParameter2,
        __int64 a2,
        void (__fastcall **a3)(volatile signed __int64 *a1, _KLOCK_ENTRY *a2))
{
  unsigned int v3; // ebx
  PRTL_BALANCED_NODE v5; // rdi
  PRTL_BALANCED_NODE v6; // rax

  v3 = 0;
  v5 = 0LL;
  ++dword_1404679AC;
  if ( BugCheckParameter2 )
  {
    *((_DWORD *)BugCheckParameter2 + 18) = 1;
    _InterlockedAdd((volatile signed __int32 *)BugCheckParameter2 + 28, 1u);
    *((_DWORD *)BugCheckParameter2 + 15) = 0;
    if ( _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2 + 15) <= 1 )
      __fastfail(0xEu);
    if ( !BugCheckParameter2[16] )
      goto LABEL_6;
  }
  else
  {
    BugCheckParameter2 = &PfGlobals;
  }
  v6 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  v5 = v6;
  if ( v6 )
  {
    KeAbPreWait((__int64)v6);
    goto LABEL_9;
  }
LABEL_6:
  v3 = -1073741670;
LABEL_9:
  a3[1] = (void (__fastcall *)(volatile signed __int64 *, _KLOCK_ENTRY *))v5;
  *a3 = PfpPrefetchSharedConflictNotifyEnd;
  return v3;
}
