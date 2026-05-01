/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UAGJABU_GUID@@PAPAX@Z @ 0x10009740
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W3AGJABU_GUID@@PAPAX@Z @ 0x1000D390 (-QueryInterface@CMemoryManager@System@Windows@@W3AGJABU_GUID@@PAPAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBE@AGJABU_GUID@@PAPAX@Z @ 0x1000D3A0 (-QueryInterface@CMemoryManager@System@Windows@@WBE@AGJABU_GUID@@PAPAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBI@AGJABU_GUID@@PAPAX@Z @ 0x1000D3B0 (-QueryInterface@CMemoryManager@System@Windows@@WBI@AGJABU_GUID@@PAPAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBM@AGJABU_GUID@@PAPAX@Z @ 0x1000D3C0 (-QueryInterface@CMemoryManager@System@Windows@@WBM@AGJABU_GUID@@PAPAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WCA@AGJABU_GUID@@PAPAX@Z @ 0x1000D3D0 (-QueryInterface@CMemoryManager@System@Windows@@WCA@AGJABU_GUID@@PAPAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     ?AddRef@CMemoryManager@System@Windows@@UAGKXZ @ 0x10009C60 (-AddRef@CMemoryManager@System@Windows@@UAGKXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2@System@Windows@@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x10009CC0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __userpurge Windows::System::CMemoryManager::QueryInterface@<eax>(
        const struct _GUID *a1@<edi>,
        Windows::System::CMemoryManager *this,
        const struct _GUID *a3,
        void **a4)
{
  char *v4; // edi
  int v5; // ecx
  int CanCastTo; // edi
  volatile signed __int32 *v7; // ecx
  unsigned int (__stdcall *v8)(Windows::System::CMemoryManager *__hidden); // esi
  signed __int32 v10; // eax
  unsigned int (__stdcall *v11)(Windows::System::CMemoryManager *__hidden); // esi
  struct Microsoft::WRL::Details::ModuleBase *v12; // [esp-8h] [ebp-Ch]
  const struct _GUID *v13; // [esp-4h] [ebp-8h]
  const struct _GUID *v14; // [esp-4h] [ebp-8h]
  const struct _GUID *v15; // [esp-4h] [ebp-8h]
  const struct _GUID *v16; // [esp+0h] [ebp-4h]
  const struct _GUID *v17; // [esp+0h] [ebp-4h]
  const struct _GUID *v18; // [esp+0h] [ebp-4h]
  const struct _GUID *v19; // [esp+0h] [ebp-4h]
  const struct _GUID *v20; // [esp+0h] [ebp-4h]
  const struct _GUID *savedregs; // [esp+4h] [ebp+0h]

  *a4 = 0;
  if ( !a3->Data1
    && *(_DWORD *)&a3->Data2 == *(_DWORD *)&_GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)a3->Data4 == *(_DWORD *)_GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&_GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || InlineIsEqualGUID(v16, savedregs) )
  {
    *a4 = this;
    v11 = *(unsigned int (__stdcall **)(Windows::System::CMemoryManager *__hidden))(*(_DWORD *)this + 4);
    if ( v11 == Windows::System::CMemoryManager::AddRef )
      Windows::System::CMemoryManager::AddRef(this);
    else
      ((void (__thiscall *)(_DWORD, Windows::System::CMemoryManager *))v11)(*(_DWORD *)(*(_DWORD *)this + 4), this);
    return 0;
  }
  if ( !InlineIsEqualGUID(a1, v17) )
  {
    v4 = (char *)this + 4;
    if ( InlineIsEqualGUID(v13, v18) )
    {
      *a4 = v4;
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v14, v19) )
      {
        *a4 = v4;
        CanCastTo = 0;
      }
      else if ( InlineIsEqualGUID(v15, v20) )
      {
        *a4 = (char *)this + 20;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::CanCastTo(
                      v5,
                      a4,
                      v5);
        if ( CanCastTo != -2147467262 )
          goto LABEL_10;
      }
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
    }
LABEL_10:
    if ( CanCastTo < 0 )
      return CanCastTo;
    goto LABEL_11;
  }
  CanCastTo = 0;
  *a4 = this;
LABEL_11:
  v7 = (volatile signed __int32 *)*a4;
  v8 = *(unsigned int (__stdcall **)(Windows::System::CMemoryManager *__hidden))(*(_DWORD *)*a4 + 4);
  if ( v8 != Windows::System::CMemoryManager::AddRef )
  {
    v12 = (struct Microsoft::WRL::Details::ModuleBase *)*a4;
LABEL_13:
    ((void (__thiscall *)(unsigned int (__stdcall *)(Windows::System::CMemoryManager *__hidden), struct Microsoft::WRL::Details::ModuleBase *))v8)(
      v8,
      v12);
    return CanCastTo;
  }
  v10 = _InterlockedIncrement(v7 + 14);
  if ( (v7[17] & 4) != 0 || v10 != 2 )
    return CanCastTo;
  v12 = Microsoft::WRL::Details::ModuleBase::module_;
  v8 = *(unsigned int (__stdcall **)(Windows::System::CMemoryManager *__hidden))(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 4);
  if ( (char *)v8 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
    goto LABEL_13;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
  return CanCastTo;
}
