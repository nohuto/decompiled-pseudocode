/*
 * XREFs of ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C1920
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C013B80C (-ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq @ 0x1C0031050 (McTemplateK0pqqxpxqqqddddddddddddqqtqq.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00DEA1C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0138890 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1C01C38B4 (-IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableMPOPlanes(ADAPTER_DISPLAY *this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int i; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+38h] [rbp-138h]
  int v15; // [rsp+48h] [rbp-128h]
  int v16; // [rsp+50h] [rbp-120h]
  int v17; // [rsp+58h] [rbp-118h]
  _DWORD *v18; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v19; // [rsp+F8h] [rbp-78h]
  __int64 v20; // [rsp+100h] [rbp-70h]
  _QWORD v21[7]; // [rsp+108h] [rbp-68h] BYREF
  _DWORD v22[36]; // [rsp+140h] [rbp-30h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 2528LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    for ( i = a3 == 0; i < *(_DWORD *)(v7 + 2368); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPlaneEnabled(this, v4, i) )
      {
        memset(v22, 0, sizeof(v22));
        v22[0] = i;
        v19 = 0LL;
        v18 = v22;
        v20 = 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqqxpxqqqddddddddddddqqtqq(
            0LL,
            HIDWORD(v19),
            HIDWORD(v20),
            *((_QWORD *)this + 2),
            v4,
            i,
            0,
            v14,
            0,
            v15,
            v16,
            v17,
            0,
            0,
            SBYTE4(v19),
            SBYTE4(v20),
            0,
            0,
            SBYTE4(v19),
            SBYTE4(v20),
            0,
            0,
            SBYTE4(v19),
            SBYTE4(v20));
        memset(v21, 0, 0x30uLL);
        LODWORD(v21[0]) = v4;
        v21[2] = &v18;
        v9 = *((_QWORD *)this + 2);
        HIDWORD(v21[1]) = 1;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 2528) + 520LL) + 8LL)
                                                     + 824LL))(
               *(_QWORD *)(*(_QWORD *)(v9 + 2528) + 528LL),
               v21) < 0 )
        {
          v11 = (_QWORD *)WdLogNewEntry5_WdError(v10);
          v11[3] = i;
          v11[4] = v4;
          v11[5] = *((_QWORD *)this + 2);
          WdLogEvent5_WdError(v11);
        }
      }
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2528LL) + 16LL);
    }
    if ( a3 )
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v4);
    }
    else
    {
      v12 = *(_QWORD *)(3760 * v4 + *((_QWORD *)this + 14) + 688);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 1728);
        if ( v13 == *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) )
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v13 + 2520), v4);
      }
    }
  }
}
