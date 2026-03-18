/*
 * XREFs of SaveCursorPosition @ 0x1C012E940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SaveCursorPosition(__int64 a1)
{
  *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = a1;
}
