/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x1801751F8
 * Callers:
 *     ??1?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1801751BC (--1-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@.c)
 *     ?_Init@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@AEAAXPEBV?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@2@@Z @ 0x180175B24 (-_Init@-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocato.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
