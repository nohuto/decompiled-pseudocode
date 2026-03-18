/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1C00C1880
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0062520 (xxxUserSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C012DD34 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C004AB0C (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C004C438 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     _stricmp @ 0x1C00BB638 (_stricmp.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C012B914 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C012BCF0 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        int a4,
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
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // [rsp+40h] [rbp-1F8h]
  int TargetVirtualization; // [rsp+40h] [rbp-1F8h]
  char *v20; // [rsp+48h] [rbp-1F0h]
  unsigned __int8 v21; // [rsp+50h] [rbp-1E8h] BYREF
  char v22; // [rsp+51h] [rbp-1E7h]
  unsigned int j; // [rsp+54h] [rbp-1E4h]
  unsigned __int8 v24[4]; // [rsp+58h] [rbp-1E0h] BYREF
  unsigned int k; // [rsp+5Ch] [rbp-1DCh]
  unsigned int i; // [rsp+60h] [rbp-1D8h]
  char v27; // [rsp+64h] [rbp-1D4h]
  char v28; // [rsp+65h] [rbp-1D3h]
  char v29; // [rsp+66h] [rbp-1D2h]
  char v30; // [rsp+67h] [rbp-1D1h]
  char v31; // [rsp+68h] [rbp-1D0h]
  char v32; // [rsp+69h] [rbp-1CFh]
  char v33; // [rsp+6Ah] [rbp-1CEh]
  char v34; // [rsp+6Bh] [rbp-1CDh]
  char v35; // [rsp+6Ch] [rbp-1CCh]
  char v36; // [rsp+6Dh] [rbp-1CBh]
  char v37; // [rsp+6Eh] [rbp-1CAh]
  char v38; // [rsp+6Fh] [rbp-1C9h]
  char v39; // [rsp+70h] [rbp-1C8h]
  char v40; // [rsp+71h] [rbp-1C7h]
  char v41; // [rsp+72h] [rbp-1C6h]
  char v42; // [rsp+73h] [rbp-1C5h]
  char v43; // [rsp+74h] [rbp-1C4h]
  char v44; // [rsp+75h] [rbp-1C3h]
  char v45; // [rsp+76h] [rbp-1C2h]
  char v46; // [rsp+77h] [rbp-1C1h]
  char v47; // [rsp+78h] [rbp-1C0h]
  char v48; // [rsp+79h] [rbp-1BFh]
  char v49; // [rsp+7Ah] [rbp-1BEh]
  char v50; // [rsp+7Bh] [rbp-1BDh]
  char v51; // [rsp+7Ch] [rbp-1BCh]
  char v52; // [rsp+7Dh] [rbp-1BBh]
  char v53; // [rsp+7Eh] [rbp-1BAh]
  char v54; // [rsp+7Fh] [rbp-1B9h]
  char v55; // [rsp+80h] [rbp-1B8h]
  char v56; // [rsp+81h] [rbp-1B7h]
  char v57; // [rsp+82h] [rbp-1B6h]
  char v58; // [rsp+83h] [rbp-1B5h]
  char v59; // [rsp+84h] [rbp-1B4h]
  char v60; // [rsp+85h] [rbp-1B3h]
  char v61; // [rsp+86h] [rbp-1B2h]
  char v62; // [rsp+87h] [rbp-1B1h]
  char v63; // [rsp+88h] [rbp-1B0h]
  char v64; // [rsp+89h] [rbp-1AFh]
  char v65; // [rsp+8Ah] [rbp-1AEh]
  char v66; // [rsp+8Bh] [rbp-1ADh]
  char v67; // [rsp+8Ch] [rbp-1ACh]
  char v68; // [rsp+8Dh] [rbp-1ABh]
  char v69; // [rsp+8Eh] [rbp-1AAh]
  char v70; // [rsp+8Fh] [rbp-1A9h]
  char v71; // [rsp+90h] [rbp-1A8h]
  char v72; // [rsp+91h] [rbp-1A7h]
  char v73; // [rsp+92h] [rbp-1A6h]
  BOOL v74; // [rsp+94h] [rbp-1A4h]
  int v75; // [rsp+98h] [rbp-1A0h]
  int v76; // [rsp+9Ch] [rbp-19Ch]
  _QWORD *v77; // [rsp+A0h] [rbp-198h]
  _QWORD *v78; // [rsp+A8h] [rbp-190h]
  _QWORD *v79; // [rsp+B0h] [rbp-188h]
  _QWORD *v80; // [rsp+B8h] [rbp-180h]
  __int64 v81; // [rsp+C0h] [rbp-178h]
  __int64 v82; // [rsp+C8h] [rbp-170h]
  __int64 v83; // [rsp+D0h] [rbp-168h]
  __int64 v84; // [rsp+D8h] [rbp-160h]
  __int64 v85; // [rsp+E0h] [rbp-158h]
  __int64 v86; // [rsp+E8h] [rbp-150h]
  __int64 v87; // [rsp+F0h] [rbp-148h]
  __int64 v88; // [rsp+F8h] [rbp-140h]
  __int64 v89; // [rsp+100h] [rbp-138h]
  __int64 v90; // [rsp+108h] [rbp-130h]
  __int64 v91; // [rsp+110h] [rbp-128h]
  __int64 v92; // [rsp+118h] [rbp-120h]
  __int64 v93; // [rsp+120h] [rbp-118h]
  __int64 v94; // [rsp+128h] [rbp-110h]
  __int64 v95; // [rsp+130h] [rbp-108h]
  __int64 v96; // [rsp+138h] [rbp-100h]
  __int64 v97; // [rsp+140h] [rbp-F8h]
  __int64 v98; // [rsp+148h] [rbp-F0h]
  __int64 v99; // [rsp+150h] [rbp-E8h]
  __int64 v100; // [rsp+158h] [rbp-E0h]
  __int64 v101; // [rsp+160h] [rbp-D8h]
  __int64 v102; // [rsp+168h] [rbp-D0h]
  __int64 v103; // [rsp+170h] [rbp-C8h]
  __int64 v104; // [rsp+178h] [rbp-C0h]
  __int64 v105; // [rsp+180h] [rbp-B8h]
  __int64 v106; // [rsp+188h] [rbp-B0h]
  __int64 v107; // [rsp+190h] [rbp-A8h]
  __int64 v108; // [rsp+198h] [rbp-A0h]
  __int64 v109; // [rsp+1A0h] [rbp-98h]
  __int64 v110; // [rsp+1A8h] [rbp-90h]
  __int64 v111; // [rsp+1B0h] [rbp-88h]
  __int64 v112; // [rsp+1B8h] [rbp-80h]
  __int64 v113; // [rsp+1C0h] [rbp-78h]
  char *Str1; // [rsp+1C8h] [rbp-70h]
  __int64 v115; // [rsp+1D0h] [rbp-68h]
  __int64 v116; // [rsp+1D8h] [rbp-60h]
  __int64 v117; // [rsp+1E0h] [rbp-58h]
  __int64 v118; // [rsp+1E8h] [rbp-50h]
  __int64 v119; // [rsp+1F0h] [rbp-48h]
  __int64 v120; // [rsp+1F8h] [rbp-40h]
  __int64 v121; // [rsp+200h] [rbp-38h]
  __int64 v122; // [rsp+208h] [rbp-30h]
  _QWORD *v123; // [rsp+210h] [rbp-28h]
  __int64 v124; // [rsp+218h] [rbp-20h]
  __int64 v125; // [rsp+220h] [rbp-18h]
  unsigned int v126; // [rsp+240h] [rbp+8h]
  unsigned int v128; // [rsp+250h] [rbp+18h]

  v128 = a3;
  v126 = a1;
  if ( a5 )
  {
    if ( (a3 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      v111 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v111 + 24) = -1073741790LL;
      v73 = WdLogEvent5_WdError(v111);
      return 3221225506LL;
    }
    if ( (v128 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      v112 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v112 + 24) = -1073741790LL;
      v27 = WdLogEvent5_WdError(v112);
      return 3221225506LL;
    }
  }
  if ( (v128 & 0x10000) != 0 && ((v128 & 0x1F) != 0 || (v128 & 0x200) != 0) )
  {
    v113 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v113 + 24) = -1073741637LL;
    v28 = WdLogEvent5_WdError(v113);
    return 3221225659LL;
  }
  if ( (v128 & 0xC0000000) != 0 )
  {
    if ( (v128 & 0x80) != 0 )
    {
      if ( v128 == 1073741952 || v128 == -2147483520 )
      {
        CurrentProcess = PsGetCurrentProcess(a1, a2);
        Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
        if ( gbBypassPresenterViewProcessCheck || Str1 && !stricmp(Str1, "explorer.exe") )
        {
          if ( v126 || a2 )
          {
            v115 = WdLogNewEntry5_WdError(v8, v7, v9);
            *(_QWORD *)(v115 + 24) = -1073741811LL;
            v32 = WdLogEvent5_WdError(v115);
            return 3221225485LL;
          }
          else
          {
            v116 = WdLogNewEntry5_WdTrace(v8);
            *(_QWORD *)(v116 + 24) = v128;
            v33 = WdLogEvent5_WdTrace(v116);
            return 0LL;
          }
        }
        else
        {
          v83 = WdLogNewEntry5_WdError(v8, v7, v9);
          *(_QWORD *)(v83 + 24) = v128;
          *(_QWORD *)(v83 + 32) = -1073741581LL;
          v31 = WdLogEvent5_WdError(v83);
          return 3221225715LL;
        }
      }
      else
      {
        v82 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v82 + 24) = v128;
        *(_QWORD *)(v82 + 32) = -1073741581LL;
        v30 = WdLogEvent5_WdError(v82);
        return 3221225715LL;
      }
    }
    else
    {
      v81 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v81 + 24) = v128;
      *(_QWORD *)(v81 + 32) = -1073741581LL;
      v29 = WdLogEvent5_WdError(v81);
      return 3221225715LL;
    }
  }
  else if ( (a4 & 1) != 0 )
  {
    if ( (a4 & 0xFFFFFEBF) == 1 && v128 == 128 && !v126 )
    {
      return 0LL;
    }
    else
    {
      v84 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
      *(_QWORD *)(v84 + 24) = v128;
      *(_QWORD *)(v84 + 32) = -1073741581LL;
      v34 = WdLogEvent5_WdAssertion(v84);
      return 3221225715LL;
    }
  }
  else
  {
    if ( (a4 & 0x10) != 0 && (a4 & 8) == 0 )
    {
      v85 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
      *(_QWORD *)(v85 + 24) = v128;
      *(_QWORD *)(v85 + 32) = -1073741581LL;
      v35 = WdLogEvent5_WdAssertion(v85);
      return 3221225715LL;
    }
    if ( (a4 & 8) != 0 && v126 != 1 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3);
      v78[3] = v126;
      v78[4] = v128;
      v78[5] = -1073741581LL;
      v36 = WdLogEvent5_WdAssertion(v78);
      return 3221225715LL;
    }
    if ( (a4 & 8) != 0 && (v128 & 0x20) == 0 )
    {
      v86 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
      *(_QWORD *)(v86 + 24) = v128;
      *(_QWORD *)(v86 + 32) = -1073741581LL;
      v37 = WdLogEvent5_WdAssertion(v86);
      return 3221225715LL;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession() && (v128 & 0x88F) != 0x88F )
    {
      v87 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v87 + 24) = v128;
      *(_QWORD *)(v87 + 32) = -1073741790LL;
      v38 = WdLogEvent5_WdError(v87);
      return 3221225506LL;
    }
    if ( (v128 & 0xFFFE4000) != 0 )
    {
      v88 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v88 + 24) = v128;
      *(_QWORD *)(v88 + 32) = -1073741581LL;
      v39 = WdLogEvent5_WdError(v88);
      return 3221225715LL;
    }
    if ( (v128 & 0xC0) == 0 || (v128 & 0xC0) == 0xC0 )
    {
      v89 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v89 + 24) = v128;
      *(_QWORD *)(v89 + 32) = -1073741581LL;
      v40 = WdLogEvent5_WdError(v89);
      return 3221225715LL;
    }
    if ( (v128 & 0x180) == 0x100 )
    {
      v90 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v90 + 24) = v128;
      *(_QWORD *)(v90 + 32) = -1073741581LL;
      v41 = WdLogEvent5_WdError(v90);
      return 3221225715LL;
    }
    if ( (v128 & 0x1000) != 0 && (v128 & 0xA0) != 0xA0 )
    {
      v91 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v91 + 24) = v128;
      *(_QWORD *)(v91 + 32) = -1073741581LL;
      v42 = WdLogEvent5_WdError(v91);
      return 3221225715LL;
    }
    if ( (v128 & 0x2000) != 0 && (v128 & 0x10) == 0 )
    {
      v92 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v92 + 24) = v128;
      *(_QWORD *)(v92 + 32) = -1073741581LL;
      v43 = WdLogEvent5_WdError(v92);
      return 3221225715LL;
    }
    if ( (v128 & 0x1F) != 0 )
    {
      if ( (v128 & 0x400) != 0 )
      {
        v93 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v93 + 24) = v128;
        *(_QWORD *)(v93 + 32) = -1073741581LL;
        v44 = WdLogEvent5_WdError(v93);
        return 3221225715LL;
      }
      if ( (v128 & 0x20) != 0 )
      {
        v94 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v94 + 24) = v128;
        *(_QWORD *)(v94 + 32) = -1073741581LL;
        v45 = WdLogEvent5_WdError(v94);
        return 3221225715LL;
      }
      if ( (v128 & 0x200) != 0 )
      {
        v95 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v95 + 24) = v128;
        *(_QWORD *)(v95 + 32) = -1073741581LL;
        v46 = WdLogEvent5_WdError(v95);
        return 3221225715LL;
      }
      if ( (v128 & 0x10) != 0 )
      {
        if ( (v128 & 0x800) != 0 )
        {
          v96 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v96 + 24) = v128;
          *(_QWORD *)(v96 + 32) = -1073741581LL;
          v47 = WdLogEvent5_WdError(v96);
          return 3221225715LL;
        }
        if ( !a2 )
        {
          v97 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v97 + 24) = v128;
          *(_QWORD *)(v97 + 32) = -1073741584LL;
          v48 = WdLogEvent5_WdError(v97);
          return 3221225712LL;
        }
        if ( !v126 )
        {
          v98 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v98 + 24) = v128;
          *(_QWORD *)(v98 + 32) = -1073741585LL;
          v49 = WdLogEvent5_WdError(v98);
          return 3221225711LL;
        }
        for ( i = 0; i < v126; ++i )
        {
          v123 = (_QWORD *)((char *)a2 + 200 * i);
          if ( (*v123 & 0x7FF30FFFFFFFFFFFLL) != 0 )
          {
            v117 = WdLogNewEntry5_WdError(0x7FF30FFFFFFFFFFFLL, v10, v12);
            *(_QWORD *)(v117 + 24) = i;
            v50 = WdLogEvent5_WdError(v117);
            return 3221225714LL;
          }
        }
      }
      else
      {
        if ( a2 )
        {
          v99 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v99 + 24) = v128;
          *(_QWORD *)(v99 + 32) = -1073741584LL;
          v51 = WdLogEvent5_WdError(v99);
          return 3221225712LL;
        }
        if ( v126 )
        {
          v100 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v100 + 24) = v128;
          *(_QWORD *)(v100 + 32) = -1073741585LL;
          v52 = WdLogEvent5_WdError(v100);
          return 3221225711LL;
        }
      }
    }
    else
    {
      if ( (v128 & 0x20) == 0 )
      {
        v101 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v101 + 24) = v128;
        *(_QWORD *)(v101 + 32) = -1073741581LL;
        v53 = WdLogEvent5_WdError(v101);
        return 3221225715LL;
      }
      if ( (v128 & 0x800) != 0 )
      {
        v102 = WdLogNewEntry5_WdError(v11, v10, v12);
        *(_QWORD *)(v102 + 24) = v128;
        *(_QWORD *)(v102 + 32) = -1073741581LL;
        v54 = WdLogEvent5_WdError(v102);
        return 3221225715LL;
      }
      if ( (v128 & 0x10000) == 0 )
      {
        if ( !a2 )
        {
          v103 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v103 + 24) = v128;
          *(_QWORD *)(v103 + 32) = -1073741584LL;
          v55 = WdLogEvent5_WdError(v103);
          return 3221225712LL;
        }
        if ( !v126 )
        {
          v104 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v104 + 24) = v128;
          *(_QWORD *)(v104 + 32) = -1073741585LL;
          v56 = WdLogEvent5_WdError(v104);
          return 3221225711LL;
        }
      }
      if ( v126 )
      {
        v18 = EnforceSDCCloneSourceIndexCoherency(v126, a2);
        if ( v18 < 0 )
        {
          v118 = WdLogNewEntry5_WdError(v14, v13, v15);
          *(_QWORD *)(v118 + 24) = v18;
          v57 = WdLogEvent5_WdError(v118);
          return (unsigned int)v18;
        }
        v22 = 0;
        for ( j = 0; j < v126; ++j )
        {
          v20 = (char *)a2 + 200 * j;
          if ( (*(_QWORD *)v20 & 0x7FD30E6FFF7CF070LL) != 0 )
          {
            v119 = WdLogNewEntry5_WdError(0x7FD30E6FFF7CF070LL, v13, v15);
            *(_QWORD *)(v119 + 24) = *(_QWORD *)v20;
            v58 = WdLogEvent5_WdError(v119);
            return 3221225485LL;
          }
          v16 = 0xFFFFFE7FFF7DF470uLL;
          if ( (*((_QWORD *)v20 + 1) & 0xFFFFFE7FFF7DF470uLL) != 0
            || (v16 = (unsigned __int64)a2 + 200 * j, (*(_QWORD *)v20 & *((_QWORD *)v20 + 1)) != *((_QWORD *)v20 + 1)) )
          {
            v105 = WdLogNewEntry5_WdError(v16, v13, v15);
            *(_QWORD *)(v105 + 24) = *(_QWORD *)v20;
            *(_QWORD *)(v105 + 32) = *((_QWORD *)v20 + 1);
            v59 = WdLogEvent5_WdError(v105);
            return 3221225485LL;
          }
          v14 = 0x8000000000000000uLL;
          if ( *(__int64 *)v20 < 0 )
          {
            if ( (*(_QWORD *)v20 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
            {
              v120 = WdLogNewEntry5_WdError(0x8004700000000000uLL, v13, v15);
              *(_QWORD *)(v120 + 24) = *(_QWORD *)v20;
              v60 = WdLogEvent5_WdError(v120);
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
              v121 = WdLogNewEntry5_WdError(v17, v13, v15);
              *(_QWORD *)(v121 + 24) = TargetVirtualization;
              v61 = WdLogEvent5_WdError(v121);
              return 3221225712LL;
            }
            v14 = 0x8000000000000LL;
            if ( (*(_QWORD *)v20 & 0x8000000000000LL) != 0 )
            {
              v74 = v24[0] == 0;
              v76 = v21 ? 0 : 2;
              v13 = v76 | (unsigned int)v74;
              v14 = v13;
              if ( (unsigned __int8)v20[101] != (_DWORD)v13 )
              {
                v124 = WdLogNewEntry5_WdError(v13, v13, v15);
                v62 = WdLogEvent5_WdError(v124);
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
            for ( k = 0; k < j; ++k )
            {
              v14 = 0x8000000000000000uLL;
              if ( *(__int64 *)v20 < 0 )
              {
                v14 = (__int64)a2;
                v13 = *((unsigned int *)v20 + 39);
                if ( *((_DWORD *)a2 + 50 * k + 39) == (_DWORD)v13 )
                  break;
              }
            }
            if ( k < j )
            {
              v13 = 0x8000000000000LL;
              v14 = *(_QWORD *)v20 & 0x8000000000000LL;
              if ( (*((_QWORD *)a2 + 25 * k) & 0x8000000000000LL) != v14
                || (v14 = (unsigned __int8)v20[101], *((unsigned __int8 *)a2 + 200 * k + 101) != (_DWORD)v14) )
              {
                v79 = (_QWORD *)WdLogNewEntry5_WdError(v14, 0x8000000000000LL, v15);
                v79[3] = k;
                v79[4] = j;
                v79[5] = -1073741582LL;
                v72 = WdLogEvent5_WdError(v79);
                return 3221225714LL;
              }
              if ( v21 )
              {
                v14 = (__int64)a2;
                v13 = *((unsigned int *)v20 + 4);
                if ( *((_DWORD *)a2 + 50 * k + 4) != (_DWORD)v13
                  || (v14 = (__int64)a2, v13 = *((unsigned int *)v20 + 5), *((_DWORD *)a2 + 50 * k + 5) != (_DWORD)v13) )
                {
                  v80 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
                  v80[3] = k;
                  v80[4] = j;
                  v80[5] = -1073741582LL;
                  v63 = WdLogEvent5_WdError(v80);
                  return 3221225714LL;
                }
              }
            }
            if ( (*(_QWORD *)v20 & 0x100LL) != 0 )
            {
              v14 = 0x18000000000LL;
              if ( (*(_QWORD *)v20 & 0x18000000000LL) != 0 )
              {
                v122 = WdLogNewEntry5_WdError(0x18000000000LL, v13, v15);
                *(_QWORD *)(v122 + 24) = j;
                v64 = WdLogEvent5_WdError(v122);
                return 3221225714LL;
              }
            }
            if ( (*(_QWORD *)v20 & 0x87LL) != 0 )
            {
              if ( (*(_QWORD *)v20 & 4LL) != 0 )
              {
                v75 = *((_DWORD *)v20 + 19);
                if ( v75 <= 0 || v75 > 3 )
                {
                  v106 = WdLogNewEntry5_WdError(v14, v13, v15);
                  *(_QWORD *)(v106 + 24) = *((int *)v20 + 19);
                  *(_QWORD *)(v106 + 32) = -1073741582LL;
                  v65 = WdLogEvent5_WdError(v106);
                  return 3221225714LL;
                }
              }
              if ( (*(_QWORD *)v20 & 2LL) != 0 && (!*((_DWORD *)v20 + 12) || !*((_DWORD *)v20 + 13)) )
              {
                v77 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
                v77[3] = *((unsigned int *)v20 + 12);
                v77[4] = *((unsigned int *)v20 + 13);
                v77[5] = j;
                v77[6] = -1073741582LL;
                v66 = WdLogEvent5_WdError(v77);
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
                  v107 = WdLogNewEntry5_WdError(0x1000000000LL, v13, v15);
                  *(_QWORD *)(v107 + 24) = j;
                  *(_QWORD *)(v107 + 32) = -1073741584LL;
                  v67 = WdLogEvent5_WdError(v107);
                  return 3221225712LL;
                }
                if ( (*(_QWORD *)v20 & 0x100LL) == 0 )
                {
                  v108 = WdLogNewEntry5_WdError(0x1000000000LL, v13, v15);
                  *(_QWORD *)(v108 + 24) = j;
                  *(_QWORD *)(v108 + 32) = -1073741584LL;
                  v68 = WdLogEvent5_WdError(v108);
                  return 3221225712LL;
                }
                v14 = *((unsigned int *)v20 + 38);
                if ( *((_DWORD *)v20 + 36) >= (int)v14
                  || (v14 = *((unsigned int *)v20 + 37), *((_DWORD *)v20 + 35) >= (int)v14) )
                {
                  v109 = WdLogNewEntry5_WdError(v14, v13, v15);
                  *(_QWORD *)(v109 + 24) = j;
                  *(_QWORD *)(v109 + 32) = -1073741582LL;
                  v69 = WdLogEvent5_WdError(v109);
                  return 3221225714LL;
                }
                if ( *((int *)v20 + 36) < 0
                  || *((int *)v20 + 35) < 0
                  || (v14 = *((unsigned int *)v20 + 23), *((_DWORD *)v20 + 38) > (unsigned int)v14)
                  || (v14 = *((unsigned int *)v20 + 22), *((_DWORD *)v20 + 37) > (unsigned int)v14) )
                {
                  v110 = WdLogNewEntry5_WdError(v14, v13, v15);
                  *(_QWORD *)(v110 + 24) = j;
                  *(_QWORD *)(v110 + 32) = -1073741582LL;
                  v70 = WdLogEvent5_WdError(v110);
                  return 3221225714LL;
                }
              }
            }
          }
        }
        if ( !v22 )
        {
          v125 = WdLogNewEntry5_WdError(v14, v13, v15);
          v71 = WdLogEvent5_WdError(v125);
          return 3221225485LL;
        }
      }
    }
    return 0LL;
  }
}
