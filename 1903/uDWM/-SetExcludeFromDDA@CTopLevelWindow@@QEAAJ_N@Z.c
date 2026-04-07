/*
 * XREFs of ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800386C8
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024740 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180038630 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::SetExcludeFromDDA(CTopLevelWindow *this, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  CDesktopManager *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  void *v13; // [rsp+28h] [rbp-10h]

  v3 = 0;
  if ( a2 != ((*((_BYTE *)this + 241) & 4) != 0) )
  {
    v7 = CDesktopManager::s_pDesktopManagerInstance;
    *((_BYTE *)this + 241) = (4 * a2) | *((_BYTE *)this + 241) & 0xFB;
    v8 = *((_QWORD *)v7 + 5);
    v9 = *((_QWORD *)this + 2);
    v10 = *(_QWORD *)(v8 + 16);
    if ( v9 )
      v11 = *(unsigned int *)(*(_QWORD *)(v9 + 16) + 24LL);
    else
      v11 = 0LL;
    LOBYTE(a3) = a2;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 288LL))(v10, v11, a3);
    v3 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x163u, v13);
  }
  return v3;
}
