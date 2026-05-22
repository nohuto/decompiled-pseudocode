/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@PEAX@2@PEAU32@0@Z @ 0x180085C44
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x180080F18 (--0Win32kInterop@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

_QWORD *std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,InputInfoValidator *>>>::_Buynode0()
{
  _QWORD *result; // rax

  result = operator new(0x20uLL);
  *result = result;
  result[1] = result;
  return result;
}
