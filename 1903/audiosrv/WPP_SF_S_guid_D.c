/*
 * XREFs of WPP_SF_S_guid_D @ 0x18010DAB0
 * Callers:
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18003ECC0 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S_guid_D(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids, 36LL, a4);
}
