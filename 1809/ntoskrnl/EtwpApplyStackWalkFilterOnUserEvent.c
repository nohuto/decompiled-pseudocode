/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x1408C1E80
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406473D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkIdFilter @ 0x1403145B4 (EtwpApplyStackWalkIdFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  return EtwpApplyStackWalkIdFilter(*(_WORD *)(a1 + 40), a2, a3, 1);
}
