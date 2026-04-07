/*
 * XREFs of ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x180033640
 * Callers:
 *     <none>
 * Callees:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002FDAC (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180030380 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLoginTransition::OnAnimationComplete(CLoginTransition *this, int a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  CDesktopManager *v5; // rax
  int v6; // eax
  void *v8; // [rsp+28h] [rbp-10h]

  v2 = 0;
  if ( a2 == *((_DWORD *)this + 16) )
  {
    v4 = CLoginTransition::StopAnimation(this);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xD2u, v8);
    }
    else
    {
      v5 = CDesktopManager::s_pDesktopManagerInstance;
      *((_DWORD *)this + 16) = -1;
      v6 = CWindowList::DesktopSwitchImmediately(*((CLoginTransition ***)v5 + 61), *((_QWORD *)this + 10));
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xD5u, v8);
      }
      else
      {
        *((_QWORD *)this + 10) = 0LL;
        *((_DWORD *)this + 18) = -1;
      }
    }
  }
  return v2;
}
