/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180029834
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180025480 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001449C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002662C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180027DBC (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18008CC54 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  _DWORD *v4; // rcx
  LONG v5; // edx
  __int64 v6; // r9
  char v7; // al
  __int64 j; // rax
  LONG top; // edx
  bool v10; // sf
  LONG v11; // ecx
  LONG bottom; // eax
  LONG v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 i; // rax
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __m128i v23; // xmm6
  int v24; // ebx
  int v25; // eax
  __int64 v26; // r8
  void *v27; // [rsp+30h] [rbp-11h]
  struct tagPOINT v28[2]; // [rsp+38h] [rbp-9h] BYREF
  struct tagRECT v29; // [rsp+48h] [rbp+7h]
  struct tagRECT v30; // [rsp+58h] [rbp+17h] BYREF
  __int64 v31; // [rsp+68h] [rbp+27h] BYREF
  __int64 v32; // [rsp+70h] [rbp+2Fh]

  v2 = 0;
  if ( !*((_QWORD *)this + 49) || !*((_QWORD *)this + 46) )
    return v2;
  v28[0] = 0LL;
  v28[1] = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v31 = 0LL;
    v18 = 0;
    v19 = *((_QWORD *)this + 47);
    v20 = *(_QWORD *)(v19 + 512);
    if ( v20 )
      v18 = *(_DWORD *)(v20 + 120);
    v21 = 0;
    *(float *)&v32 = (float)v18;
    v22 = *(_QWORD *)(v19 + 512);
    if ( v22 )
      v21 = *(_DWORD *)(v22 + 124);
    *((float *)&v32 + 1) = (float)v21;
    goto LABEL_18;
  }
  v3 = *((_QWORD *)this + 46);
  if ( (*(_BYTE *)(v3 + 44) & 2) != 0 )
  {
    for ( i = 0LL; i < 4; ++i )
      *((float *)&v31 + i) = (float)*(int *)(v3 + 4 * i + 64);
    top = *(_DWORD *)(v3 + 68);
    v11 = *(_DWORD *)(v3 + 72) - *(_DWORD *)(v3 + 64);
    v10 = v11 < 0;
    v28[0].x = *(_DWORD *)(v3 + 64);
    bottom = *(_DWORD *)(v3 + 76);
LABEL_13:
    if ( v10 )
      v11 = 0;
    v28[0].y = top;
    v13 = bottom - top;
    v28[1].x = v11;
    if ( v13 < 0 )
      v13 = 0;
    v28[1].y = v13;
    goto LABEL_18;
  }
  v4 = (_DWORD *)*((_QWORD *)this + 47);
  if ( v4 )
  {
    v30.left = v4[22];
    v30.top = v4[24];
    v5 = v4[20] - v4[23];
    v30.right = v5;
    v30.bottom = v4[21] - v4[25];
    v6 = *(_QWORD *)(v3 + 24);
    v7 = *(_BYTE *)(v6 + 608);
    if ( (v7 & 4) != 0 && !*(_DWORD *)(v3 + 85) && v4[18] == 2 && ((*(_DWORD *)(v6 + 100) & 0x1000000) != 0 || v7 < 0) )
    {
      v30.right = v5 - *(_DWORD *)(v6 + 284) - *(_DWORD *)(v6 + 280);
      v30.bottom -= *(_DWORD *)(v6 + 288) + *(_DWORD *)(v6 + 292);
    }
    if ( *(_BYTE *)(v3 + 40) )
    {
      *(_QWORD *)&v29.right = *((_QWORD *)v4 + 10);
      *(_QWORD *)&v29.left = 0LL;
      v30 = v29;
    }
    else if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 61),
                                                                                *(_QWORD *)(*(_QWORD *)(v3 + 24) + 120LL)) )
    {
      ShiftViewPortOrigin(&v30);
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v31 + j) = (float)*(int *)((char *)&v30.left + j);
    top = v30.top;
    v10 = v30.right - v30.left < 0;
    v11 = v30.right - v30.left;
    v28[0].x = v30.left;
    bottom = v30.bottom;
    goto LABEL_13;
  }
LABEL_18:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v23 = *(__m128i *)((char *)this + 500);
    v24 = MulDiv(*((_DWORD *)this + 129) - v28[0].x, _mm_cvtsi128_si32(_mm_srli_si128(v23, 8)), *((_DWORD *)this + 131))
        + _mm_cvtsi128_si32(v23);
    v25 = MulDiv(
            *((_DWORD *)this + 130) - v28[0].y,
            _mm_cvtsi128_si32(_mm_srli_si128(v23, 12)),
            *((_DWORD *)this + 132));
    v26 = *((_QWORD *)this + 46);
    v28[0].x = v24 + *(_DWORD *)(v26 + 48);
    v28[0].y = v25 + _mm_cvtsi128_si32(_mm_srli_si128(v23, 4)) + *(_DWORD *)(v26 + 52);
    CVisual::SetOffset((struct tagPOINT *)this, v28);
  }
  else
  {
    v14 = *((_QWORD *)this + 49);
    *(_OWORD *)((char *)this + 516) = *(_OWORD *)&v28[0].x;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v14 + 16) + 320LL))(
            *(_QWORD *)(v14 + 16),
            *(unsigned int *)(v14 + 24),
            &v31);
    v2 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x3B1u, v27);
  }
  return v2;
}
