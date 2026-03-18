/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C00C5D14
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinNextBestTargetMode @ 0x1C00D6574 (BmlPinNextBestTargetMode.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0004F80 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00C5F24 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModes @ 0x1C00C6070 (BmlCompareTargetModes.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DMMVIDPNSOURCEMODESET *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned __int16 v8; // bp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r14
  struct DMMVIDPNSOURCEMODE *v18; // rdi
  __int64 v19; // r12
  int v20; // ebx
  bool v21; // zf
  _QWORD *v22; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ebx
  __int64 v39; // rax
  char v40; // [rsp+88h] [rbp+30h]

  v8 = a3;
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a6;
  if ( !a4 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !a2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !*(_QWORD *)(a5 + 144) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v37 + 32) = v8;
    *(_QWORD *)(v37 + 24) = a5;
    WdLogEvent5_WdAssertion(v37);
    return 3223192328LL;
  }
  v16 = 0xFFFFFFFFLL;
  v17 = 0LL;
  *a7 = -1;
  if ( a6 != -1 )
  {
    v17 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)a4 + 24, a6);
    if ( !v17 )
    {
      v38 = -1071774959;
LABEL_28:
      WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
      return v38;
    }
  }
  v18 = 0LL;
  v19 = 104LL * v8;
  *(_DWORD *)(v19 + a1 + 100) = 0;
  *(_DWORD *)(v19 + a1 + 104) = 0;
  v20 = *(_DWORD *)(a1 + 8) & 8;
  if ( v20 )
    WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
  v21 = v20 == 0;
  v22 = (_QWORD *)*((_QWORD *)a4 + 6);
  v40 = !v21;
  if ( v22 == (_QWORD *)((char *)a4 + 48) )
    goto LABEL_27;
  NextMode = (struct DMMVIDPNSOURCEMODE *)(v22 - 1);
  if ( !NextMode )
    goto LABEL_27;
  do
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
    v24[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
    v24[4] = *((unsigned int *)NextMode + 21);
    v24[5] = *((unsigned int *)NextMode + 22);
    v27 = *((unsigned int *)NextMode + 23);
    v24[6] = v27;
    v24[7] = *((unsigned int *)NextMode + 24);
    ++*(_DWORD *)(v19 + a1 + 100);
    if ( NextMode == (struct DMMVIDPNSOURCEMODE *)v17
      || (LOBYTE(v26) = v40, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(a1, v8, NextMode, v26)) )
    {
      WdLogNewEntry5_WdTrace(v27, v24, v25, v26);
    }
    else
    {
      ++*(_DWORD *)(v19 + a1 + 104);
      if ( (unsigned int)BmlCompareTargetModes(a1, a2, v8, (_DWORD)NextMode, (__int64)v18, v40) == 1
        && (!v17 || (unsigned int)BmlCompareTargetModes(a1, a2, v8, (_DWORD)NextMode, v17, v40) == -1) )
      {
        WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
        v18 = NextMode;
      }
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a4, NextMode);
  }
  while ( NextMode );
  if ( !v18 )
  {
LABEL_27:
    v38 = -1071774970;
    goto LABEL_28;
  }
  v32 = *(_QWORD *)(a2 + 48);
  *a7 = *((_DWORD *)v18 + 6);
  v33 = *(_QWORD *)(v32 + 8);
  if ( !v33 )
  {
    v39 = WdLogNewEntry5_WdAssertion(a7);
    WdLogEvent5_WdAssertion(v39);
    v33 = *(_QWORD *)(v32 + 8);
  }
  DxgkLogCodePointPacket(
    0x21u,
    v8,
    *((_DWORD *)v18 + 21),
    *((_DWORD *)v18 + 22),
    *(_QWORD *)(*(_QWORD *)(v33 + 16) + 276LL));
  return 0LL;
}
