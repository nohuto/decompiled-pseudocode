/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x18001EC28
 * Callers:
 *     DllCanUnloadNow @ 0x18001FF70 (DllCanUnloadNow.c)
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800210A0 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??__FmoduleSingleton@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x1800D5AF0 (--__FmoduleSingleton@-1--Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Mic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3)
{
  char v3; // si
  const struct Microsoft::WRL::Details::CreatorMap **i; // rbx
  void **v5; // rcx
  void *v6; // rdi
  PVOID v7; // rax

  v3 = (char)a3;
  for ( i = _minATLObjMap_ActivityToastNotificationCallback_COM; i < &_pobjectentrylast; ++i )
  {
    if ( *i )
    {
      if ( Microsoft::WRL::Details::ModuleBase::objectCount_ && !v3 )
        return 0;
      if ( **((_QWORD **)*i + 3) )
      {
        AcquireSRWLockExclusive(&Microsoft::WRL::Details::ModuleBase::moduleLock_);
        v5 = (void **)*((_QWORD *)*i + 3);
        v6 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          ReleaseSRWLockExclusive(&Microsoft::WRL::Details::ModuleBase::moduleLock_);
          v7 = DecodePointer(v6);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
        }
        else
        {
          ReleaseSRWLockExclusive(&Microsoft::WRL::Details::ModuleBase::moduleLock_);
        }
      }
    }
  }
  return Microsoft::WRL::Details::ModuleBase::objectCount_ == 0;
}
