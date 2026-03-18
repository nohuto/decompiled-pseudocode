/*
 * XREFs of ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C007CFE4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     CalcWindowFullScreen @ 0x1C007290C (CalcWindowFullScreen.c)
 *     DwmChildRectChange @ 0x1C0072D4C (DwmChildRectChange.c)
 */

void __fastcall UpdateWindowRects(
        struct tagWND *a1,
        const struct tagPOINT *a2,
        const struct tagSIZE *a3,
        int *a4,
        int *a5)
{
  int v5; // r14d
  int v6; // r15d
  unsigned int v10; // esi
  unsigned int v11; // edi
  _DWORD *v12; // rcx
  int v13; // r8d
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ecx

  v5 = 0;
  *a4 = 0;
  v6 = 0;
  *a5 = 0;
  if ( a2 )
  {
    v15 = (_DWORD *)*((_QWORD *)a1 + 5);
    v10 = a2->x - v15[22];
    v11 = a2->y - v15[23];
    if ( a2->x != v15[22] || v11 )
    {
      v16 = v15[58];
      v6 = 1;
      if ( (v16 & 0x8000) != 0 )
      {
        v15[58] = v16 & 0xFFFF7FFF;
        PostShellHookMessages(0x36uLL, *(_QWORD *)a1);
      }
    }
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( a3 )
  {
    v12 = (_DWORD *)*((_QWORD *)a1 + 5);
    v13 = a3->cx + v12[22] - v12[24];
    v14 = (unsigned int)(a3->cy + v12[23] - v12[25]);
    if ( v13 || (_DWORD)v14 )
      v5 = 1;
  }
  else
  {
    v13 = 0;
    v14 = 0LL;
  }
  if ( v6 || v5 )
  {
    v17 = (_DWORD *)*((_QWORD *)a1 + 5);
    v17[24] += v13 + v10;
    v17[25] += v14 + v11;
    v17[22] += v10;
    v17[23] += v11;
    v18 = (_DWORD *)*((_QWORD *)a1 + 5);
    v18[28] += v13 + v10;
    v18[29] += v14 + v11;
    v18[26] += v10;
    v18[27] += v11;
    if ( v13 < 0 )
    {
      v27 = *((_QWORD *)a1 + 5);
      v28 = *(_DWORD *)(v27 + 88);
      if ( *(_DWORD *)(v27 + 104) < v28 )
      {
        *(_DWORD *)(v27 + 104) = v28;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
      }
    }
    if ( (int)v14 < 0 )
    {
      v25 = *((_QWORD *)a1 + 5);
      v26 = *(_DWORD *)(v25 + 92);
      if ( *(_DWORD *)(v25 + 108) < v26 )
      {
        *(_DWORD *)(v25 + 108) = v26;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
      }
    }
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
    if ( v19 )
      GreOffsetRgn(v19, v10, v11);
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 448)
                                      + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v24 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (v24 & 0xF) == 0 && (v24 & 0x40000000) != 0 )
            DwmChildRectChange((unsigned __int64)a1, v22, v23);
        }
      }
    }
    CalcWindowFullScreen(a1);
  }
  *a4 = v5;
  *a5 = v6;
}
