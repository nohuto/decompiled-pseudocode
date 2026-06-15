/*
 * XREFs of ??_G?$_Ref_count_del_alloc@V__ExceptionPtr@@P6AXPEAV1@@ZU?$_DebugMallocator@H@@@std@@UEAAPEAXI@Z @ 0x18002D570
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall std::_Ref_count_del_alloc<__ExceptionPtr,void (*)(__ExceptionPtr *),_DebugMallocator<int>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &off_18003EAC8;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
