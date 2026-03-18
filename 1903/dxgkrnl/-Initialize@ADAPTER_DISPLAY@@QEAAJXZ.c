/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C016938C
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0166BE4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DBB8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0023180 (DpiSetSchedulerCallbackState.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C0142644 (DpiReadPnpRegistryValue.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C01699E4 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C0169AC0 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0169C4C (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C016AB90 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     MonitorCreateMonitorManager @ 0x1C016C2C8 (MonitorCreateMonitorManager.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C017E638 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C0241140 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C0243B04 (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax
  bool v5; // cf
  SIZE_T v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rbx
  unsigned int v13; // ebx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int OutputDuplManager; // esi
  _DWORD *v18; // r12
  unsigned int *v19; // rbx
  unsigned int *v20; // r15
  _DWORD *v21; // rsi
  int RegistryValues; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rcx
  bool v31; // zf
  bool v32; // al
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v36; // rcx
  char *v37; // rbx
  __int64 v38; // rcx
  unsigned int i; // r10d
  __int64 v40; // rcx
  __int64 v41; // rcx
  bool v42; // sf
  bool v43; // of
  __int64 v44; // rcx
  DWORD v45; // esi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 LowPart; // rbx
  int v50; // ebx
  __int64 v51; // rdi
  struct DXGGLOBAL *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  unsigned int v57; // ebx
  _QWORD *v58; // rax
  struct _LUID v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int128 v62; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r8
  _QWORD *v67; // rdx
  _QWORD *v68; // rax
  __int64 v69; // rax
  struct DXGGLOBAL *v70; // rax
  int (__fastcall *v71)(_QWORD, __int64 *); // rax
  __int64 v72; // rcx
  _DWORD *v73; // rdx
  int v74; // eax
  __int64 v75; // rdx
  int v76; // ecx
  __int64 v77; // rax
  __int64 v78; // rax
  struct _LUID v79; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v80; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID v81; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v82; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+58h] [rbp-B0h]
  __int64 v84; // [rsp+60h] [rbp-A8h]
  _QWORD v85[42]; // [rsp+68h] [rbp-A0h] BYREF

  v2 = *(unsigned int *)(*((_QWORD *)this + 2) + 1344LL);
  *((_DWORD *)this + 20) = v2;
  v3 = (unsigned int)v2;
  v4 = 3968 * v2;
  if ( !is_mul_ok(v2, 0xF80uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, 0x4B677844u, (POOL_TYPE)512);
  if ( v7 )
  {
    v12 = v7 + 8;
    *(_QWORD *)v7 = v3;
    `vector constructor iterator'(
      v7 + 8,
      3968LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 14) = v12;
  if ( !v12 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    v57 = -1073741801;
    v56[3] = *((unsigned int *)this + 20);
    v56[4] = *((_QWORD *)this + 2);
    v56[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v56);
    return v57;
  }
  v13 = 0;
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_11:
    result = MonitorCreateMonitorManager(this);
    if ( (int)result < 0 )
      return result;
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 11);
    v16 = (unsigned int)(result + 1071774934);
    if ( (unsigned int)v16 <= 0x3FE1FCD5 || (int)result <= -1071774937 )
      return result;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 308LL) & 0x100) != 0 )
    {
      v59 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 78);
      v60 = *((_QWORD *)this + 2);
      v81 = v59;
      v79 = *(struct _LUID *)(v60 + 276);
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 20),
                            0LL,
                            &v81,
                            &v79,
                            (struct OUTPUTDUPL_MGR **)this + 13);
      if ( OutputDuplManager < 0 )
        return (unsigned int)OutputDuplManager;
      v62 = -(__int128)*((unsigned __int64 *)this + 13);
      *((_QWORD *)&v62 + 1) &= *((_QWORD *)this + 13) - 24LL;
      Global = DXGGLOBAL::GetGlobal(v62, v61);
      DXGGLOBAL::AddIndirectOutputDuplMgr(Global, *((struct OUTPUTDUPL_MGR_INDIRECT **)&v62 + 1));
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
      LODWORD(v80) = 1;
      *((_QWORD *)this + 62) = (char *)this + 488;
      v18 = (_DWORD *)((char *)this + 424);
      *((_QWORD *)this + 61) = (char *)this + 488;
      v19 = (unsigned int *)((char *)this + 428);
      v20 = (unsigned int *)((char *)this + 432);
      *((_DWORD *)this + 106) = 0;
      v21 = (_DWORD *)((char *)this + 436);
      *((_DWORD *)this + 107) = 200;
      *((_DWORD *)this + 108) = 1000;
      *((_DWORD *)this + 109) = 20000000;
      memset(v85, 0, sizeof(v85));
      v85[5] = 0LL;
      LODWORD(v85[4]) = 0x4000000;
      LODWORD(v85[1]) = 288;
      v85[2] = L"ModeListCaching";
      LODWORD(v85[8]) = 288;
      v85[3] = &v80;
      LODWORD(v85[11]) = 0x4000000;
      v85[9] = L"SetTimingsFlags";
      v85[16] = L"ShortLinkTrainingTimeout";
      v85[23] = L"LongLinkTrainingTimeout";
      LODWORD(v85[15]) = 288;
      LODWORD(v85[18]) = 0x4000000;
      LODWORD(v85[22]) = 288;
      LODWORD(v85[25]) = 0x4000000;
      LODWORD(v85[29]) = 288;
      LODWORD(v85[32]) = 0x4000000;
      v85[30] = L"HPDFilterLimit";
      LODWORD(v85[6]) = 0;
      v85[7] = 0LL;
      v85[10] = (char *)this + 424;
      v85[12] = 0LL;
      LODWORD(v85[13]) = 0;
      v85[14] = 0LL;
      v85[17] = (char *)this + 428;
      v85[19] = 0LL;
      LODWORD(v85[20]) = 0;
      v85[21] = 0LL;
      v85[24] = (char *)this + 432;
      v85[26] = 0LL;
      LODWORD(v85[27]) = 0;
      v85[28] = 0LL;
      v85[31] = (char *)this + 436;
      v85[33] = 0LL;
      LODWORD(v85[34]) = 0;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v85, 0LL, 0LL);
      v26 = RegistryValues;
      if ( RegistryValues >= 0 )
      {
        v28 = v80;
      }
      else
      {
        v27 = WdLogNewEntry5_WdEvent(v24);
        *(_QWORD *)(v27 + 24) = v26;
        WdLogEvent5_WdEvent(v27);
        if ( (_DWORD)v26 != -1073741772 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v24, v23);
          *(_QWORD *)(v64 + 24) = 4537LL;
          WdLogEvent5_WdAssertion(v64);
        }
        v28 = 1;
        *v18 = 0;
        LODWORD(v80) = 1;
        LODWORD(v26) = 0;
        *v19 = 200;
        *v20 = 1000;
      }
      *((_BYTE *)this + 236) = v28 == 1;
      v29 = *v20;
      if ( !*v20 || *v19 >= v29 || v29 >= 0x7530 )
      {
        v65 = WdLogNewEntry5_WdError(v24, v23, v25);
        v66 = 2LL;
        v67 = (_QWORD *)(v65 + 24);
        do
        {
          *v67++ = *v19;
          --v66;
        }
        while ( v66 );
        *(_QWORD *)(v65 + 40) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v65);
        *v19 = 200;
        *v20 = 1000;
      }
      v30 = (unsigned int)*v21;
      if ( (unsigned int)(v30 - 1000000) > 0x5E69EC0 )
      {
        if ( (_DWORD)v30 )
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdError(v30, v23, v25);
          v68[3] = (unsigned int)*v21;
          v68[4] = 20000000LL;
          v68[5] = *((_QWORD *)this + 2);
          WdLogEvent5_WdError(v68);
        }
        *v21 = 20000000;
      }
      if ( (*v18 & 1) != 0 && !*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) )
        goto LABEL_53;
      v23 = *((_QWORD *)this + 2);
      v30 = *(unsigned int *)(v23 + 284);
      if ( (*(_DWORD *)(v23 + 308) & 0x400) != 0 )
      {
        if ( (_DWORD)v30 == 1297040209
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 192) + 64LL) + 40LL) + 28LL) < 0x700Au )
        {
          *((_BYTE *)this + 233) = 1;
          v32 = 1;
        }
        else
        {
          v79.LowPart = (*(_DWORD *)(v23 + 2432) >> 1) & 1;
          memset(v85, 0, sizeof(v85));
          LODWORD(v85[1]) = 288;
          v85[2] = L"ForceEnableDWMClone";
          LODWORD(v85[4]) = 67108868;
          LODWORD(v85[6]) = 4;
          v85[3] = &v79;
          v85[5] = &v79;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v85, 0LL, 0LL);
          v31 = v79.LowPart == 0;
          *((_BYTE *)this + 233) = v79.LowPart != 0;
          v32 = !v31;
        }
      }
      else
      {
        if ( (_DWORD)v30 == 1297040209 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v30, v23);
          *(_QWORD *)(v69 + 24) = 4651LL;
          WdLogEvent5_WdAssertion(v69);
          v23 = *((_QWORD *)this + 2);
        }
        if ( (*(_DWORD *)(v23 + 2432) & 2) != 0 )
          goto LABEL_53;
        v55 = WdLogNewEntry5_WdEvent(v30);
        *(_QWORD *)(v55 + 24) = *(int *)(*((_QWORD *)this + 2) + 280LL);
        *(_QWORD *)(v55 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 276LL);
        WdLogEvent5_WdEvent(v55);
        v32 = 0;
        *((_BYTE *)this + 233) = 0;
      }
      *((_BYTE *)this + 234) = v32;
      v33 = *((_QWORD *)this + 2);
      if ( *(int *)(v33 + 2452) >= 2000
        || (int)DpiReadPnpRegistryValue(*(_QWORD *)(v33 + 192), L"EnableVirtualTopologySupport", (char *)&v79, 4u, 2u) < 0
        || !v79.LowPart )
      {
        goto LABEL_31;
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 308LL) & 0x800) != 0 )
      {
        *((_BYTE *)this + 234) = 1;
        v70 = DXGGLOBAL::GetGlobal(v30, v23);
        DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v70 + 1016));
LABEL_31:
        v34 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v34 + 2560) )
        {
          DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v34 + 560) != 0LL);
          v36 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 46) = DodPresent;
          if ( !DodPresent )
            LODWORD(v26) = -1073741801;
          if ( (*(_DWORD *)(v36 + 308) & 0x20) != 0 || *(_DWORD *)(v36 + 304) == 4 )
          {
            v37 = (char *)this + 348;
            *((_DWORD *)this + 87) = 0;
          }
          else
          {
            v82 = 0LL;
            v83 = 0LL;
            v84 = 0LL;
            v71 = *(int (__fastcall **)(_QWORD, __int64 *))(v36 + 1816);
            if ( v71 && v71(*(_QWORD *)(v36 + 1744), &v82) >= 0 )
            {
              v37 = (char *)this + 348;
              v72 = 0LL;
              v73 = (_DWORD *)((char *)this + 348);
              do
              {
                v74 = *((unsigned __int8 *)&v82 + v72++);
                *v73++ = v74;
              }
              while ( v72 < 4 );
              v75 = *((_QWORD *)this + 2);
              v76 = v84;
              *(_QWORD *)(v75 + 4288) = v83;
              *(_DWORD *)(v75 + 4296) = v76;
              *((_DWORD *)this + 91) = BYTE4(v84);
            }
            else
            {
              v37 = (char *)this + 348;
              *((_DWORD *)this + 87) = 1;
            }
          }
          memset(v85, 0, sizeof(v85));
          LODWORD(v85[1]) = 288;
          v85[3] = v37;
          v85[2] = L"DODPreferredPresentMoveRegeionsOverride";
          LODWORD(v85[4]) = 67108868;
          v85[5] = v37;
          LODWORD(v85[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v85, 0LL, 0LL);
          v38 = *(_QWORD *)(*((_QWORD *)this + 2) + 192LL);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 64) + 40LL) + 28LL) >= 0x3007u )
            DpiSetSchedulerCallbackState(v38, 3);
        }
        if ( *((_QWORD *)this + 46) )
        {
          for ( i = 0;
                i < *((_DWORD *)this + 20);
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 46) + 8LL) + 2760 * v40 + 224) = *(_QWORD *)(3968 * v40 + *((_QWORD *)this + 14) + 936) )
          {
            v40 = i++;
          }
        }
        v41 = *((_QWORD *)this + 2);
        v43 = __OFSUB__(*(_DWORD *)(v41 + 2184), 8704);
        v42 = *(_DWORD *)(v41 + 2184) - 8704 < 0;
        v44 = *(_QWORD *)(v41 + 192);
        v45 = v42 ^ v43;
        v79.LowPart = v45;
        if ( (int)DpiReadPnpRegistryValue(v44, L"NeedToSuspendVidSchBeforeSetGammaRamp", (char *)&v79, 4u, 2u) >= 0 )
        {
          LowPart = v79.LowPart;
          if ( v79.LowPart != v45 )
          {
            v77 = WdLogNewEntry5_WdWarning(v47, v46, v48);
            *(_QWORD *)(v77 + 24) = LowPart;
            *(_QWORD *)(v77 + 32) = *((_QWORD *)this + 2);
            WdLogEvent5_WdWarning(v77);
          }
        }
        else
        {
          LODWORD(LowPart) = v45;
        }
        v31 = (_DWORD)LowPart == 0;
        v50 = *((unsigned __int8 *)this + 234);
        *((_BYTE *)this + 235) = !v31;
        v51 = *((_QWORD *)this + 2);
        v52 = DXGGLOBAL::GetGlobal(v47, v46);
        if ( (int)DXGADAPTERSOURCEHASH::AddNewAdapterEntry(
                    (struct DXGGLOBAL *)((char *)v52 + 1016),
                    (const struct _LUID *)(v51 + 276),
                    v50) < 0 )
        {
          v78 = WdLogNewEntry5_WdAssertion(v54, v53);
          *(_QWORD *)(v78 + 24) = 4825LL;
          WdLogEvent5_WdAssertion(v78);
        }
        return (unsigned int)v26;
      }
LABEL_53:
      v58 = (_QWORD *)WdLogNewEntry5_WdError(v30, v23, v25);
      v57 = -1073741735;
      v58[3] = *(int *)(*((_QWORD *)this + 2) + 280LL);
      v58[4] = *(unsigned int *)(*((_QWORD *)this + 2) + 276LL);
      v58[5] = -1073741735LL;
      WdLogEvent5_WdError(v58);
      return v57;
    }
    return (unsigned int)OutputDuplManager;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3968LL * v13), this, v13);
    if ( (int)result < 0 )
      return result;
    if ( ++v13 >= *((_DWORD *)this + 20) )
      goto LABEL_11;
  }
}
