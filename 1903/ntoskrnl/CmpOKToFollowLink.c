/*
 * XREFs of CmpOKToFollowLink @ 0x1405BD9B0
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 */

char __fastcall CmpOKToFollowLink(_QWORD *a1, __int64 a2)
{
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx

  if ( PsIsCurrentThreadInServerSilo() || !a1 || a1 == (_QWORD *)a2 )
    return 1;
  if ( (*(_DWORD *)(a2 + 4152) & 1) == 0 )
    return 0;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  v5 = (_QWORD **)(a2 + 4160);
  v6 = *v5;
  if ( *v5 == v5 )
  {
LABEL_11:
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    return 0;
  }
  while ( v6 - 520 != a1 )
  {
    v6 = (_QWORD *)*v6;
    if ( v6 == v5 )
      goto LABEL_11;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  return 1;
}
