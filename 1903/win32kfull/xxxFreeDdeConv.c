/*
 * XREFs of xxxFreeDdeConv @ 0x1C020C304
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C020A514 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C020B840 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B8A0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C020C0EC (xxxDDETrackWindowDying.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C0209AAC (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C0209D54 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

struct tagDDECONV *__fastcall xxxFreeDdeConv(struct tagDDECONV *a1, int a2)
{
  struct tagDDECONV *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 *v7; // r8
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  TOKEN_TYPE v15; // eax
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  struct tagDDECONV *v22; // [rsp+38h] [rbp-20h]
  __int64 v23; // [rsp+40h] [rbp-18h]

  v2 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, a2, 0xEu, 0x38u, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids, a1);
  if ( v2 )
  {
    if ( (*((_DWORD *)v2 + 20) & 2) != 0 || (*(_BYTE *)(_HMPheFromObject(*((_QWORD *)v2 + 6)) + 25) & 1) != 0 )
      goto LABEL_10;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
    v21 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
    v22 = v2;
    HMLockObject(v2);
    v7 = (__int64 *)*((_QWORD *)v2 + 5);
    if ( v7 )
      v8 = *v7;
    else
      LODWORD(v8) = 0;
    PostMessage(*((_QWORD *)v2 + 6), 993, v8, 0);
    v2 = (struct tagDDECONV *)ThreadUnlock1(v10, v9, v11);
    if ( v2 )
    {
LABEL_10:
      v12 = *((_QWORD *)v2 + 4);
      if ( v12 && (*(_DWORD *)(*((_QWORD *)v2 + 2) + 480LL) & 1) != 0 )
        *(_DWORD *)(v12 + 80) |= 2u;
      UnlinkConv(v2, v12);
      v13 = *((_QWORD *)v2 + 11);
      if ( v13 )
      {
        --*(_WORD *)(v13 + 90);
        v14 = *((_QWORD *)v2 + 11);
        if ( !*(_WORD *)(v14 + 90) && !*(_WORD *)(v14 + 88) )
        {
          v15 = SeTokenType(*(PACCESS_TOKEN *)(v14 + 32));
          v16 = *(void **)(*((_QWORD *)v2 + 11) + 32LL);
          if ( v15 == TokenPrimary || v16 )
            ObfDereferenceObject(v16);
          Win32FreePool(*((_QWORD *)v2 + 11));
        }
        *((_QWORD *)v2 + 11) = 0LL;
      }
      HMAssignmentUnlock((char *)v2 + 32);
      HMAssignmentUnlock((char *)v2 + 48);
      HMAssignmentUnlock((char *)v2 + 40);
      if ( !(unsigned int)HMMarkObjectDestroy(v2) )
        return v2;
      while ( *((_QWORD *)v2 + 7) )
        PopState(v2, v17, v18, v19);
      HMFreeObject(v2);
    }
  }
  return 0LL;
}
