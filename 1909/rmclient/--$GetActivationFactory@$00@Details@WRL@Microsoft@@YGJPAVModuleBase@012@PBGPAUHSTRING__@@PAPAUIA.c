/*
 * XREFs of ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIActivationFactory@@@Z @ 0x100098E0
 * Callers:
 *     _DllGetActivationFactory@8 @ 0x100073D0 (_DllGetActivationFactory@8.c)
 * Callees:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YGJPAIPBUCreatorMap@012@ABU_GUID@@PAPAUIUnknown@@@Z @ 0x10009040 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YGJPAIPBUCrea.c)
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     ?AddRef@CMemoryManager@System@Windows@@UAGKXZ @ 0x10009C60 (-AddRef@CMemoryManager@System@Windows@@UAGKXZ.c)
 *     ?GetLock@ModuleBase@Details@WRL@Microsoft@@UBGPAU_RTL_SRWLOCK@@XZ @ 0x10009CB0 (-GetLock@ModuleBase@Details@WRL@Microsoft@@UBGPAU_RTL_SRWLOCK@@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2@System@Windows@@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IAEJABU_GUID@@PAPAXPA_N@Z @ 0x10009CC0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall Microsoft::WRL::Details::GetActivationFactory<1>(
        Microsoft::WRL::Details::ModuleBase *this,
        HSTRING string,
        int (__userpurge ****a3)@<eax>(const struct _GUID *a1@<edi>, Windows::System::CMemoryManager *this, const struct _GUID *a3, void **a4))
{
  WCHAR *StringRawBuffer; // eax
  int v5; // ecx
  const struct Microsoft::WRL::Details::CreatorMap **(__stdcall *v6)(Microsoft::WRL::Details::ModuleBase *__hidden); // esi
  int *v7; // eax
  const struct Microsoft::WRL::Details::CreatorMap **(__stdcall *v8)(Microsoft::WRL::Details::ModuleBase *__hidden); // esi
  int *v9; // edi
  int *v10; // eax
  int v11; // ecx
  const unsigned __int16 *(__stdcall *v12)(); // esi
  const unsigned __int16 *v13; // eax
  const unsigned __int16 *v14; // ecx
  bool v15; // cf
  unsigned __int16 v16; // dx
  int v17; // eax
  int v18; // edi
  struct _RTL_SRWLOCK *(__stdcall *v19)(Microsoft::WRL::Details::ModuleBase *__hidden); // esi
  RTL_SRWLOCK *v20; // ebx
  PVOID *v21; // ecx
  int (__userpurge ***v22)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **); // esi
  int (__userpurge *v23)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **); // edi
  int (__userpurge ****v24)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **); // edi
  _DWORD *v25; // ecx
  _DWORD *v26; // ecx
  int (__userpurge ***v27)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **); // esi
  _DWORD *v28; // ecx
  _DWORD *v29; // ecx
  int (__userpurge ***v30)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **); // esi
  int v31; // ecx
  int CanCastTo; // esi
  int (__userpurge ***v33)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **); // ecx
  unsigned int (__stdcall *v34)(Windows::System::CMemoryManager *__hidden); // edi
  int v36; // eax
  int (__userpurge ***v37)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **); // ebx
  struct _RTL_SRWLOCK *(__stdcall *v38)(Microsoft::WRL::Details::ModuleBase *__hidden); // esi
  Microsoft::WRL::Details::ModuleBase *Lock; // esi
  signed __int32 v40; // eax
  unsigned int (__stdcall *v41)(Windows::System::CMemoryManager *__hidden); // edi
  struct Microsoft::WRL::Details::ModuleBase *v42; // [esp-4h] [ebp-54h]
  BOOL hasEmbedNull; // [esp+10h] [ebp-40h] BYREF
  int (__userpurge ****v44)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **); // [esp+14h] [ebp-3Ch]
  Microsoft::WRL::Details::ModuleBase *v45; // [esp+18h] [ebp-38h]
  int *v46; // [esp+1Ch] [ebp-34h] BYREF
  PVOID Ptr; // [esp+20h] [ebp-30h] BYREF
  _BYTE v48[40]; // [esp+24h] [ebp-2Ch] BYREF

  v45 = this;
  v44 = a3;
  *a3 = 0;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    qmemcpy(v48, L"activatibleClassId", 0x26u);
    RoOriginateErrorW(-2147024809, 18, v48);
    return -2147024809;
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0);
  v5 = *(_DWORD *)this;
  Ptr = StringRawBuffer;
  v6 = *(const struct Microsoft::WRL::Details::CreatorMap **(__stdcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(v5 + 20);
  if ( v6 == Microsoft::WRL::Details::ModuleBase::GetMidEntryPointer )
  {
    v7 = &__pobjectentrymid;
  }
  else
  {
    v7 = (int *)((int (__thiscall *)(const struct Microsoft::WRL::Details::CreatorMap **(__stdcall *)(Microsoft::WRL::Details::ModuleBase *__hidden), Microsoft::WRL::Details::ModuleBase *))v6)(
                  v6,
                  this);
    v5 = *(_DWORD *)this;
  }
  v8 = *(const struct Microsoft::WRL::Details::CreatorMap **(__stdcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(v5 + 24);
  v9 = v7 + 1;
  if ( v8 == Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer )
    v10 = &__pobjectentrylast;
  else
    v10 = (int *)((int (__thiscall *)(const struct Microsoft::WRL::Details::CreatorMap **(__stdcall *)(Microsoft::WRL::Details::ModuleBase *__hidden), Microsoft::WRL::Details::ModuleBase *))v8)(
                   v8,
                   v45);
  v46 = v10;
  if ( v9 >= v10 )
  {
LABEL_82:
    RoOriginateError(-2147221231, string);
    return -2147221231;
  }
  while ( 1 )
  {
    v11 = *v9;
    if ( *v9 )
      break;
LABEL_20:
    if ( ++v9 >= v10 )
      goto LABEL_82;
  }
  v12 = *(const unsigned __int16 *(__stdcall **)())(v11 + 4);
  if ( v12 == Windows::System::CMemoryManager::InternalGetRuntimeClassNameStatic )
  {
    v13 = L"Windows.System.MemoryManager";
  }
  else if ( v12 == Windows::System::CProcessMemoryReport::InternalGetRuntimeClassName )
  {
    v13 = L"Windows.System.ProcessMemoryReport";
  }
  else
  {
    v13 = (const unsigned __int16 *)((int (__thiscall *)(_DWORD))v12)(*(_DWORD *)(v11 + 4));
  }
  v14 = (const unsigned __int16 *)Ptr;
  while ( 1 )
  {
    v15 = *v14 < *v13;
    if ( *v14 != *v13 )
      break;
    if ( !*v14 )
      goto LABEL_17;
    v16 = v14[1];
    v15 = v16 < v13[1];
    if ( v16 != v13[1] )
      break;
    v14 += 2;
    v13 += 2;
    if ( !v16 )
    {
LABEL_17:
      v17 = 0;
      goto LABEL_18;
    }
  }
  v17 = v15 ? -1 : 1;
LABEL_18:
  if ( v17 )
  {
    v10 = v46;
    goto LABEL_20;
  }
  v18 = *v9;
  v46 = (int *)1;
  *a3 = 0;
  Ptr = 0;
  if ( !**(_DWORD **)(v18 + 12) )
  {
LABEL_44:
    if ( *(int (__stdcall **)(int *, int, _DWORD *, _DWORD *))v18 == Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager> )
      v36 = Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
              (int *)&v46,
              v18,
              &_GUID_00000035_0000_0000_c000_000000000046,
              &Ptr);
    else
      v36 = (*(int (__thiscall **)(_DWORD, int **, int, GUID *, PVOID *))v18)(
              *(_DWORD *)v18,
              &v46,
              v18,
              &_GUID_00000035_0000_0000_c000_000000000046,
              &Ptr);
    CanCastTo = v36;
    if ( v36 >= 0 )
    {
      if ( ((unsigned __int8)v46 & 4) != 0 )
        goto LABEL_55;
      v37 = 0;
      v38 = *(struct _RTL_SRWLOCK *(__stdcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_DWORD *)v45 + 28);
      if ( v38 == Microsoft::WRL::Details::ModuleBase::GetLock )
        Lock = (Microsoft::WRL::Details::ModuleBase *)Microsoft::WRL::Details::ModuleBase::GetLock(v45);
      else
        Lock = (Microsoft::WRL::Details::ModuleBase *)((int (__thiscall *)(_DWORD, Microsoft::WRL::Details::ModuleBase *))v38)(
                                                        *(_DWORD *)(*(_DWORD *)v45 + 28),
                                                        v45);
      v45 = Lock;
      AcquireSRWLockExclusive((PSRWLOCK)Lock);
      if ( **(_DWORD **)(v18 + 12) )
      {
        v37 = (int (__userpurge ***)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **))DecodePointer(**(PVOID **)(v18 + 12));
        ((void (__thiscall *)(int (__userpurge *)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **), int (__userpurge ***)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **)))(*v37)[1])(
          (*v37)[1],
          v37);
        Lock = v45;
      }
      else
      {
        **(_DWORD **)(v18 + 12) = EncodePointer(Ptr);
      }
      if ( Lock )
        ReleaseSRWLockExclusive((PSRWLOCK)Lock);
      if ( v37 )
      {
        (*(void (__thiscall **)(_DWORD, PVOID))(*(_DWORD *)Ptr + 8))(*(_DWORD *)(*(_DWORD *)Ptr + 8), Ptr);
        (*(void (__thiscall **)(_DWORD, PVOID))(*(_DWORD *)Ptr + 8))(*(_DWORD *)(*(_DWORD *)Ptr + 8), Ptr);
      }
      else
      {
LABEL_55:
        v37 = (int (__userpurge ***)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **))Ptr;
      }
      CanCastTo = 0;
      *v44 = v37;
    }
    return CanCastTo;
  }
  v19 = *(struct _RTL_SRWLOCK *(__stdcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_DWORD *)v45 + 28);
  if ( v19 == Microsoft::WRL::Details::ModuleBase::GetLock )
    v20 = &Microsoft::WRL::Details::ModuleBase::moduleLock_;
  else
    v20 = (RTL_SRWLOCK *)((int (__thiscall *)(struct _RTL_SRWLOCK *(__stdcall *)(Microsoft::WRL::Details::ModuleBase *__hidden), Microsoft::WRL::Details::ModuleBase *))v19)(
                           v19,
                           v45);
  AcquireSRWLockShared(v20);
  v21 = *(PVOID **)(v18 + 12);
  if ( !*v21 )
  {
    if ( v20 )
      ReleaseSRWLockShared(v20);
    goto LABEL_44;
  }
  v22 = (int (__userpurge ***)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **))DecodePointer(*v21);
  Ptr = v22;
  v23 = **v22;
  if ( v23 == Windows::System::CMemoryManager::QueryInterface )
  {
    v24 = v44;
    *v44 = 0;
    if ( InlineIsEqualGUID(&_GUID_00000035_0000_0000_c000_000000000046, &_GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v24 = v22;
      v41 = (unsigned int (__stdcall *)(Windows::System::CMemoryManager *__hidden))(*v22)[1];
      if ( v41 == Windows::System::CMemoryManager::AddRef )
        Windows::System::CMemoryManager::AddRef((Windows::System::CMemoryManager *)v22);
      else
        ((void (__thiscall *)(int (__userpurge *)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **), int (__userpurge ***)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **)))v41)(
          (*v22)[1],
          v22);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v25, v25) )
      {
        *v24 = v22;
        CanCastTo = 0;
        goto LABEL_38;
      }
      v27 = v22 + 1;
      if ( InlineIsEqualGUID(v26, &_GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
      {
        *v24 = v27;
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v28, &_GUID_00000003_0000_0000_c000_000000000046) )
        {
          *v24 = v27;
          CanCastTo = 0;
          goto LABEL_35;
        }
        v30 = v27 + 4;
        if ( InlineIsEqualGUID(v29, &_GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
        {
          *v24 = v30;
          CanCastTo = 0;
LABEL_35:
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::CanCastTo(
                        &_GUID_00000035_0000_0000_c000_000000000046,
                        v24,
                        v31);
          if ( CanCastTo == -2147467262 )
            goto LABEL_35;
        }
      }
      if ( CanCastTo >= 0 )
      {
LABEL_38:
        v33 = *v24;
        v34 = (unsigned int (__stdcall *)(Windows::System::CMemoryManager *__hidden))(**v24)[1];
        if ( v34 != Windows::System::CMemoryManager::AddRef )
        {
          v42 = (struct Microsoft::WRL::Details::ModuleBase *)v33;
          goto LABEL_40;
        }
        v40 = _InterlockedIncrement((volatile signed __int32 *)v33 + 14);
        if ( ((_BYTE)v33[17] & 4) == 0 && v40 == 2 )
        {
          v42 = Microsoft::WRL::Details::ModuleBase::module_;
          v34 = *(unsigned int (__stdcall **)(Windows::System::CMemoryManager *__hidden))(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                        + 4);
          if ( (char *)v34 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
            Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
          else
LABEL_40:
            ((void (__thiscall *)(unsigned int (__stdcall *)(Windows::System::CMemoryManager *__hidden), struct Microsoft::WRL::Details::ModuleBase *))v34)(
              v34,
              v42);
        }
      }
    }
  }
  else
  {
    CanCastTo = ((int (__thiscall *)(int (__userpurge *)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **), int (__userpurge ***)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **), GUID *, int (__userpurge ****)@<eax>(const struct _GUID *@<edi>, Windows::System::CMemoryManager *, const struct _GUID *, void **)))v23)(
                  v23,
                  v22,
                  &_GUID_00000035_0000_0000_c000_000000000046,
                  v44);
  }
  if ( v20 )
    ReleaseSRWLockShared(v20);
  return CanCastTo;
}
