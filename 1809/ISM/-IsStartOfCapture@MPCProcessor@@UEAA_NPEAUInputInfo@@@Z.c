/*
 * XREFs of ?IsStartOfCapture@MPCProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x1800F6D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::IsStartOfCapture(MPCProcessor *this, struct InputInfo *a2)
{
  return *((_DWORD *)a2 + 130) == 2;
}
