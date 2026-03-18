/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C0126BF4
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0126B30 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DDF98 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E32C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C0126EC8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C0127230 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C0127B5C (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C0127E74 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0127EF4 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0127F50 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C0144B34 (_BmlLogDiagnosticsPacket.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C014E414 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
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
  struct DMMVIDPN *v20; // r14
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
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdi
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int16 v49; // [rsp+20h] [rbp-30h]
  __int64 v50; // [rsp+40h] [rbp-10h] BYREF
  __int16 v51; // [rsp+90h] [rbp+40h]
  struct BML_VIDPN_PATH_ORDER *v52; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v53; // [rsp+A8h] [rbp+58h]
  struct DMMVIDPN *v54; // [rsp+D0h] [rbp+80h] BYREF
  va_list va; // [rsp+D0h] [rbp+80h]
  va_list va1; // [rsp+D8h] [rbp+88h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v54 = va_arg(va1, struct DMMVIDPN *);
  v53 = a4;
  v51 = a1;
  v8 = v54;
  v11 = a2;
  *(_BYTE *)v54 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v40);
  }
  v12 = *(_QWORD *)(a4 + 2552);
  v13 = 0LL;
  v52 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v12 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v50, (__int64)v14);
  v54 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)va);
  v18 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v19 = a6;
  v49 = v11;
  v20 = v54;
  v21 = BmlPreparePathOrderAndVidPn((__int64 *)&v52, (__int64)v54, a3, v51, v49, a6, a7);
  v13 = v52;
  v18 = v21;
  if ( v21 < 0 )
    goto LABEL_19;
  v18 = BmlFunctionalizeVidPn(v52, v20);
  if ( v18 < 0 || (v18 = BmlPickColorSpaceAndWireFormat(v13, v19, v20), v18 < 0) )
  {
    *(_BYTE *)v8 = 1;
    if ( a5 )
    {
      if ( v20 )
      {
        v41 = BmlLogDiagnosticsPacket(v14, v19, v20, v13);
        v45 = v41;
        if ( v41 < 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
          v46[3] = v20;
          v46[4] = v13;
          v46[5] = v45;
          WdLogEvent5_WdWarning(v46);
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
        if ( DMMVIDPN::IsFunctional(v20, 0) )
        {
          v35 = BmlLogDiagnosticsPacket(v14, v19, v20, v13);
          v39 = v35;
          if ( v35 < 0 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
            v47[3] = v20;
            v47[4] = v13;
            v47[5] = v39;
            WdLogEvent5_WdWarning(v47);
          }
        }
      }
    }
    if ( a8 )
    {
      v54 = 0LL;
      *a8 = (unsigned __int64)v20 & -(__int64)((struct DMMVIDPN *)((char *)v20 + 88) != 0LL);
      goto LABEL_19;
    }
    v18 = BmlFillPathModalityFromVidPn(v20, (struct D3DKMT_GETPATHSMODALITY *)a3);
    if ( v18 >= 0 )
    {
      v22 = 0;
      v23 = v53;
      LODWORD(v53) = 0;
      v24 = *(struct BML_VIDPN_PATH_ORDER **)(v23 + 276);
      v52 = v24;
      if ( *(_WORD *)(a3 + 20) )
      {
        do
        {
          v25 = 272LL * v22;
          if ( __PAIR64__(HIDWORD(v52), (unsigned int)v24) == *(_QWORD *)(v25 + a3 + 64)
            && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, v53) )
          {
            v26 = *(_DWORD **)(v25 + a3 + 272);
            if ( !v26 )
            {
              v27 = operator new[](0xF4uLL, 0x63644356u, PagedPool);
              *(_QWORD *)(v25 + a3 + 272) = v27;
              v26 = v27;
              if ( !v27 )
              {
                v48 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
                WdLogEvent5_WdLowResource(v48);
                v18 = -1073741670;
                break;
              }
            }
            v18 = FillDevmodeFromVidPn(v20, *(unsigned int *)(v25 + a3 + 72), v26);
            if ( v18 < 0 )
              break;
            v32 = *(unsigned int *)(v25 + a3 + 188);
            v26[58] = v32;
            ConvertDMMScalingToGdiScaling(v32, v26 + 59);
            if ( (*(_DWORD *)(v25 + a3 + 48) & 0x20000) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)(v25 + a3 + 272) + 172LL) = *(_DWORD *)(v25 + a3 + 200);
              *(_DWORD *)(*(_QWORD *)(v25 + a3 + 272) + 176LL) = *(_DWORD *)(v25 + a3 + 204);
            }
          }
          v33 = *(unsigned __int16 *)(a3 + 20);
          v22 = v53 + 1;
          LODWORD(v53) = v22;
        }
        while ( v22 < v33 );
      }
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)va, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40));
  if ( v13 )
    operator delete[](v13);
  return (unsigned int)v18;
}
