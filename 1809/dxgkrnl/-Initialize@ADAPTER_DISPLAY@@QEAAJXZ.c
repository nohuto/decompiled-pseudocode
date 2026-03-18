/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0153678
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C014F768 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010F58 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C001F450 (DpiSetSchedulerCallbackState.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C0134C54 (DpiReadPnpRegistryValue.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C01535D0 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C0153C8C (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C0153D58 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0153EE4 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     MonitorCreateMonitorManager @ 0x1C0154260 (MonitorCreateMonitorManager.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C0154DE0 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C020DFA8 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C020FADC (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax
  bool v5; // cf
  SIZE_T v6; // rax
  char *v7; // rax
  __int64 v8; // rcx
  char *v9; // rbx
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rcx
  int OutputDuplManager; // esi
  _DWORD *v14; // r15
  unsigned int *v15; // rbx
  unsigned int *v16; // rsi
  int RegistryValues; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  bool v25; // zf
  bool v26; // al
  __int64 v27; // rcx
  __int64 v28; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v30; // rcx
  char *v31; // rbx
  __int64 v32; // rcx
  unsigned int i; // r10d
  __int64 v34; // rcx
  __int64 v35; // rcx
  bool v36; // sf
  bool v37; // of
  __int64 v38; // rcx
  DWORD v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 LowPart; // rbx
  int v44; // ebx
  __int64 v45; // rdi
  struct DXGGLOBAL *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned int v50; // ebx
  _QWORD *v51; // rax
  struct _LUID v52; // rcx
  __int64 v53; // rax
  __int128 v54; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r8
  _QWORD *v59; // rdx
  __int64 v60; // rax
  struct DXGGLOBAL *v61; // rax
  int (__fastcall *v62)(_QWORD, __int64 *); // rax
  __int64 v63; // rcx
  _DWORD *v64; // rdx
  int v65; // eax
  __int64 v66; // rdx
  int v67; // ecx
  __int64 v68; // rax
  __int64 v69; // rax
  struct _LUID v70; // [rsp+30h] [rbp-D0h] BYREF
  int v71; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID v72; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+50h] [rbp-B0h]
  __int64 v75; // [rsp+58h] [rbp-A8h]
  _QWORD v76[36]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = *(unsigned int *)(*((_QWORD *)this + 2) + 1328LL);
  *((_DWORD *)this + 20) = v2;
  v3 = (unsigned int)v2;
  v4 = 3760 * v2;
  if ( !is_mul_ok(v2, 0xEB0uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, 0x4B677844u, (POOL_TYPE)512);
  if ( v7 )
  {
    v9 = v7 + 8;
    *(_QWORD *)v7 = v3;
    `vector constructor iterator'(
      v7 + 8,
      3760LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 14) = v9;
  if ( !v9 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
    v50 = -1073741801;
    v49[3] = *((unsigned int *)this + 20);
    v49[4] = *((_QWORD *)this + 2);
    v49[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v49);
    return v50;
  }
  v10 = 0;
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_11:
    result = MonitorCreateMonitorManager(this);
    if ( (int)result < 0 )
      return result;
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 11);
    v12 = (unsigned int)(result + 1071774934);
    if ( (unsigned int)v12 <= 0x3FE1FCD5 || (int)result <= -1071774937 )
      return result;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 308LL) & 0x100) != 0 )
    {
      v52 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 81);
      v53 = *((_QWORD *)this + 2);
      v72 = v52;
      v70 = *(struct _LUID *)(v53 + 276);
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 20),
                            0LL,
                            &v72,
                            &v70,
                            (struct OUTPUTDUPL_MGR **)this + 13);
      if ( OutputDuplManager < 0 )
        return (unsigned int)OutputDuplManager;
      v54 = -(__int128)*((unsigned __int64 *)this + 13);
      *((_QWORD *)&v54 + 1) &= *((_QWORD *)this + 13) - 24LL;
      Global = DXGGLOBAL::GetGlobal(v54);
      DXGGLOBAL::AddIndirectOutputDuplMgr(Global, *((struct OUTPUTDUPL_MGR_INDIRECT **)&v54 + 1));
    }
    else
    {
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 20),
                            this,
                            0LL,
                            0LL,
                            (struct OUTPUTDUPL_MGR **)this + 13);
    }
    if ( OutputDuplManager >= 0 )
    {
      v71 = 1;
      *((_QWORD *)this + 49) = (char *)this + 384;
      v14 = (_DWORD *)((char *)this + 320);
      *((_QWORD *)this + 48) = (char *)this + 384;
      v15 = (unsigned int *)((char *)this + 324);
      v16 = (unsigned int *)((char *)this + 328);
      *((_DWORD *)this + 80) = 0;
      *((_DWORD *)this + 81) = 200;
      *((_DWORD *)this + 82) = 1000;
      memset(v76, 0, 0x118uLL);
      v76[0] = 0LL;
      LODWORD(v76[4]) = 0x4000000;
      LODWORD(v76[1]) = 288;
      v76[2] = L"ModeListCaching";
      LODWORD(v76[8]) = 288;
      v76[3] = &v71;
      LODWORD(v76[11]) = 0x4000000;
      v76[9] = L"SetTimingsFlags";
      v76[16] = L"ShortLinkTrainingTimeout";
      LODWORD(v76[15]) = 288;
      LODWORD(v76[18]) = 0x4000000;
      LODWORD(v76[22]) = 288;
      LODWORD(v76[25]) = 0x4000000;
      v76[23] = L"LongLinkTrainingTimeout";
      v76[5] = 0LL;
      LODWORD(v76[6]) = 0;
      v76[7] = 0LL;
      v76[10] = (char *)this + 320;
      v76[12] = 0LL;
      LODWORD(v76[13]) = 0;
      v76[14] = 0LL;
      v76[17] = (char *)this + 324;
      v76[19] = 0LL;
      LODWORD(v76[20]) = 0;
      v76[21] = 0LL;
      v76[24] = (char *)this + 328;
      v76[26] = 0LL;
      LODWORD(v76[27]) = 0;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v76, 0LL, 0LL);
      v20 = RegistryValues;
      if ( RegistryValues >= 0 )
      {
        v22 = v71;
      }
      else
      {
        v21 = WdLogNewEntry5_WdEvent(v19, v18);
        *(_QWORD *)(v21 + 24) = v20;
        WdLogEvent5_WdEvent(v21);
        if ( (_DWORD)v20 != -1073741772 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v19);
          *(_QWORD *)(v56 + 24) = 4325LL;
          WdLogEvent5_WdAssertion(v56);
        }
        v22 = 1;
        *v14 = 0;
        v71 = 1;
        LODWORD(v20) = 0;
        *v15 = 200;
        *v16 = 1000;
      }
      *((_BYTE *)this + 135) = v22 == 1;
      v23 = *v16;
      if ( !*v16 || *v15 >= v23 || v23 >= 0x7530 )
      {
        v57 = WdLogNewEntry5_WdError(v19);
        v58 = 2LL;
        v59 = (_QWORD *)(v57 + 24);
        do
        {
          *v59++ = *v15;
          --v58;
        }
        while ( v58 );
        *(_QWORD *)(v57 + 40) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v57);
        *v15 = 200;
        *v16 = 1000;
      }
      if ( (*v14 & 1) != 0 && !*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) )
        goto LABEL_52;
      v24 = *((_QWORD *)this + 2);
      v19 = *(unsigned int *)(v24 + 284);
      if ( (*(_DWORD *)(v24 + 308) & 0x400) != 0 )
      {
        if ( (_DWORD)v19 == 1297040209
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 192) + 64LL) + 40LL) + 28LL) < 0x700Au )
        {
          *((_BYTE *)this + 132) = 1;
          v26 = 1;
        }
        else
        {
          v70.LowPart = (*(_DWORD *)(v24 + 2408) >> 1) & 1;
          memset(v76, 0, 0x118uLL);
          v76[0] = 0LL;
          v76[2] = L"ForceEnableDWMClone";
          LODWORD(v76[1]) = 288;
          LODWORD(v76[4]) = 67108868;
          v76[3] = &v70;
          LODWORD(v76[6]) = 4;
          v76[5] = &v70;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v76, 0LL, 0LL);
          v25 = v70.LowPart == 0;
          *((_BYTE *)this + 132) = v70.LowPart != 0;
          v26 = !v25;
        }
      }
      else
      {
        if ( (_DWORD)v19 == 1297040209 )
        {
          v60 = WdLogNewEntry5_WdAssertion(v19);
          *(_QWORD *)(v60 + 24) = 4423LL;
          WdLogEvent5_WdAssertion(v60);
          v24 = *((_QWORD *)this + 2);
        }
        if ( (*(_DWORD *)(v24 + 2408) & 2) != 0 )
          goto LABEL_52;
        v48 = WdLogNewEntry5_WdEvent(v19, v24);
        *(_QWORD *)(v48 + 24) = *(int *)(*((_QWORD *)this + 2) + 280LL);
        *(_QWORD *)(v48 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 276LL);
        WdLogEvent5_WdEvent(v48);
        v26 = 0;
        *((_BYTE *)this + 132) = 0;
      }
      *((_BYTE *)this + 133) = v26;
      if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)this + 2)) >= 2000
        || (int)DpiReadPnpRegistryValue(*(_QWORD *)(v27 + 192), L"EnableVirtualTopologySupport", (char *)&v70, 4u, 2u) < 0
        || !v70.LowPart )
      {
        goto LABEL_30;
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 308LL) & 0x800) != 0 )
      {
        *((_BYTE *)this + 133) = 1;
        v61 = DXGGLOBAL::GetGlobal(v19);
        DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v61 + 1048));
LABEL_30:
        v28 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v28 + 2528) )
        {
          DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v28 + 568) != 0LL);
          v30 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 33) = DodPresent;
          if ( !DodPresent )
            LODWORD(v20) = -1073741801;
          if ( (*(_DWORD *)(v30 + 308) & 0x20) != 0 || *(_DWORD *)(v30 + 304) == 4 )
          {
            v31 = (char *)this + 244;
            *((_DWORD *)this + 61) = 0;
          }
          else
          {
            v73 = 0LL;
            v74 = 0LL;
            v75 = 0LL;
            v62 = *(int (__fastcall **)(_QWORD, __int64 *))(v30 + 1800);
            if ( v62 && v62(*(_QWORD *)(v30 + 1728), &v73) >= 0 )
            {
              v31 = (char *)this + 244;
              v63 = 0LL;
              v64 = (_DWORD *)((char *)this + 244);
              do
              {
                v65 = *((unsigned __int8 *)&v73 + v63++);
                *v64++ = v65;
              }
              while ( v63 < 4 );
              v66 = *((_QWORD *)this + 2);
              v67 = v75;
              *(_QWORD *)(v66 + 4296) = v74;
              *(_DWORD *)(v66 + 4304) = v67;
              *((_DWORD *)this + 65) = BYTE4(v75);
            }
            else
            {
              v31 = (char *)this + 244;
              *((_DWORD *)this + 61) = 1;
            }
          }
          memset(v76, 0, 0x118uLL);
          v76[0] = 0LL;
          LODWORD(v76[1]) = 288;
          v76[2] = L"DODPreferredPresentMoveRegeionsOverride";
          v76[3] = v31;
          LODWORD(v76[4]) = 67108868;
          v76[5] = v31;
          LODWORD(v76[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v76, 0LL, 0LL);
          v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 192LL);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 64) + 40LL) + 28LL) >= 0x3007u )
            DpiSetSchedulerCallbackState(v32, 3);
        }
        if ( *((_QWORD *)this + 33) )
        {
          for ( i = 0;
                i < *((_DWORD *)this + 20);
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 2704 * v34 + 224) = *(_QWORD *)(3760 * v34 + *((_QWORD *)this + 14) + 936) )
          {
            v34 = i++;
          }
        }
        v35 = *((_QWORD *)this + 2);
        v37 = __OFSUB__(*(_DWORD *)(v35 + 2160), 8704);
        v36 = *(_DWORD *)(v35 + 2160) - 8704 < 0;
        v38 = *(_QWORD *)(v35 + 192);
        v39 = v36 ^ v37;
        v70.LowPart = v39;
        if ( (int)DpiReadPnpRegistryValue(v38, L"NeedToSuspendVidSchBeforeSetGammaRamp", (char *)&v70, 4u, 2u) >= 0 )
        {
          LowPart = v70.LowPart;
          if ( v70.LowPart != v39 )
          {
            v68 = WdLogNewEntry5_WdWarning(v41, v40, v42);
            *(_QWORD *)(v68 + 24) = LowPart;
            *(_QWORD *)(v68 + 32) = *((_QWORD *)this + 2);
            WdLogEvent5_WdWarning(v68);
          }
        }
        else
        {
          LODWORD(LowPart) = v39;
        }
        v25 = (_DWORD)LowPart == 0;
        v44 = *((unsigned __int8 *)this + 133);
        *((_BYTE *)this + 134) = !v25;
        v45 = *((_QWORD *)this + 2);
        v46 = DXGGLOBAL::GetGlobal(v41);
        if ( (int)DXGADAPTERSOURCEHASH::AddNewAdapterEntry(
                    (struct DXGGLOBAL *)((char *)v46 + 1048),
                    (const struct _LUID *)(v45 + 276),
                    v44) < 0 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v47);
          *(_QWORD *)(v69 + 24) = 4597LL;
          WdLogEvent5_WdAssertion(v69);
        }
        return (unsigned int)v20;
      }
LABEL_52:
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v50 = -1073741735;
      v51[3] = *(int *)(*((_QWORD *)this + 2) + 280LL);
      v51[4] = *(unsigned int *)(*((_QWORD *)this + 2) + 276LL);
      v51[5] = -1073741735LL;
      WdLogEvent5_WdError(v51);
      return v50;
    }
    return (unsigned int)OutputDuplManager;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760LL * v10), this, v10);
    if ( (int)result < 0 )
      return result;
    if ( ++v10 >= *((_DWORD *)this + 20) )
      goto LABEL_11;
  }
}
