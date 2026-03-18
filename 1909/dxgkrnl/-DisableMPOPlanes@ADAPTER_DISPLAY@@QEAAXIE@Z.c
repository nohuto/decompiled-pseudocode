/*
 * XREFs of ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01F152C
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq @ 0x1C0036920 (McTemplateK0pqqxpxqqqddddddddddddqqtqq.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00FCC10 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014D740 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1C01F3198 (-IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableMPOPlanes(ADAPTER_DISPLAY *this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int i; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+38h] [rbp-138h]
  int v18; // [rsp+48h] [rbp-128h]
  int v19; // [rsp+50h] [rbp-120h]
  int v20; // [rsp+58h] [rbp-118h]
  _DWORD *v21; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-78h]
  __int64 v23; // [rsp+100h] [rbp-70h]
  int v24; // [rsp+108h] [rbp-68h] BYREF
  __int64 v25; // [rsp+10Ch] [rbp-64h]
  int v26; // [rsp+114h] [rbp-5Ch]
  _QWORD *v27; // [rsp+118h] [rbp-58h]
  __int128 v28; // [rsp+120h] [rbp-50h]
  __int64 v29; // [rsp+130h] [rbp-40h]
  _DWORD v30[36]; // [rsp+140h] [rbp-30h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 2560LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    for ( i = a3 == 0; i < *(_DWORD *)(v7 + 2392); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPlaneEnabled(this, v4, i) )
      {
        memset(&v30[1], 0, 0x8CuLL);
        v30[0] = i;
        v21 = v30;
        v22 = 0LL;
        v23 = 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqqxpxqqqddddddddddddqqtqq(
            HIDWORD(v23),
            0LL,
            v9,
            *((_QWORD *)this + 2),
            v4,
            i,
            0,
            v17,
            0,
            v18,
            v19,
            v20,
            0,
            0,
            SBYTE4(v22),
            SBYTE4(v23),
            0,
            0,
            SBYTE4(v22),
            SBYTE4(v23),
            0,
            0,
            SBYTE4(v22),
            SBYTE4(v23));
        v25 = 0LL;
        v29 = 0LL;
        v27 = &v21;
        v10 = *((_QWORD *)this + 2);
        v28 = 0LL;
        v24 = v4;
        v26 = 1;
        if ( (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 2560) + 520LL) + 8LL)
                                                  + 824LL))(
               *(_QWORD *)(*(_QWORD *)(v10 + 2560) + 528LL),
               &v24) < 0 )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
          v14[3] = i;
          v14[4] = v4;
          v14[5] = *((_QWORD *)this + 2);
          WdLogEvent5_WdError(v14);
        }
      }
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2560LL) + 16LL);
    }
    if ( a3 )
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v4);
    }
    else
    {
      v15 = *(_QWORD *)(3968 * v4 + *((_QWORD *)this + 14) + 688);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 1728);
        if ( v16 == *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) )
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v16 + 2552), (unsigned int)v4);
      }
    }
  }
}
