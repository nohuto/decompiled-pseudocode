/*
 * XREFs of ??1Win32kInterop@@UEAA@XZ @ 0x1800812FC
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x1800812B0 (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180005EDC (--1-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x18002A1AC (--1-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$list@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x180084DC0 (--1-$list@U-$pair@$$CB_KV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V-$allo.c)
 *     ?clear@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXXZ @ 0x180084F98 (-clear@-$list@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CBKUTarget.c)
 *     ??1CursorNotificationProcessor@@QEAA@XZ @ 0x1800862F4 (--1CursorNotificationProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::~Win32kInterop(Win32kInterop *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rcx
  const struct std::nothrow_t *v9; // rdx
  char *v10; // r8
  char *v11; // rcx
  char *v12; // rcx
  char *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx

  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64 *)this + 298,
    a2);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64 *)this + 282,
    v3);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64 *)this + 266,
    v4);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64 *)this + 250,
    v5);
  CursorNotificationProcessor::~CursorNotificationProcessor((Win32kInterop *)((char *)this + 1952));
  v6 = *((_QWORD *)this + 41);
  if ( v6 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 40);
  if ( v7 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (char *)*((_QWORD *)this + 35);
  if ( v8 )
  {
    v9 = (const struct std::nothrow_t *)((*((_QWORD *)this + 37) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v9 >= 0x1000 )
    {
      v9 = (const struct std::nothrow_t *)((char *)v9 + 39);
      v10 = (char *)*((_QWORD *)v8 - 1);
      v11 = (char *)(v8 - v10);
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
        goto LABEL_20;
      v8 = v10;
    }
    operator delete(v8, v9);
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    *((_QWORD *)this + 37) = 0LL;
  }
  std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>::~list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>((char *)this + 264);
  v12 = (char *)*((_QWORD *)this + 27);
  if ( !v12 )
    goto LABEL_15;
  v9 = (const struct std::nothrow_t *)((*((_QWORD *)this + 29) - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (unsigned __int64)v9 >= 0x1000 )
  {
    v9 = (const struct std::nothrow_t *)((char *)v9 + 39);
    v13 = (char *)*((_QWORD *)v12 - 1);
    v11 = (char *)(v12 - v13);
    if ( (unsigned __int64)(v11 - 8) <= 0x1F )
    {
      v12 = v13;
      goto LABEL_14;
    }
LABEL_20:
    _o__invalid_parameter_noinfo_noreturn(v11, v9);
    JUMPOUT(0x1800814E6LL);
  }
LABEL_14:
  operator delete(v12, v9);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
LABEL_15:
  std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::clear((char *)this + 200);
  operator delete(*((void **)this + 25), (const struct std::nothrow_t *)0x50);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((_QWORD *)this + 16);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((_QWORD *)this + 8);
  v14 = *((_QWORD *)this + 7);
  if ( v14 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 6);
  if ( v15 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
