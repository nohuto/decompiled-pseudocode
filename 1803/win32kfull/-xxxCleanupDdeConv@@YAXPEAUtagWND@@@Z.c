/*
 * XREFs of ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01CF7A4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01D04B0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01CFC84 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01D0C2C (xxxFreeDdeConv.c)
 */

void __fastcall xxxCleanupDdeConv(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v7; // rcx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

LABEL_1:
  for ( i = RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomDDETrack, 1LL); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 )
    {
      v4 = *(unsigned int *)(*(_QWORD *)(i + 32) + 80LL);
      if ( (v4 & 2) != 0 )
      {
        v5 = *(_QWORD *)(i + 72);
        if ( v5 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
          v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v9;
          v9[1] = i;
          _InterlockedIncrement((volatile signed __int32 *)(i + 8));
          v7 = *(struct tagFREELIST **)(i + 72);
          *(_QWORD *)(i + 72) = 0LL;
          xxxFreeListFree(v7);
        }
        v8 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)i;
        LOBYTE(v8) = *(_BYTE *)(v8 + gSharedInfo[1] + 25);
        if ( (v8 & 1) == 0 )
        {
          xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
          xxxFreeDdeConv((struct tagDDECONV *)i);
        }
        if ( v5 )
          ThreadUnlock1(v8, v4, v3);
        goto LABEL_1;
      }
    }
  }
}
