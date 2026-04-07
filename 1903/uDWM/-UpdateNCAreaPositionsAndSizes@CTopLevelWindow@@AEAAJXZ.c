/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x1800204E0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180020BB4 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800211E0 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024F58 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180039334 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003A444 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor_0 @ 0x18004FD7A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
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
  char v9; // bp
  char v10; // dl
  int v11; // r14d
  int v12; // eax
  __int64 v13; // r9
  int v14; // r14d
  int v15; // r13d
  __int64 v16; // rdx
  int SystemMetricsForDpi; // edi
  unsigned int v18; // esi
  int v19; // ecx
  int v20; // eax
  int updated; // eax
  unsigned int v22; // ebp
  int v23; // ebp
  float v24; // xmm6_4
  int v25; // r15d
  int v26; // edi
  CVisual *v27; // rcx
  int v28; // edi
  __int64 *v29; // rcx
  CVisual *v30; // rcx
  int v31; // eax
  unsigned int v32; // ebx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // ebp
  CVisual *v38; // rcx
  __int64 *v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  int v44; // eax
  int v45; // ebp
  CVisual *v46; // rcx
  __int64 *v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rax
  int v51; // esi
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  unsigned int v55; // esi
  int v56; // ecx
  _DWORD *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 *v61; // rcx
  __int64 v62; // rax
  void *v63; // [rsp+28h] [rbp-60h]
  int v64[4]; // [rsp+30h] [rbp-58h]
  int v65; // [rsp+90h] [rbp+8h] BYREF
  int v66; // [rsp+94h] [rbp+Ch]
  int v67; // [rsp+98h] [rbp+10h] BYREF
  int v68; // [rsp+9Ch] [rbp+14h]

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
  v10 = *((_BYTE *)this + 240);
  v11 = *((_DWORD *)this + 147);
  v12 = v8 - 1;
  v13 = *(_QWORD *)((char *)this + 4 * (v10 & 4 | 0x9BLL));
  *(_OWORD *)v64 = *(_OWORD *)((char *)this + 4 * (v10 & 4 | 0x9BLL));
  if ( v8 - 1 <= HIDWORD(v13) + 1 )
    v12 = HIDWORD(*(_QWORD *)((char *)this + 4 * (*((_BYTE *)this + 240) & 4 | 0x9BLL))) + 1;
  v65 = v12;
  if ( (v10 & 4) != 0 )
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
    if ( SystemMetricsForDpi >= *((_DWORD *)this + 153) - v64[2] )
      SystemMetricsForDpi = *((_DWORD *)this + 153) - v64[2];
    if ( SystemMetricsForDpi < 0 )
    {
      SystemMetricsForDpi = 0;
      v18 = v64[2];
      v19 = v64[2];
      v20 = v64[2];
      goto LABEL_25;
    }
  }
  v18 = v64[2];
  v19 = v64[2];
  v20 = v64[2];
  if ( !v9 )
  {
LABEL_25:
    if ( (*((_BYTE *)this + 240) & 4) != 0 && (v19 = v20, *((_DWORD *)this + 161) > *((_DWORD *)this + 157)) )
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
  if ( (int)v18 <= v64[2] )
    v18 = v64[2];
LABEL_27:
  updated = CTopLevelWindow::UpdateNCAreaButton(this, 3LL, (unsigned int)SystemMetricsForDpi, v18, &v65);
  v22 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xC33u, v63);
    return v22;
  }
  v23 = 0;
  v24 = FLOAT_2_1818182;
  if ( *((_QWORD *)this + 62) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
      LOBYTE(v23) = 1;
    if ( (_BYTE)v23 )
      v34 = 53LL;
    else
      v34 = 31LL;
    v35 = GetSystemMetricsForDpi(v34, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
    v36 = (int)floor_0((float)((float)v35 * 0.95454544) + 0.5);
    if ( (_BYTE)v23 )
    {
      v37 = v36;
    }
    else
    {
      v36 = (int)floor_0((float)((float)v36 * 2.1818182) + 0.5);
      v37 = SystemMetricsForDpi;
    }
    v38 = (CVisual *)*((_QWORD *)this + 62);
    v67 = v36;
    CVisual::SetInsetFromParentTop(v38, v18);
    v39 = (__int64 *)*((_QWORD *)this + 62);
    v25 = v65;
    if ( *((_DWORD *)v39 + 33) != v65 )
    {
      v58 = *v39;
      *((_DWORD *)v39 + 33) = v65;
      (*(void (__fastcall **)(__int64 *, __int64))(v58 + 24))(v39, 2LL);
      v39 = (__int64 *)*((_QWORD *)this + 62);
    }
    v40 = *v39;
    v68 = v37;
    v41 = (*(__int64 (__fastcall **)(__int64 *, int *))(v40 + 96))(v39, &v67);
    v23 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xCA2u, v63);
    }
    else
    {
      v25 += *(_DWORD *)(*((_QWORD *)this + 62) + 120LL);
      v65 = v25;
    }
  }
  else
  {
    v25 = v65;
  }
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC34u, v63);
    return (unsigned int)v23;
  }
  v23 = 0;
  if ( *((_QWORD *)this + 61) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
      LOBYTE(v23) = 1;
    if ( (_BYTE)v23 )
      v42 = 53LL;
    else
      v42 = 31LL;
    v43 = GetSystemMetricsForDpi(v42, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
    v44 = (int)floor_0((float)((float)v43 * 0.95454544) + 0.5);
    if ( (_BYTE)v23 )
    {
      v45 = v44;
    }
    else
    {
      if ( !*((_QWORD *)this + 60) )
        v24 = FLOAT_2_2272727;
      v44 = (int)floor_0((float)((float)v44 * v24) + 0.5);
      v45 = SystemMetricsForDpi;
    }
    v46 = (CVisual *)*((_QWORD *)this + 61);
    v67 = v44;
    CVisual::SetInsetFromParentTop(v46, v18);
    v47 = (__int64 *)*((_QWORD *)this + 61);
    if ( *((_DWORD *)v47 + 33) != v25 )
    {
      v59 = *v47;
      *((_DWORD *)v47 + 33) = v25;
      (*(void (__fastcall **)(__int64 *, __int64))(v59 + 24))(v47, 2LL);
      v47 = (__int64 *)*((_QWORD *)this + 61);
    }
    v48 = *v47;
    v68 = v45;
    v49 = (*(__int64 (__fastcall **)(__int64 *, int *))(v48 + 96))(v47, &v67);
    v23 = v49;
    if ( v49 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0xCA2u, v63);
    else
      v65 = *(_DWORD *)(*((_QWORD *)this + 61) + 120LL) + v25;
  }
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC35u, v63);
    return (unsigned int)v23;
  }
  v26 = CTopLevelWindow::UpdateNCAreaButton(this, 0LL, (unsigned int)SystemMetricsForDpi, v18, &v65);
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC36u, v63);
    return (unsigned int)v26;
  }
  v27 = (CVisual *)*((_QWORD *)this + 100);
  v28 = v65;
  if ( v27 )
  {
    CVisual::SetInsetFromParentTop(v27, v18);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 100), *((_DWORD *)this + 147));
    v61 = (__int64 *)*((_QWORD *)this + 100);
    if ( *((_DWORD *)v61 + 33) != v28 )
    {
      v62 = *v61;
      *((_DWORD *)v61 + 33) = v28;
      (*(void (__fastcall **)(__int64 *, __int64))(v62 + 24))(v61, 2LL);
    }
  }
  v29 = (__int64 *)*((_QWORD *)this + 65);
  if ( v29 )
  {
    v50 = *((_QWORD *)this + 90);
    if ( *(_QWORD *)(v50 + 136) || (*((_DWORD *)this + 146) & 0x10000) == 0 )
    {
      v51 = GetSystemMetricsForDpi(49LL, *(unsigned int *)(v50 + 324));
      v52 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
      v29 = (__int64 *)*((_QWORD *)this + 65);
      v15 = v52;
    }
    else
    {
      v51 = 0;
    }
    v53 = *v29;
    v65 = v51;
    v66 = v15;
    v54 = (*(__int64 (__fastcall **)(__int64 *, int *))(v53 + 96))(v29, &v65);
    v55 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0xC4Eu, v63);
      return v55;
    }
    CVisual::SetInsetFromParentTop(
      *((CVisual **)this + 65),
      v64[2] + (*((_DWORD *)this + 149) - *(_DWORD *)(*((_QWORD *)this + 65) + 124LL) - v64[2]) / 2);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 65), v14);
    v56 = *(_DWORD *)(*((_QWORD *)this + 65) + 120LL);
    if ( v56 > 0 )
      v14 += v56 + 5;
  }
  v30 = (CVisual *)*((_QWORD *)this + 64);
  if ( v30 )
  {
    CVisual::SetInsetFromParentTop(v30, v64[2]);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 64), v14);
    v57 = (_DWORD *)*((_QWORD *)this + 64);
    if ( v57[33] != v28 )
    {
      v60 = *(_QWORD *)v57;
      v57[33] = v28;
      (*(void (__fastcall **)(_DWORD *, __int64))(v60 + 24))(v57, 2LL);
      v57 = (_DWORD *)*((_QWORD *)this + 64);
    }
    v65 = v57[30];
    v66 = *((_DWORD *)this + 149) - v64[2];
    v26 = (*(__int64 (__fastcall **)(_DWORD *, int *))(*(_QWORD *)v57 + 96LL))(v57, &v65);
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC62u, v63);
      return (unsigned int)v26;
    }
  }
  v31 = CTopLevelWindow::UpdatePinnedParts(this);
  v32 = v31;
  if ( v31 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xC65u, v63);
  return v32;
}
