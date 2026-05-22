/*
 * XREFs of ??_GTestCommandHost@@QEAAPEAXI@Z @ 0x1800D36F4
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800104BC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ??1?$unique_ptr@VTestCommandHost@@U?$default_delete@VTestCommandHost@@@std@@@std@@QEAA@XZ @ 0x18002B500 (--1-$unique_ptr@VTestCommandHost@@U-$default_delete@VTestCommandHost@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?clear@?$list@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800D393C (-clear@-$list@U-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageD.c)
 */

TestCommandHost *__fastcall TestCommandHost::`scalar deleting destructor'(TestCommandHost *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 14) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  std::list<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>::clear((char *)this + 80);
  std::_Deallocate<16,0>(*((void **)this + 10), (const struct std::nothrow_t *)0x28);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this);
  operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
