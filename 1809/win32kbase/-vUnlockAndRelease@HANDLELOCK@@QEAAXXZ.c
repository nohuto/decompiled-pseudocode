/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0020C78
 * Callers:
 *     HmgFree @ 0x1C0062E00 (HmgFree.c)
 *     HmgShareUnlockRemoveObject @ 0x1C007E680 (HmgShareUnlockRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00AA958 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0020DB4 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0023B18 (HmgDecProcessHandleCount.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this)
{
  int v2; // ebx
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  struct OBJECT *v10; // rdx

  v2 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  HmgDecProcessHandleCount(v2 & 0xFFFFFFFE);
  *(_BYTE *)(*(_QWORD *)this + 14LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = v2 & 1;
  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v5 = *((_QWORD *)v3 + 2);
  v6 = v4;
  v7 = *(_DWORD *)(v5 + 2056);
  v8 = v7 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16);
  if ( v4 >= (unsigned int)v8 )
    goto LABEL_9;
  v8 = v4 >= v7 ? ((v4 - v7) >> 16) + 1 : 0LL;
  v9 = *(_QWORD *)(v5 + 8 * v8 + 8);
  if ( (_DWORD)v8 )
    v6 = ((1 - (_DWORD)v8) << 16) - v7 + (unsigned int)v6;
  if ( (unsigned int)v6 >= *(_DWORD *)(v9 + 20) )
  {
LABEL_9:
    v10 = 0LL;
  }
  else
  {
    v8 = 2LL * (unsigned __int8)v6;
    v10 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
  }
  GdiHandleManager::ReleaseLockAndEntry((GdiHandleManager *)v8, v10);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
