/*
 * XREFs of VslFreePoolTransferObject @ 0x14027B1A0
 * Callers:
 *     VslFinishSecureImageValidation @ 0x14027CB00 (VslFinishSecureImageValidation.c)
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 * Callees:
 *     VslpUnlockPagesForTransfer @ 0x14027C6F0 (VslpUnlockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFreePoolTransferObject(__int64 *P, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi

  v3 = *P;
  v4 = *(_QWORD *)(v3 + 32) + *(unsigned int *)(v3 + 44);
  if ( a2 )
    *a2 = *(unsigned int *)(v3 + 40);
  VslpUnlockPagesForTransfer(P);
  ExFreePoolWithTag(P, 0);
  return v4;
}
