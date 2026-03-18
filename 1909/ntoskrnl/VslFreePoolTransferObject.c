/*
 * XREFs of VslFreePoolTransferObject @ 0x14028F420
 * Callers:
 *     VslFinishSecureImageValidation @ 0x140291140 (VslFinishSecureImageValidation.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 * Callees:
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
