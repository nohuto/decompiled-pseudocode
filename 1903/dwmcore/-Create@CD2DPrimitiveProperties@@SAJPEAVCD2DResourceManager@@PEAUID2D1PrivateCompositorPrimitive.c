/*
 * XREFs of ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x18016B5A8
 * Callers:
 *     ?CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801603A0 (-CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18016B4C4 (--0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitivePro.c)
 */

__int64 __fastcall CD2DPrimitiveProperties::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorPrimitiveProperties *a2,
        struct CD2DPrimitiveProperties **a3)
{
  unsigned int v4; // ebx
  CD2DPrimitiveProperties *v7; // rax
  struct CD2DPrimitiveProperties *v8; // rax
  __int64 v9; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v7 = (CD2DPrimitiveProperties *)DefaultHeap::AllocClear(0x70uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v8 = CD2DPrimitiveProperties::CD2DPrimitiveProperties(v7, a1, a2);
  *a3 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CD2DPrimitiveProperties *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0x10u, 0LL);
  }
  return v4;
}
