/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001FA90
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180020164 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800203F0 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024918 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180038464 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180039AE4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor_0 @ 0x18004FACA (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  int v2; // eax
  _DWORD *v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  CVisual *v7; // rcx
  __int64 v8; // r8
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
  __int64 v22; // r8
  unsigned int v23; // ebp
  int v24; // ebp
  float v25; // xmm6_4
  int v26; // r15d
  int v27; // edi
  __int64 v28; // r8
  CVisual *v29; // rcx
  int v30; // edi
  __int64 *v31; // rcx
  CVisual *v32; // rcx
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // ebp
  CVisual *v40; // rcx
  __int64 *v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  int v47; // ebp
  CVisual *v48; // rcx
  __int64 *v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rax
  int v53; // esi
  __int64 v54; // r8
  int v55; // eax
  __int64 v56; // rax
  int v57; // eax
  unsigned int v58; // esi
  int v59; // ecx
  _DWORD *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 *v64; // rcx
  __int64 v65; // rax
  void *v66; // [rsp+28h] [rbp-60h]
  int v67[4]; // [rsp+30h] [rbp-58h]
  int v68; // [rsp+90h] [rbp+8h] BYREF
  int v69; // [rsp+94h] [rbp+Ch]
  int v70; // [rsp+98h] [rbp+10h] BYREF
  int v71; // [rsp+9Ch] [rbp+14h]

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
  v8 = *((unsigned int *)this + 148);
  if ( (int)v8 <= 0 )
    v8 = *(unsigned int *)(*((_QWORD *)this + 90) + 96LL);
  if ( (*((_BYTE *)this + 584) & 2) != 0 )
  {
    v9 = 1;
    v8 = (unsigned int)(v8 + 1);
  }
  else
  {
    v9 = 0;
  }
  v10 = *((_BYTE *)this + 240);
  v11 = *((_DWORD *)this + 147);
  v12 = v8 - 1;
  v13 = *(_QWORD *)((char *)this + 4 * (v10 & 4 | 0x9BLL));
  *(_OWORD *)v67 = *(_OWORD *)((char *)this + 4 * (v10 & 4 | 0x9BLL));
  if ( (int)v8 - 1 <= HIDWORD(v13) + 1 )
    v12 = HIDWORD(*(_QWORD *)((char *)this + 4 * (*((_BYTE *)this + 240) & 4 | 0x9BLL))) + 1;
  v68 = v12;
  if ( (v10 & 4) != 0 )
    v14 = v11 + 2;
  else
    v14 = 2 * v11 - v13;
  v15 = 0;
  v16 = *(unsigned int *)(*((_QWORD *)this + 90) + 324LL);
  if ( v9 )
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(53LL, v16, v8);
  }
  else
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, v16, v8) + *(_DWORD *)(*((_QWORD *)this + 90) + 96LL);
    if ( SystemMetricsForDpi >= *((_DWORD *)this + 153) - v67[2] )
      SystemMetricsForDpi = *((_DWORD *)this + 153) - v67[2];
    if ( SystemMetricsForDpi < 0 )
    {
      SystemMetricsForDpi = 0;
      v18 = v67[2];
      v19 = v67[2];
      v20 = v67[2];
      goto LABEL_25;
    }
  }
  v18 = v67[2];
  v19 = v67[2];
  v20 = v67[2];
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
  if ( (int)v18 <= v67[2] )
    v18 = v67[2];
LABEL_27:
  updated = CTopLevelWindow::UpdateNCAreaButton(this, 3LL, (unsigned int)SystemMetricsForDpi, v18, &v68);
  v23 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xC31u, v66);
    return v23;
  }
  v24 = 0;
  v25 = FLOAT_2_1818182;
  if ( *((_QWORD *)this + 62) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
      LOBYTE(v24) = 1;
    if ( (_BYTE)v24 )
      v36 = 53LL;
    else
      v36 = 31LL;
    v37 = GetSystemMetricsForDpi(v36, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL), v22);
    v38 = (int)floor_0((float)((float)v37 * 0.95454544) + 0.5);
    if ( (_BYTE)v24 )
    {
      v39 = v38;
    }
    else
    {
      v38 = (int)floor_0((float)((float)v38 * 2.1818182) + 0.5);
      v39 = SystemMetricsForDpi;
    }
    v40 = (CVisual *)*((_QWORD *)this + 62);
    v70 = v38;
    CVisual::SetInsetFromParentTop(v40, v18);
    v41 = (__int64 *)*((_QWORD *)this + 62);
    v26 = v68;
    if ( *((_DWORD *)v41 + 33) != v68 )
    {
      v61 = *v41;
      *((_DWORD *)v41 + 33) = v68;
      (*(void (__fastcall **)(__int64 *, __int64))(v61 + 24))(v41, 2LL);
      v41 = (__int64 *)*((_QWORD *)this + 62);
    }
    v42 = *v41;
    v71 = v39;
    v43 = (*(__int64 (__fastcall **)(__int64 *, int *))(v42 + 96))(v41, &v70);
    v24 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0xCA0u, v66);
    }
    else
    {
      v26 += *(_DWORD *)(*((_QWORD *)this + 62) + 120LL);
      v68 = v26;
    }
  }
  else
  {
    v26 = v68;
  }
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC32u, v66);
    return (unsigned int)v24;
  }
  v24 = 0;
  if ( *((_QWORD *)this + 61) )
  {
    if ( (*((_BYTE *)this + 584) & 2) != 0 )
      LOBYTE(v24) = 1;
    if ( (_BYTE)v24 )
      v44 = 53LL;
    else
      v44 = 31LL;
    v45 = GetSystemMetricsForDpi(v44, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL), v22);
    v46 = (int)floor_0((float)((float)v45 * 0.95454544) + 0.5);
    if ( (_BYTE)v24 )
    {
      v47 = v46;
    }
    else
    {
      if ( !*((_QWORD *)this + 60) )
        v25 = FLOAT_2_2272727;
      v46 = (int)floor_0((float)((float)v46 * v25) + 0.5);
      v47 = SystemMetricsForDpi;
    }
    v48 = (CVisual *)*((_QWORD *)this + 61);
    v70 = v46;
    CVisual::SetInsetFromParentTop(v48, v18);
    v49 = (__int64 *)*((_QWORD *)this + 61);
    if ( *((_DWORD *)v49 + 33) != v26 )
    {
      v62 = *v49;
      *((_DWORD *)v49 + 33) = v26;
      (*(void (__fastcall **)(__int64 *, __int64))(v62 + 24))(v49, 2LL);
      v49 = (__int64 *)*((_QWORD *)this + 61);
    }
    v50 = *v49;
    v71 = v47;
    v51 = (*(__int64 (__fastcall **)(__int64 *, int *))(v50 + 96))(v49, &v70);
    v24 = v51;
    if ( v51 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0xCA0u, v66);
    else
      v68 = *(_DWORD *)(*((_QWORD *)this + 61) + 120LL) + v26;
  }
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC33u, v66);
    return (unsigned int)v24;
  }
  v27 = CTopLevelWindow::UpdateNCAreaButton(this, 0LL, (unsigned int)SystemMetricsForDpi, v18, &v68);
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xC34u, v66);
    return (unsigned int)v27;
  }
  v29 = (CVisual *)*((_QWORD *)this + 100);
  v30 = v68;
  if ( v29 )
  {
    CVisual::SetInsetFromParentTop(v29, v18);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 100), *((_DWORD *)this + 147));
    v64 = (__int64 *)*((_QWORD *)this + 100);
    if ( *((_DWORD *)v64 + 33) != v30 )
    {
      v65 = *v64;
      *((_DWORD *)v64 + 33) = v30;
      (*(void (__fastcall **)(__int64 *, __int64))(v65 + 24))(v64, 2LL);
    }
  }
  v31 = (__int64 *)*((_QWORD *)this + 65);
  if ( v31 )
  {
    v52 = *((_QWORD *)this + 90);
    if ( *(_QWORD *)(v52 + 136) || (*((_DWORD *)this + 146) & 0x10000) == 0 )
    {
      v53 = GetSystemMetricsForDpi(49LL, *(unsigned int *)(v52 + 324), v28);
      v55 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL), v54);
      v31 = (__int64 *)*((_QWORD *)this + 65);
      v15 = v55;
    }
    else
    {
      v53 = 0;
    }
    v56 = *v31;
    v68 = v53;
    v69 = v15;
    v57 = (*(__int64 (__fastcall **)(__int64 *, int *))(v56 + 96))(v31, &v68);
    v58 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0xC4Cu, v66);
      return v58;
    }
    CVisual::SetInsetFromParentTop(
      *((CVisual **)this + 65),
      v67[2] + (*((_DWORD *)this + 149) - *(_DWORD *)(*((_QWORD *)this + 65) + 124LL) - v67[2]) / 2);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 65), v14);
    v59 = *(_DWORD *)(*((_QWORD *)this + 65) + 120LL);
    if ( v59 > 0 )
      v14 += v59 + 5;
  }
  v32 = (CVisual *)*((_QWORD *)this + 64);
  if ( v32 )
  {
    CVisual::SetInsetFromParentTop(v32, v67[2]);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 64), v14);
    v60 = (_DWORD *)*((_QWORD *)this + 64);
    if ( v60[33] != v30 )
    {
      v63 = *(_QWORD *)v60;
      v60[33] = v30;
      (*(void (__fastcall **)(_DWORD *, __int64))(v63 + 24))(v60, 2LL);
      v60 = (_DWORD *)*((_QWORD *)this + 64);
    }
    v68 = v60[30];
    v69 = *((_DWORD *)this + 149) - v67[2];
    v27 = (*(__int64 (__fastcall **)(_DWORD *, int *))(*(_QWORD *)v60 + 96LL))(v60, &v68);
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xC60u, v66);
      return (unsigned int)v27;
    }
  }
  v33 = CTopLevelWindow::UpdatePinnedParts(this);
  v34 = v33;
  if ( v33 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xC63u, v66);
  return v34;
}
