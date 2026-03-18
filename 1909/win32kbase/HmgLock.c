/*
 * XREFs of HmgLock @ 0x1C001DB10
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0027430 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreLockRegion @ 0x1C012F670 (GreLockRegion.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C001F5B0 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgLock(unsigned int a1, char a2)
{
  _DWORD *v3; // rbx
  __int16 v4; // ebp^2
  __int64 v5; // r15
  _DWORD *v6; // rsi
  GdiHandleEntryDirectory **v7; // rdi
  unsigned int v8; // eax
  GdiHandleEntryDirectory *v9; // r9
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  struct _KTHREAD *CurrentThread; // rbp
  GdiHandleManager *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // r8
  __int16 v24; // ax
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]

  v3 = 0LL;
  v4 = HIWORD(a1);
  v25 = 0LL;
  v26 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v26 )
  {
    v6 = (_DWORD *)v25;
    if ( *(_BYTE *)(v25 + 14) == a2 && *(_WORD *)(v25 + 12) == v4 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = (_DWORD *)v25;
      v17 = gpHandleManager;
      v18 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v25 & 0xFFFFFF);
      v19 = *((_QWORD *)v17 + 2);
      v20 = v18;
      v21 = *(_DWORD *)(v19 + 2056);
      if ( v18 < v21 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
      {
        v22 = ((v18 - v21) >> 16) + 1;
        if ( v18 < v21 )
          v22 = 0LL;
        v23 = *(_QWORD *)(v19 + 8 * v22 + 8);
        if ( (_DWORD)v22 )
          v20 = v18 + ((1 - (_DWORD)v22) << 16) - v21;
        if ( (unsigned int)v20 < *(_DWORD *)(v23 + 20) )
          v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v20 >> 8)) + 16LL * (unsigned __int8)v20 + 8);
      }
      v24 = *(_WORD *)(v5 + 12);
      if ( !v24 || *(struct _KTHREAD **)(v5 + 16) == CurrentThread )
      {
        *(_QWORD *)(v5 + 16) = CurrentThread;
        *(_WORD *)(v5 + 12) = v24 + 1;
      }
      else
      {
        v5 = 0LL;
      }
    }
    v7 = (GdiHandleEntryDirectory **)gpHandleManager;
    v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *v6 & 0xFFFFFF);
    v9 = v7[2];
    v10 = v8;
    v11 = *((_DWORD *)v9 + 514);
    if ( v8 < v11 + ((*((unsigned __int16 *)v9 + 1) + 0xFFFF) << 16) )
    {
      v12 = ((v8 - v11) >> 16) + 1;
      if ( v8 < v11 )
        v12 = 0LL;
      v13 = *((_QWORD *)v9 + v12 + 1);
      if ( (_DWORD)v12 )
        v10 = ((1 - (_DWORD)v12) << 16) - v11 + (unsigned int)v10;
      if ( (unsigned int)v10 < *(_DWORD *)(v13 + 20) )
        v3 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
    }
    v14 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v7, (unsigned __int16)*v3 | (*v3 >> 8) & 0xFF0000);
    GdiHandleEntryDirectory::ReleaseEntryLock(v7[2], v14);
    KeLeaveCriticalRegion();
  }
  return v5;
}
