/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001E030
 * Callers:
 *     <none>
 * Callees:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18001E7F0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(CAtlasedRectsVisual *this)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  unsigned __int64 v3; // r12
  __int64 v4; // rbp
  __int32 *v6; // rcx
  __int64 v7; // r15
  const RECT *p_si128; // r13
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  char v20; // al
  __int64 v21; // r8
  int v22; // eax
  __int64 v24; // rcx
  unsigned int v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  __m128i si128; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0LL;
  v2 = 0;
  v3 = *((unsigned int *)this + 66);
  v4 = 0LL;
  v27 = 0LL;
  if ( !(_DWORD)v3 )
  {
LABEL_24:
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 40LL))(this, v1);
    goto LABEL_25;
  }
  v6 = (__int32 *)*((_QWORD *)this + 34);
  v7 = 0LL;
  p_si128 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v6 )
  {
    p_si128 = (const RECT *)&si128;
    si128.m128i_i32[0] = *v6;
    si128.m128i_i32[1] = v6[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 30) - v6[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 31) - v6[3];
  }
  v9 = CResource::Create(2LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v27);
  v2 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xBEu);
    v1 = v27;
    goto LABEL_25;
  }
  v10 = 4 * v3;
  if ( !is_mul_ok(v3, 4uLL) )
    v10 = -1LL;
  v26 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v10);
  v12 = v26;
  if ( !v26 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC0u);
    v1 = v27;
    v4 = 0LL;
    goto LABEL_25;
  }
  v25 = 0;
  v13 = 0;
  v14 = 0LL;
  do
  {
    v15 = *(_QWORD *)(v14 + *((_QWORD *)this + 30));
    v16 = *(_QWORD *)(v15 + 72);
    if ( v16 )
      v17 = *(_QWORD *)(v16 + 16);
    else
      v17 = 0LL;
    v18 = v17;
    if ( v7 )
      v18 = v7;
    v7 = v18;
    if ( !v17 )
      goto LABEL_19;
    if ( p_si128 )
    {
      if ( !*(_BYTE *)(v15 + 128) || !EqualRect((const RECT *)(v15 + 112), p_si128) )
      {
LABEL_32:
        if ( p_si128 )
        {
          *(_BYTE *)(v15 + 128) = 1;
          *(RECT *)(v15 + 112) = *p_si128;
        }
        else
        {
          *(_BYTE *)(v15 + 128) = 0;
        }
        *(_DWORD *)(v15 + 96) |= 1u;
        v24 = *(_QWORD *)(v15 + 80);
        if ( v24 )
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, 0x2000LL, v11, v12);
      }
    }
    else if ( *(_BYTE *)(v15 + 128) )
    {
      goto LABEL_32;
    }
    v19 = CAtlasedImage::Validate(*(CAtlasedImage **)(v14 + *((_QWORD *)this + 30)));
    v2 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xD1u);
      v1 = v27;
      v4 = v26;
      goto LABEL_25;
    }
    v20 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *, _QWORD))(*(_QWORD *)this + 200LL))(
            this,
            *(_QWORD *)(v14 + *((_QWORD *)this + 30)));
    v12 = v26;
    if ( v20 )
    {
      *(_DWORD *)(v26 + 4LL * v25) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + *((_QWORD *)this + 30)) + 88LL) + 24LL);
      v13 = ++v25;
    }
    else
    {
      v13 = v25;
    }
LABEL_19:
    LODWORD(v4) = v4 + 1;
    v14 += 8LL;
  }
  while ( (unsigned int)v4 < (unsigned int)v3 );
  if ( v7 )
    v21 = *(unsigned int *)(v7 + 24);
  else
    v21 = 0LL;
  v1 = v27;
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(v27 + 16) + 1096LL))(
          *(_QWORD *)(v27 + 16),
          *(unsigned int *)(v27 + 24),
          v21,
          v12,
          v13);
  v2 = v22;
  if ( v22 >= 0 )
  {
    v4 = v26;
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xDEu);
  v4 = v26;
LABEL_25:
  (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v4);
  if ( v1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v27)(v27, 1LL);
  return v2;
}
