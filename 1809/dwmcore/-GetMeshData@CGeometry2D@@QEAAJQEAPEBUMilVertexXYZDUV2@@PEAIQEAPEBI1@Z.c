/*
 * XREFs of ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1801C04D4
 * Callers:
 *     ?DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z @ 0x180163444 (-DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801C0498 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2D::GetMeshData(
        CGeometry2D *this,
        const struct MilVertexXYZDUV2 **const a2,
        unsigned int *a3,
        const unsigned int **const a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // esi
  SIZE_T v14; // r8
  LPVOID v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // esi
  SIZE_T v21; // r8
  LPVOID v22; // r8
  int v23; // r9d
  unsigned int v25; // [rsp+20h] [rbp-38h]
  unsigned int v26; // [rsp+20h] [rbp-38h]

  v5 = 0;
  if ( *((_QWORD *)this + 7) )
    goto LABEL_26;
  v10 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 152LL))(this);
  v11 = 32LL * v10;
  v12 = -1;
  v13 = v10;
  if ( v11 <= 0xFFFFFFFF )
    v12 = 32 * v10;
  v5 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v11 > 0xFFFFFFFF )
  {
    v26 = 47;
    goto LABEL_24;
  }
  v14 = v12;
  if ( !v12 )
    v14 = 1LL;
  v15 = HeapAlloc(WPF::g_processHeap, 0, v14);
  *((_QWORD *)this + 7) = v15;
  if ( !v15 )
  {
    v25 = 49;
LABEL_9:
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, v25);
LABEL_28:
    CGeometry2D::FreeCaches((void **)this);
    return v5;
  }
  v17 = (*(__int64 (__fastcall **)(CGeometry2D *, LPVOID, _QWORD))(*(_QWORD *)this + 192LL))(this, v15, v13);
  v5 = v17;
  if ( v17 < 0 )
  {
    v26 = 50;
    goto LABEL_22;
  }
  v18 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 160LL))(this);
  v19 = -1;
  v11 = 4LL * v18;
  v20 = v18;
  if ( v11 <= 0xFFFFFFFF )
    v19 = 4 * v18;
  v5 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v11 > 0xFFFFFFFF )
  {
    v26 = 56;
LABEL_24:
    v23 = v5;
    goto LABEL_25;
  }
  v21 = v19;
  if ( !v19 )
    v21 = 1LL;
  v22 = HeapAlloc(WPF::g_processHeap, 0, v21);
  *((_QWORD *)this + 8) = v22;
  if ( !v22 )
  {
    v25 = 58;
    goto LABEL_9;
  }
  v17 = (*(__int64 (__fastcall **)(CGeometry2D *, _QWORD, LPVOID, _QWORD))(*(_QWORD *)this + 184LL))(
          this,
          0LL,
          v22,
          v20);
  v5 = v17;
  if ( v17 < 0 )
  {
    v26 = 59;
LABEL_22:
    v23 = v17;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v23, v26);
    goto LABEL_27;
  }
LABEL_26:
  *a2 = (const struct MilVertexXYZDUV2 *)*((_QWORD *)this + 7);
  *a3 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 152LL))(this);
  *a4 = (const unsigned int *)*((_QWORD *)this + 8);
  *a5 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 160LL))(this);
LABEL_27:
  if ( (v5 & 0x80000000) != 0 )
    goto LABEL_28;
  return v5;
}
