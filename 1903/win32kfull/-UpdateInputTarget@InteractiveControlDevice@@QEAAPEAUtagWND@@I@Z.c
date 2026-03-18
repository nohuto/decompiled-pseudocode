/*
 * XREFs of ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0254EA4
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C0253AC0 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0254334 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C024DA58 (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C024DBBC (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C024F2D4 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

struct tagWND *__fastcall InteractiveControlDevice::UpdateInputTarget(InteractiveControlDevice *this, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rax
  struct InteractiveControlManager *v6; // rax
  InteractiveControlManager *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  InteractiveControlManager *v10; // rax

  v2 = *((_QWORD *)this + 6);
  v3 = 0LL;
  if ( v2 && (a2 & *((_DWORD *)this + 14)) != 0 )
  {
    v5 = *(_QWORD *)(v2 + 40);
    if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 )
    {
      v7 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearBackgroundAccessors(v7);
    }
    else
    {
      v6 = InteractiveControlManager::Instance();
      InteractiveControlManager::SetDeviceFocus((__int64)v6, 0, 0, v2);
    }
  }
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( *(char *)(v9 + 20) < 0 || *(char *)(v9 + 19) < 0 )
    {
      v10 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearDeviceFocus(v10);
    }
    else
    {
      return (struct tagWND *)*((_QWORD *)this + 5);
    }
  }
  return (struct tagWND *)v3;
}
