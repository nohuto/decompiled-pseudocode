/*
 * XREFs of ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x1800E66D8
 * Callers:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z @ 0x1800E6774 (-Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::Create(
        enum D2D1_FACTORY_TYPE a1,
        struct D2D1_FACTORY_OPTIONS a2,
        struct CD2DFactory **a3)
{
  CD2DFactory *v5; // rax
  __int64 v6; // rcx
  CD2DFactory *v7; // rdi
  enum D2D1_FACTORY_TYPE v8; // edx
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  v5 = (CD2DFactory *)DefaultHeap::Alloc(0x28uLL);
  v7 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 4) = 0;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_QWORD *)v5 = &CD2DFactory::`vftable'{for `IUnknown'};
    *((_QWORD *)v5 + 1) = &CD2DFactory::`vftable'{for `CMILRefCountBase'};
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = CD2DFactory::Init(v7, v8, a2);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x20u, 0LL);
      (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x8007000E, 0x19u, 0LL);
  }
  return v11;
}
