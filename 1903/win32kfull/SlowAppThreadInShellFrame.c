/*
 * XREFs of SlowAppThreadInShellFrame @ 0x1C0009FB0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C0017AC8 (IsDebuggerAttached.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x1C01E275C (-OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z.c)
 */

struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // r14
  __int64 v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // esi
  struct tagTHREADINFO *v14; // rdi
  int v15; // r12d
  _DWORD *v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF

  v4 = *((_QWORD *)a1 + 53);
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v27, v4);
  v8 = *(_QWORD *)(v4 + 24);
  v9 = 0LL;
  v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 120LL);
  if ( !v11 || (v12 = *(_QWORD *)(v11 + 16)) == 0 || !(unsigned int)IsDebuggerAttached(*(_QWORD *)(v12 + 416)) )
  {
    if ( a4 )
    {
      v18 = *((_QWORD *)a1 + 83);
      v13 = gdwMDAQThreshold / 0xAu;
      if ( v18 && (*(_DWORD *)(v18 + 196) & 0x100000) != 0 )
        v13 = gdwMDAQThreshold / 0x14u;
    }
    else
    {
      v13 = gdwMDAQTimeoutDefenseInDepth;
    }
    v14 = *(struct tagTHREADINFO **)(v4 + 72);
    if ( v14 )
    {
      if ( v14 != a1 && v14 == a2 )
      {
        v19 = *(_QWORD *)(v4 + 80);
        if ( v19 )
        {
          if ( a3 == v19 )
          {
            if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v14 + 52)) )
              return (struct tagTHREADINFO *)v9;
            if ( v8 && (int)v10 - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 48LL) >= v13 )
              return v14;
            v20 = *((_QWORD *)v14 + 100);
            if ( v20 )
            {
              if ( (int)v10 - *(_DWORD *)(v20 + 48) >= v13 )
                return v14;
            }
            if ( (int)v10 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 72) + 440LL) + 12LL) >= v13 )
              return v14;
          }
        }
      }
    }
    if ( !v8 )
      goto LABEL_8;
    v14 = *(struct tagTHREADINFO **)(v8 + 104);
    if ( !v14 )
      goto LABEL_8;
    if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v14 + 52)) )
      return (struct tagTHREADINFO *)v9;
    if ( v14 != a1 || (v14 = OtherThreadsKeyboardInput((struct tagQ *)v4, (struct tagQMSG *)v8)) != 0LL )
    {
      v15 = a4;
      if ( (a4 || (*(_WORD *)(*((_QWORD *)a1 + 55) + 6LL) & 0x1084) != 0)
        && ((int)v10 - *(_DWORD *)(v8 + 48) >= v13
         || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v14 + 204)) > 0x100) )
      {
        return v14;
      }
    }
    else
    {
LABEL_8:
      v15 = a4;
    }
    v14 = *(struct tagTHREADINFO **)(v4 + 72);
    if ( v14 && v14 != a1 )
    {
      if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v14 + 52)) )
        return (struct tagTHREADINFO *)v9;
      v21 = *(_QWORD *)(v4 + 80);
      if ( v21 )
      {
        v22 = *((_QWORD *)v14 + 100);
        if ( v21 == v22 && (int)v10 - *(_DWORD *)(v22 + 48) >= v13 )
          return v14;
        v23 = *(_QWORD *)(v4 + 24);
        if ( v21 == v23 && (int)v10 - *(_DWORD *)(v23 + 48) >= v13 )
          return v14;
      }
      if ( v15
        && ((int)v10 - *(_DWORD *)(*((_QWORD *)v14 + 55) + 12LL) >= v13
         || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v14 + 204)) > 0x100) )
      {
        return v14;
      }
    }
    v16 = (_DWORD *)*((_QWORD *)a1 + 83);
    if ( v16 && (v16[49] & 0x100000) != 0 )
    {
      if ( (v24 = v16[84], v24 >= 3) && v16[83] / v24 > v13 || (v25 = v16[82]) != 0 && (int)v10 - v25 >= 4 * v13 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 53) + 128LL) + 112LL);
        if ( v26 )
          return *(struct tagTHREADINFO **)(v26 + 16);
      }
    }
  }
  return (struct tagTHREADINFO *)v9;
}
