/*
 * XREFs of ndisOidPostOffloadEncapsulation @ 0x1C003A070
 * Callers:
 *     ndisOidPostTaskOffload @ 0x1C006C530 (ndisOidPostTaskOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003A1A0 (-ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003A2D0 (-ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostOffloadEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_DWORD *)a1 + 10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      204,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3,
      v4);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( *(_QWORD *)a1 )
      ndisOidPostMiniportSetEncapsulation(a1);
    v5 = *((_QWORD *)a1 + 3);
    if ( v5 )
    {
      v1 = *(_QWORD *)(v5 + 16);
      if ( !*((_DWORD *)a1 + 10) )
      {
        v6 = *(_QWORD *)(v1 + 4096);
        if ( v6 )
        {
          *(_OWORD *)(v6 + 900) = *(_OWORD *)(v6 + 928);
          *(_QWORD *)(v6 + 916) = *(_QWORD *)(v6 + 944);
          *(_DWORD *)(v6 + 924) = *(_DWORD *)(v6 + 952);
        }
      }
      ndisOidPostOpenSetEncapsulation(a1);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      205,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3,
      v4);
}
