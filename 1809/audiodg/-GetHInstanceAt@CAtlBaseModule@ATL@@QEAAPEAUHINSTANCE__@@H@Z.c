/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x140043144
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1400354AC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_140089158);
  v3 = 0LL;
  if ( (int)v2 <= dword_140089188 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_140089188 )
    {
      v3 = qword_140089140;
    }
    else
    {
      if ( (int)v2 >= dword_140089188 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1400431B8LL);
      }
      v3 = *((_QWORD *)qword_140089180 + v2);
    }
  }
  LeaveCriticalSection(&stru_140089158);
  return v3;
}
