/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180008760
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180008CA0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180008C34 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000976C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180038288 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x180086B24 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  __int64 i; // rax
  LONG top; // edx
  bool v6; // sf
  LONG v7; // ecx
  LONG bottom; // eax
  LONG v9; // eax
  __int64 v10; // rax
  int v11; // eax
  _DWORD *v13; // rcx
  LONG v14; // edx
  __int64 v15; // r9
  char v16; // al
  __int64 j; // rax
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __m128i v23; // xmm6
  int v24; // ebx
  int v25; // eax
  __int64 v26; // r8
  struct tagPOINT v27[2]; // [rsp+38h] [rbp-9h] BYREF
  struct tagRECT v28; // [rsp+48h] [rbp+7h]
  struct tagRECT v29; // [rsp+58h] [rbp+17h] BYREF
  __int64 v30; // [rsp+68h] [rbp+27h] BYREF
  __int64 v31; // [rsp+70h] [rbp+2Fh]

  v2 = 0;
  if ( !*((_QWORD *)this + 49) || !*((_QWORD *)this + 46) )
    return v2;
  v27[0] = 0LL;
  v27[1] = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v30 = 0LL;
    v18 = 0;
    v19 = *((_QWORD *)this + 47);
    v20 = *(_QWORD *)(v19 + 512);
    if ( v20 )
      v18 = *(_DWORD *)(v20 + 120);
    v21 = 0;
    *(float *)&v31 = (float)v18;
    v22 = *(_QWORD *)(v19 + 512);
    if ( v22 )
      v21 = *(_DWORD *)(v22 + 124);
    *((float *)&v31 + 1) = (float)v21;
    goto LABEL_13;
  }
  v3 = *((_QWORD *)this + 46);
  if ( (*(_BYTE *)(v3 + 44) & 2) != 0 )
  {
    for ( i = 0LL; i < 4; ++i )
      *((float *)&v30 + i) = (float)*(int *)(v3 + 4 * i + 64);
    top = *(_DWORD *)(v3 + 68);
    v7 = *(_DWORD *)(v3 + 72) - *(_DWORD *)(v3 + 64);
    v6 = v7 < 0;
    v27[0].x = *(_DWORD *)(v3 + 64);
    bottom = *(_DWORD *)(v3 + 76);
LABEL_8:
    if ( v6 )
      v7 = 0;
    v27[0].y = top;
    v9 = bottom - top;
    v27[1].x = v7;
    if ( v9 < 0 )
      v9 = 0;
    v27[1].y = v9;
    goto LABEL_13;
  }
  v13 = (_DWORD *)*((_QWORD *)this + 47);
  if ( v13 )
  {
    v29.left = v13[22];
    v29.top = v13[24];
    v14 = v13[20] - v13[23];
    v29.right = v14;
    v29.bottom = v13[21] - v13[25];
    v15 = *(_QWORD *)(v3 + 24);
    v16 = *(_BYTE *)(v15 + 600);
    if ( (v16 & 4) != 0
      && !*(_DWORD *)(v3 + 85)
      && v13[18] == 2
      && ((*(_DWORD *)(v15 + 100) & 0x1000000) != 0 || v16 < 0) )
    {
      v29.right = v14 - *(_DWORD *)(v15 + 284) - *(_DWORD *)(v15 + 280);
      v29.bottom -= *(_DWORD *)(v15 + 288) + *(_DWORD *)(v15 + 292);
    }
    if ( *(_BYTE *)(v3 + 40) )
    {
      *(_QWORD *)&v28.right = *((_QWORD *)v13 + 10);
      *(_QWORD *)&v28.left = 0LL;
      v29 = v28;
    }
    else if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 61),
                                                                                *(_QWORD *)(*(_QWORD *)(v3 + 24) + 120LL)) )
    {
      ShiftViewPortOrigin(&v29);
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v30 + j) = (float)*(int *)((char *)&v29.left + j);
    top = v29.top;
    v6 = v29.right - v29.left < 0;
    v7 = v29.right - v29.left;
    v27[0].x = v29.left;
    bottom = v29.bottom;
    goto LABEL_8;
  }
LABEL_13:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v23 = *(__m128i *)((char *)this + 500);
    v24 = MulDiv(*((_DWORD *)this + 129) - v27[0].x, _mm_cvtsi128_si32(_mm_srli_si128(v23, 8)), *((_DWORD *)this + 131))
        + _mm_cvtsi128_si32(v23);
    v25 = MulDiv(
            *((_DWORD *)this + 130) - v27[0].y,
            _mm_cvtsi128_si32(_mm_srli_si128(v23, 12)),
            *((_DWORD *)this + 132));
    v26 = *((_QWORD *)this + 46);
    v27[0].x = v24 + *(_DWORD *)(v26 + 48);
    v27[0].y = v25 + _mm_cvtsi128_si32(_mm_srli_si128(v23, 4)) + *(_DWORD *)(v26 + 52);
    CVisual::SetOffset(this, v27);
  }
  else
  {
    v10 = *((_QWORD *)this + 49);
    *(_OWORD *)((char *)this + 516) = *(_OWORD *)&v27[0].x;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v10 + 16) + 312LL))(
            *(_QWORD *)(v10 + 16),
            *(unsigned int *)(v10 + 24),
            &v30);
    v2 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x3BAu);
  }
  return v2;
}
