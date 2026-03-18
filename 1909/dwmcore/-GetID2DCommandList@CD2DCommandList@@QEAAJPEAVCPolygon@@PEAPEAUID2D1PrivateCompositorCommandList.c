/*
 * XREFs of ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180169A84
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801C4D6C (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x180169790 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18016987C (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 *     ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x180169A54 (-FindKey@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPol.c)
 */

__int64 __fastcall CD2DCommandList::GetID2DCommandList(
        CD2DCommandList *this,
        struct CPolygon *a2,
        struct ID2D1PrivateCompositorCommandList **a3)
{
  char *v3; // r15
  unsigned int v7; // ebx
  int Key; // eax
  struct ID2D1PrivateCompositorCommandList *v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r12
  __int64 v12; // rcx
  _DWORD *v13; // rbx
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // r8
  _DWORD *v18; // rdx
  __int128 v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // r10
  signed int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26[5]; // [rsp+40h] [rbp-28h] BYREF
  struct ID2D1PrivateCompositorCommandList *v27; // [rsp+B0h] [rbp+48h] BYREF
  struct CPolygon *v28; // [rsp+B8h] [rbp+50h] BYREF
  _DWORD *v29; // [rsp+C0h] [rbp+58h] BYREF
  void *v30; // [rsp+C8h] [rbp+60h] BYREF

  v28 = a2;
  v3 = (char *)this + 104;
  v29 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  *a3 = 0LL;
  v7 = 0;
  Key = CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
          (__int64)this + 104,
          (__int64 *)&v28);
  if ( Key != -1 )
  {
    v9 = *(struct ID2D1PrivateCompositorCommandList **)(*((_QWORD *)this + 14) + 8LL * Key);
    v27 = v9;
LABEL_14:
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v9 + 8LL))(v9);
    *a3 = v27;
    goto LABEL_16;
  }
  v10 = *((_DWORD *)a2 + 10);
  v11 = v10;
  v29 = operator new(saturated_mul(v10, 8uLL));
  v13 = v29;
  if ( v29 )
  {
    v14 = operator new(saturated_mul(v10, 4uLL));
    v30 = v14;
    if ( v14 )
    {
      if ( v10 )
      {
        v16 = 0LL;
        v17 = v14;
        v18 = v13;
        do
        {
          v19 = *(_OWORD *)(*((_QWORD *)a2 + 2) + v16);
          v16 += 20LL;
          *v18 = v19;
          v18 += 2;
          *(v18 - 1) = *(_DWORD *)(*((_QWORD *)a2 + 2) + v16 - 16);
          *v17++ = *(_DWORD *)(*((_QWORD *)a2 + 2) + v16 - 4);
          --v11;
        }
        while ( v11 );
      }
      v26[0] = 0LL;
      v20 = *(_QWORD *)(*((_QWORD *)this + 14)
                      + 8LL
                      * (int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
                               (__int64)v3,
                               v26));
      v22 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64, unsigned int, struct ID2D1PrivateCompositorCommandList **))(*(_QWORD *)v20 + 40LL))(
              v20,
              v13,
              v10,
              v21,
              v10,
              &v27);
      v7 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x51u, 0LL);
        goto LABEL_16;
      }
      if ( (unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                           (__int64)v3,
                           &v28,
                           &v27) )
      {
        v9 = v27;
        goto LABEL_14;
      }
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, 0x8007000E, 0x56u, 0LL);
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x8007000E, 0x43u, 0LL);
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x40u, 0LL);
  }
LABEL_16:
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v29);
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v30);
  return v7;
}
