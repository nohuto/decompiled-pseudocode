/*
 * XREFs of ?OnTryDemote@MPCMouseProcessor@@MEAA_NXZ @ 0x1800FD580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::OnTryDemote(MPCMouseProcessor *this)
{
  bool result; // al

  *((_DWORD *)this + 1221) = 0;
  result = 1;
  *((_DWORD *)this + 1201) = 0;
  return result;
}
