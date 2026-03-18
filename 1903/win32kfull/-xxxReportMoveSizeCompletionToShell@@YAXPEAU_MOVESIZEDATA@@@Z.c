/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF004
 * Callers:
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C002DFBC (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C023A5D8 (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023A824 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 */

void __fastcall xxxReportMoveSizeCompletionToShell(struct _MOVESIZEDATA *a1)
{
  __int64 v1; // rbp
  int v3; // edi
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rbp
  BOOL v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 70);
  if ( IsShellParticipatesInSizing((struct tagWND *)v1) )
  {
    v4 = *((_DWORD *)a1 + 49);
    *((_DWORD *)a1 + 70) = v3 & 0xFFFFFFFB;
    if ( v4 >= 0 )
      v5 = 2;
    else
      v5 = (v4 & 0x100000) == 0;
    NotifyShell::WindowSizingCompleted(v1, v5);
  }
  else if ( (v3 & 8) == 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 328LL);
    if ( v6 )
    {
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v7 = IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 264));
      if ( (_DWORD)v8 != (_DWORD)v9 || !v7 )
      {
        v11 = 2;
        if ( (*((_DWORD *)a1 + 49) & 0x100000) != 0 )
        {
          if ( (_DWORD)v8 == (_DWORD)v9 )
            v11 = ~v3 & 2;
          else
            v11 = v8;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
        v16 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
        v17 = v6;
        HMLockObject(v6);
        if ( (unsigned __int8)NotifyShell::ArrangementCompleted(**((_QWORD **)a1 + 2), v11) && !v11 )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v6 + 16), 0);
        ThreadUnlock1(v14, v13, v15);
      }
    }
  }
}
