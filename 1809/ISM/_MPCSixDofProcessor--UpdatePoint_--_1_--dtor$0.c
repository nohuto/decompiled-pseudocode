/*
 * XREFs of _MPCSixDofProcessor::UpdatePoint_::_1_::dtor$0 @ 0x180134E4C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VSystemCursor@@@std@@QEAA@XZ @ 0x180063FEC (--1-$shared_ptr@VSystemCursor@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall MPCSixDofProcessor::UpdatePoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 256) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 256) &= ~1u;
    return std::shared_ptr<SystemCursor>::~shared_ptr<SystemCursor>(a2 + 80);
  }
  return result;
}
