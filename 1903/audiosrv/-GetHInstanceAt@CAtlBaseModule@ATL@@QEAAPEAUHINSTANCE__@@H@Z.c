/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18013C538
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800CD2D8 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_1801B95D8);
  v3 = 0LL;
  if ( (int)v2 <= dword_1801B9608 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_1801B9608 )
    {
      v3 = qword_1801B95C0;
    }
    else
    {
      if ( (int)v2 >= dword_1801B9608 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18013C5ACLL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_1801B95D8);
  return v3;
}
