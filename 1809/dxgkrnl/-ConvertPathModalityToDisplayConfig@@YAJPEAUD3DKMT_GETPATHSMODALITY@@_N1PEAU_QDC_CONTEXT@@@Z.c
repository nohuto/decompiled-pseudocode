/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00BEE90
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C7320 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0239304 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C023B7E0 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000F638 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00BD370 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00BD404 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00BD660 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00BD6F8 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        __int64 a2,
        __int64 a3,
        struct _QDC_CONTEXT *a4)
{
  __int64 *v4; // rdi
  __int64 v5; // r10
  __int64 v7; // rcx
  struct _QDC_CONTEXT *v8; // r14
  char v9; // r12
  __int64 v10; // rbp
  unsigned __int16 v11; // dx
  char v12; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v13; // r8
  bool v14; // al
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned int v17; // r13d
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // rcx
  int v34; // eax
  int v35; // edx
  int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  int v40; // eax
  __int64 v41; // rax
  bool v42; // al
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // [rsp+68h] [rbp+10h]

  v48 = a2;
  v4 = (__int64 *)*((_QWORD *)a4 + 1);
  v5 = 0LL;
  v7 = *((unsigned int *)a4 + 1);
  v8 = a4;
  v9 = a3;
  v10 = 1LL;
  if ( (_BYTE)a3 )
  {
    if ( (_DWORD)v7 )
      goto LABEL_3;
LABEL_57:
    v41 = WdLogNewEntry5_WdWarning(v7, a2, a3);
    *(_QWORD *)(v41 + 24) = *((unsigned int *)v8 + 1);
    if ( !v9 )
      v10 = *((unsigned __int16 *)a1 + 10);
    *(_QWORD *)(v41 + 32) = v10;
    WdLogEvent5_WdWarning(v41);
    return 3221225507LL;
  }
  if ( (unsigned int)v7 < *((unsigned __int16 *)a1 + 10) )
    goto LABEL_57;
LABEL_3:
  v11 = *((_WORD *)a1 + 10);
  v12 = 0;
  if ( v11 )
  {
    v13 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + 136);
    do
    {
      v14 = IsInternalVideoOutput(*v13);
      v13 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v16 + 272);
      if ( v14 )
        v12 = 1;
    }
    while ( v15 != 1 );
  }
  v17 = v5;
  if ( (unsigned __int16)v5 < v11 )
  {
    v18 = 0x100000000000LL;
    while ( 1 )
    {
      v19 = 272LL * v17;
      if ( !v9
        || !v12
        || (v42 = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + v19 + 136))) )
      {
        *v4 = v5;
        v20 = v5;
        v4[1] = v5;
        v21 = *(_QWORD *)((char *)a1 + v19 + 48);
        if ( (v21 & v18) == 0 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v43 + 24) = 1064LL;
          WdLogEvent5_WdAssertion(v43);
          v21 = *(_QWORD *)((char *)a1 + v19 + 48);
          v18 = 0x100000000000LL;
          v20 = *v4;
        }
        v22 = v20 | v18 & v21;
        *v4 = v22;
        v4[2] = *(_QWORD *)((char *)a1 + v19 + 64);
        v23 = *(_QWORD *)((char *)a1 + v19 + 48);
        if ( (v23 & 0x200000000000LL) == 0 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v44 + 24) = 1068LL;
          WdLogEvent5_WdAssertion(v44);
          v23 = *(_QWORD *)((char *)a1 + v19 + 48);
          v22 = *v4;
        }
        v24 = v22 | v23 & 0x200000000000LL;
        *v4 = v24;
        *((_DWORD *)v4 + 6) = *(_DWORD *)((char *)a1 + v19 + 72);
        v25 = v24 | *(_QWORD *)((_BYTE *)a1 + v19 + 48) & 0x4000000000000000LL;
        *v4 = v25;
        v26 = *(_QWORD *)((char *)a1 + v19 + 48);
        if ( (v26 & 0x400000000000LL) == 0 )
        {
          v45 = WdLogNewEntry5_WdAssertion(0x400000000000LL);
          *(_QWORD *)(v45 + 24) = 1074LL;
          WdLogEvent5_WdAssertion(v45);
          v26 = *(_QWORD *)((char *)a1 + v19 + 48);
          v25 = *v4;
        }
        v27 = v25 | v26 & 0x400000000000LL;
        *v4 = v27;
        *((_DWORD *)v4 + 7) = *(_DWORD *)((char *)a1 + v19 + 76);
        v28 = *(_QWORD *)((char *)a1 + v19 + 48);
        if ( (v28 & 0x800000000000LL) == 0 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v46 + 24) = 1078LL;
          WdLogEvent5_WdAssertion(v46);
          v28 = *(_QWORD *)((char *)a1 + v19 + 48);
          v27 = *v4;
        }
        v29 = v27 | v28 & 0x800000000000LL;
        *v4 = v29;
        *((_DWORD *)v4 + 20) = *(_DWORD *)((char *)a1 + v19 + 136);
        *((_DWORD *)v4 + 21) = *(_DWORD *)((char *)a1 + v19 + 140);
        *((_DWORD *)v4 + 47) = *(_DWORD *)((char *)a1 + v19 + 260);
        v30 = *(_QWORD *)((char *)a1 + v19 + 48);
        if ( (v30 & 0x4000000000000LL) != 0 )
        {
          v31 = v29 | *(_QWORD *)((_BYTE *)a1 + v19 + 48) & 0x4000000000000LL;
          *v4 = v31;
          v29 = v31;
          *((_DWORD *)v4 + 39) = *(_DWORD *)((char *)a1 + v19 + 232);
          v4[21] = *(_QWORD *)((char *)a1 + v19 + 244);
          v30 = *(_QWORD *)((char *)a1 + v19 + 48);
        }
        if ( (v30 & 0x8000000000000LL) == 0 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v47 + 24) = 1091LL;
          WdLogEvent5_WdAssertion(v47);
          v30 = *(_QWORD *)((char *)a1 + v19 + 48);
          v29 = *v4;
        }
        v32 = v29 | v30 & 0x8000000000000LL;
        *v4 = v32;
        *((_BYTE *)v4 + 101) = *((_BYTE *)a1 + v19 + 177);
        v33 = *(_QWORD *)((char *)a1 + v19 + 48);
        if ( (v33 & 0x87) != 0 )
        {
          *v4 = v32 | *(_QWORD *)((_BYTE *)a1 + v19 + 48) & 0x87LL;
          DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)a1 + v19 + 80, (__int64)(v4 + 4));
          v33 = *(_QWORD *)((char *)a1 + v19 + 48);
          v32 = *v4;
        }
        if ( (v33 & 0x200) != 0 )
        {
          *v4 = v32 | 0x200;
          v34 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)((char *)a1 + v19 + 180));
          v35 = 1;
          if ( (unsigned int)(v34 - 1) <= 3 )
            v35 = v34;
          *((_DWORD *)v4 + 26) = v35;
          v33 = *(_QWORD *)((char *)a1 + v19 + 48);
        }
        if ( (v33 & 0x10000) != 0 )
        {
          *v4 = v32 | 0x10000;
          v40 = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v19 + 188));
          v32 = *v4;
          *((_DWORD *)v4 + 28) = v40;
          v33 = *(_QWORD *)((char *)a1 + v19 + 48);
        }
        if ( (v33 & 0x40000000000LL) != 0 )
        {
          *v4 = v32 | 0x40000000000LL;
          v36 = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v19 + 184));
          v32 = *v4;
          *((_DWORD *)v4 + 27) = v36;
          v33 = *(_QWORD *)((char *)a1 + v19 + 48);
        }
        if ( (v33 & 0x800) != 0 )
        {
          v32 |= 0x800uLL;
          *v4 = v32;
          *(__int64 *)((char *)v4 + 116) = *(_QWORD *)((char *)a1 + v19 + 192);
          v33 = *(_QWORD *)((char *)a1 + v19 + 48);
        }
        if ( (v33 & 0x1000000000000LL) != 0 )
        {
          v32 |= 0x1000000000000uLL;
          *v4 = v32;
          *((_DWORD *)v4 + 48) = *(_DWORD *)((char *)a1 + v19 + 264);
          v33 = *(_QWORD *)((char *)a1 + v19 + 48);
        }
        v37 = v32 | v33 & 0xBF00001000000000uLL;
        v5 = 0LL;
        *v4 = v37;
        if ( v48 || *(__int64 *)((char *)a1 + v19 + 48) < 0 )
        {
          v37 |= 0x8000000000000000uLL;
          *v4 = v37;
        }
        v38 = *(_QWORD *)((char *)a1 + v19 + 48);
        if ( (v38 & 0x20000) != 0 )
        {
          v37 |= 0x20000uLL;
          *v4 = v37;
          *(__int64 *)((char *)v4 + 124) = *(_QWORD *)((char *)a1 + v19 + 200);
          v38 = *(_QWORD *)((char *)a1 + v19 + 48);
        }
        if ( (v38 & 0x100) != 0 )
        {
          v37 |= 0x100uLL;
          *v4 = v37;
          *((_DWORD *)v4 + 22) = *(_DWORD *)((char *)a1 + v19 + 144);
          *((_DWORD *)v4 + 23) = *(_DWORD *)((char *)a1 + v19 + 148);
          *((_DWORD *)v4 + 24) = *(_DWORD *)((char *)a1 + v19 + 164);
          *((_BYTE *)v4 + 100) = *((_BYTE *)a1 + v19 + 176);
          v38 = *(_QWORD *)((char *)a1 + v19 + 48);
        }
        if ( (v38 & 0x800000) != 0 )
        {
          v37 |= 0x800000uLL;
          *v4 = v37;
          *(_OWORD *)((char *)v4 + 140) = *(_OWORD *)((char *)a1 + v19 + 216);
          v38 = *(_QWORD *)((char *)a1 + v19 + 48);
        }
        if ( (v38 & 8) != 0 )
        {
          *v4 = v37 | 8;
          *((_DWORD *)v4 + 45) = GetColorDepthFromPickedWireFormat(*(unsigned int *)((char *)a1 + v19 + 252));
          *((_DWORD *)v4 + 44) = ConvertDmmToDisplayConfigColorEncoding(*(_DWORD *)((char *)a1 + v19 + 252));
          v5 = 0LL;
          *((_DWORD *)v4 + 46) = *(_DWORD *)((char *)a1 + v19 + 256);
        }
        *((_DWORD *)v4 + 40) = *(_DWORD *)((char *)a1 + v19 + 236);
        *((_DWORD *)v4 + 41) = *(_DWORD *)((char *)a1 + v19 + 240);
        v4 += 25;
        if ( v9 )
        {
LABEL_51:
          v8 = a4;
          break;
        }
        v18 = 0x100000000000LL;
      }
      if ( ++v17 >= *((unsigned __int16 *)a1 + 10) )
        goto LABEL_51;
    }
  }
  *((_QWORD *)v8 + 2) = v4;
  return 0LL;
}
