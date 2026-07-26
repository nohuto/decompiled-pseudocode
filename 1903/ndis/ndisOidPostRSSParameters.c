/*
 * XREFs of ndisOidPostRSSParameters @ 0x1C003B6A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C003B7A8 (ndisPostSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C003B9E4 (ndisPostSetMiniportRSSParameters.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C003BBEC (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPostRSSParameters(__int64 *a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rsi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *a1;
  v4 = a1[4];
  v5 = a1[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v1) = WPP_RECORDER_SF_qqq(
                   *((_QWORD *)WPP_GLOBAL_Control + 8),
                   4,
                   11,
                   167,
                   (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                   v2,
                   v5,
                   v4);
  if ( *(_DWORD *)(v4 + 4) == 1 )
  {
    if ( v2 )
      LOBYTE(v1) = ndisPostSetMiniportRSSParameters(v2, v4, *((_DWORD *)a1 + 10));
    if ( v5 )
    {
      LOBYTE(v1) = ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)v4);
      if ( (_BYTE)v1 )
        LOBYTE(v1) = ndisPostSetOpenRSSParameters(v5, v4, *((_DWORD *)a1 + 10));
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v1) = WPP_RECORDER_SF_qqL(
                   *((_QWORD *)WPP_GLOBAL_Control + 8),
                   4,
                   11,
                   168,
                   (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                   v2,
                   v5,
                   *((_DWORD *)a1 + 10));
  return (char)v1;
}
