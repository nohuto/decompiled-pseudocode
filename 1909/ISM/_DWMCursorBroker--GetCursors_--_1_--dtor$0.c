/*
 * XREFs of _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x18003A630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800BFD48 (--1-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@.c)
 */

__int64 __fastcall DWMCursorBroker::GetCursors_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<Microsoft::WRL::ComPtr<ICursor>>::~vector<Microsoft::WRL::ComPtr<ICursor>>(*(_QWORD *)(a2 + 88));
  }
  return result;
}
