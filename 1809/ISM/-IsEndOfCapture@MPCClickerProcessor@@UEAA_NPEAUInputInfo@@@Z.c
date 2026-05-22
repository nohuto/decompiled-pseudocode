/*
 * XREFs of ?IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x1800FFD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCClickerProcessor::IsEndOfCapture(MPCClickerProcessor *this, struct InputInfo *a2)
{
  return (unsigned int)(*((_DWORD *)a2 + 131) - 4) <= 1;
}
