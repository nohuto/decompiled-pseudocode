/*
 * XREFs of ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00D2478
 * Callers:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D237C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 * Callees:
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C00D2514 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(
        struct _LUID *a1,
        unsigned int *a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v12; // rax
  struct _LUID v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+28h] [rbp-38h]
  unsigned int v15; // [rsp+2Ch] [rbp-34h]
  int v16; // [rsp+30h] [rbp-30h]
  int v17; // [rsp+34h] [rbp-2Ch]
  int v18; // [rsp+38h] [rbp-28h]
  int v19; // [rsp+3Ch] [rbp-24h]
  int v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+44h] [rbp-1Ch]
  __int16 v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+4Ch] [rbp-14h]
  __int16 v24; // [rsp+50h] [rbp-10h]

  v18 = 0;
  v20 = 0;
  v22 = 0;
  v13 = 0LL;
  v14 = -1;
  v15 = -1;
  v19 = -1;
  v16 = -2;
  v17 = -2;
  v21 = 1;
  v23 = 4;
  v24 = 256;
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *)&v13);
  v10 = v6;
  if ( v6 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v12 + 24) = v10;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    *a1 = v13;
    *a2 = v15;
  }
  return (unsigned int)v10;
}
