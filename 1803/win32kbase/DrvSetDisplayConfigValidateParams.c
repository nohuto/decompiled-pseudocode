/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1C0079FAC
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00D4D70 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C004C3A0 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C006D5B0 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     _stricmp @ 0x1C0074260 (_stricmp.c)
 *     UserIsConsoleConnection @ 0x1C00BCE20 (UserIsConsoleConnection.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00D1500 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C00D1F5C (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // [rsp+40h] [rbp-1D8h]
  int TargetVirtualization; // [rsp+40h] [rbp-1D8h]
  char *v20; // [rsp+48h] [rbp-1D0h]
  unsigned __int8 v21; // [rsp+50h] [rbp-1C8h] BYREF
  char v22; // [rsp+51h] [rbp-1C7h]
  unsigned int i; // [rsp+54h] [rbp-1C4h]
  unsigned __int8 v24[4]; // [rsp+58h] [rbp-1C0h] BYREF
  unsigned int j; // [rsp+5Ch] [rbp-1BCh]
  char v26; // [rsp+60h] [rbp-1B8h]
  char v27; // [rsp+61h] [rbp-1B7h]
  char v28; // [rsp+62h] [rbp-1B6h]
  char v29; // [rsp+63h] [rbp-1B5h]
  char v30; // [rsp+64h] [rbp-1B4h]
  char v31; // [rsp+65h] [rbp-1B3h]
  char v32; // [rsp+66h] [rbp-1B2h]
  char v33; // [rsp+67h] [rbp-1B1h]
  char v34; // [rsp+68h] [rbp-1B0h]
  char v35; // [rsp+69h] [rbp-1AFh]
  char v36; // [rsp+6Ah] [rbp-1AEh]
  char v37; // [rsp+6Bh] [rbp-1ADh]
  char v38; // [rsp+6Ch] [rbp-1ACh]
  char v39; // [rsp+6Dh] [rbp-1ABh]
  char v40; // [rsp+6Eh] [rbp-1AAh]
  char v41; // [rsp+6Fh] [rbp-1A9h]
  char v42; // [rsp+70h] [rbp-1A8h]
  char v43; // [rsp+71h] [rbp-1A7h]
  char v44; // [rsp+72h] [rbp-1A6h]
  char v45; // [rsp+73h] [rbp-1A5h]
  char v46; // [rsp+74h] [rbp-1A4h]
  char v47; // [rsp+75h] [rbp-1A3h]
  char v48; // [rsp+76h] [rbp-1A2h]
  char v49; // [rsp+77h] [rbp-1A1h]
  char v50; // [rsp+78h] [rbp-1A0h]
  char v51; // [rsp+79h] [rbp-19Fh]
  char v52; // [rsp+7Ah] [rbp-19Eh]
  char v53; // [rsp+7Bh] [rbp-19Dh]
  char v54; // [rsp+7Ch] [rbp-19Ch]
  char v55; // [rsp+7Dh] [rbp-19Bh]
  char v56; // [rsp+7Eh] [rbp-19Ah]
  char v57; // [rsp+7Fh] [rbp-199h]
  char v58; // [rsp+80h] [rbp-198h]
  char v59; // [rsp+81h] [rbp-197h]
  char v60; // [rsp+82h] [rbp-196h]
  char v61; // [rsp+83h] [rbp-195h]
  char v62; // [rsp+84h] [rbp-194h]
  char v63; // [rsp+85h] [rbp-193h]
  char v64; // [rsp+86h] [rbp-192h]
  char v65; // [rsp+87h] [rbp-191h]
  char v66; // [rsp+88h] [rbp-190h]
  char v67; // [rsp+89h] [rbp-18Fh]
  char v68; // [rsp+8Ah] [rbp-18Eh]
  char v69; // [rsp+8Bh] [rbp-18Dh]
  char v70; // [rsp+8Ch] [rbp-18Ch]
  int v71; // [rsp+90h] [rbp-188h]
  int v72; // [rsp+94h] [rbp-184h]
  int v73; // [rsp+98h] [rbp-180h]
  _QWORD *v74; // [rsp+A0h] [rbp-178h]
  _QWORD *v75; // [rsp+A8h] [rbp-170h]
  _QWORD *v76; // [rsp+B0h] [rbp-168h]
  _QWORD *v77; // [rsp+B8h] [rbp-160h]
  __int64 v78; // [rsp+C0h] [rbp-158h]
  __int64 v79; // [rsp+C8h] [rbp-150h]
  __int64 v80; // [rsp+D0h] [rbp-148h]
  __int64 v81; // [rsp+D8h] [rbp-140h]
  __int64 v82; // [rsp+E0h] [rbp-138h]
  __int64 v83; // [rsp+E8h] [rbp-130h]
  __int64 v84; // [rsp+F0h] [rbp-128h]
  __int64 v85; // [rsp+F8h] [rbp-120h]
  __int64 v86; // [rsp+100h] [rbp-118h]
  __int64 v87; // [rsp+108h] [rbp-110h]
  __int64 v88; // [rsp+110h] [rbp-108h]
  __int64 v89; // [rsp+118h] [rbp-100h]
  __int64 v90; // [rsp+120h] [rbp-F8h]
  __int64 v91; // [rsp+128h] [rbp-F0h]
  __int64 v92; // [rsp+130h] [rbp-E8h]
  __int64 v93; // [rsp+138h] [rbp-E0h]
  __int64 v94; // [rsp+140h] [rbp-D8h]
  __int64 v95; // [rsp+148h] [rbp-D0h]
  __int64 v96; // [rsp+150h] [rbp-C8h]
  __int64 v97; // [rsp+158h] [rbp-C0h]
  __int64 v98; // [rsp+160h] [rbp-B8h]
  __int64 v99; // [rsp+168h] [rbp-B0h]
  __int64 v100; // [rsp+170h] [rbp-A8h]
  __int64 v101; // [rsp+178h] [rbp-A0h]
  __int64 v102; // [rsp+180h] [rbp-98h]
  __int64 v103; // [rsp+188h] [rbp-90h]
  __int64 v104; // [rsp+190h] [rbp-88h]
  __int64 v105; // [rsp+198h] [rbp-80h]
  __int64 v106; // [rsp+1A0h] [rbp-78h]
  __int64 v107; // [rsp+1A8h] [rbp-70h]
  __int64 v108; // [rsp+1B0h] [rbp-68h]
  __int64 v109; // [rsp+1B8h] [rbp-60h]
  __int64 v110; // [rsp+1C0h] [rbp-58h]
  char *Str1; // [rsp+1C8h] [rbp-50h]
  __int64 v112; // [rsp+1D0h] [rbp-48h]
  __int64 v113; // [rsp+1D8h] [rbp-40h]
  __int64 v114; // [rsp+1E0h] [rbp-38h]
  __int64 v115; // [rsp+1E8h] [rbp-30h]
  __int64 v116; // [rsp+1F0h] [rbp-28h]
  __int64 v117; // [rsp+1F8h] [rbp-20h]
  __int64 v118; // [rsp+200h] [rbp-18h]
  __int64 v119; // [rsp+208h] [rbp-10h]
  unsigned int v120; // [rsp+220h] [rbp+8h]
  unsigned int v122; // [rsp+230h] [rbp+18h]
  int v123; // [rsp+238h] [rbp+20h]

  v123 = a4;
  v122 = a3;
  v120 = a1;
  if ( a5 )
  {
    if ( (a3 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      v108 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v108 + 24) = -1073741790LL;
      v70 = WdLogEvent5_WdError(v108);
      return 3221225506LL;
    }
    if ( (v122 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      v109 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v109 + 24) = -1073741790LL;
      v26 = WdLogEvent5_WdError(v109);
      return 3221225506LL;
    }
  }
  if ( (v122 & 0x10000) != 0 && ((v122 & 0x1F) != 0 || (v122 & 0x200) != 0) )
  {
    v110 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v110 + 24) = -1073741637LL;
    v27 = WdLogEvent5_WdError(v110);
    return 3221225659LL;
  }
  if ( (v122 & 0xC0000000) != 0 )
  {
    if ( (v122 & 0x80) != 0 )
    {
      if ( v122 == 1073741952 || v122 == -2147483520 )
      {
        CurrentProcess = PsGetCurrentProcess(a1);
        Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
        if ( gbBypassPresenterViewProcessCheck || Str1 && !stricmp(Str1, "explorer.exe") )
        {
          if ( v120 || a2 )
          {
            v112 = WdLogNewEntry5_WdError(v8, v7, v9);
            *(_QWORD *)(v112 + 24) = -1073741811LL;
            v31 = WdLogEvent5_WdError(v112);
            return 3221225485LL;
          }
          else
          {
            v113 = WdLogNewEntry5_WdTrace(v8);
            *(_QWORD *)(v113 + 24) = v122;
            v32 = WdLogEvent5_WdTrace(v113);
            return 0LL;
          }
        }
        else
        {
          v80 = WdLogNewEntry5_WdError(v8, v7, v9);
          *(_QWORD *)(v80 + 24) = v122;
          *(_QWORD *)(v80 + 32) = -1073741581LL;
          v30 = WdLogEvent5_WdError(v80);
          return 3221225715LL;
        }
      }
      else
      {
        v79 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v79 + 24) = v122;
        *(_QWORD *)(v79 + 32) = -1073741581LL;
        v29 = WdLogEvent5_WdError(v79);
        return 3221225715LL;
      }
    }
    else
    {
      v78 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v78 + 24) = v122;
      *(_QWORD *)(v78 + 32) = -1073741581LL;
      v28 = WdLogEvent5_WdError(v78);
      return 3221225715LL;
    }
  }
  else if ( (v123 & 1) != 0 )
  {
    if ( v123 == 1 && v122 == 128 && !v120 )
    {
      return 0LL;
    }
    else
    {
      v81 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v81 + 24) = v122;
      *(_QWORD *)(v81 + 32) = -1073741581LL;
      v33 = WdLogEvent5_WdAssertion(v81);
      return 3221225715LL;
    }
  }
  else
  {
    if ( (v123 & 0x10) != 0 && (v123 & 8) == 0 )
    {
      v82 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v82 + 24) = v122;
      *(_QWORD *)(v82 + 32) = -1073741581LL;
      v34 = WdLogEvent5_WdAssertion(v82);
      return 3221225715LL;
    }
    if ( (v123 & 8) != 0 && v120 != 1 )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      v75[3] = v120;
      v75[4] = v122;
      v75[5] = -1073741581LL;
      v35 = WdLogEvent5_WdAssertion(v75);
      return 3221225715LL;
    }
    if ( (v123 & 8) != 0 && (v122 & 0x20) == 0 )
    {
      v83 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v83 + 24) = v122;
      *(_QWORD *)(v83 + 32) = -1073741581LL;
      v36 = WdLogEvent5_WdAssertion(v83);
      return 3221225715LL;
    }
    if ( !(unsigned int)UserIsConsoleConnection() && (v122 & 0x88F) != 0x88F )
    {
      v84 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v84 + 24) = v122;
      *(_QWORD *)(v84 + 32) = -1073741790LL;
      v37 = WdLogEvent5_WdError(v84);
      return 3221225506LL;
    }
    if ( (v122 & 0xFFFE4000) != 0 )
    {
      v85 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v85 + 24) = v122;
      *(_QWORD *)(v85 + 32) = -1073741581LL;
      v38 = WdLogEvent5_WdError(v85);
      return 3221225715LL;
    }
    if ( (v122 & 0xC0) == 0 || (v122 & 0xC0) == 0xC0 )
    {
      v86 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v86 + 24) = v122;
      *(_QWORD *)(v86 + 32) = -1073741581LL;
      v39 = WdLogEvent5_WdError(v86);
      return 3221225715LL;
    }
    if ( (v122 & 0x180) == 0x100 )
    {
      v87 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v87 + 24) = v122;
      *(_QWORD *)(v87 + 32) = -1073741581LL;
      v40 = WdLogEvent5_WdError(v87);
      return 3221225715LL;
    }
    if ( (v122 & 0x1000) != 0 && (v122 & 0xA0) != 0xA0 )
    {
      v88 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v88 + 24) = v122;
      *(_QWORD *)(v88 + 32) = -1073741581LL;
      v41 = WdLogEvent5_WdError(v88);
      return 3221225715LL;
    }
    if ( (v122 & 0x2000) != 0 && (v122 & 0x10) == 0 )
    {
      v89 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v89 + 24) = v122;
      *(_QWORD *)(v89 + 32) = -1073741581LL;
      v42 = WdLogEvent5_WdError(v89);
      return 3221225715LL;
    }
    if ( (v122 & 0x1F) != 0 )
    {
      if ( (v122 & 0x400) != 0 )
      {
        v90 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v90 + 24) = v122;
        *(_QWORD *)(v90 + 32) = -1073741581LL;
        v43 = WdLogEvent5_WdError(v90);
        return 3221225715LL;
      }
      if ( (v122 & 0x20) != 0 )
      {
        v91 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v91 + 24) = v122;
        *(_QWORD *)(v91 + 32) = -1073741581LL;
        v44 = WdLogEvent5_WdError(v91);
        return 3221225715LL;
      }
      if ( (v122 & 0x200) != 0 )
      {
        v92 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v92 + 24) = v122;
        *(_QWORD *)(v92 + 32) = -1073741581LL;
        v45 = WdLogEvent5_WdError(v92);
        return 3221225715LL;
      }
      if ( (v122 & 0x10) != 0 )
      {
        if ( (v122 & 0x800) != 0 )
        {
          v93 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v93 + 24) = v122;
          *(_QWORD *)(v93 + 32) = -1073741581LL;
          v46 = WdLogEvent5_WdError(v93);
          return 3221225715LL;
        }
        if ( !a2 )
        {
          v94 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v94 + 24) = v122;
          *(_QWORD *)(v94 + 32) = -1073741584LL;
          v47 = WdLogEvent5_WdError(v94);
          return 3221225712LL;
        }
        if ( !v120 )
        {
          v95 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v95 + 24) = v122;
          *(_QWORD *)(v95 + 32) = -1073741585LL;
          v48 = WdLogEvent5_WdError(v95);
          return 3221225711LL;
        }
      }
      else
      {
        if ( a2 )
        {
          v96 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v96 + 24) = v122;
          *(_QWORD *)(v96 + 32) = -1073741584LL;
          v49 = WdLogEvent5_WdError(v96);
          return 3221225712LL;
        }
        if ( v120 )
        {
          v97 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v97 + 24) = v122;
          *(_QWORD *)(v97 + 32) = -1073741585LL;
          v50 = WdLogEvent5_WdError(v97);
          return 3221225711LL;
        }
      }
    }
    else
    {
      if ( (v122 & 0x20) == 0 )
      {
        v98 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v98 + 24) = v122;
        *(_QWORD *)(v98 + 32) = -1073741581LL;
        v51 = WdLogEvent5_WdError(v98);
        return 3221225715LL;
      }
      if ( (v122 & 0x800) != 0 )
      {
        v99 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v99 + 24) = v122;
        *(_QWORD *)(v99 + 32) = -1073741581LL;
        v52 = WdLogEvent5_WdError(v99);
        return 3221225715LL;
      }
      if ( (v122 & 0x10000) == 0 )
      {
        if ( !a2 )
        {
          v100 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v100 + 24) = v122;
          *(_QWORD *)(v100 + 32) = -1073741584LL;
          v53 = WdLogEvent5_WdError(v100);
          return 3221225712LL;
        }
        if ( !v120 )
        {
          v101 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v101 + 24) = v122;
          *(_QWORD *)(v101 + 32) = -1073741585LL;
          v54 = WdLogEvent5_WdError(v101);
          return 3221225711LL;
        }
      }
      if ( v120 )
      {
        v18 = EnforceSDCCloneSourceIndexCoherency(v120, a2);
        if ( v18 < 0 )
        {
          v114 = WdLogNewEntry5_WdError(v14, v13, v15);
          *(_QWORD *)(v114 + 24) = v18;
          v55 = WdLogEvent5_WdError(v114);
          return (unsigned int)v18;
        }
        v22 = 0;
        for ( i = 0; i < v120; ++i )
        {
          v20 = (char *)a2 + 200 * i;
          v16 = 0x7FD30FEFFF7CF070LL;
          if ( (*(_QWORD *)v20 & 0x7FD30FEFFF7CF070LL) != 0 )
          {
            v115 = WdLogNewEntry5_WdError(0x7FD30FEFFF7CF070LL, v13, v15);
            *(_QWORD *)(v115 + 24) = *(_QWORD *)v20;
            v56 = WdLogEvent5_WdError(v115);
            return 3221225485LL;
          }
          if ( (*((_QWORD *)v20 + 1) & 0xFFFFFFFFFF7DF470uLL) != 0
            || (v16 = (__int64)a2 + 200 * i, (*(_QWORD *)v20 & *((_QWORD *)v20 + 1)) != *((_QWORD *)v20 + 1)) )
          {
            v102 = WdLogNewEntry5_WdError(v16, v13, v15);
            *(_QWORD *)(v102 + 24) = *(_QWORD *)v20;
            *(_QWORD *)(v102 + 32) = *((_QWORD *)v20 + 1);
            v57 = WdLogEvent5_WdError(v102);
            return 3221225485LL;
          }
          v14 = 0x8000000000000000uLL;
          if ( *(__int64 *)v20 < 0 )
          {
            if ( (*(_QWORD *)v20 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
            {
              v116 = WdLogNewEntry5_WdError(0x8004700000000000uLL, v13, v15);
              *(_QWORD *)(v116 + 24) = *(_QWORD *)v20;
              v58 = WdLogEvent5_WdError(v116);
              return 3221225485LL;
            }
            TargetVirtualization = GetTargetVirtualization(
                                     *(struct _LUID *)(v20 + 16),
                                     *((_DWORD *)v20 + 7),
                                     v24,
                                     &v21,
                                     0LL,
                                     0LL,
                                     0LL);
            if ( TargetVirtualization < 0 )
            {
              v117 = WdLogNewEntry5_WdError(v17, v13, v15);
              *(_QWORD *)(v117 + 24) = TargetVirtualization;
              v59 = WdLogEvent5_WdError(v117);
              return 3221225712LL;
            }
            v14 = 0x8000000000000LL;
            if ( (*(_QWORD *)v20 & 0x8000000000000LL) != 0 )
            {
              v71 = v20[101] != 0;
              v73 = !v24[0] || !v21;
              if ( v71 != v73 )
              {
                v118 = WdLogNewEntry5_WdError(0x8000000000000LL, v13, v15);
                v69 = WdLogEvent5_WdError(v118);
                return 3221225485LL;
              }
            }
            if ( (*(_QWORD *)v20 & 0x800LL) != 0 )
            {
              if ( !*((_DWORD *)v20 + 29) && !*((_DWORD *)v20 + 30) )
                v22 = 1;
            }
            else
            {
              v22 = 1;
            }
            for ( j = 0; j < i; ++j )
            {
              v14 = 0x8000000000000000uLL;
              if ( *(__int64 *)v20 < 0 )
              {
                v14 = (__int64)a2;
                v13 = *((unsigned int *)v20 + 39);
                if ( *((_DWORD *)a2 + 50 * j + 39) == (_DWORD)v13 )
                  break;
              }
            }
            if ( j < i )
            {
              v13 = 0x8000000000000LL;
              v14 = *(_QWORD *)v20 & 0x8000000000000LL;
              if ( (*((_QWORD *)a2 + 25 * j) & 0x8000000000000LL) != v14
                || (v14 = (unsigned __int8)v20[101], *((unsigned __int8 *)a2 + 200 * j + 101) != (_DWORD)v14) )
              {
                v76 = (_QWORD *)WdLogNewEntry5_WdError(v14, 0x8000000000000LL, v15);
                v76[3] = j;
                v76[4] = i;
                v76[5] = -1073741582LL;
                v60 = WdLogEvent5_WdError(v76);
                return 3221225714LL;
              }
              if ( v21 )
              {
                v14 = (__int64)a2;
                v13 = *((unsigned int *)v20 + 4);
                if ( *((_DWORD *)a2 + 50 * j + 4) != (_DWORD)v13
                  || (v14 = (__int64)a2, v13 = *((unsigned int *)v20 + 5), *((_DWORD *)a2 + 50 * j + 5) != (_DWORD)v13) )
                {
                  v77 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
                  v77[3] = j;
                  v77[4] = i;
                  v77[5] = -1073741582LL;
                  v61 = WdLogEvent5_WdError(v77);
                  return 3221225714LL;
                }
              }
            }
            if ( (*(_QWORD *)v20 & 0x87LL) != 0 )
            {
              if ( (*(_QWORD *)v20 & 4LL) != 0 )
              {
                v72 = *((_DWORD *)v20 + 19);
                if ( v72 <= 0 || v72 > 3 )
                {
                  v103 = WdLogNewEntry5_WdError(v14, v13, v15);
                  *(_QWORD *)(v103 + 24) = *((int *)v20 + 19);
                  *(_QWORD *)(v103 + 32) = -1073741582LL;
                  v62 = WdLogEvent5_WdError(v103);
                  return 3221225714LL;
                }
              }
              if ( (*(_QWORD *)v20 & 2LL) != 0 && (!*((_DWORD *)v20 + 12) || !*((_DWORD *)v20 + 13)) )
              {
                v74 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
                v74[3] = *((unsigned int *)v20 + 12);
                v74[4] = *((unsigned int *)v20 + 13);
                v74[5] = i;
                v74[6] = -1073741582LL;
                v63 = WdLogEvent5_WdError(v74);
                return 3221225714LL;
              }
            }
            if ( (*(_QWORD *)v20 & 0x800000LL) != 0 )
            {
              v14 = 0x1000000000LL;
              if ( (*(_QWORD *)v20 & 0x1000000000LL) == 0 )
              {
                if ( v24[0] && v21 )
                {
                  v104 = WdLogNewEntry5_WdError(0x1000000000LL, v13, v15);
                  *(_QWORD *)(v104 + 24) = i;
                  *(_QWORD *)(v104 + 32) = -1073741584LL;
                  v64 = WdLogEvent5_WdError(v104);
                  return 3221225712LL;
                }
                if ( (*(_QWORD *)v20 & 0x100LL) == 0 )
                {
                  v105 = WdLogNewEntry5_WdError(0x1000000000LL, v13, v15);
                  *(_QWORD *)(v105 + 24) = i;
                  *(_QWORD *)(v105 + 32) = -1073741584LL;
                  v65 = WdLogEvent5_WdError(v105);
                  return 3221225712LL;
                }
                v14 = *((unsigned int *)v20 + 38);
                if ( *((_DWORD *)v20 + 36) >= (int)v14
                  || (v14 = *((unsigned int *)v20 + 37), *((_DWORD *)v20 + 35) >= (int)v14) )
                {
                  v106 = WdLogNewEntry5_WdError(v14, v13, v15);
                  *(_QWORD *)(v106 + 24) = i;
                  *(_QWORD *)(v106 + 32) = -1073741582LL;
                  v66 = WdLogEvent5_WdError(v106);
                  return 3221225714LL;
                }
                if ( *((int *)v20 + 36) < 0
                  || *((int *)v20 + 35) < 0
                  || (v14 = *((unsigned int *)v20 + 23), *((_DWORD *)v20 + 38) > (unsigned int)v14)
                  || (v14 = *((unsigned int *)v20 + 22), *((_DWORD *)v20 + 37) > (unsigned int)v14) )
                {
                  v107 = WdLogNewEntry5_WdError(v14, v13, v15);
                  *(_QWORD *)(v107 + 24) = i;
                  *(_QWORD *)(v107 + 32) = -1073741582LL;
                  v67 = WdLogEvent5_WdError(v107);
                  return 3221225714LL;
                }
              }
            }
          }
        }
        if ( !v22 )
        {
          v119 = WdLogNewEntry5_WdError(v14, v13, v15);
          v68 = WdLogEvent5_WdError(v119);
          return 3221225485LL;
        }
      }
    }
    return 0LL;
  }
}
