/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C01081C0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00D66A8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x1C01080C0 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1C0108120 (DestroyThreadsMessages.c)
 *     SuspendThreadQueue @ 0x1C01167E0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01CEAF4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C01C3464 (--0-$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     FreePointerMessageParams @ 0x1C01DB134 (FreePointerMessageParams.c)
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rcx
  int v8; // edx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  void **v11; // rax
  int v12; // edx
  int v13; // edx
  tagObjLock *v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  v1 = *((_DWORD *)a1 + 24);
  if ( v1 <= 20 )
  {
    if ( v1 == 20 )
    {
      FreePointerMessageParams(a1);
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
              goto LABEL_16;
          }
          else
          {
            CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>(&v14);
            v9 = (_QWORD *)*((_QWORD *)a1 + 5);
            v10 = (_QWORD *)*v9;
            if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (void **)v9[1], *v11 != v9) )
              __fastfail(3u);
            *v11 = v10;
            v10[1] = v11;
            v9[1] = v9;
            *v9 = v9;
            if ( !*((_DWORD *)v9 + 6) )
              HMAssignmentUnlock(v9 + 2);
            if ( v9 == (_QWORD *)&unk_1C0319760 )
              dword_1C03171D8 = 0;
            else
              Win32FreePool(v9);
            if ( !v15 )
              tagObjLock::UnLock(v14);
          }
        }
        else if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        {
          UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
        }
        return;
      }
    }
    goto LABEL_11;
  }
  v8 = v1 - 22;
  if ( !v8 )
  {
    Win32FreePool(**((_QWORD **)a1 + 4));
    v7 = *((_QWORD *)a1 + 4);
    goto LABEL_12;
  }
  v12 = v8 - 4;
  if ( !v12 )
  {
    v7 = *((_QWORD *)a1 + 5);
    if ( v7 )
      goto LABEL_12;
    return;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_16:
    v7 = *((_QWORD *)a1 + 5);
    goto LABEL_12;
  }
  if ( v13 == 1 )
  {
LABEL_11:
    v7 = *((_QWORD *)a1 + 4);
LABEL_12:
    Win32FreePool(v7);
  }
}
