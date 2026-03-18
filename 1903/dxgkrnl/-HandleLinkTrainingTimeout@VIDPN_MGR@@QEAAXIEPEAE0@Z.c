/*
 * XREFs of ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02BA608
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02BBCF0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000D5C8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DACA4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6798 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA888 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 */

void __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(
        VIDPN_MGR *this,
        __int64 a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _LUID *v15; // rdx
  __int64 v16; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  char v28[4]; // [rsp+20h] [rbp-91h]
  struct _DXGK_CONNECTION_CHANGE v29; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v32[3]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v33[10]; // [rsp+70h] [rbp-41h] BYREF

  v5 = *((_QWORD *)this + 1);
  v8 = (unsigned int)a2;
  if ( !v5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
    v5 = *((_QWORD *)this + 1);
  }
  v11 = *(_QWORD *)(v5 + 16);
  memset(v33, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v33[1]);
  v33[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v33[3]) = 61;
  LOBYTE(v33[6]) = -1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v14);
  }
  *a4 = 0;
  *a5 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v8);
  if ( TargetById )
  {
    if ( a3 )
    {
      DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)v11, v15, 0LL, &v30);
      DxgkLogCodePointPacketForSession(0x58u, v30, v8, 268435454, v20 & *(_DWORD *)v28, *(_QWORD *)(v11 + 276));
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)v11) )
      {
        *a4 = 1;
      }
      else
      {
        v32[0] = 0LL;
        DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, v32);
        *(_BYTE *)(*((_QWORD *)TargetById + 67) + 168LL) = 13;
        v21 = *((_QWORD *)TargetById + 67);
        *(_QWORD *)(v21 + 160) = v32[0];
        Global = DXGGLOBAL::GetGlobal(v21, v22);
        QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
        v26 = WdLogNewEntry5_WdDmmEvent(v25, v24);
        *(_QWORD *)(v26 + 24) = v8;
        *(_QWORD *)(v26 + 32) = v11;
        WdLogEvent5_WdDmmEvent(v26);
        *a5 = 1;
      }
    }
    else
    {
      DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)v11, v15, 0LL, &v31);
      DxgkLogCodePointPacketForSession(0x58u, v31, v8, 0xFFFFFFF, v27 & *(_DWORD *)v28, *(_QWORD *)(v11 + 276));
      memset(&v29, 0, sizeof(v29));
      DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v29);
      *((_DWORD *)&v29 + 2) = v8 & 0xFFFFFF | *((_DWORD *)&v29 + 2) & 0xFD000000 | 0xD000000;
      VIDPN_MGR::UpdateTargetLinkTrainingStatus(this, &v29, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v33, 0);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v18);
    *(_QWORD *)(v19 + 24) = v8;
    WdLogEvent5_WdError(v19);
  }
}
