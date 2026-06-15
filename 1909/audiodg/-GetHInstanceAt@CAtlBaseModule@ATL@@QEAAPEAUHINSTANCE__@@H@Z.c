/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1400401B4
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x14002F5D4 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_140086168);
  v3 = 0LL;
  if ( (int)v2 <= dword_140086198 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_140086198 )
    {
      v3 = qword_140086150;
    }
    else
    {
      if ( (int)v2 >= dword_140086198 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x140040228LL);
      }
      v3 = *((_QWORD *)qword_140086190 + v2);
    }
  }
  LeaveCriticalSection(&stru_140086168);
  return v3;
}
