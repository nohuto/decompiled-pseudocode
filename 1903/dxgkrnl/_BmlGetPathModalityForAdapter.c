/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C00D2E58
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00D2468 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D1700 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00D1914 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C00D1970 (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00D1C88 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00D252C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D31CC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DD958 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2C84 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C01410E4 (_BmlLogDiagnosticsPacket.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C014A5D4 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 BmlGetPathModalityForAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        int a7,
        unsigned __int64 *a8,
        ...)
{
  struct DMMVIDPN *v8; // rdi
  __int16 v11; // r14
  __int64 v12; // rax
  struct BML_VIDPN_PATH_ORDER *v13; // rbx
  struct VIDPN_MGR *v14; // r13
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  unsigned int v19; // r12d
  __int64 v20; // r14
  int v21; // eax
  unsigned int v22; // r12d
  __int64 v23; // rdi
  struct BML_VIDPN_PATH_ORDER *v24; // rdi
  __int64 v25; // r12
  _DWORD *v26; // r13
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rcx
  unsigned int v34; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdi
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdi
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int16 v50; // [rsp+20h] [rbp-30h]
  __int64 v51; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v52; // [rsp+90h] [rbp+40h]
  struct BML_VIDPN_PATH_ORDER *v53; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v54; // [rsp+A8h] [rbp+58h]
  struct DMMVIDPN *v55; // [rsp+D0h] [rbp+80h] BYREF
  va_list va; // [rsp+D0h] [rbp+80h]
  va_list va1; // [rsp+D8h] [rbp+88h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v55 = va_arg(va1, struct DMMVIDPN *);
  v54 = a4;
  v52 = a1;
  v8 = v55;
  v11 = a2;
  *(_BYTE *)v55 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v41);
  }
  v12 = *(_QWORD *)(a4 + 2552);
  v13 = 0LL;
  v53 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v12 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v51, (__int64)v14);
  v55 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14);
  v18 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v19 = a6;
  v50 = v11;
  v20 = (__int64)v55;
  v21 = BmlPreparePathOrderAndVidPn(&v53, v55, a3, v52, v50, a6, a7);
  v13 = v53;
  v18 = v21;
  if ( v21 < 0 )
    goto LABEL_19;
  v18 = BmlFunctionalizeVidPn(v53, (struct DMMVIDPN *)v20);
  if ( v18 < 0 || (v18 = BmlPickColorSpaceAndWireFormat(v13, v19, v20), v18 < 0) )
  {
    *(_BYTE *)v8 = 1;
    if ( a5 )
    {
      if ( v20 )
      {
        v42 = BmlLogDiagnosticsPacket(v14, v19, v20, v13);
        v46 = v42;
        if ( v42 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
          v47[3] = v20;
          v47[4] = v13;
          v47[5] = v46;
          WdLogEvent5_WdWarning(v47);
        }
      }
    }
  }
  else
  {
    if ( a5 )
    {
      if ( v20 )
      {
        if ( DMMVIDPN::IsFunctional((DMMVIDPN *)v20, 0) )
        {
          v36 = BmlLogDiagnosticsPacket(v14, v19, v20, v13);
          v40 = v36;
          if ( v36 < 0 )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
            v48[3] = v20;
            v48[4] = v13;
            v48[5] = v40;
            WdLogEvent5_WdWarning(v48);
          }
        }
      }
    }
    if ( a8 )
    {
      v55 = 0LL;
      *a8 = v20 & -(__int64)(v20 != -88);
      goto LABEL_19;
    }
    v18 = BmlFillPathModalityFromVidPn((const struct DMMVIDPN *)v20, (struct D3DKMT_GETPATHSMODALITY *)a3);
    if ( v18 >= 0 )
    {
      v22 = 0;
      v23 = v54;
      LODWORD(v54) = 0;
      v24 = *(struct BML_VIDPN_PATH_ORDER **)(v23 + 276);
      v53 = v24;
      if ( *(_WORD *)(a3 + 20) )
      {
        do
        {
          v25 = 272LL * v22;
          if ( __PAIR64__(HIDWORD(v53), (unsigned int)v24) == *(_QWORD *)(v25 + a3 + 64)
            && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, v54) )
          {
            v26 = *(_DWORD **)(v25 + a3 + 272);
            if ( !v26 )
            {
              v27 = operator new[](0xF4uLL, 0x63644356u, PagedPool);
              *(_QWORD *)(v25 + a3 + 272) = v27;
              v26 = v27;
              if ( !v27 )
              {
                v49 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
                WdLogEvent5_WdLowResource(v49);
                v18 = -1073741670;
                break;
              }
            }
            v18 = FillDevmodeFromVidPn(v20, *(_DWORD *)(v25 + a3 + 72), v26);
            if ( v18 < 0 )
              break;
            v33 = *(unsigned int *)(v25 + a3 + 188);
            v26[58] = v33;
            ConvertDMMScalingToGdiScaling(v33, v26 + 59, v32);
            if ( (*(_DWORD *)(v25 + a3 + 48) & 0x20000) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)(v25 + a3 + 272) + 172LL) = *(_DWORD *)(v25 + a3 + 200);
              *(_DWORD *)(*(_QWORD *)(v25 + a3 + 272) + 176LL) = *(_DWORD *)(v25 + a3 + 204);
            }
          }
          v34 = *(unsigned __int16 *)(a3 + 20);
          v22 = v54 + 1;
          LODWORD(v54) = v22;
        }
        while ( v22 < v34 );
      }
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)va, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40));
  if ( v13 )
    operator delete[](v13);
  return (unsigned int)v18;
}
