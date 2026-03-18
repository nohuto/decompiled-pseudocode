/*
 * XREFs of xxxDisownClipboard @ 0x1C00FF454
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C003AD98 (xxxDW_SendDestroyMessages.c)
 *     xxxSetProcessWindowStation @ 0x1C00E12B0 (xxxSetProcessWindowStation.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0058030 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00FF830 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0100A58 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxDisownClipboard(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  _OWORD *v7; // r9
  int v8; // ebp
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // eax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v12, 0, 24);
  result = CheckClipboardAccess();
  v3 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v12, UserDereferenceObject);
    ObfReferenceObject((PVOID)v3);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)v3, 0x306u);
    v4 = *(_QWORD *)(v3 + 96);
    v5 = 0LL;
    v6 = *(unsigned int *)(v3 + 104);
    v7 = (_OWORD *)v4;
    v8 = 0;
    while ( (_DWORD)v6 )
    {
      v9 = *(_QWORD *)(v4 + 8);
      v6 = (unsigned int)(v6 - 1);
      if ( v9 && (v9 != 1 || (_DWORD)v5) )
      {
        ++v8;
        *v7 = *(_OWORD *)v4;
        v7[1] = *(_OWORD *)(v4 + 16);
        v7 += 2;
        if ( *(_QWORD *)(v4 + 8) != 1LL && *(_DWORD *)v4 <= 0xDu )
        {
          v10 = 8322;
          if ( _bittest(&v10, *(_DWORD *)v4) )
            v5 = 1LL;
        }
      }
      v4 += 32LL;
    }
    if ( a1 == *(_QWORD *)(v3 + 80) )
      HMAssignmentUnlock(v3 + 80);
    v11 = *(_DWORD *)(v3 + 32);
    if ( v8 != *(_DWORD *)(v3 + 104) )
    {
      v11 |= 0x40u;
      ++*(_DWORD *)(v3 + 112);
      *(_DWORD *)(v3 + 32) = v11;
    }
    *(_DWORD *)(v3 + 104) = v8;
    if ( (v11 & 0x40) != 0 )
    {
      xxxDrawClipboard((struct tagWINDOWSTATION *)v3);
      MungeClipData((struct tagWINDOWSTATION *)v3);
    }
    if ( a1 == *(_QWORD *)(v3 + 80) )
      HMAssignmentUnlock(v3 + 80);
    return PopAndFreeW32ThreadLock((__int64)v12, v6, v5);
  }
  return result;
}
