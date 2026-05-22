/*
 * XREFs of _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$1 @ 0x180134ED1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VSystemCursor@@@std@@QEAA@XZ @ 0x180063FEC (--1-$shared_ptr@VSystemCursor@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 248) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 248) &= ~1u;
    return std::shared_ptr<SystemCursor>::~shared_ptr<SystemCursor>(a2 + 88);
  }
  return result;
}
