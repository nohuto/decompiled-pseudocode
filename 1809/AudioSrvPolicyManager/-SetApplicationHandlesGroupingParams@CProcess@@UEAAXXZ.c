/*
 * XREFs of ?SetApplicationHandlesGroupingParams@CProcess@@UEAAXXZ @ 0x18001A060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::SetApplicationHandlesGroupingParams(CProcess *this)
{
  *((_BYTE *)this + 792) = 1;
  CProcess::ResetReusedSessionGroupingParams((CProcess *)((char *)this - 16));
}
