/*
 * XREFs of ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x1800C264C
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x1800C2610 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800EC1D0 (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x180168A5C (--_GCRegion@@QEAAPEAXI@Z.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(
        CPrimitiveGroupDrawListGenerator *this)
{
  _QWORD *v2; // rdx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  void **v5; // rbx
  void **v6; // rbx
  CRegion *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  char *v10; // rbx
  char *v11; // rbx

  *(_QWORD *)this = &CPrimitiveGroupDrawListGenerator::`vftable'{for `CMILRefCountBase'};
  v2 = (_QWORD *)((char *)this + 16);
  v3 = (__int64 *)((char *)this + 128);
  v4 = *((_QWORD *)this + 16);
  *v2 = &CPrimitiveGroupDrawListGenerator::`vftable'{for `IDeviceResourceNotify'};
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  v5 = (void **)*((_QWORD *)this + 3);
  if ( v5 )
  {
    WPF::ProcessHeapImpl::Free(*v5);
    operator delete(v5, 0x10uLL);
  }
  v6 = (void **)*((_QWORD *)this + 4);
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(*v6);
    operator delete(v6, 0x10uLL);
  }
  v7 = (CRegion *)*((_QWORD *)this + 17);
  if ( v7 )
    CRegion::`scalar deleting destructor'(v7, 1u);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v3);
  v8 = (char *)*((_QWORD *)this + 15);
  if ( v8 )
  {
    v11 = v8 - 8;
    `vector destructor iterator'(v8, 0x18uLL, *((_QWORD *)v8 - 1), (void (*)(void *))EffectInput::~EffectInput);
    operator delete[](v11);
  }
  v9 = (char *)*((_QWORD *)this + 14);
  if ( v9 )
  {
    v10 = v9 - 8;
    `vector destructor iterator'(v9, 0x18uLL, *((_QWORD *)v9 - 1), (void (*)(void *))EffectInput::~EffectInput);
    operator delete[](v10);
  }
}
