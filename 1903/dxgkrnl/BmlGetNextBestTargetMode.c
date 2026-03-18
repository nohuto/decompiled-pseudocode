/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C00DACC4
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00D2924 (BmlPinNextBestTargetMode.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DD958 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00038C0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00DAEF0 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModes @ 0x1C00DB0C8 (BmlCompareTargetModes.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        DMMVIDPNSOURCEMODESET *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r14
  struct DMMVIDPNSOURCEMODE *v16; // rdi
  __int64 v17; // r12
  int v18; // ebx
  bool v19; // zf
  _QWORD *v20; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // [rsp+88h] [rbp+30h]

  v11 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a6;
  if ( !a4 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v31);
  }
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( *(_QWORD *)(a5 + 144) )
  {
    v14 = 0xFFFFFFFFLL;
    v15 = 0LL;
    *a7 = -1;
    if ( a6 != -1 )
    {
      v15 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)a4 + 24, a6);
      if ( !v15 )
      {
        v30 = -1071774959;
        goto LABEL_23;
      }
    }
    v16 = 0LL;
    v17 = 104LL * a3;
    *(_DWORD *)(v17 + a1 + 100) = 0;
    *(_DWORD *)(v17 + a1 + 104) = 0;
    v18 = *(_DWORD *)(a1 + 8) & 8;
    if ( v18 )
      WdLogNewEntry5_WdTrace(v14, v12);
    v19 = v18 == 0;
    v20 = (_QWORD *)*((_QWORD *)a4 + 6);
    v35 = !v19;
    if ( v20 == (_QWORD *)((char *)a4 + 48) )
      goto LABEL_22;
    NextMode = (struct DMMVIDPNSOURCEMODE *)(v20 - 1);
    if ( !NextMode )
      goto LABEL_22;
    do
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v12);
      v22[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
      v22[4] = *((unsigned int *)NextMode + 21);
      v22[5] = *((unsigned int *)NextMode + 22);
      v24 = *((unsigned int *)NextMode + 23);
      v22[6] = v24;
      v22[7] = *((unsigned int *)NextMode + 24);
      ++*(_DWORD *)(v17 + a1 + 100);
      if ( NextMode == (struct DMMVIDPNSOURCEMODE *)v15
        || (LOBYTE(v23) = v35, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(a1, a3, NextMode, v23)) )
      {
        WdLogNewEntry5_WdTrace(v24, v22);
      }
      else
      {
        ++*(_DWORD *)(v17 + a1 + 104);
        if ( (unsigned int)BmlCompareTargetModes(a1, a2, a3, (_DWORD)NextMode, (__int64)v16, v35) == 1
          && (!v15 || (unsigned int)BmlCompareTargetModes(a1, a2, a3, (_DWORD)NextMode, v15, v35) == -1) )
        {
          WdLogNewEntry5_WdTrace(v26, v25);
          v16 = NextMode;
        }
      }
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a4, NextMode);
    }
    while ( NextMode );
    if ( !v16 )
    {
LABEL_22:
      v30 = -1071774970;
LABEL_23:
      WdLogNewEntry5_WdTrace(v14, v12);
      return v30;
    }
    v27 = *(_QWORD *)(a2 + 48);
    *a7 = *((_DWORD *)v16 + 6);
    v28 = *(_QWORD *)(v27 + 8);
    if ( !v28 )
    {
      v34 = WdLogNewEntry5_WdAssertion(a7, v12);
      WdLogEvent5_WdAssertion(v34);
      v28 = *(_QWORD *)(v27 + 8);
    }
    DxgkLogCodePointPacket(
      0x21u,
      a3,
      *((_DWORD *)v16 + 21),
      *((_DWORD *)v16 + 22),
      *(_QWORD *)(*(_QWORD *)(v28 + 16) + 276LL));
    return 0LL;
  }
  else
  {
    v33 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v33 + 32) = a3;
    *(_QWORD *)(v33 + 24) = a5;
    WdLogEvent5_WdAssertion(v33);
    return 3223192328LL;
  }
}
