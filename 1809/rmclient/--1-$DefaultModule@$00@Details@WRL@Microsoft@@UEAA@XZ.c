/*
 * XREFs of ??1?$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800057C0
 * Callers:
 *     ??__FmoduleSingleton@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x18000AB70 (--__FmoduleSingleton@-1--Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Mic.c)
 * Callees:
 *     ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180007D50 (-GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DefaultModule<1>::~DefaultModule<1>(
        Microsoft::WRL::Details::ModuleBase *a1)
{
  const struct Microsoft::WRL::Details::CreatorMap **v2; // rbx
  unsigned __int64 i; // rdi
  __int64 result; // rax
  RTL_SRWLOCK *v5; // rbp
  void **v6; // rax
  void *v7; // r14
  PVOID v8; // rax

  *(_QWORD *)a1 = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
  v2 = Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer(a1) + 1;
  for ( i = (*(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)a1 + 48LL))(a1);
        (unsigned __int64)v2 < i;
        ++v2 )
  {
    if ( *v2 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)a1 + 24LL))(a1);
      if ( **((_QWORD **)*v2 + 3) )
      {
        v5 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)a1 + 56LL))(a1);
        AcquireSRWLockExclusive(v5);
        v6 = (void **)*((_QWORD *)*v2 + 3);
        v7 = *v6;
        if ( *v6 )
        {
          *v6 = 0LL;
          if ( v5 )
            ReleaseSRWLockExclusive(v5);
          v8 = DecodePointer(v7);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
        }
        else if ( v5 )
        {
          ReleaseSRWLockExclusive(v5);
        }
      }
    }
  }
  result = (*(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)a1 + 24LL))(a1);
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 0;
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  return result;
}
