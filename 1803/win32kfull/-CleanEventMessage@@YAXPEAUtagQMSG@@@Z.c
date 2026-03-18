/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C000C670
 * Callers:
 *     DestroyThreadsMessages @ 0x1C000C5D0 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C000C730 (FreeMessageList.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0057B60 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     SuspendThreadQueue @ 0x1C00F78C0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01250EC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0007CA8 (--0-$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     DestroyNotify @ 0x1C00D8D68 (DestroyNotify.c)
 *     FreePointerMessageParams @ 0x1C01B84E4 (FreePointerMessageParams.c)
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
  int v9; // edx
  int v10; // edx
  tagObjLock *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

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
              goto LABEL_21;
          }
          else
          {
            CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>((__int64)&v11);
            DestroyNotify(*((_QWORD *)a1 + 5));
            if ( !v12 )
              tagObjLock::UnLock(v11);
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
  v9 = v8 - 4;
  if ( !v9 )
  {
    v7 = *((_QWORD *)a1 + 5);
    if ( v7 )
      goto LABEL_12;
    return;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_21:
    v7 = *((_QWORD *)a1 + 5);
    goto LABEL_12;
  }
  if ( v10 == 1 )
  {
LABEL_11:
    v7 = *((_QWORD *)a1 + 4);
LABEL_12:
    Win32FreePool(v7);
  }
}
