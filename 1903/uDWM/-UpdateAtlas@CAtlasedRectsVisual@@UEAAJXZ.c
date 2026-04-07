/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180018E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800191F0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(CAtlasedRectsVisual *this)
{
  unsigned int v1; // ebp
  CBaseObject *v2; // rbx
  unsigned __int64 v3; // r12
  int v4; // esi
  __int32 *v6; // rcx
  __int64 v7; // r15
  const RECT *p_si128; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  CBaseObject *v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // al
  int v22; // eax
  char v23; // al
  int v24; // eax
  __int64 v26; // rcx
  void *v27; // [rsp+28h] [rbp-70h]
  unsigned int v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  unsigned int v30; // [rsp+40h] [rbp-58h]
  CBaseObject *v31; // [rsp+48h] [rbp-50h]
  __m128i si128; // [rsp+50h] [rbp-48h] BYREF

  v1 = 0;
  v2 = 0LL;
  v3 = *((unsigned int *)this + 66);
  v4 = 0;
  v30 = 0;
  v31 = 0LL;
  v29 = 0LL;
  if ( !(_DWORD)v3 )
    goto LABEL_28;
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
  v9 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL);
  v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          32LL);
  v11 = (CBaseObject *)v10;
  if ( !v10 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u, v27);
    goto LABEL_9;
  }
  *(_DWORD *)(v10 + 8) = 1;
  *(_QWORD *)(v10 + 16) = v9;
  *(_QWORD *)v10 = &CResource::`vftable';
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 96LL))(v9, 2LL, v10 + 24);
  v4 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x44u, v27);
  }
  else if ( !*((_DWORD *)v11 + 6) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u, v27);
    v4 = -2147024882;
    goto LABEL_44;
  }
  if ( v4 < 0 )
  {
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x29u, v27);
    CBaseObject::Release(v11);
    goto LABEL_9;
  }
  v2 = v11;
  v31 = v11;
LABEL_9:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xBBu, v27);
    goto LABEL_29;
  }
  v13 = 4 * v3;
  if ( !is_mul_ok(v3, 4uLL) )
    v13 = -1LL;
  v29 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v13);
  v14 = v29;
  if ( !v29 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xBDu, v27);
    goto LABEL_29;
  }
  v15 = 0;
  v28 = 0;
  v16 = 0LL;
  do
  {
    v17 = *(_QWORD *)(v16 + *((_QWORD *)this + 30));
    v18 = *(_QWORD *)(v17 + 72);
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 16);
    else
      v19 = 0LL;
    v20 = v19;
    if ( v7 )
      v20 = v7;
    v7 = v20;
    if ( !v19 )
      goto LABEL_24;
    v21 = *(_BYTE *)(v17 + 116);
    if ( p_si128 )
    {
      if ( !v21 || !EqualRect((const RECT *)(v17 + 100), p_si128) )
      {
LABEL_36:
        if ( p_si128 )
        {
          *(_BYTE *)(v17 + 116) = 1;
          *(RECT *)(v17 + 100) = *p_si128;
        }
        else
        {
          *(_BYTE *)(v17 + 116) = 0;
        }
        *(_DWORD *)(v17 + 96) |= 1u;
        v26 = *(_QWORD *)(v17 + 80);
        if ( v26 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v26 + 24LL))(v26, 0x2000LL, v14);
      }
    }
    else if ( v21 )
    {
      goto LABEL_36;
    }
    v22 = CAtlasedImage::Validate(*(CAtlasedImage **)(*((_QWORD *)this + 30) + v16));
    v4 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xCEu, v27);
      goto LABEL_29;
    }
    v23 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *, _QWORD))(*(_QWORD *)this + 200LL))(
            this,
            *(_QWORD *)(*((_QWORD *)this + 30) + v16));
    v14 = v29;
    if ( v23 )
    {
      *(_DWORD *)(v29 + 4LL * v28) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 30) + v16) + 88LL) + 24LL);
      v15 = ++v28;
    }
    else
    {
      v15 = v28;
    }
LABEL_24:
    ++v1;
    v16 += 8LL;
  }
  while ( v1 < (unsigned int)v3 );
  if ( v7 )
    v30 = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 24LL);
  v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int))(**((_QWORD **)v2 + 2) + 1008LL))(
          *((_QWORD *)v2 + 2),
          *((unsigned int *)v2 + 6),
          v30,
          v14,
          v15);
  v4 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xDBu, v27);
    goto LABEL_29;
  }
LABEL_28:
  (*(void (__fastcall **)(CAtlasedRectsVisual *, CBaseObject *))(*(_QWORD *)this + 40LL))(this, v2);
LABEL_29:
  (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v29);
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CBaseObject *, __int64))v31)(v31, 1LL);
  return (unsigned int)v4;
}
