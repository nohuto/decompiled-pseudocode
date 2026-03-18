/*
 * XREFs of ??1CManipulationContext@@UEAA@XZ @ 0x18023A34C
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x18023A4F8 (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180236670 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x18023A540 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall CManipulationContext::~CManipulationContext(CManipulationContext *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  void *v4; // rcx
  int v5; // edi
  void *v6; // rcx
  void *v7; // rcx
  int v8; // edi
  void *v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBase'};
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 15);
  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    v5 = 0;
    if ( *((int *)this + 26) > 0 )
    {
      do
        TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*((_QWORD *)this + 12) + 16LL * v5++), v3);
      while ( v5 < *((_DWORD *)this + 26) );
      v4 = (void *)*((_QWORD *)this + 11);
    }
    operator delete(v4);
    *((_QWORD *)this + 11) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 12);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 26) = 0;
  v7 = (void *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    v8 = 0;
    if ( *((int *)this + 20) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 9) + 8LL * v8++));
      while ( v8 < *((_DWORD *)this + 20) );
      v7 = (void *)*((_QWORD *)this + 8);
    }
    operator delete(v7);
    *((_QWORD *)this + 8) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 9);
  if ( v9 )
  {
    operator delete(v9);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_DWORD *)this + 20) = 0;
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
}
