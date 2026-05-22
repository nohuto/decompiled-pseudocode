/*
 * XREFs of std::_Func_impl_no_alloc__lambda_61c4b1ef6c1727f04a15d7ac99fb15e3__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const___::_Do_call @ 0x1800C58E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x1800C4B20 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 */

unsigned __int8 __fastcall std::_Func_impl_no_alloc__lambda_61c4b1ef6c1727f04a15d7ac99fb15e3__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx

  v2 = *a2;
  v3 = 2;
  v4 = *(_DWORD *)(*a2 + 16) - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        v3 = 0;
    }
    else
    {
      v3 = 16;
    }
  }
  else
  {
    v3 = 8;
  }
  return DWMInputRouter::OnPointerInputDown(
           *(_QWORD *)(a1 + 8),
           *(_DWORD *)v2,
           *(_DWORD *)(v2 + 8),
           v3,
           *(_QWORD *)(v2 + 24),
           *(_QWORD *)(v2 + 32));
}
