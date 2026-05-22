/*
 * XREFs of ?UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x1800C57A0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$vector@PEAUISupportedInputUpdateObserver@@V?$allocator@PEAUISupportedInputUpdateObserver@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUISupportedInputUpdateObserver@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUISupportedInputUpdateObserver@@@std@@@std@@@2@@Z @ 0x180008108 (-erase@-$vector@PEAUISupportedInputUpdateObserver@@V-$allocator@PEAUISupportedInputUpdateObserve.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterSupportedInputUpdateObserver(
        DWMInputRouter *this,
        struct ISupportedInputUpdateObserver *a2)
{
  struct ISupportedInputUpdateObserver **i; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  for ( i = (struct ISupportedInputUpdateObserver **)*((_QWORD *)this + 84);
        i != *((struct ISupportedInputUpdateObserver ***)this + 85) && *i != a2;
        ++i )
  {
    ;
  }
  std::vector<ISupportedInputUpdateObserver *>::erase((__int64)this + 672, &v4, (__int64)i);
  return 0LL;
}
