/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18003F780
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F1F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180025F44 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036950 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v1; // rdx
  LONG v3; // eax
  LONG v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  void *v8; // [rsp+28h] [rbp-10h]
  struct tagSIZE v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 90);
  v3 = v1[14] - v1[12];
  if ( v3 < 0 )
    v3 = 0;
  v9.cx = v3;
  v4 = v1[15] - v1[13];
  if ( v4 < 0 )
    v4 = 0;
  v9.cy = v4;
  v5 = CVisual::SetSize(this, &v9);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5CBu, v8);
  else
    CTopLevelWindow::NotifyMouseLeave(this);
  return v6;
}
