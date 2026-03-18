/*
 * XREFs of xxxDisownClipboard @ 0x1C00E021C
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C001B950 (xxxDW_SendDestroyMessages.c)
 *     xxxSetProcessWindowStation @ 0x1C00FDF30 (xxxSetProcessWindowStation.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DA8D4 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DC2C8 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00DF170 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxDisownClipboard(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rdx
  _OWORD *v8; // r9
  int v9; // ebp
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  result = CheckClipboardAccess(a1, a2);
  v4 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v13, UserDereferenceObject);
    ObfReferenceObject((PVOID)v4);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)v4, 774LL);
    v5 = *(_QWORD *)(v4 + 96);
    v6 = 0;
    v7 = *(unsigned int *)(v4 + 104);
    v8 = (_OWORD *)v5;
    v9 = 0;
    while ( (_DWORD)v7 )
    {
      v10 = *(_QWORD *)(v5 + 8);
      v7 = (unsigned int)(v7 - 1);
      if ( v10 && (v10 != 1 || v6) )
      {
        ++v9;
        *v8 = *(_OWORD *)v5;
        v8[1] = *(_OWORD *)(v5 + 16);
        v8 += 2;
        if ( *(_QWORD *)(v5 + 8) != 1LL && *(_DWORD *)v5 <= 0xDu )
        {
          v11 = 8322;
          if ( _bittest(&v11, *(_DWORD *)v5) )
            v6 = 1;
        }
      }
      v5 += 32LL;
    }
    if ( a1 == *(_QWORD *)(v4 + 80) )
      HMAssignmentUnlock(v4 + 80);
    v12 = *(_DWORD *)(v4 + 32);
    if ( v9 != *(_DWORD *)(v4 + 104) )
    {
      v12 |= 0x40u;
      ++*(_DWORD *)(v4 + 112);
      *(_DWORD *)(v4 + 32) = v12;
    }
    *(_DWORD *)(v4 + 104) = v9;
    if ( (v12 & 0x40) != 0 )
    {
      xxxDrawClipboard((struct tagWINDOWSTATION *)v4, v7);
      MungeClipData((struct tagWINDOWSTATION *)v4);
    }
    if ( a1 == *(_QWORD *)(v4 + 80) )
      HMAssignmentUnlock(v4 + 80);
    return PopAndFreeW32ThreadLock((__int64)v13, v7);
  }
  return result;
}
