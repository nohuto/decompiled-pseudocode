/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800366E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        CDrawNineGridInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  unsigned int v4; // ebp
  int v5; // esi
  int v6; // r10d
  int v8; // r9d
  int v9; // ecx
  int v10; // r9d
  int v11; // ebx
  int v12; // r8d
  int v13; // edx
  int v14; // r11d
  unsigned int v15; // ebx
  __int64 *v16; // rdi
  __int64 v17; // r10
  __int64 v19; // rdx
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // r8d
  __m128i v23; // xmm0
  int v24; // eax
  int v25; // eax
  void *v26; // [rsp+28h] [rbp-60h]
  __int128 v27; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v28[4]; // [rsp+40h] [rbp-48h]
  _DWORD v29[4]; // [rsp+50h] [rbp-38h]

  v4 = 0;
  v5 = *((_DWORD *)this + 8);
  v6 = -*((_DWORD *)this + 10);
  v8 = *((_DWORD *)a3 + 31) + *((_DWORD *)this + 11);
  v9 = v5 + *((_DWORD *)a3 + 30) + *((_DWORD *)this + 9);
  if ( v9 < 0 )
    v9 = 0;
  v10 = v8 - v6;
  if ( v10 < 0 )
    v10 = 0;
  v27 = *((_OWORD *)this + 1);
  v11 = v27;
  if ( (int)v27 + DWORD1(v27) > v9 )
  {
    v12 = (int)v27 * v9 / ((int)v27 + DWORD1(v27));
    v11 = v12;
  }
  else
  {
    v12 = v9 - DWORD1(v27);
  }
  v13 = DWORD2(v27);
  if ( HIDWORD(v27) + DWORD2(v27) > v10 )
  {
    v14 = DWORD2(v27) * v10 / (HIDWORD(v27) + DWORD2(v27));
    v13 = v14;
  }
  else
  {
    v14 = v10 - HIDWORD(v27);
  }
  v29[0] = v6;
  v28[1] = v11 - v5;
  v29[1] = v6 + v13;
  v29[2] = v6 + v14;
  v28[2] = v12 - v5;
  v28[3] = v9 - v5;
  v15 = 0;
  v28[0] = -v5;
  v16 = (__int64 *)((char *)this + 48);
  v29[3] = v6 + v10;
  while ( 1 )
  {
    v17 = *v16;
    if ( *v16 )
    {
      v19 = v15 / 3;
      v20 = v29[v19];
      v21 = v15 % 3;
      v22 = v28[v21];
      v23 = _mm_cvtsi32_si128(v28[(unsigned int)(v21 + 1)] - v22);
      v24 = v29[(unsigned int)(v19 + 1)];
      *((float *)&v27 + 1) = (float)v20;
      *(float *)&v27 = (float)v22;
      *((float *)&v27 + 2) = _mm_cvtepi32_ps(v23).m128_f32[0] + (float)v22;
      *((float *)&v27 + 3) = (float)(v24 - v20) + (float)v20;
      v25 = (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, __int128 *, _QWORD))(*(_QWORD *)a2 + 56LL))(
              a2,
              &v27,
              *(unsigned int *)(*(_QWORD *)(v17 + 16) + 24LL));
      v4 = v25;
      if ( v25 < 0 )
        break;
    }
    ++v15;
    ++v16;
    if ( v15 >= 9 )
      return v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x11Cu, v26);
  return v4;
}
