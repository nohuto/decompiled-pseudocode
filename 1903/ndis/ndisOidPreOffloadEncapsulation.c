/*
 * XREFs of ndisOidPreOffloadEncapsulation @ 0x1C00255E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisOidPreOpenSetEncapsulation @ 0x1C003BCEC (ndisOidPreOpenSetEncapsulation.c)
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003CC50 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPreQueryOffloadEncapsulation @ 0x1C006E05C (ndisOidPreQueryOffloadEncapsulation.c)
 */

char __fastcall ndisOidPreOffloadEncapsulation(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // r15
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rsi
  unsigned __int8 OffloadEncapsulation; // al
  char v9; // di

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      200,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v1,
      v4,
      v3);
  *(_DWORD *)(a1 + 40) = -1073741637;
  v5 = *(_DWORD *)(v3 + 4);
  if ( !v5 )
    goto LABEL_17;
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( (*(_DWORD *)(v7 + 88) & 0x20) == 0
      || (OffloadEncapsulation = ndisOidPreOpenSetEncapsulation(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), a1 + 40),
          OffloadEncapsulation != 1) )
    {
      if ( *(_QWORD *)a1 )
        OffloadEncapsulation = ndisOidPreMiniportSetEncapsulation(
                                 *(struct _NDIS_MINIPORT_BLOCK **)a1,
                                 (struct _NDIS_OID_REQUEST *)v7,
                                 (int *)(a1 + 40));
      else
        OffloadEncapsulation = 0;
    }
    goto LABEL_8;
  }
  if ( v6 == 1 )
  {
LABEL_17:
    OffloadEncapsulation = ndisOidPreQueryOffloadEncapsulation(a1);
LABEL_8:
    v9 = OffloadEncapsulation;
    goto LABEL_9;
  }
  v9 = 1;
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC9u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v1,
      v4,
      v9,
      *(_DWORD *)(a1 + 40));
  return v9;
}
