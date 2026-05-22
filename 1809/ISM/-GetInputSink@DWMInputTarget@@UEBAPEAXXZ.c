/*
 * XREFs of ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x180090240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ @ 0x180021358 (-GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ.c)
 */

void *__fastcall DWMInputTarget::GetInputSink(DWMInputTarget *this)
{
  InputSite *v1; // rcx
  void *result; // rax

  v1 = (InputSite *)*((_QWORD *)this + 14);
  result = 0LL;
  if ( v1 )
  {
    if ( *((_BYTE *)v1 + 384) )
      return *(void **)InputSite::GetLegacyInputSinkData(v1);
  }
  return result;
}
