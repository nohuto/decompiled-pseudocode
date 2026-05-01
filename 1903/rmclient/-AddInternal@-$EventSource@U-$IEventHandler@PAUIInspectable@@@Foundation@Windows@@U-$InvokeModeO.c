/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100089C0
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAUEventRegistrationToken@@@Z @ 0x10008950 (-Add@-$AgileEventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpti.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@I@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@$$QAI@Z @ 0x10008C90 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@I@Details@WRL@Microsoft@@YGJ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ @ 0x1000B7F0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QAEXPAUIUnknown@@PAX@Z @ 0x1000BA0D (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QAEXPAUIUnknown@@PAX@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

void **__thiscall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        int this,
        void *a2,
        int a3,
        _DWORD *a4)
{
  RTL_SRWLOCK *v5; // esi
  Microsoft::WRL::Details::EventTargetArray *v6; // ecx
  int v7; // eax
  Microsoft::WRL::Details::EventTargetArray *v8; // eax
  Microsoft::WRL::Details::EventTargetArray *v9; // esi
  void *v10; // ecx
  void **v11; // eax
  void **v12; // edx
  Microsoft::WRL::Details::EventTargetArray *v13; // eax
  Microsoft::WRL::Details::EventTargetArray *v14; // edi
  struct IUnknown **v16; // edi
  void **v17; // ecx
  Microsoft::WRL::Details::EventTargetArray *v18; // eax
  char v19; // [esp+Ch] [ebp-Ch] BYREF
  void **v20; // [esp+10h] [ebp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v21; // [esp+14h] [ebp-4h] BYREF

  v5 = (RTL_SRWLOCK *)(this + 8);
  *a4 = 0;
  a4[1] = 0;
  AcquireSRWLockExclusive((PSRWLOCK)(this + 8));
  v6 = *(Microsoft::WRL::Details::EventTargetArray **)this;
  v21 = 0;
  if ( v6 )
    v7 = ((*((_DWORD *)v6 + 4) - *((_DWORD *)v6 + 3)) >> 2) + 1;
  else
    v7 = 1;
  v20 = (void **)v7;
  v20 = (void **)Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned int>(
                   &v21,
                   &v20);
  if ( (int)v20 < 0 )
  {
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v21);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    return v20;
  }
  else
  {
    v8 = *(Microsoft::WRL::Details::EventTargetArray **)this;
    v9 = v21;
    if ( *(_DWORD *)this )
    {
      v16 = (struct IUnknown **)*((_DWORD *)v8 + 3);
      v17 = (void **)*((_DWORD *)v8 + 5);
      v20 = v17;
      if ( v16 != *((struct IUnknown ***)v8 + 4) )
      {
        do
        {
          Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v16, *v17);
          v18 = *(Microsoft::WRL::Details::EventTargetArray **)this;
          ++v16;
          v17 = ++v20;
        }
        while ( v16 != *((struct IUnknown ***)v18 + 4) );
      }
    }
    v10 = a2;
    *(_QWORD *)a4 = (int)a2;
    v11 = (void **)*((_DWORD *)v9 + 4);
    v20 = v11;
    v12 = (void **)*v11;
    if ( *v11 != a2 )
    {
      if ( a2 )
      {
        (*(void (__thiscall **)(_DWORD, void *))(*(_DWORD *)a2 + 4))(*(_DWORD *)(*(_DWORD *)a2 + 4), a2);
        v11 = v20;
        v10 = a2;
        v12 = (void **)*v20;
      }
      *v11 = v10;
      v20 = v12;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    }
    *(_DWORD *)(*((_DWORD *)v9 + 5) + 4 * ((*((_DWORD *)v9 + 4) - *((_DWORD *)v9 + 3)) >> 2)) = a3;
    *((_DWORD *)v9 + 4) += 4;
    AcquireSRWLockExclusive((PSRWLOCK)(this + 4));
    v13 = *(Microsoft::WRL::Details::EventTargetArray **)this;
    v14 = 0;
    if ( &v19 != (char *)this )
    {
      v14 = *(Microsoft::WRL::Details::EventTargetArray **)this;
      v13 = 0;
    }
    *(_DWORD *)this = v9;
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v13);
    if ( this != -4 )
      ReleaseSRWLockExclusive((PSRWLOCK)(this + 4));
    if ( this != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(this + 8));
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v14);
    return 0;
  }
}
