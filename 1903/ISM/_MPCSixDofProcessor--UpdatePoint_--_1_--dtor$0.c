/*
 * XREFs of _MPCSixDofProcessor::UpdatePoint_::_1_::dtor$0 @ 0x1801327A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VSystemCursor@@@std@@QEAA@XZ @ 0x180093CA0 (--1-$shared_ptr@VSystemCursor@@@std@@QEAA@XZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdatePoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 240) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 240) &= ~1u;
    std::shared_ptr<SystemCursor>::~shared_ptr<SystemCursor>(a2 + 72);
  }
}
