/*
 * XREFs of HUBDSM_GettingMatchingPipeHandleOnClientResetPipe @ 0x1C001C2C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C0015300 (HUBPDO_FindAndStoreMatchingInternalPipeHandle.c)
 */

__int64 __fastcall HUBDSM_GettingMatchingPipeHandleOnClientResetPipe(__int64 a1)
{
  return HUBPDO_FindAndStoreMatchingInternalPipeHandle(*(_QWORD *)(a1 + 960));
}
