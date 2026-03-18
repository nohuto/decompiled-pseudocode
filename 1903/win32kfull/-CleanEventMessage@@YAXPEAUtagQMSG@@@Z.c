/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0010510
 * Callers:
 *     FreeMessageList @ 0x1C00104B0 (FreeMessageList.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012058 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C0025580 (DestroyThreadsMessages.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SuspendThreadQueue @ 0x1C01211E0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E3268 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C000AB90 (--0-$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     FreePointerMessageParams @ 0x1C01F08D4 (FreePointerMessageParams.c)
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // edx
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 **v13; // rax
  tagDomLock *v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  v1 = *((_DWORD *)a1 + 24);
  if ( v1 <= 20 )
  {
    if ( v1 == 20 )
    {
      FreePointerMessageParams();
      return;
    }
    v3 = v1 - 3;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 5;
        if ( v5 )
        {
          v6 = v5 - 3;
          if ( v6 )
          {
            if ( v6 == 5 && *((_QWORD *)a1 + 4) == 1LL )
              goto LABEL_28;
          }
          else
          {
            CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>((__int64)&v14);
            v11 = (__int64 *)*((_QWORD *)a1 + 5);
            v12 = *v11;
            if ( *(__int64 **)(*v11 + 8) != v11 || (v13 = (__int64 **)v11[1], *v13 != v11) )
              __fastfail(3u);
            *v13 = (__int64 *)v12;
            *(_QWORD *)(v12 + 8) = v13;
            v11[1] = (__int64)v11;
            *v11 = (__int64)v11;
            if ( !*((_DWORD *)v11 + 6) )
              HMAssignmentUnlock(v11 + 2);
            if ( v11 == &qword_1C032DDF0 )
              dword_1C032C208 = 0;
            else
              Win32FreePool(v11);
            if ( !v15 )
              tagDomLock::UnLockExclusive(v14);
          }
        }
        else if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        {
          UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
        }
        return;
      }
    }
    goto LABEL_14;
  }
  v10 = v1 - 22;
  if ( !v10 )
  {
    Win32FreePool(**((_QWORD **)a1 + 4));
    v9 = *((_QWORD *)a1 + 4);
    goto LABEL_15;
  }
  v7 = v10 - 4;
  if ( !v7 )
  {
    v9 = *((_QWORD *)a1 + 5);
    if ( v9 )
      goto LABEL_15;
    return;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_28:
    v9 = *((_QWORD *)a1 + 5);
    goto LABEL_15;
  }
  if ( v8 == 1 )
  {
LABEL_14:
    v9 = *((_QWORD *)a1 + 4);
LABEL_15:
    Win32FreePool(v9);
  }
}
