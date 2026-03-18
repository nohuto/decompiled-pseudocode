/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FED54
 * Callers:
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00236DC (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C0239FB8 (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023A204 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 */

void __fastcall xxxReportMoveSizeCompletionToShell(struct _MOVESIZEDATA *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v6; // edi
  int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rbp
  BOOL v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-18h]

  v4 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 70);
  if ( IsShellParticipatesInSizing((struct tagWND *)v4, a2, a3, a4) )
  {
    v7 = *((_DWORD *)a1 + 49);
    *((_DWORD *)a1 + 70) = v6 & 0xFFFFFFFB;
    if ( v7 >= 0 )
      v8 = 2;
    else
      v8 = (v7 & 0x100000) == 0;
    NotifyShell::WindowSizingCompleted(v4, v8);
  }
  else if ( (v6 & 8) == 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 328LL);
    if ( v9 )
    {
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v10 = IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 264));
      if ( (_DWORD)v11 != (_DWORD)v12 || !v10 )
      {
        v13 = 2;
        if ( (*((_DWORD *)a1 + 49) & 0x100000) != 0 )
        {
          if ( (_DWORD)v11 == (_DWORD)v12 )
            v13 = ~v6 & 2;
          else
            v13 = v11;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
        v18 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v18;
        v19 = v9;
        HMLockObject(v9);
        if ( (unsigned __int8)NotifyShell::ArrangementCompleted(**((_QWORD **)a1 + 2), v13) && !v13 )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v9 + 16), 0);
        ThreadUnlock1(v16, v15, v17);
      }
    }
  }
}
