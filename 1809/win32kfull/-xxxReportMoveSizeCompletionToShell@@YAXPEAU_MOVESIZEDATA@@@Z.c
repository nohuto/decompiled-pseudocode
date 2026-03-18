/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E95E8
 * Callers:
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C006B4E0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0157414 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall xxxReportMoveSizeCompletionToShell(struct _MOVESIZEDATA *a1)
{
  __int64 *v1; // rdi
  int v3; // esi
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // r14
  BOOL v7; // eax
  __int64 v8; // rdx
  int v9; // r8d
  unsigned int v10; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 70);
  if ( IsShellParticipatesInSizing((struct tagWND *)v1) )
  {
    v4 = *((_DWORD *)a1 + 49);
    *((_DWORD *)a1 + 70) = v3 & 0xFFFFFFFB;
    if ( v4 >= 0 )
      v5 = 2LL;
    else
      v5 = ((unsigned int)~v4 >> 20) & 1;
    anonymous_namespace_::NotifyShellSimplePayload(*v1, 8, v5, 0LL);
  }
  else if ( (v3 & 8) == 0 )
  {
    v6 = *(_QWORD *)(v1[3] + 328);
    if ( v6 )
    {
      v7 = IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 264));
      if ( (_DWORD)v8 != v9 || !v7 )
      {
        v10 = 2;
        if ( (*((_DWORD *)a1 + 49) & 0x100000) != 0 )
        {
          if ( (_DWORD)v8 == v9 )
            v10 = ~v3 & 2;
          else
            v10 = v8;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
        v14[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v14;
        v14[1] = v6;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        if ( anonymous_namespace_::NotifyShellSimplePayload(**((_QWORD **)a1 + 2), 2, v10, 0LL) && !v10 )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v6 + 16), 0);
        ThreadUnlock1(v13, v12);
      }
    }
  }
}
