/*
 * XREFs of PiControlQueryConflictList @ 0x140876EC0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1400EE5E4 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405BD8EC (PiControlMakeUserModeCallersCopy.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     IopQueryConflictList @ 0x14087DA00 (IopQueryConflictList.c)
 */

__int64 __fastcall PiControlQueryConflictList(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  __int64 *v4; // r12
  _DWORD *v7; // rdx
  unsigned int v8; // r8d
  void *v9; // r15
  void *v10; // r14
  int UserModeCallersCopy; // edi
  _QWORD *v12; // rax
  int v13; // r8d
  _DWORD *v14; // rax
  int v15; // eax
  void *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  void *v19; // [rsp+40h] [rbp-10h] BYREF
  void *v20; // [rsp+88h] [rbp+38h] BYREF

  v4 = (__int64 *)(a2 + 16);
  v18 = 0LL;
  v19 = 0LL;
  if ( !*((_QWORD *)a2 + 4) || *((_DWORD *)a2 + 10) < 0x20u )
    return 3221225507LL;
  v7 = (_DWORD *)*((_QWORD *)a2 + 2);
  if ( !v7 )
    return 3221225485LL;
  v8 = *((_DWORD *)a2 + 6);
  if ( v8 < 0x28 )
    return 3221225485LL;
  if ( *v7 != 1 )
    return 3221225485LL;
  if ( v7[4] != 1 )
    return 3221225485LL;
  WORD1(v18) = *a2;
  LOWORD(v18) = WORD1(v18);
  if ( (unsigned __int16)(WORD1(v18) - 1) > 0x18Fu || (v18 & 0x10000) != 0 )
    return 3221225485LL;
  v17 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v17, v7, v8, 1u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiControlAllocateBufferForUserModeCaller(&v20, *((_DWORD *)a2 + 10), a4, *v4);
    if ( UserModeCallersCopy < 0
      || (UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v19, *((void **)a2 + 1), *a2, 2u, a4, 1),
          UserModeCallersCopy < 0) )
    {
      v9 = v20;
    }
    else
    {
      UserModeCallersCopy = -1073741810;
      PpDevNodeLockTree(1);
      v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&v18, 0x43706E50u);
      v9 = v20;
      v10 = v12;
      if ( v12 )
      {
        v14 = *(_DWORD **)(v12[39] + 40LL);
        if ( v14 )
        {
          if ( v14 != IopRootDeviceNode && (unsigned int)(v14[75] - 787) > 1 )
          {
            UserModeCallersCopy = IopQueryConflictList((_DWORD)v10, (_DWORD)v17, v13, (_DWORD)v20, *((_DWORD *)a2 + 10));
            v15 = PiControlMakeUserModeCallersCopy((void **)v4, v9, *((_DWORD *)a2 + 10), 1u, a4, 0);
            if ( v15 < 0 )
              UserModeCallersCopy = v15;
          }
        }
      }
      PpDevNodeUnlockTree(1);
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, v17);
  PiControlFreeUserModeCallersBuffer(a4, v9);
  PiControlFreeUserModeCallersBuffer(a4, v19);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x43706E50u);
  *((_DWORD *)a2 + 12) = UserModeCallersCopy;
  return (unsigned int)UserModeCallersCopy;
}
