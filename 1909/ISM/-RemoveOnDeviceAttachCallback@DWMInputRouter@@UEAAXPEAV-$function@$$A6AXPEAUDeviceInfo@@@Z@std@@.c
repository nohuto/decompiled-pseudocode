/*
 * XREFs of ?RemoveOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1800C4D30
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$vector@PEAUISupportedInputUpdateObserver@@V?$allocator@PEAUISupportedInputUpdateObserver@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUISupportedInputUpdateObserver@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUISupportedInputUpdateObserver@@@std@@@std@@@2@@Z @ 0x180008118 (-erase@-$vector@PEAUISupportedInputUpdateObserver@@V-$allocator@PEAUISupportedInputUpdateObserve.c)
 */

_QWORD *__fastcall DWMInputRouter::RemoveOnDeviceAttachCallback(__int64 a1, __int64 a2)
{
  _QWORD *i; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *(_QWORD **)(a1 + 712); i != *(_QWORD **)(a1 + 720) && *i != a2; ++i )
    ;
  return std::vector<ISupportedInputUpdateObserver *>::erase(a1 + 712, &v4, (__int64)i);
}
