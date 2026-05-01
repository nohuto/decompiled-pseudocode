/*
 * XREFs of ?_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x1801060B8
 * Callers:
 *     ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x180064B80 (-BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORM.c)
 * Callees:
 *     ?s_TransitionWindowWithRect@CImmersiveApplicationTransitionHelper@@AEAAXPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@@Z @ 0x180106194 (-s_TransitionWindowWithRect@CImmersiveApplicationTransitionHelper@@AEAAXPEAUHWND__@@W4DWMTRANSIT.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
        CImmersiveApplicationTransitionHelper *this,
        HWND *a2)
{
  int v4; // edi
  unsigned int PropW; // eax
  unsigned int v6; // ebx
  char v7; // bp
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx

  v4 = 0;
  PropW = (unsigned int)GetPropW(a2[4], L"AppWindowTransitionType");
  v6 = PropW;
  v7 = PropW | 1;
  if ( *((_DWORD *)a2 + 6) != 1 )
    v7 = PropW;
  if ( (v7 & 1) != 0 )
  {
    v4 = DwmpBeginTransitionRequestWithGUID(75LL, &unk_1804462A8);
    if ( v4 >= 0 )
    {
      if ( (v7 & 2) != 0 )
        v9 = v6 != 0 ? 289669120 : 285474816;
      else
        v9 = v6 != 0 ? 291504128 : 287309824;
      *((_DWORD *)this + 16) = 75;
      CImmersiveApplicationTransitionHelper::s_TransitionWindowWithRect(v8, a2[4], v9 | 0x12u, a2[6]);
      CImmersiveApplicationTransitionHelper::s_TransitionWindowWithRect(v10, a2[5], 285212691LL, a2[6]);
    }
  }
  return (unsigned int)v4;
}
