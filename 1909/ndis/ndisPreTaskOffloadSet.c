/*
 * XREFs of ndisPreTaskOffloadSet @ 0x1C006F024
 * Callers:
 *     ndisOidPreTaskOffload @ 0x1C006E930 (ndisOidPreTaskOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisOidPreOpenSetEncapsulation @ 0x1C003BCDC (ndisOidPreOpenSetEncapsulation.c)
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003CC40 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisSetTaskOffloadValidate @ 0x1C00700C4 (ndisSetTaskOffloadValidate.c)
 */

unsigned __int8 __fastcall ndisPreTaskOffloadSet(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r14
  __int64 v3; // rsi
  __int64 v4; // rbp
  _DWORD *v5; // rbx
  unsigned __int8 v6; // bp
  __int64 v7; // rax
  _DWORD *v8; // r8
  int v9; // ecx
  _DWORD *v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  char v14[4]; // [rsp+38h] [rbp-20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      214,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v1,
      v3);
  if ( (*(_DWORD *)(v3 + 88) & 0x20) == 0 )
  {
    v5 = (_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = -1073741637;
    v6 = 1;
    goto LABEL_20;
  }
  if ( *(_DWORD *)(v3 + 48) < 0x1Cu || (unsigned int)ndisSetTaskOffloadValidate(*(_QWORD *)(a1 + 16), v1, v3) )
  {
    v5 = (_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = -1073676267;
    *(_DWORD *)(v3 + 56) = 28;
LABEL_19:
    v6 = 1;
    goto LABEL_20;
  }
  v7 = *(_QWORD *)(v4 + 696);
  v8 = *(_DWORD **)(v3 + 40);
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_DWORD *)(v7 + 56) = 0;
  v9 = -1073676267;
  *(_BYTE *)(*(_QWORD *)(v4 + 696) + 33LL) = 1;
  *(_BYTE *)(*(_QWORD *)(v4 + 696) + 32LL) = -88;
  *(_WORD *)(*(_QWORD *)(v4 + 696) + 34LL) = 28;
  v10 = *(_DWORD **)(v4 + 696);
  if ( *(_DWORD *)(v3 + 48) < v8[3] )
  {
LABEL_18:
    v5 = (_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v9;
    goto LABEL_19;
  }
  v11 = 2;
  if ( v8[4] != 2 || (v8[5] & 1) == 0 || v8[6] != 14 )
  {
    v9 = -1073741637;
    goto LABEL_18;
  }
  v10[8] = 1835432;
  if ( v8[3] )
  {
    v10[10] = 2;
    v10[13] = 2;
    v11 = 1;
    v10[11] = 14;
    v10[14] = 14;
  }
  v10[9] = v11;
  v5 = (_DWORD *)(a1 + 40);
  v10[12] = v11;
  *(_DWORD *)(*(_QWORD *)(v4 + 696) + 88LL) = *(_DWORD *)(v3 + 32);
  *(_QWORD *)(*(_QWORD *)(v4 + 696) + 96LL) = *(_QWORD *)(v3 + 40);
  *(_DWORD *)(*(_QWORD *)(v4 + 696) + 104LL) = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 32) = 16843018;
  v12 = *(_QWORD *)(v4 + 696) + 32LL;
  *(_DWORD *)(v3 + 48) = 28;
  *(_QWORD *)(v3 + 40) = v12;
  v6 = ndisOidPreOpenSetEncapsulation(v4, v3, (_DWORD *)(a1 + 40));
  if ( v6 != 1 && *(_QWORD *)a1 )
    v6 = ndisOidPreMiniportSetEncapsulation(
           *(struct _NDIS_MINIPORT_BLOCK **)a1,
           (struct _NDIS_OID_REQUEST *)v3,
           (int *)(a1 + 40));
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xD7u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v1,
      *v5,
      *(_DWORD *)v14);
  }
  return v6;
}
