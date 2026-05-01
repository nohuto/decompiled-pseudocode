/*
 * XREFs of ?GetAtCurrent@?$VectorRangeNoThrow@U?$IVectorView@I@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x180214450
 * Callers:
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x18021EAA4 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<unsigned int>>::GetAtCurrent(
        _QWORD *a1,
        __int64 a2)
{
  int *result; // rax

  result = (int *)a1[2];
  if ( *result >= 0 && (unsigned int)a2 < *((_DWORD *)a1 + 2) )
  {
    result = (int *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 48LL))(
                      *a1,
                      a2,
                      (__int64)a1 + 28);
    *(_DWORD *)a1[2] = (_DWORD)result;
  }
  return result;
}
