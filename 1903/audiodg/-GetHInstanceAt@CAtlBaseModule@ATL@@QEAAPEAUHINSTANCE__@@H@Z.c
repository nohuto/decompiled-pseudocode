/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1400401E4
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x14002F654 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_140087168);
  v3 = 0LL;
  if ( (int)v2 <= dword_140087198 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_140087198 )
    {
      v3 = qword_140087150;
    }
    else
    {
      if ( (int)v2 >= dword_140087198 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x140040258LL);
      }
      v3 = *((_QWORD *)qword_140087190 + v2);
    }
  }
  LeaveCriticalSection(&stru_140087168);
  return v3;
}
