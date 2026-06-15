/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18002DAE0
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001831C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001AC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_18004FDA8);
  v3 = 0LL;
  if ( (int)v2 <= (int)qword_18004FDD8 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == (_DWORD)qword_18004FDD8 )
    {
      v3 = qword_18004FD90;
    }
    else
    {
      if ( (int)v2 >= (int)qword_18004FDD8 )
      {
        ATL::_AtlRaiseException();
        JUMPOUT(0x18002DB44LL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_18004FDA8);
  return v3;
}
