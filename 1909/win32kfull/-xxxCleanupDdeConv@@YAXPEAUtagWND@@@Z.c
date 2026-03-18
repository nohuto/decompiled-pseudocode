/*
 * XREFs of ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C020A264
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C020B5F0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AA7C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C020C054 (xxxFreeDdeConv.c)
 */

void __fastcall xxxCleanupDdeConv(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // edi
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

LABEL_1:
  for ( i = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 )
    {
      v4 = *(unsigned int *)(*(_QWORD *)(i + 32) + 80LL);
      if ( (v4 & 2) != 0 )
      {
        v11 = 0LL;
        v12 = 0LL;
        v13 = 0LL;
        if ( *(_QWORD *)(i + 72) )
        {
          v5 = 1;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v3);
          v11 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
          v12 = i;
          HMLockObject(i);
          v7 = *(struct tagFREELIST **)(i + 72);
          *(_QWORD *)(i + 72) = 0LL;
          xxxFreeListFree(v7);
        }
        else
        {
          v5 = 0;
        }
        if ( (*(_BYTE *)(_HMPheFromObject(i) + 25) & 1) == 0 )
        {
          *(_QWORD *)(i + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
          xxxFreeDdeConv((struct tagDDECONV *)i);
        }
        if ( v5 )
          ThreadUnlock1(v9, v8, v10);
        goto LABEL_1;
      }
    }
  }
}
