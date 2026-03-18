/*
 * XREFs of ??1CProjectedShadowScene@@UEAA@XZ @ 0x1801AF954
 * Callers:
 *     ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x1801AFA70 (--_GCProjectedShadowScene@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearCasters@CProjectedShadowScene@@QEAAXXZ @ 0x1801AFB18 (-ClearCasters@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@QEAAXXZ @ 0x1801AFBC4 (-ClearReceivers@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(struct CResource **this)
{
  struct CResource *v2; // rdi
  struct CResource *v3; // rsi
  __int64 v4; // rcx
  struct CResource *v5; // rdi
  struct CResource *v6; // rsi
  __int64 v7; // rcx

  *this = (struct CResource *)&CProjectedShadowScene::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CProjectedShadowScene::ClearCasters((CProjectedShadowScene *)this);
  CProjectedShadowScene::ClearReceivers((CProjectedShadowScene *)this);
  v2 = this[15];
  if ( v2 )
  {
    v3 = this[16];
    if ( v2 != v3 )
    {
      do
      {
        v4 = *(_QWORD *)v2;
        if ( *(_QWORD *)v2 )
        {
          *(_QWORD *)v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v2 = (struct CResource *)((char *)v2 + 8);
      }
      while ( v2 != v3 );
      v2 = this[15];
    }
    std::_Deallocate<16,0>(v2, (this[17] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[15] = 0LL;
    this[16] = 0LL;
    this[17] = 0LL;
  }
  v5 = this[7];
  if ( v5 )
  {
    v6 = this[8];
    if ( v5 != v6 )
    {
      do
      {
        v7 = *(_QWORD *)v5;
        if ( *(_QWORD *)v5 )
        {
          *(_QWORD *)v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        v5 = (struct CResource *)((char *)v5 + 8);
      }
      while ( v5 != v6 );
      v5 = this[7];
    }
    std::_Deallocate<16,0>(v5, (this[9] - v5) & 0xFFFFFFFFFFFFFFF8uLL);
    this[7] = 0LL;
    this[8] = 0LL;
    this[9] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
