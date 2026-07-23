/*
 * XREFs of SeSetSessionIdToken @ 0x1405BD45C
 * Callers:
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1405838D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14089CF30 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     MmGetSessionObjectById @ 0x14007F234 (MmGetSessionObjectById.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405E0038 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenSessionById @ 0x140650F3C (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x14065D2A4 (SepSetTokenLowboxNumber.c)
 */

NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  void *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r8d
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  Object = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = MmGetSessionObjectById(SessionId);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v9, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 && *((_QWORD *)Token + 135) )
    {
      SepDereferenceLowBoxNumberEntry(*((unsigned int *)Token + 30));
      *((_QWORD *)Token + 135) = 0LL;
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      LOBYTE(v7) = 1;
      SepSetTokenSessionById((_DWORD)Token, SessionId, v7, (_DWORD)SessionObjectById, (__int64)&Object);
      SessionObjectById = 0LL;
    }
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
      v2 = SepSetTokenLowboxNumber(Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v9, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
