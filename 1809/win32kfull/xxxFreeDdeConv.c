/*
 * XREFs of xxxFreeDdeConv @ 0x1C01F53A8
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F3E54 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C01F4B90 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F4BC0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01F5200 (xxxDDETrackWindowDying.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F37A0 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F3910 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

struct tagDDECONV *__fastcall xxxFreeDdeConv(struct tagDDECONV *a1)
{
  struct tagDDECONV *v1; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v3; // r8
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  TOKEN_TYPE v10; // eax
  void *v11; // rcx
  __int64 v12; // rdx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 20) & 2) != 0
      || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)**((_DWORD **)a1 + 6)
                   + gSharedInfo[1]
                   + 25LL) & 1) != 0 )
    {
      goto LABEL_8;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gSharedInfo[0]);
    v14[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v14;
    v14[1] = v1;
    _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
    v3 = (_QWORD *)*((_QWORD *)v1 + 5);
    v4 = v3 ? *v3 : 0LL;
    PostMessage(*((struct tagWND **)v1 + 6), 0x3E1u, v4, 0LL);
    v1 = (struct tagDDECONV *)ThreadUnlock1(v6, v5);
    if ( v1 )
    {
LABEL_8:
      v7 = *((_QWORD *)v1 + 4);
      if ( v7 && (*(_DWORD *)(*((_QWORD *)v1 + 2) + 488LL) & 1) != 0 )
        *(_DWORD *)(v7 + 80) |= 2u;
      UnlinkConv(v1);
      v8 = *((_QWORD *)v1 + 11);
      if ( v8 )
      {
        --*(_WORD *)(v8 + 90);
        v9 = *((_QWORD *)v1 + 11);
        if ( !*(_WORD *)(v9 + 90) && !*(_WORD *)(v9 + 88) )
        {
          v10 = SeTokenType(*(PACCESS_TOKEN *)(v9 + 32));
          v11 = *(void **)(*((_QWORD *)v1 + 11) + 32LL);
          if ( v10 == TokenPrimary || v11 )
            ObfDereferenceObject(v11);
          Win32FreePool(*((_QWORD *)v1 + 11));
        }
        *((_QWORD *)v1 + 11) = 0LL;
      }
      HMAssignmentUnlock((char *)v1 + 32);
      HMAssignmentUnlock((char *)v1 + 48);
      HMAssignmentUnlock((char *)v1 + 40);
      if ( !(unsigned int)HMMarkObjectDestroy(v1) )
        return v1;
      while ( *((_QWORD *)v1 + 7) )
        PopState(v1, v12);
      HMFreeObject(v1);
    }
  }
  return 0LL;
}
