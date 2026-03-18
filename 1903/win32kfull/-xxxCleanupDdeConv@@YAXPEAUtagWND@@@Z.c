/*
 * XREFs of ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C020A514
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C020B8A0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AD2C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C020C304 (xxxFreeDdeConv.c)
 */

void __fastcall xxxCleanupDdeConv(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // edi
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

LABEL_1:
  for ( i = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 )
    {
      v5 = *(unsigned int *)(*(_QWORD *)(i + 32) + 80LL);
      if ( (v5 & 2) != 0 )
      {
        v12 = 0LL;
        v13 = 0LL;
        v14 = 0LL;
        if ( *(_QWORD *)(i + 72) )
        {
          v6 = 1;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v3, v4);
          v12 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
          v13 = i;
          HMLockObject(i);
          v8 = *(struct tagFREELIST **)(i + 72);
          *(_QWORD *)(i + 72) = 0LL;
          xxxFreeListFree(v8);
        }
        else
        {
          v6 = 0;
        }
        if ( (*(_BYTE *)(_HMPheFromObject(i) + 25) & 1) == 0 )
        {
          *(_QWORD *)(i + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
          xxxFreeDdeConv((struct tagDDECONV *)i);
        }
        if ( v6 )
          ThreadUnlock1(v10, v9, v11);
        goto LABEL_1;
      }
    }
  }
}
