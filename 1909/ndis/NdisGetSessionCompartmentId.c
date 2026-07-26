/*
 * XREFs of NdisGetSessionCompartmentId @ 0x1C00120E0
 * Callers:
 *     ndisNsiGetAllSessionInformation @ 0x1C00120A0 (ndisNsiGetAllSessionInformation.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C0021060 (NdisGetProcessObjectCompartmentId.c)
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C0021328 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 *     ndisGetNsiClientInfo @ 0x1C00367A8 (ndisGetNsiClientInfo.c)
 *     NdisGetJobObjectCompartmentId @ 0x1C00ABD00 (NdisGetJobObjectCompartmentId.c)
 *     NdisSetSessionCompartmentId @ 0x1C00ABD60 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003685C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetSessionCompartmentId(unsigned int a1)
{
  unsigned int ThreadSessionId; // ebx
  unsigned int v3; // edi
  KIRQL v4; // r8

  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId >= ndisCmSessionCount )
    return 1LL;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
  if ( ThreadSessionId < ndisCmSessionCount )
    v3 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
  KeReleaseSpinLock(&ndisCmSessionLock, v4);
  if ( !v3 )
    return 1;
  return v3;
}
