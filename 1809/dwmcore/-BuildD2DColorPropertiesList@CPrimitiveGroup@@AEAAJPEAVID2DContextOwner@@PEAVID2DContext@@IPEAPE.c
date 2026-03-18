/*
 * XREFs of ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x1801AB380
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801AB660 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801AAD9C (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildD2DColorPropertiesList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        unsigned int a4,
        struct ID2D1PrivateCompositorPrimitiveProperties **a5)
{
  int v5; // ebx
  unsigned int v6; // ebp
  CPrimitiveGroup *v9; // rax
  struct ID2D1PrivateCompositorPrimitiveProperties **v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  struct CD2DPrimitiveProperties *v16; // r14
  __int64 v17; // rcx
  struct CD2DPrimitiveProperties *v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0;
  v21 = 0LL;
  v9 = this;
  if ( a4 )
  {
    v10 = a5;
    v11 = 0LL;
    while ( 1 )
    {
      v12 = *((_QWORD *)v9 + 29);
      v19 = 0LL;
      v13 = 0LL;
      v21 = 0LL;
      v14 = CPrimitiveColor::FindOrCreatePrimitiveProperties(
              (CPrimitiveColor *)((*(_QWORD *)(v11 * 8 + v12) - 8LL) & -(__int64)(*(_QWORD *)(v11 * 8 + v12) != 0LL)),
              (unsigned __int64)a3,
              &v19);
      v16 = v19;
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB7u);
      }
      else
      {
        v21 = *((_QWORD *)v19 + 13);
        v13 = v21;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      if ( v16 )
        (*(void (__fastcall **)(struct CD2DPrimitiveProperties *))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v5 < 0 )
        break;
      v21 = 0LL;
      ++v6;
      v9 = this;
      v10[v11++] = (struct ID2D1PrivateCompositorPrimitiveProperties *)v13;
      if ( v6 >= a4 )
        goto LABEL_12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v5, 0x430u);
  }
LABEL_12:
  ReleaseInterface<IBitmapLock>(&v21);
  return (unsigned int)v5;
}
