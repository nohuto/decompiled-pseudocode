/*
 * XREFs of ?IsEndOfCapture@MPCSixDofProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180130690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCSixDofProcessor::IsEndOfCapture(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  return (*((_BYTE *)a2 + 728) & 0x3F) == 0;
}
