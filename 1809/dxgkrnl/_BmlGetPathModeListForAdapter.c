/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x1C0289EA8
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C028953C (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C00D5144 (_BmlLogDiagnosticsPacket.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00D617C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C028A084 (_BmlGetPathModeListForPath.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        struct BML_VIDPN_PATH_ORDER *a8)
{
  bool v8; // cf
  struct BML_VIDPN_PATH_ORDER *v10; // r14
  __int16 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 *v16; // rbx
  struct VIDPN_MGR *v17; // rbp
  int ClientVidPn; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int PathModeListForPath; // esi
  int v24; // r15d
  __int64 v25; // r8
  struct DMMVIDPN *v26; // rdi
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  const struct BML_VIDPN_PATH_ORDER *v30; // rcx
  int v31; // eax
  bool v32; // zf
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbp
  _QWORD *v38; // rax
  struct DMMVIDPN *v40; // [rsp+90h] [rbp+18h] BYREF
  __int64 v41; // [rsp+98h] [rbp+20h] BYREF

  v8 = *(_WORD *)(a3 + 20) == 0;
  v10 = a8;
  v13 = a1;
  *(_BYTE *)a8 = 0;
  if ( v8 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(a4 + 2520);
  v16 = 0LL;
  a8 = 0LL;
  v17 = *(struct VIDPN_MGR **)(v15 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v41, (__int64)v17);
  v40 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v17, (__int64 *)&v40);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn >= 0 )
  {
    v24 = a6;
    v25 = a3;
    v26 = v40;
    v27 = BmlPreparePathOrderAndVidPn((unsigned __int8 **)&a8, (__int64)v40, v25, v13, a2, a6, a7);
    v16 = (unsigned __int8 *)a8;
    PathModeListForPath = v27;
    if ( v27 >= 0 )
    {
      if ( *(_BYTE *)a8 <= 1u
        || (v30 = a8,
            --*(_BYTE *)a8,
            v31 = BmlFunctionalizeVidPn(v30, v26, v28, v29),
            ++*v16,
            PathModeListForPath = v31,
            v31 >= 0) )
      {
        PathModeListForPath = BmlGetPathModeListForPath((int)v16, (int)v26);
      }
      else
      {
        v32 = a5 == 0;
        *(_BYTE *)v10 = 1;
        if ( !v32 )
        {
          if ( v26 )
          {
            v33 = BmlLogDiagnosticsPacket(v17, v24, (__int64)v26, v16);
            v37 = v33;
            if ( v33 < 0 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
              v38[3] = v26;
              v38[4] = v16;
              v38[5] = v37;
              WdLogEvent5_WdWarning(v38);
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = ClientVidPn;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v40, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v41 + 40));
  if ( v16 )
    operator delete[](v16);
  return PathModeListForPath;
}
