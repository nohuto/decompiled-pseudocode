/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180019E60
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18001A620 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002665C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18003899C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180039A60 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004E25A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  int v2; // eax
  _DWORD *v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  CVisual *v7; // rcx
  int v8; // r8d
  char v9; // si
  int v10; // r12d
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r14d
  int v15; // ebp
  __int64 v16; // rdx
  int SystemMetricsForDpi; // edi
  int v18; // r15d
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // esi
  float v23; // xmm6_4
  CVisual *v24; // rcx
  __int64 *v25; // rcx
  CVisual *v26; // rcx
  int updated; // eax
  unsigned int v28; // ebx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  float v33; // xmm1_4
  int v34; // esi
  CVisual *v35; // rcx
  __int64 *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // esi
  CVisual *v43; // rcx
  __int64 *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  int v50; // esi
  CVisual *v51; // rcx
  __int64 *v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rax
  int v56; // edi
  int v57; // eax
  __int64 v58; // rax
  int v59; // edi
  int v60; // ecx
  _DWORD *v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // esi
  int v68; // eax
  double v69; // xmm0_8
  int v70; // esi
  __int64 *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // eax
  __int64 *v75; // rcx
  __int64 v76; // rax
  int v77[4]; // [rsp+30h] [rbp-48h]
  int v78; // [rsp+80h] [rbp+8h] BYREF
  int v79; // [rsp+84h] [rbp+Ch]

  if ( *((_QWORD *)this + 59) )
  {
    v2 = *((_DWORD *)this + 147);
    v3 = (_DWORD *)*((_QWORD *)this + 67);
    if ( v3[32] != v2 )
    {
      v3[32] = v2;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
      v3 = (_DWORD *)*((_QWORD *)this + 67);
    }
    v4 = *((_DWORD *)this + 149);
    if ( v3[34] != v4 )
    {
      v3[34] = v4;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
      v3 = (_DWORD *)*((_QWORD *)this + 67);
    }
    v5 = *((_DWORD *)this + 148);
    if ( v3[33] != v5 )
    {
      v3[33] = v5;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
      v3 = (_DWORD *)*((_QWORD *)this + 67);
    }
    v6 = *((_DWORD *)this + 150);
    if ( v3[35] != v6 )
    {
      v3[35] = v6;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
    }
    v7 = (CVisual *)*((_QWORD *)this + 36);
    if ( v7 )
      CVisual::SetInsetFromParent(v7, (const struct _MARGINS *)(*((_QWORD *)this + 67) + 128LL));
  }
  v8 = *((_DWORD *)this + 148);
  if ( v8 <= 0 )
    v8 = *(_DWORD *)(*((_QWORD *)this + 90) + 96LL);
  if ( (*((_BYTE *)this + 584) & 2) != 0 )
  {
    v9 = 1;
    ++v8;
  }
  else
  {
    v9 = 0;
  }
  v10 = v8 - 1;
  v11 = *((_DWORD *)this + 147);
  v12 = *((_BYTE *)this + 240) & 8 | 0x136LL;
  v13 = *(_QWORD *)((char *)this + 2 * v12);
  *(_OWORD *)v77 = *(_OWORD *)((char *)this + 2 * v12);
  if ( v8 - 1 <= HIDWORD(v13) + 1 )
    v10 = HIDWORD(*(_QWORD *)((char *)this + 2 * v12)) + 1;
  if ( (*((_BYTE *)this + 240) & 8) != 0 )
    v14 = v11 + 2;
  else
    v14 = 2 * v11 - v13;
  v15 = 0;
  v16 = *(unsigned int *)(*((_QWORD *)this + 90) + 324LL);
  if ( v9 )
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(53LL, v16);
  }
  else
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, v16) + *(_DWORD *)(*((_QWORD *)this + 90) + 96LL);
    if ( SystemMetricsForDpi >= *((_DWORD *)this + 153) - v77[2] )
      SystemMetricsForDpi = *((_DWORD *)this + 153) - v77[2];
    if ( SystemMetricsForDpi < 0 )
    {
      SystemMetricsForDpi = 0;
      v18 = v77[2];
      v19 = v77[2];
      v20 = v77[2];
      goto LABEL_25;
    }
  }
  v18 = v77[2];
  v19 = v77[2];
  v20 = v77[2];
  if ( !v9 )
  {
LABEL_25:
    if ( (*((_BYTE *)this + 240) & 8) != 0 && (v19 = v20, *((_DWORD *)this + 161) > *((_DWORD *)this + 157)) )
    {
      if ( --SystemMetricsForDpi < 0 )
        SystemMetricsForDpi = 0;
    }
    else
    {
      v18 = v19 + 1;
    }
    goto LABEL_27;
  }
  v18 = *((_DWORD *)this + 149) - SystemMetricsForDpi - 2;
  if ( v18 <= v77[2] )
    v18 = v77[2];
LABEL_27:
  v21 = 0;
  if ( *((_QWORD *)this + 63) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
      LOBYTE(v21) = 1;
    if ( (_BYTE)v21 )
      v30 = 53LL;
    else
      v30 = 31LL;
    v31 = GetSystemMetricsForDpi(v30, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
    v32 = (int)floor_0((float)((float)v31 * 0.95454544) + 0.5);
    if ( (_BYTE)v21 )
    {
      v34 = v32;
    }
    else
    {
      if ( (*((_DWORD *)this + 146) & 0xB00) != 0 )
        v33 = FLOAT_2_2272727;
      else
        v33 = FLOAT_1_6363636;
      v32 = (int)floor_0((float)((float)v32 * v33) + 0.5);
      v34 = SystemMetricsForDpi;
    }
    v35 = (CVisual *)*((_QWORD *)this + 63);
    v78 = v32;
    CVisual::SetInsetFromParentTop(v35, v18);
    v36 = (__int64 *)*((_QWORD *)this + 63);
    if ( *((_DWORD *)v36 + 33) != v10 )
    {
      v62 = *v36;
      *((_DWORD *)v36 + 33) = v10;
      (*(void (__fastcall **)(__int64 *, __int64))(v62 + 24))(v36, 2LL);
      v36 = (__int64 *)*((_QWORD *)this + 63);
    }
    v37 = *v36;
    v79 = v34;
    v38 = (*(__int64 (__fastcall **)(__int64 *, int *))(v37 + 96))(v36, &v78);
    v21 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xCB2u);
    else
      v10 += *(_DWORD *)(*((_QWORD *)this + 63) + 120LL);
  }
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC43u);
    return (unsigned int)v21;
  }
  v22 = 0;
  v23 = FLOAT_2_1818182;
  if ( *((_QWORD *)this + 62) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
      LOBYTE(v22) = 1;
    if ( (_BYTE)v22 )
      v39 = 53LL;
    else
      v39 = 31LL;
    v40 = GetSystemMetricsForDpi(v39, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
    v41 = (int)floor_0((float)((float)v40 * 0.95454544) + 0.5);
    if ( (_BYTE)v22 )
    {
      v42 = v41;
    }
    else
    {
      v41 = (int)floor_0((float)((float)v41 * 2.1818182) + 0.5);
      v42 = SystemMetricsForDpi;
    }
    v43 = (CVisual *)*((_QWORD *)this + 62);
    v78 = v41;
    CVisual::SetInsetFromParentTop(v43, v18);
    v44 = (__int64 *)*((_QWORD *)this + 62);
    if ( *((_DWORD *)v44 + 33) != v10 )
    {
      v63 = *v44;
      *((_DWORD *)v44 + 33) = v10;
      (*(void (__fastcall **)(__int64 *, __int64))(v63 + 24))(v44, 2LL);
      v44 = (__int64 *)*((_QWORD *)this + 62);
    }
    v45 = *v44;
    v79 = v42;
    v46 = (*(__int64 (__fastcall **)(__int64 *, int *))(v45 + 96))(v44, &v78);
    v22 = v46;
    if ( v46 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xCB2u);
    else
      v10 += *(_DWORD *)(*((_QWORD *)this + 62) + 120LL);
  }
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC44u);
    return (unsigned int)v22;
  }
  v22 = 0;
  if ( *((_QWORD *)this + 61) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
      LOBYTE(v22) = 1;
    if ( (_BYTE)v22 )
      v47 = 53LL;
    else
      v47 = 31LL;
    v48 = GetSystemMetricsForDpi(v47, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
    v49 = (int)floor_0((float)((float)v48 * 0.95454544) + 0.5);
    if ( (_BYTE)v22 )
    {
      v50 = v49;
    }
    else
    {
      if ( !*((_QWORD *)this + 60) )
        v23 = FLOAT_2_2272727;
      v49 = (int)floor_0((float)((float)v49 * v23) + 0.5);
      v50 = SystemMetricsForDpi;
    }
    v51 = (CVisual *)*((_QWORD *)this + 61);
    v78 = v49;
    CVisual::SetInsetFromParentTop(v51, v18);
    v52 = (__int64 *)*((_QWORD *)this + 61);
    if ( *((_DWORD *)v52 + 33) != v10 )
    {
      v64 = *v52;
      *((_DWORD *)v52 + 33) = v10;
      (*(void (__fastcall **)(__int64 *, __int64))(v64 + 24))(v52, 2LL);
      v52 = (__int64 *)*((_QWORD *)this + 61);
    }
    v53 = *v52;
    v79 = v50;
    v54 = (*(__int64 (__fastcall **)(__int64 *, int *))(v53 + 96))(v52, &v78);
    v22 = v54;
    if ( v54 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0xCB2u);
    else
      v10 += *(_DWORD *)(*((_QWORD *)this + 61) + 120LL);
  }
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC45u);
    return (unsigned int)v22;
  }
  v22 = 0;
  if ( *((_QWORD *)this + 60) )
  {
    v66 = 53LL;
    v67 = *((_DWORD *)this + 146) & 2;
    if ( !v67 )
      v66 = 31LL;
    v68 = GetSystemMetricsForDpi(v66, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
    v69 = floor_0((float)((float)v68 * 0.95454544) + 0.5);
    if ( v67 )
    {
      v70 = (int)v69;
      SystemMetricsForDpi = (int)v69;
    }
    else
    {
      v70 = (int)floor_0((float)((float)(int)v69 * 2.2272727) + 0.5);
    }
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 60), v18);
    v71 = (__int64 *)*((_QWORD *)this + 60);
    if ( *((_DWORD *)v71 + 33) != v10 )
    {
      v72 = *v71;
      *((_DWORD *)v71 + 33) = v10;
      (*(void (__fastcall **)(__int64 *, __int64))(v72 + 24))(v71, 2LL);
      v71 = (__int64 *)*((_QWORD *)this + 60);
    }
    v73 = *v71;
    v78 = v70;
    v79 = SystemMetricsForDpi;
    v74 = (*(__int64 (__fastcall **)(__int64 *, int *))(v73 + 96))(v71, &v78);
    v22 = v74;
    if ( v74 >= 0 )
      v10 += *(_DWORD *)(*((_QWORD *)this + 60) + 120LL);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0xCB2u);
  }
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC46u);
    return (unsigned int)v22;
  }
  v24 = (CVisual *)*((_QWORD *)this + 100);
  if ( v24 )
  {
    CVisual::SetInsetFromParentTop(v24, v18);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 100), *((_DWORD *)this + 147));
    v75 = (__int64 *)*((_QWORD *)this + 100);
    if ( *((_DWORD *)v75 + 33) != v10 )
    {
      v76 = *v75;
      *((_DWORD *)v75 + 33) = v10;
      (*(void (__fastcall **)(__int64 *, __int64))(v76 + 24))(v75, 2LL);
    }
  }
  v25 = (__int64 *)*((_QWORD *)this + 65);
  if ( v25 )
  {
    v55 = *((_QWORD *)this + 90);
    if ( *(_QWORD *)(v55 + 136) || (*((_DWORD *)this + 146) & 0x10000) == 0 )
    {
      v56 = GetSystemMetricsForDpi(49LL, *(unsigned int *)(v55 + 324));
      v57 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
      v25 = (__int64 *)*((_QWORD *)this + 65);
      v15 = v57;
    }
    else
    {
      v56 = 0;
    }
    v58 = *v25;
    v78 = v56;
    v79 = v15;
    v59 = (*(__int64 (__fastcall **)(__int64 *, int *))(v58 + 96))(v25, &v78);
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xC5Eu);
      return (unsigned int)v59;
    }
    CVisual::SetInsetFromParentTop(
      *((CVisual **)this + 65),
      (*((_DWORD *)this + 149) - *(_DWORD *)(*((_QWORD *)this + 65) + 124LL) - v77[2]) / 2 + v77[2]);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 65), v14);
    v60 = *(_DWORD *)(*((_QWORD *)this + 65) + 120LL);
    if ( v60 > 0 )
      v14 += v60 + 5;
  }
  v26 = (CVisual *)*((_QWORD *)this + 64);
  if ( v26 )
  {
    CVisual::SetInsetFromParentTop(v26, v77[2]);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 64), v14);
    v61 = (_DWORD *)*((_QWORD *)this + 64);
    if ( v61[33] != v10 )
    {
      v65 = *(_QWORD *)v61;
      v61[33] = v10;
      (*(void (__fastcall **)(_DWORD *, __int64))(v65 + 24))(v61, 2LL);
      v61 = (_DWORD *)*((_QWORD *)this + 64);
    }
    v78 = v61[30];
    v79 = *((_DWORD *)this + 149) - v77[2];
    v59 = (*(__int64 (__fastcall **)(_DWORD *, int *))(*(_QWORD *)v61 + 96LL))(v61, &v78);
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xC72u);
      return (unsigned int)v59;
    }
  }
  updated = CTopLevelWindow::UpdatePinnedParts(this);
  v28 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xC75u);
  return v28;
}
