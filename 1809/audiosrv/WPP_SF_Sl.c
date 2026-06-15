/*
 * XREFs of WPP_SF_Sl @ 0x1800B6A74
 * Callers:
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x1800B5D48 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x1800B6258 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sl(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids, a2, a4);
}
