/*
 * XREFs of ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x1801D1C08
 * Callers:
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1801D144C (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionMipmapSurface::ReleaseResources(CCompositionMipmapSurface *this)
{
  __int64 v1; // rbx
  unsigned int v2; // ebp
  __int64 v4; // rsi
  __int64 v5; // rsi
  struct CResource *v6; // rdx
  __int64 v7; // rcx

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( (*((_QWORD *)this + 12) - v1) >> 5 )
  {
    v4 = 0LL;
    do
    {
      v5 = 32 * v4;
      v6 = *(struct CResource **)(v5 + v1);
      if ( v6 )
      {
        CResource::UnRegisterNotifierInternal(this, v6);
        *(_QWORD *)(v5 + v1) = 0LL;
      }
      v1 = *((_QWORD *)this + 11);
      v4 = ++v2;
    }
    while ( v2 < (unsigned __int64)((*((_QWORD *)this + 12) - v1) >> 5) );
  }
  *((_QWORD *)this + 12) = v1;
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v7 + 24) + 32LL))(v7 + 24, (char *)this + 72);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 20);
  }
}
