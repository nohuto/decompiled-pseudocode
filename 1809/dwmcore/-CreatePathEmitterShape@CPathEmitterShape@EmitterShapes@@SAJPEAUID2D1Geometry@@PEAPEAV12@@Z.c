/*
 * XREFs of ?CreatePathEmitterShape@CPathEmitterShape@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x1801DC5A0
 * Callers:
 *     ?EnsureSpawner@CParticleEmitter@@AEAAJXZ @ 0x1801C58F8 (-EnsureSpawner@CParticleEmitter@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EmitterShapes::CPathEmitterShape::CreatePathEmitterShape(
        struct ID2D1Geometry *a1,
        struct EmitterShapes::CPathEmitterShape **a2)
{
  struct EmitterShapes::CPathEmitterShape *v4; // rax
  struct EmitterShapes::CPathEmitterShape *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct EmitterShapes::CPathEmitterShape *v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v4 = (struct EmitterShapes::CPathEmitterShape *)operator new(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &EmitterShapes::CPathEmitterShape::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v4 + 2) = &EmitterShapes::CPathEmitterShape::`vftable'{for `ID2D1SimplifiedGeometrySink'};
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v18 = v5;
  if ( v5 )
    (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterShape *))(*(_QWORD *)v5 + 8LL))(v5);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v20);
  (*(void (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v20);
  v6 = v20;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v19);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 80LL))(v6, &v19);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x75u);
  }
  else
  {
    v10 = v19;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v21);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 136LL))(v10, &v21);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x76u);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 1LL);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x7Bu);
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v5 + 2) + 72LL))((__int64)v5 + 16);
        v9 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x7Cu);
        }
        else
        {
          *a2 = v5;
          (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterShape *))(*(_QWORD *)v5 + 8LL))(v5);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v20);
  return v9;
}
