/*
 * XREFs of ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009487C
 * Callers:
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x180094A50 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     ?InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z @ 0x1800942D4 (-InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x18009434C (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x180094654 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     McTemplateU0dddd @ 0x180094AA8 (McTemplateU0dddd.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UpdateTransition(CAnimatedGlassSheet *this, __int64 a2, int a3)
{
  __int64 v3; // rax
  float v5; // xmm6_4
  bool v6; // zf
  float v7; // xmm0_4
  char v8; // al
  float v9; // xmm1_4
  __int64 v10; // rax
  const struct tagRECT *v11; // rdx
  float v12; // xmm3_4
  LONG v13; // eax
  signed int v14; // r8d
  int v15; // edx
  CAnimatedGlassSheet *v16; // rcx
  LONG v17; // eax
  signed int v18; // r8d
  int v19; // edx
  CAnimatedGlassSheet *v20; // rcx
  LONG v21; // eax
  signed int v22; // r8d
  int v23; // edx
  CAnimatedGlassSheet *v24; // rcx
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rax
  char v28; // al
  struct tagRECT v30; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 56);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 72) )
    {
      v5 = *((float *)this + 111);
      v6 = (*(_DWORD *)(v3 + 8))-- == 1;
      v7 = *((float *)this + 111) - 0.0;
      v8 = CDesktopManager::s_fTimelineDirty;
      if ( v6 )
        v8 = 1;
      *((_QWORD *)this + 56) = 0LL;
      CDesktopManager::s_fTimelineDirty = v8;
      v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
      if ( v9 <= 0.0000011920929 && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmGlassSheetFadeOut_End, a3);
    }
    else
    {
      v5 = *(double *)(v3 + 48);
    }
    CVisual::SetOpacity(this, v5);
  }
  v10 = *((_QWORD *)this + 54);
  if ( v10 )
  {
    v11 = (const struct tagRECT *)((char *)this + 416);
    if ( *(_BYTE *)(v10 + 72) )
    {
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, v11);
      v27 = *((_QWORD *)this + 54);
      if ( v27 )
      {
        v6 = (*(_DWORD *)(v27 + 8))-- == 1;
        v28 = CDesktopManager::s_fTimelineDirty;
        if ( v6 )
          v28 = 1;
        *((_QWORD *)this + 54) = 0LL;
        CDesktopManager::s_fTimelineDirty = v28;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0dddd(
          v26,
          v25,
          *((_DWORD *)this + 100),
          *((_DWORD *)this + 101),
          *((_DWORD *)this + 102),
          *((_DWORD *)this + 103));
    }
    else
    {
      v12 = *(double *)(v10 + 48);
      v13 = CAnimatedGlassSheet::InterpolateValueLinear(this, *((_DWORD *)this + 96), v11->left, v12);
      v14 = *((_DWORD *)this + 105);
      v15 = *((_DWORD *)this + 97);
      v30.left = v13;
      v17 = CAnimatedGlassSheet::InterpolateValueLinear(v16, v15, v14, v12);
      v18 = *((_DWORD *)this + 106);
      v19 = *((_DWORD *)this + 98);
      v30.top = v17;
      v21 = CAnimatedGlassSheet::InterpolateValueLinear(v20, v19, v18, v12);
      v22 = *((_DWORD *)this + 107);
      v23 = *((_DWORD *)this + 99);
      v30.right = v21;
      v30.bottom = CAnimatedGlassSheet::InterpolateValueLinear(v24, v23, v22, v12);
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, &v30);
    }
  }
  if ( !*((_QWORD *)this + 54) && !*((_QWORD *)this + 56) )
    CAnimatedGlassSheet::StopAnimation(this);
  return 0LL;
}
