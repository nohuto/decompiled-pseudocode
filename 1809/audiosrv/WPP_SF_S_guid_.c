/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800C3740
 * Callers:
 *     _lambda_ce62a0462eef1ffdae6c0304eec1e9a4_::operator() @ 0x1800642F0 (_lambda_ce62a0462eef1ffdae6c0304eec1e9a4_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S_guid_(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, 87LL, a4);
}
