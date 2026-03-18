/*
 * XREFs of _SetThreadQueueMergeSetting @ 0x1C0239820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D6858 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall SetThreadQueueMergeSetting(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi

  v4 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v5 = 87LL;
  }
  else
  {
    v6 = PtiFromThreadId(a1);
    v8 = v6;
    if ( !v6 || (*(_DWORD *)(v6 + 1224) & 0x40000) != 0 )
    {
      v5 = 1444LL;
      goto LABEL_17;
    }
    v9 = *(_QWORD *)(v6 + 416);
    if ( v9 == PsGetCurrentProcessWin32Process(v7, a2) )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v9) )
      {
        if ( (v4 & 1) != 0 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v8 + 424) + 400LL) != 1
            || FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)v8) )
          {
            v5 = 170LL;
            goto LABEL_17;
          }
          *(_DWORD *)(v8 + 480) |= 0xC0u;
        }
        else
        {
          *(_DWORD *)(v8 + 480) &= 0xFFFFFF3F;
        }
        return 1LL;
      }
      v5 = 50LL;
    }
    else
    {
      v5 = 5LL;
    }
  }
LABEL_17:
  UserSetLastError(v5, a2, a3, a4);
  return 0LL;
}
