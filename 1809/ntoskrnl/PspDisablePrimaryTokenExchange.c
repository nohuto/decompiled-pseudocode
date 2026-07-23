/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1405F8498
 * Callers:
 *     PspSystemThreadStartup @ 0x140132600 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x1405F7E40 (PspUserThreadStartup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiDeleteProcessShadow @ 0x1400686C0 (MiDeleteProcessShadow.c)
 *     KeSynchronizeAddressPolicy @ 0x14012DD18 (KeSynchronizeAddressPolicy.c)
 *     PspLockUnlockProcessExclusive @ 0x14012F390 (PspLockUnlockProcessExclusive.c)
 *     KeKvaShadowingActive @ 0x140136C44 (KeKvaShadowingActive.c)
 *     SeTokenIsAdmin @ 0x1405BCCD0 (SeTokenIsAdmin.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7BE4 (PspOneDirectionSecurityDomainCombine.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  PACCESS_TOKEN v2; // rbx
  BOOL v3; // edi
  BOOL v4; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 768), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( (*(_DWORD *)(v1 + 1740) & 0x400000) == 0 )
  {
    v2 = PsReferencePrimaryToken((PEPROCESS)v1);
    v3 = SeTokenIsAdmin(v2) != 0;
    ObfDereferenceObject(v2);
    if ( (*(_BYTE *)(v1 + 720) & 1) != 0 )
      v3 = 1;
    v4 = 0;
    if ( (*(_DWORD *)(v1 + 1740) & 0x800000) == 0 )
      v4 = v3;
    if ( v4 )
    {
      *(_QWORD *)(v1 + 2096) = 0LL;
      *(_QWORD *)(v1 + 2104) = 0LL;
    }
    if ( !(unsigned int)KeKvaShadowingActive() || (*(_DWORD *)(v1 + 1740) & 0x4000) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v1 + 1740), 0xEu);
    }
    else
    {
      if ( v4 )
      {
        *(_BYTE *)(v1 + 640) = 1;
        _InterlockedOr(v5, 0);
      }
      KeSynchronizeAddressPolicy(v1);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 1740), 0xEu)
        && *(_BYTE *)(v1 + 640) == 1
        && (PEPROCESS)v1 != PsInitialSystemProcess )
      {
        MiDeleteProcessShadow(v1, 1);
      }
    }
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 1740), 0x16u);
    PspOneDirectionSecurityDomainCombine((PVOID)v1);
  }
  _InterlockedOr(v5, 0);
}
