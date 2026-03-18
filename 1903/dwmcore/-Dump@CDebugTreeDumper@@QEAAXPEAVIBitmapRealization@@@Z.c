/*
 * XREFs of ?Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180175354
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fab49bea0c152df40203ec606f021e9f__void_void___CDebugTreeDumper___::_Do_call @ 0x180175AE0 (std--_Func_impl_no_alloc__lambda_fab49bea0c152df40203ec606f021e9f__void_void___CDeb_ea_180175AE0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3798 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016BBB4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x1801753D8 (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 */

void __fastcall CDebugTreeDumper::Dump(CDebugTreeDumper *this, struct IBitmapRealization *a2)
{
  void *v2; // rbx
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  std::string::string(v5, (__int64)"IBitmapRealization");
  std::string::operator=(v2, v5);
  std::string::_Tidy_deallocate((__int64)v5);
  CDebugTreeDumper::DumpBitmapRealization(this, a2, a2);
}
