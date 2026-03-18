/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x1C02C22FC
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C1984 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DDF98 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E32C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C0127230 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C0144B34 (_BmlLogDiagnosticsPacket.c)
 *     _BmlGetPathModeListForPath @ 0x1C02C24D8 (_BmlGetPathModeListForPath.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        struct BML_VIDPN_PATH_ORDER *a8)
{
  bool v8; // cf
  struct BML_VIDPN_PATH_ORDER *v10; // r14
  __int16 v12; // r12
  __int16 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 *v16; // rbx
  struct VIDPN_MGR *v17; // rbp
  int ClientVidPn; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int PathModeListForPath; // esi
  int v22; // r15d
  __int64 v23; // r8
  struct DMMVIDPN *v24; // rdi
  int v25; // eax
  const struct BML_VIDPN_PATH_ORDER *v26; // rcx
  int v27; // eax
  bool v28; // zf
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rbp
  _QWORD *v34; // rax
  struct DMMVIDPN *v36; // [rsp+90h] [rbp+18h] BYREF
  __int64 v37; // [rsp+98h] [rbp+20h] BYREF

  v8 = *(_WORD *)(a3 + 20) == 0;
  v10 = a8;
  v12 = a2;
  v13 = a1;
  *(_BYTE *)a8 = 0;
  if ( v8 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(a4 + 2552);
  v16 = 0LL;
  a8 = 0LL;
  v17 = *(struct VIDPN_MGR **)(v15 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v37, (__int64)v17);
  v36 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v17, (__int64 *)&v36);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn >= 0 )
  {
    v22 = a6;
    v23 = a3;
    v24 = v36;
    v25 = BmlPreparePathOrderAndVidPn((__int64 *)&a8, (__int64)v36, v23, v13, v12, a6, a7);
    v16 = (unsigned __int8 *)a8;
    PathModeListForPath = v25;
    if ( v25 >= 0 )
    {
      if ( *(_BYTE *)a8 <= 1u
        || (v26 = a8, --*(_BYTE *)a8, v27 = BmlFunctionalizeVidPn(v26, v24), ++*v16, PathModeListForPath = v27, v27 >= 0) )
      {
        PathModeListForPath = BmlGetPathModeListForPath((int)v16, (int)v24);
      }
      else
      {
        v28 = a5 == 0;
        *(_BYTE *)v10 = 1;
        if ( !v28 )
        {
          if ( v24 )
          {
            v29 = BmlLogDiagnosticsPacket((DXGFASTMUTEX ***)v17, v22, (__int64)v24, v16);
            v33 = v29;
            if ( v29 < 0 )
            {
              v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
              v34[3] = v24;
              v34[4] = v16;
              v34[5] = v33;
              WdLogEvent5_WdWarning(v34);
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19) + 24) = ClientVidPn;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v36, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37 + 40));
  if ( v16 )
    operator delete[](v16);
  return PathModeListForPath;
}
