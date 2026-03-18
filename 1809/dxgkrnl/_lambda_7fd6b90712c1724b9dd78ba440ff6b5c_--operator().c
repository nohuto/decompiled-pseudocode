/*
 * XREFs of _lambda_7fd6b90712c1724b9dd78ba440ff6b5c_::operator() @ 0x1C0044170
 * Callers:
 *     DpiFdoValidateDxgkColorimetry @ 0x1C02676A4 (DpiFdoValidateDxgkColorimetry.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_7fd6b90712c1724b9dd78ba440ff6b5c_::operator()(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( (_DWORD)a2 && HIDWORD(a2) && (unsigned int)a2 <= 0x3FF )
    return HIDWORD(a2) <= 0x3FF;
  return result;
}
