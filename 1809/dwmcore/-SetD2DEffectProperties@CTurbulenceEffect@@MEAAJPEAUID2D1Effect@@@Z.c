/*
 * XREFs of ?SetD2DEffectProperties@CTurbulenceEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1801CD550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTurbulenceEffect::SetD2DEffectProperties(CTurbulenceEffect *this, struct ID2D1Effect *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v22 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 44), (__m128)*((unsigned int *)this + 45)).m128_u64[0];
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         &v22,
         8);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x2Fu);
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
    v22 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 46), (__m128)*((unsigned int *)this + 47)).m128_u64[0];
    v8 = v7(a2, 2LL, 0LL, &v22, 8);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x34u);
    }
    else
    {
      v10 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
      v22 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 48), (__m128)*((unsigned int *)this + 49)).m128_u64[0];
      v11 = v10(a2, 1LL, 0LL, &v22, 8);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x39u);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 200,
                4);
        v6 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x3Eu);
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                  a2,
                  4LL,
                  0LL,
                  (char *)this + 204,
                  4);
          v6 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x43u);
          }
          else
          {
            v17 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    5LL,
                    0LL,
                    (char *)this + 208,
                    4);
            v6 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x48u);
            }
            else
            {
              v19 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      6LL,
                      0LL,
                      (char *)this + 212,
                      4);
              v6 = v19;
              if ( v19 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x4Du);
            }
          }
        }
      }
    }
  }
  return v6;
}
