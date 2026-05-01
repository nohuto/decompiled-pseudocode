/*
 * XREFs of ??1AltTabWindowHook@@QEAA@XZ @ 0x1802E7CAC
 * Callers:
 *     ??1?$unique_ptr@VAltTabWindowHook@@U?$default_delete@VAltTabWindowHook@@@std@@@std@@QEAA@XZ @ 0x1802D7A00 (--1-$unique_ptr@VAltTabWindowHook@@U-$default_delete@VAltTabWindowHook@@@std@@@std@@QEAA@XZ.c)
 *     ?RegisterKeyboardHook@XamlAltTabViewController@@QE$AAAXXZ @ 0x1802D9DC8 (-RegisterKeyboardHook@XamlAltTabViewController@@QE$AAAXXZ.c)
 *     ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x1802DBC30 (-v_DismissView@XamlAltTabViewHost@@MEAAXXZ.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x1802E7D60 (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x1802E9598 (-UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@std@@V?$shared_ptr@VAltTabWindowHookData@@@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@0@V10@V10@AEBV?$shared_ptr@VAltTabWindowHookData@@@0@@Z @ 0x1802E7334 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VAltTabWindowHookDat.c)
 *     ?erase@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@2@0@Z @ 0x1802EA028 (-erase@-$vector@V-$shared_ptr@VAltTabWindowHookData@@@std@@V-$allocator@V-$shared_ptr@VAltTabWin.c)
 */

void __fastcall AltTabWindowHook::~AltTabWindowHook(std::_Ref_count_base **this)
{
  __int64 v2; // rbx
  __int64 **v3; // rax
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  if ( *this )
  {
    AcquireSRWLockExclusive(&AltTabWindowHook::s_altTabHookLock);
    v2 = xmmword_18059A188;
    v3 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<AltTabWindowHookData>>>>,std::shared_ptr<AltTabWindowHookData>>(
           &v6,
           (__int64 *)AltTabWindowHook::s_altTabHooks,
           (__int64 *)xmmword_18059A188,
           this);
    std::vector<std::shared_ptr<AltTabWindowHookData>>::erase(v4, &v7, *v3, v2);
    ReleaseSRWLockExclusive(&AltTabWindowHook::s_altTabHookLock);
    UnhookWindowsHookEx(*((HHOOK *)*this + 2));
  }
  v5 = this[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
