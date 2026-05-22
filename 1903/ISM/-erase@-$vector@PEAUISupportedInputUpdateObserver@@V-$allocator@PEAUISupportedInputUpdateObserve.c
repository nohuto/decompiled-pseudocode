/*
 * XREFs of ?erase@?$vector@PEAUISupportedInputUpdateObserver@@V?$allocator@PEAUISupportedInputUpdateObserver@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUISupportedInputUpdateObserver@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUISupportedInputUpdateObserver@@@std@@@std@@@2@@Z @ 0x180008108
 * Callers:
 *     ??_EInputSite@@UEAAPEAXI@Z @ 0x1800017C0 (--_EInputSite@@UEAAPEAXI@Z.c)
 *     ?RemoveOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1800C4F20 (-RemoveOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@.c)
 *     ?RemoveOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1800C4F60 (-RemoveOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@.c)
 *     ?UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x1800C57A0 (-UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A244 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x180037D7B (memmove_0.c)
 */

_QWORD *__fastcall std::vector<ISupportedInputUpdateObserver *>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  void *Src; // [rsp+48h] [rbp+10h] BYREF
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  Src = (void *)(a3 + 8);
  v10 = (void *)a3;
  std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v8, &Src, &v10);
  memmove_0(v10, Src, v3 - (_QWORD)Src);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
