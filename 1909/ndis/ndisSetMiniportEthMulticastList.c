/*
 * XREFs of ndisSetMiniportEthMulticastList @ 0x1C0025464
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C0025730 (ndisOidPreEthMulticastList.c)
 *     ndisOidPreEthMulticastOid @ 0x1C003FD50 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisIsValidMulticastFilter @ 0x1C0025FA0 (ndisIsValidMulticastFilter.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

unsigned __int8 __fastcall ndisSetMiniportEthMulticastList(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v3; // rbp
  char v6; // si
  unsigned __int8 v7; // bl
  int IsValidMulticastFilter; // edi
  int v9; // eax
  void *v10; // rcx

  v3 = *(_QWORD *)(a1 + 400);
  v6 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      101,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      a2);
  v7 = 1;
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v6, 0, a2);
  if ( IsValidMulticastFilter )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        11,
        102,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        v6,
        a2);
  }
  else if ( *(_DWORD *)(v3 + 344) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        IsValidMulticastFilter + 11,
        103,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        v6,
        a2);
    v9 = *(_DWORD *)(v3 + 384);
    v10 = *(void **)(v3 + 392);
    *(_DWORD *)(v3 + 400) = v9;
    memmove(v10, *(const void **)(v3 + 376), (unsigned int)(6 * v9));
    IsValidMulticastFilter = 0;
    v7 = 0;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  *a3 = IsValidMulticastFilter;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x68u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v6,
      a2,
      IsValidMulticastFilter,
      v7);
  return v7;
}
