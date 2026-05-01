/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@123@ABU_GUID@@PAPAX@Z @ 0x10009690
 * Callers:
 *     ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGJABU_GUID@@PAPAX@Z @ 0x100075A0 (-QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGJABU_GUID@@PAPAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x10007A6B (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGKXZ @ 0x1000B710 (-AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGKXZ.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>>(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        _DWORD *a2,
        void **a3)
{
  int v5; // ecx
  int CanCastTo; // esi
  unsigned int (__stdcall *v7)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden); // edi
  unsigned int (__stdcall *v9)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden); // esi
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v10; // [esp-4h] [ebp-10h]
  const struct _GUID *v11; // [esp+0h] [ebp-Ch]
  const struct _GUID *v12; // [esp+0h] [ebp-Ch]
  const struct _GUID *v13; // [esp+4h] [ebp-8h]
  const struct _GUID *v14; // [esp+4h] [ebp-8h]

  *a3 = 0;
  if ( (*a2
     || a2[1] != *(_DWORD *)&_GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)_GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&_GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && !InlineIsEqualGUID(v11, v13) )
  {
    if ( InlineIsEqualGUID(v12, v14) )
    {
      *a3 = this;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (int)this + 4,
                    (int)a2,
                    a3,
                    v5);
      if ( CanCastTo < 0 )
        return CanCastTo;
    }
    v10 = (Windows::System::AppMemoryUsageLimitChangingEventArgs *)*a3;
    v7 = *(unsigned int (__stdcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden))(*(_DWORD *)*a3 + 4);
    if ( v7 == Windows::System::AppMemoryUsageLimitChangingEventArgs::AddRef )
      Windows::System::AppMemoryUsageLimitChangingEventArgs::AddRef(v10);
    else
      ((void (__thiscall *)(_DWORD, Windows::System::AppMemoryUsageLimitChangingEventArgs *))v7)(
        *(_DWORD *)(*(_DWORD *)*a3 + 4),
        v10);
    return CanCastTo;
  }
  *a3 = this;
  v9 = *(unsigned int (__stdcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden))(*(_DWORD *)this + 4);
  if ( v9 == Windows::System::AppMemoryUsageLimitChangingEventArgs::AddRef )
    Windows::System::AppMemoryUsageLimitChangingEventArgs::AddRef(this);
  else
    ((void (__thiscall *)(_DWORD, Windows::System::AppMemoryUsageLimitChangingEventArgs *))v9)(
      *(_DWORD *)(*(_DWORD *)this + 4),
      this);
  return 0;
}
