/*
 * XREFs of xxxFreeDdeConv @ 0x1C020C054
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C020A264 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C020B590 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B5F0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C020BE3C (xxxDDETrackWindowDying.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C02097FC (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C0209AA4 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

struct tagDDECONV *__fastcall xxxFreeDdeConv(struct tagDDECONV *a1, int a2)
{
  struct tagDDECONV *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 *v6; // r8
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  TOKEN_TYPE v14; // eax
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  struct tagDDECONV *v20; // [rsp+38h] [rbp-20h]
  __int64 v21; // [rsp+40h] [rbp-18h]

  v2 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, a2, 14, 56, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids, a1);
  if ( v2 )
  {
    if ( (*((_DWORD *)v2 + 20) & 2) != 0 || (*(_BYTE *)(_HMPheFromObject(*((_QWORD *)v2 + 6)) + 25) & 1) != 0 )
      goto LABEL_10;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4);
    v19 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v19;
    v20 = v2;
    HMLockObject(v2);
    v6 = (__int64 *)*((_QWORD *)v2 + 5);
    if ( v6 )
      v7 = *v6;
    else
      LODWORD(v7) = 0;
    PostMessage(*((_QWORD *)v2 + 6), 993, v7, 0);
    v2 = (struct tagDDECONV *)ThreadUnlock1(v9, v8, v10);
    if ( v2 )
    {
LABEL_10:
      v11 = *((_QWORD *)v2 + 4);
      if ( v11 && (*(_DWORD *)(*((_QWORD *)v2 + 2) + 480LL) & 1) != 0 )
        *(_DWORD *)(v11 + 80) |= 2u;
      UnlinkConv(v2, v11);
      v12 = *((_QWORD *)v2 + 11);
      if ( v12 )
      {
        --*(_WORD *)(v12 + 90);
        v13 = *((_QWORD *)v2 + 11);
        if ( !*(_WORD *)(v13 + 90) && !*(_WORD *)(v13 + 88) )
        {
          v14 = SeTokenType(*(PACCESS_TOKEN *)(v13 + 32));
          v15 = *(void **)(*((_QWORD *)v2 + 11) + 32LL);
          if ( v14 == TokenPrimary || v15 )
            ObfDereferenceObject(v15);
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
        PopState(v2, v16, v17);
      HMFreeObject(v2);
    }
  }
  return 0LL;
}
