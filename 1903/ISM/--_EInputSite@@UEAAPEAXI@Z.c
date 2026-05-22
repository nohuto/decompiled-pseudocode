/*
 * XREFs of ??_EInputSite@@UEAAPEAXI@Z @ 0x1800017C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?erase@?$vector@PEAUISupportedInputUpdateObserver@@V?$allocator@PEAUISupportedInputUpdateObserver@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUISupportedInputUpdateObserver@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUISupportedInputUpdateObserver@@@std@@@std@@@2@@Z @ 0x180008108 (-erase@-$vector@PEAUISupportedInputUpdateObserver@@V-$allocator@PEAUISupportedInputUpdateObserve.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

InputSite *__fastcall InputSite::`vector deleting destructor'(InputSite *this, char a2)
{
  __int64 v4; // rax
  InputSite **v5; // r9
  InputSite **i; // r8
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v11; // rbp
  char v12; // [rsp+78h] [rbp+20h] BYREF

  *(_QWORD *)this = &InputSite::`vftable';
  v4 = *((_QWORD *)this + 52);
  v5 = *(InputSite ***)(v4 + 64);
  for ( i = *(InputSite ***)(v4 + 56); i != v5; ++i )
  {
    if ( *i == this )
      break;
  }
  std::vector<ISupportedInputUpdateObserver *>::erase(v4 + 56, &v12);
  v7 = *((_QWORD *)this + 52);
  if ( v7 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v8 = *((_QWORD *)this + 49);
  if ( v8 )
  {
    v11 = *((_QWORD *)this + 50);
    if ( v8 != v11 )
    {
      do
      {
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v8 + 8);
        v8 += 16LL;
      }
      while ( v8 != v11 );
      v8 = *((_QWORD *)this + 49);
    }
    std::_Deallocate<16,0>(v8, (*((_QWORD *)this + 51) - v8) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
  }
  if ( *((_BYTE *)this + 384) )
  {
    v9 = *((_QWORD *)this + 4);
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v9);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A8);
  return this;
}
