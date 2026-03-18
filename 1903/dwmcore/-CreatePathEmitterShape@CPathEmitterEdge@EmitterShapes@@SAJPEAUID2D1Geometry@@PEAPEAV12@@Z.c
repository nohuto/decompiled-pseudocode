/*
 * XREFs of ?CreatePathEmitterShape@CPathEmitterEdge@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x18020C3F8
 * Callers:
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801ECA40 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EmitterShapes::CPathEmitterEdge::CreatePathEmitterShape(
        struct ID2D1Geometry *a1,
        struct EmitterShapes::CPathEmitterEdge **a2)
{
  struct EmitterShapes::CPathEmitterEdge *v4; // rax
  struct EmitterShapes::CPathEmitterEdge *v5; // rbx
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  signed int v9; // eax
  __int64 v10; // rcx
  struct EmitterShapes::CPathEmitterEdge *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct EmitterShapes::CPathEmitterEdge *)operator new(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &EmitterShapes::CPathEmitterEdge::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v4 + 2) = &EmitterShapes::CPathEmitterEdge::`vftable'{for `ID2D1SimplifiedGeometrySink'};
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v12 = v5;
  if ( v5 )
    (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterEdge *))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 1LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x76u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v5 + 2) + 72LL))((__int64)v5 + 16);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x77u, 0LL);
    }
    else
    {
      *a2 = v5;
      (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterEdge *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v12);
  return v8;
}
