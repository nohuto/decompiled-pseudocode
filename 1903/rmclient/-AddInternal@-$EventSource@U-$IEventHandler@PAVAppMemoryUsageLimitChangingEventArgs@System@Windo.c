/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100092E0
 * Callers:
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x10009230 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJPAU-$IEventHandler@PAVAppMem.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QAEJI@Z @ 0x10009D20 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QAEJI@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEAAV012@PAUIUnknown@@@Z @ 0x1000B830 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEAAV012@PAUIUnknown@@@Z.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAE@XZ @ 0x1001040A (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAE@XZ.c)
 *     ??1?$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QAE@XZ @ 0x1001041A (--1-$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QAE@XZ.c)
 */

int __stdcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        int a1,
        int a2,
        _DWORD *a3)
{
  unsigned int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  struct Microsoft::WRL::Details::ModuleBase *v6; // ecx
  char *v7; // eax
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ecx
  Microsoft::WRL::Details::EventTargetArray *v11; // edi
  _DWORD *v13; // ebx
  char *v14; // ecx
  int v15; // edi
  _DWORD *v16; // [esp+10h] [ebp-8h] BYREF
  char *i; // [esp+14h] [ebp-4h] BYREF

  *a3 = 0;
  a3[1] = 0;
  AcquireSRWLockExclusive(&stru_10018444);
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v3 = ((*((_DWORD *)Windows::System::CMemoryManager::s_limitChangeEvent + 4)
         - *((_DWORD *)Windows::System::CMemoryManager::s_limitChangeEvent + 3)) >> 2)
       + 1;
  else
    v3 = 1;
  v4 = operator new(0x18u, (const struct std::nothrow_t *)std::nothrow);
  v5 = v4;
  i = (char *)v4;
  if ( !v4 )
  {
    v8 = -2147024882;
LABEL_26:
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::EventTargetArray>::~MakeAllocator<Microsoft::WRL::Details::EventTargetArray>(&i);
    ReleaseSRWLockExclusive(&stru_10018444);
    return v8;
  }
  v6 = Microsoft::WRL::Details::ModuleBase::module_;
  v4[2] = 1;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( v6 )
  {
    v7 = *(char **)(*(_DWORD *)v6 + 4);
    i = v7;
    if ( v7 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(v6);
    else
      ((void (__thiscall *)(char *, struct Microsoft::WRL::Details::ModuleBase *))i)(v7, v6);
  }
  *v5 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v16 = v5;
  i = 0;
  v8 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
         (Microsoft::WRL::Details::EventTargetArray *)v5,
         v3);
  if ( v8 < 0 )
  {
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(&v16);
    goto LABEL_26;
  }
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((Microsoft::WRL::Details::EventTargetArray *)v5);
  }
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    v13 = (_DWORD *)*((_DWORD *)Windows::System::CMemoryManager::s_limitChangeEvent + 3);
    v14 = (char *)*((_DWORD *)Windows::System::CMemoryManager::s_limitChangeEvent + 5);
    for ( i = v14; v13 != *((_DWORD **)Windows::System::CMemoryManager::s_limitChangeEvent + 4); i += 4 )
    {
      v15 = *(_DWORD *)v14;
      Microsoft::WRL::ComPtr<IUnknown>::operator=(*v13++);
      *(_DWORD *)(v5[5] + 4 * ((v5[4] - v5[3]) >> 2)) = v15;
      v5[4] += 4;
      v14 = i + 4;
    }
  }
  *(_QWORD *)a3 = a1;
  v9 = (_DWORD *)v5[4];
  v16 = v9;
  v10 = *v9;
  if ( *v9 != a1 )
  {
    if ( a1 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1 + 4))(*(_DWORD *)(*(_DWORD *)a1 + 4), a1);
      v9 = v16;
      v10 = *v16;
    }
    *v9 = a1;
    if ( v10 )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v10 + 8))(*(_DWORD *)(*(_DWORD *)v10 + 8), v10);
  }
  *(_DWORD *)(v5[5] + 4 * ((v5[4] - v5[3]) >> 2)) = a2;
  v5[4] += 4;
  AcquireSRWLockExclusive(&SRWLock);
  v11 = Windows::System::CMemoryManager::s_limitChangeEvent;
  Windows::System::CMemoryManager::s_limitChangeEvent = (Microsoft::WRL::Details::EventTargetArray *)v5;
  ReleaseSRWLockExclusive(&SRWLock);
  ReleaseSRWLockExclusive(&stru_10018444);
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
  return 0;
}
