/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C00D5B44
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00D5A80 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00D50E4 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C00D5144 (_BmlLogDiagnosticsPacket.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00D5A24 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D5E14 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00D617C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D6AF0 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C00D6D00 (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00E3C90 (ConvertDMMScalingToGdiScaling.c)
 */

__int64 BmlGetPathModalityForAdapter(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        int a7,
        unsigned __int64 *a8,
        ...)
{
  DMMVIDPN *v8; // rdi
  __int64 v12; // rax
  unsigned __int8 *v13; // rbx
  struct VIDPN_MGR *v14; // r13
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // esi
  unsigned int v21; // r12d
  __int64 v22; // r14
  int v23; // eax
  unsigned int v24; // r12d
  __int64 v25; // rdi
  struct BML_VIDPN_PATH_ORDER *v26; // rdi
  __int64 v27; // r12
  _DWORD *v28; // r13
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // eax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdi
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdi
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int16 v48; // [rsp+20h] [rbp-30h]
  __int64 v49; // [rsp+40h] [rbp-10h] BYREF
  __int16 v50; // [rsp+90h] [rbp+40h]
  struct BML_VIDPN_PATH_ORDER *v51; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+58h]
  DMMVIDPN *v53; // [rsp+D0h] [rbp+80h] BYREF
  va_list va; // [rsp+D0h] [rbp+80h]
  va_list va1; // [rsp+D8h] [rbp+88h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v53 = va_arg(va1, DMMVIDPN *);
  v52 = a4;
  v50 = a1;
  v8 = v53;
  *(_BYTE *)v53 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v39 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v39);
  }
  v12 = *(_QWORD *)(a4 + 2520);
  v13 = 0LL;
  v51 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v12 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v49, (__int64)v14);
  v53 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)va);
  v20 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v21 = a6;
  v48 = a2;
  v22 = (__int64)v53;
  v23 = BmlPreparePathOrderAndVidPn((unsigned __int8 **)&v51, (__int64)v53, a3, v50, v48, a6, a7);
  v13 = (unsigned __int8 *)v51;
  v20 = v23;
  if ( v23 < 0 )
    goto LABEL_19;
  v20 = BmlFunctionalizeVidPn(v51, (struct DMMVIDPN *)v22);
  if ( v20 < 0 || (v20 = BmlPickColorSpaceAndWireFormat(v13, v21, v22), v20 < 0) )
  {
    *(_BYTE *)v8 = 1;
    if ( a5 )
    {
      if ( v22 )
      {
        v40 = BmlLogDiagnosticsPacket(v14, v21, v22, v13);
        v44 = v40;
        if ( v40 < 0 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
          v45[3] = v22;
          v45[4] = v13;
          v45[5] = v44;
          WdLogEvent5_WdWarning(v45);
        }
      }
    }
  }
  else
  {
    if ( a5 )
    {
      if ( v22 )
      {
        if ( DMMVIDPN::IsFunctional((DMMVIDPN *)v22) )
        {
          v34 = BmlLogDiagnosticsPacket(v14, v21, v22, v13);
          v38 = v34;
          if ( v34 < 0 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
            v46[3] = v22;
            v46[4] = v13;
            v46[5] = v38;
            WdLogEvent5_WdWarning(v46);
          }
        }
      }
    }
    if ( a8 )
    {
      v53 = 0LL;
      *a8 = v22 & -(__int64)(v22 != -88);
      goto LABEL_19;
    }
    v20 = BmlFillPathModalityFromVidPn((const struct DMMVIDPN *)v22, (struct D3DKMT_GETPATHSMODALITY *)a3);
    if ( v20 >= 0 )
    {
      v24 = 0;
      v25 = v52;
      LODWORD(v52) = 0;
      v26 = *(struct BML_VIDPN_PATH_ORDER **)(v25 + 276);
      v51 = v26;
      if ( *(_WORD *)(a3 + 20) )
      {
        do
        {
          v27 = 272LL * v24;
          if ( __PAIR64__(HIDWORD(v51), (unsigned int)v26) == *(_QWORD *)(v27 + a3 + 64)
            && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, v52) )
          {
            v28 = *(_DWORD **)(v27 + a3 + 272);
            if ( !v28 )
            {
              v29 = operator new(0xF4uLL, 0x63644356u, PagedPool);
              *(_QWORD *)(v27 + a3 + 272) = v29;
              v28 = v29;
              if ( !v29 )
              {
                v47 = WdLogNewEntry5_WdLowResource(v30);
                WdLogEvent5_WdLowResource(v47);
                v20 = -1073741670;
                break;
              }
            }
            v20 = FillDevmodeFromVidPn(v22, *(unsigned int *)(v27 + a3 + 72), v28);
            if ( v20 < 0 )
              break;
            v31 = *(unsigned int *)(v27 + a3 + 188);
            v28[58] = v31;
            ConvertDMMScalingToGdiScaling(v31, v28 + 59);
            if ( (*(_DWORD *)(v27 + a3 + 48) & 0x20000) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)(v27 + a3 + 272) + 172LL) = *(_DWORD *)(v27 + a3 + 200);
              *(_DWORD *)(*(_QWORD *)(v27 + a3 + 272) + 176LL) = *(_DWORD *)(v27 + a3 + 204);
            }
          }
          v32 = *(unsigned __int16 *)(a3 + 20);
          v24 = v52 + 1;
          LODWORD(v52) = v24;
        }
        while ( v24 < v32 );
      }
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)va, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v49 + 40));
  if ( v13 )
    operator delete[](v13);
  return (unsigned int)v20;
}
