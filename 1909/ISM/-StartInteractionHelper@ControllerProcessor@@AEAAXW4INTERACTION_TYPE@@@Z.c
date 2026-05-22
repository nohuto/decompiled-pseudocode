/*
 * XREFs of ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180077AAC
 * Callers:
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180078038 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180075D84 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800E90E0 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800E9148 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 */

void __fastcall ControllerProcessor::StartInteractionHelper(__int64 a1, int a2)
{
  POINT *CursorPosition; // rax
  POINT v5; // rdx
  BOOL v6; // eax
  int v7; // ecx
  ManipulationInjector *v8; // rcx
  struct tagPOINT *v9; // rdx
  struct tagPOINT v10; // [rsp+30h] [rbp+8h] BYREF

  CursorPosition = (POINT *)ControllerProcessor::GetCursorPosition((ControllerProcessor *)a1, &v10);
  v5 = *CursorPosition;
  *(POINT *)(a1 + 2236) = *CursorPosition;
  v6 = PtInRect((const RECT *)(a1 + 2216), v5);
  v7 = 0;
  if ( v6 )
  {
    v8 = (ManipulationInjector *)(a1 + 2328);
    v9 = (struct tagPOINT *)(a1 + 2236);
    if ( a2 == 1 )
      ManipulationInjector::StartPan(v8, v9, 0);
    else
      ManipulationInjector::StartZoom(v8, v9, a2 == 16, 0);
    v7 = a2;
  }
  *(_DWORD *)(a1 + 3140) = v7;
}
