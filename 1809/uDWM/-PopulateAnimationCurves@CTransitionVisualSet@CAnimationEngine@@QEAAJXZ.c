/*
 * XREFs of ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18000CAC0
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000C924 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // ebx
  __int64 i; // rsi
  __int64 v4; // rdi
  _QWORD **v6; // rcx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h]

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 5); i = (unsigned int)(i + 1) )
  {
    v4 = **(_QWORD **)(*((_QWORD *)this + 5) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4) )
    {
      v6 = *(_QWORD ***)(*((_QWORD *)this + 5) + 8 * i);
      v7 = *v6[1];
      v8 = *v6[5];
      v19 = *v6[4];
      v9 = *v6[6];
      v17 = 0LL;
      v18 = 0LL;
      if ( v7 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 0LL, &v17);
        v1 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x69Fu);
          return v1;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 1LL, &v18);
        v1 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x6A0u);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v7 + 56LL))(v7, &v17, 2LL);
      }
      if ( v8 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 2LL, &v17);
        v1 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x6A7u);
          return v1;
        }
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 3LL, &v18);
        v1 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x6A8u);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v17);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v18);
      }
      if ( v19 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 4LL, &v17);
        v1 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x6B2u);
          return v1;
        }
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 5LL, &v18);
        v1 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x6B3u);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, v17);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, v18);
      }
      if ( v9 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(v4, 6LL, &v17);
        v1 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x6BBu);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, v17);
      }
    }
  }
  return v1;
}
