/*
 * XREFs of ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x1801AE958
 * Callers:
 *     ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x1801AEA20 (--_ECProjectedShadowReceiver@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveVisual@CProjectedShadowReceiver@@AEAAXXZ @ 0x1801AF6F4 (-RemoveVisual@CProjectedShadowReceiver@@AEAAXXZ.c)
 */

void __fastcall CProjectedShadowReceiver::~CProjectedShadowReceiver(CProjectedShadowReceiver *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rcx

  *(_QWORD *)this = &CProjectedShadowReceiver::`vftable';
  CProjectedShadowReceiver::RemoveVisual(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 13);
  v3 = (__int64 *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 9);
    if ( v3 != v4 )
    {
      do
      {
        v5 = *v3;
        if ( *v3 )
        {
          *v3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++v3;
      }
      while ( v3 != v4 );
      v3 = (__int64 *)*((_QWORD *)this + 8);
    }
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 10) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  CResource::~CResource(this);
}
