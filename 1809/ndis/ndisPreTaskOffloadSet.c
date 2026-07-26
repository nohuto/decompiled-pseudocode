/*
 * XREFs of ndisPreTaskOffloadSet @ 0x1C00E49A0
 * Callers:
 *     ndisOidPreTaskOffload @ 0x1C00E45B0 (ndisOidPreTaskOffload.c)
 * Callees:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0023740 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPreOpenSetEncapsulation @ 0x1C0023930 (ndisOidPreOpenSetEncapsulation.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisSetTaskOffloadValidate @ 0x1C00E4FFC (ndisSetTaskOffloadValidate.c)
 */

unsigned __int8 __fastcall ndisPreTaskOffloadSet(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r14
  __int64 v3; // rsi
  __int64 v4; // rbp
  int *v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r8
  int v8; // ecx
  _DWORD *v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int8 v12; // bp
  int v14; // [rsp+20h] [rbp-28h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0xE9u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v3);
  if ( (*(_DWORD *)(v3 + 88) & 0x20) == 0 )
    goto LABEL_16;
  if ( *(_DWORD *)(v3 + 48) < 0x1Cu || (unsigned int)ndisSetTaskOffloadValidate(*(_QWORD *)(a1 + 16), v1, v3) )
  {
    v5 = (int *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = -1073676267;
    *(_DWORD *)(v3 + 56) = 28;
LABEL_18:
    v12 = 1;
    goto LABEL_19;
  }
  v6 = *(_QWORD *)(v4 + 696);
  v7 = *(_DWORD **)(v3 + 40);
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_DWORD *)(v6 + 56) = 0;
  v8 = -1073676267;
  *(_BYTE *)(*(_QWORD *)(v4 + 696) + 33LL) = 1;
  *(_BYTE *)(*(_QWORD *)(v4 + 696) + 32LL) = -88;
  *(_WORD *)(*(_QWORD *)(v4 + 696) + 34LL) = 28;
  v9 = *(_DWORD **)(v4 + 696);
  if ( *(_DWORD *)(v3 + 48) < v7[3] )
  {
LABEL_17:
    v5 = (int *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v8;
    goto LABEL_18;
  }
  v10 = 2;
  if ( v7[4] != 2 || (v7[5] & 1) == 0 || v7[6] != 14 )
  {
LABEL_16:
    v8 = -1073741637;
    goto LABEL_17;
  }
  v9[8] = 1835432;
  if ( v7[3] )
  {
    v9[10] = 2;
    v9[13] = 2;
    v10 = 1;
    v9[11] = 14;
    v9[14] = 14;
  }
  v9[9] = v10;
  v5 = (int *)(a1 + 40);
  v9[12] = v10;
  *(_DWORD *)(*(_QWORD *)(v4 + 696) + 88LL) = *(_DWORD *)(v3 + 32);
  *(_QWORD *)(*(_QWORD *)(v4 + 696) + 96LL) = *(_QWORD *)(v3 + 40);
  *(_DWORD *)(*(_QWORD *)(v4 + 696) + 104LL) = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 32) = 16843018;
  v11 = *(_QWORD *)(v4 + 696) + 32LL;
  *(_DWORD *)(v3 + 48) = 28;
  *(_QWORD *)(v3 + 40) = v11;
  v12 = ndisOidPreOpenSetEncapsulation(v4, v3, (_DWORD *)(a1 + 40));
  if ( v12 != 1 && *(_QWORD *)a1 )
    v12 = ndisOidPreMiniportSetEncapsulation(
            *(struct _NDIS_MINIPORT_BLOCK **)a1,
            (struct _NDIS_OID_REQUEST *)v3,
            (int *)(a1 + 40));
LABEL_19:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v14 = v12;
    WPP_SF_qdD(0xEAu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, (__int64)v1, *v5, v14);
  }
  return v12;
}
