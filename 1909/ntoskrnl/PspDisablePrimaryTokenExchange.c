/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1405E7AFC
 * Callers:
 *     PspSystemThreadStartup @ 0x140134020 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x1405E7470 (PspUserThreadStartup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 *     PspLockUnlockProcessExclusive @ 0x140108CA8 (PspLockUnlockProcessExclusive.c)
 *     KeSynchronizeAddressPolicy @ 0x14012F6AC (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x140139E08 (KeKvaShadowingActive.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     SeTokenIsAdmin @ 0x14061BCF0 (SeTokenIsAdmin.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B8720 (PspOneDirectionSecurityDomainCombine.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  PACCESS_TOKEN v2; // rbx
  BOOL v3; // edi
  BOOL v4; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 776) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 776), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( (*(_DWORD *)(v1 + 1788) & 0x400000) == 0 )
  {
    v2 = PsReferencePrimaryToken((PEPROCESS)v1);
    v3 = SeTokenIsAdmin(v2) != 0;
    ObfDereferenceObject(v2);
    if ( (*(_BYTE *)(v1 + 728) & 1) != 0 )
      v3 = 1;
    v4 = 0;
    if ( (*(_DWORD *)(v1 + 1788) & 0x800000) == 0 )
      v4 = v3;
    if ( v4 )
    {
      *(_QWORD *)(v1 + 2144) = 0LL;
      *(_QWORD *)(v1 + 2152) = 0LL;
    }
    if ( !(unsigned int)KeKvaShadowingActive() || (*(_DWORD *)(v1 + 1788) & 0x4000) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v1 + 1788), 0xEu);
    }
    else
    {
      if ( v4 )
      {
        *(_BYTE *)(v1 + 648) = 1;
        _InterlockedOr(v5, 0);
      }
      KeSynchronizeAddressPolicy(v1);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 1788), 0xEu)
        && *(_BYTE *)(v1 + 648) == 1
        && (PEPROCESS)v1 != PsInitialSystemProcess )
      {
        MiDeleteProcessShadow(v1, 1);
      }
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 1788), 0x16u) )
      PspOneDirectionSecurityDomainCombine((PVOID)v1);
  }
  _InterlockedOr(v5, 0);
}
