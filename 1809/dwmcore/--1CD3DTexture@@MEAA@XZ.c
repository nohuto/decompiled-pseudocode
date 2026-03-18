/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x180092848
 * Callers:
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x1800927F0 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x180200260 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)this = &CD3DTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v2 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    LODWORD(v3) = *((_DWORD *)this + 46);
    if ( (_DWORD)v3 )
    {
      v4 = v2;
      do
      {
        v3 = (unsigned int)(v3 - 1);
        *((_DWORD *)this + 46) = v3;
        v5 = v2[v3];
        if ( v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(v2[v3]);
          v2 = (_QWORD *)*((_QWORD *)this + 24);
          LODWORD(v3) = *((_DWORD *)this + 46);
          v4 = v2;
        }
      }
      while ( (_DWORD)v3 );
      v2 = v4;
    }
    *((_DWORD *)this + 46) = v3 - 1;
    WPF::ProcessHeapImpl::Free(v2);
  }
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 25);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 27);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 26);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 28);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 29);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 72);
  *(_QWORD *)this = &CMILPoolResource::`vftable';
}
