/*
 * XREFs of _lambda_cc14c4b3090cc7c63243ed8c77095553_::operator() @ 0x18012B404
 * Callers:
 *     ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18012B6C0 (-OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(_QWORD *a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(*(_QWORD *)*a1 + 100LL);
  if ( ((unsigned int)result & a3) != 0 )
  {
    result = a1[1];
    *(_DWORD *)(result + 96) |= a2;
  }
  else if ( ((unsigned int)result & a4) != 0 )
  {
    result = a1[1];
    *(_DWORD *)(result + 96) &= ~a2;
  }
  return result;
}
