/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800D1F70
 * Callers:
 *     _lambda_c68382dcc9c1d77abb9bed51bdc308c6_::operator() @ 0x180021BC0 (_lambda_c68382dcc9c1d77abb9bed51bdc308c6_--operator().c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, 87LL, a4);
}
