/*
 * XREFs of DestroyThreadsMessages @ 0x1C0025580
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C00083F0 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0010510 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C0010648 (FreeQEntry.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall DestroyThreadsMessages(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edx
  struct tagMLIST *v6; // r14
  struct tagQMSG *v7; // rbx
  __int64 v8; // rbx
  struct tagQMSG *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF

  result = CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v11, a1);
  v6 = (struct tagMLIST *)(a1 + 3);
  v7 = (struct tagQMSG *)a1[3];
  if ( v7 )
  {
    do
    {
      v9 = *(struct tagQMSG **)v7;
      if ( *((_QWORD *)v7 + 13) == a2 )
      {
        if ( (struct tagQMSG *)a1[11] == v7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              v5,
              18,
              16,
              (__int64)&WPP_39a40ec7a48b3c5da4360439682b483d_Traceguids,
              (char)a1,
              a1[11]);
          a1[11] = 0LL;
        }
        CleanEventMessage(v7);
        result = DelQEntry(a1 + 3, v7, 1LL);
      }
      v7 = v9;
    }
    while ( v9 );
  }
  v8 = a1[6];
  if ( v8 )
  {
    do
    {
      v10 = *(_QWORD *)(v8 + 8);
      if ( *(_QWORD *)(v8 + 104) == a2 )
      {
        RemoveQMsgFromDeferList(v6, (struct tagQMSG *)v8);
        CleanEventMessage((struct tagQMSG *)v8);
        result = FreeQEntry((unsigned int *)v8);
      }
      v8 = v10;
    }
    while ( v10 );
  }
  return result;
}
