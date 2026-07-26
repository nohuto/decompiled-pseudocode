/*
 * XREFs of NdisSetSessionCompartmentId @ 0x1C00ABD60
 * Callers:
 *     ndisNsiSetAllSessionInformation @ 0x1C00AC190 (ndisNsiSetAllSessionInformation.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C00120E0 (NdisGetSessionCompartmentId.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00204B8 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0020FB0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003685C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C00ABC88 (-ndisCmLazyInitializeCleanup@@YAXXZ.c)
 */

__int64 __fastcall NdisSetSessionCompartmentId(unsigned int a1, unsigned int a2)
{
  _DWORD *v2; // rbp
  unsigned int ThreadSessionId; // esi
  _DWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  KIRQL v8; // r12
  char *PoolWithTag; // r13
  unsigned int SessionCompartmentId; // eax
  PVOID v12; // r15
  _QWORD *v13; // rax

  v2 = 0LL;
  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( a2 )
  {
    SessionCompartmentId = NdisGetSessionCompartmentId(ThreadSessionId);
    v5 = ndisCmValidateCompartmentChange(SessionCompartmentId, a2);
    if ( !v5 )
      return 3221225485LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = ThreadSessionId + 1;
  v7 = v6;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
  if ( ThreadSessionId >= ndisCmSessionCount )
  {
    ndisCmLazyInitializeCleanup();
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24 * v6, 0x6D63444Eu);
    if ( !PoolWithTag )
    {
      KeReleaseSpinLock(&ndisCmSessionLock, v8);
      if ( v5 )
        ndisIfDereferenceCompartmentForUser(v5);
      return 3221225626LL;
    }
    v12 = ndisCmSession;
    if ( ndisCmSession )
    {
      memmove(PoolWithTag, ndisCmSession, 24LL * ndisCmSessionCount);
      ExFreePoolWithTag(v12, 0);
    }
    memset(&PoolWithTag[24 * ndisCmSessionCount], 0, 24LL * ((unsigned int)v6 - ndisCmSessionCount));
    v7 = ThreadSessionId + 1;
    ndisCmSession = PoolWithTag;
    ndisCmSessionCount = v6;
  }
  v13 = ndisCmSession;
  if ( *((_QWORD *)ndisCmSession + 3 * ThreadSessionId + 1) )
  {
    v2 = (_DWORD *)*((_QWORD *)ndisCmSession + 3 * ThreadSessionId + 2);
    if ( !a2 )
    {
      *((_QWORD *)ndisCmSession + 3 * ThreadSessionId + 1) = 0LL;
      a2 = 1;
      v5 = 0LL;
    }
    goto LABEL_20;
  }
  if ( a2 )
  {
    *((_QWORD *)ndisCmSession + 3 * ThreadSessionId + 1) = v7;
LABEL_20:
    v13[3 * ThreadSessionId + 2] = v5;
    LODWORD(v13[3 * ThreadSessionId]) = a2;
  }
  KeReleaseSpinLock(&ndisCmSessionLock, v8);
  if ( v2 )
    ndisIfDereferenceCompartmentForUser(v2);
  _InterlockedExchangeAdd((volatile signed __int32 *)&NdisSessionToCompartmentMappingEpochAndZero, 2u);
  return 0LL;
}
