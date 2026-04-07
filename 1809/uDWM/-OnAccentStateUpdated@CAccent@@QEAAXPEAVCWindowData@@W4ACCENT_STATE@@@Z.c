/*
 * XREFs of ?OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x1800853B4
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E330 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18003B824 (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800852A0 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

void __fastcall CAccent::OnAccentStateUpdated(_QWORD *a1, struct CWindowData *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  CAccentBlurBehind *v6; // rcx

  v3 = a1;
  if ( a3 != 3 )
  {
    if ( a3 != 5 )
      return;
    v4 = *a1;
    v5 = 4096LL;
    goto LABEL_8;
  }
  v6 = (CAccentBlurBehind *)a1[42];
  if ( v6
    && (*((_QWORD *)a2 + 5) == v3[50]
     || CAccentBlurBehind::IsBlurBehindDirty(v6, a2, (const struct tagRECT *)(v3 + 77), v3[51], (HWND)v3[50])) )
  {
    v4 = *v3;
    v5 = 0x10000LL;
    a1 = v3;
LABEL_8:
    (*(void (__fastcall **)(_QWORD *, __int64))(v4 + 24))(a1, v5);
  }
}
