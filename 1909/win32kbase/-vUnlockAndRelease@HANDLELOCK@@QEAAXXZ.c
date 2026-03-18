/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021CD0
 * Callers:
 *     HmgFree @ 0x1C001A3F0 (HmgFree.c)
 *     HmgShareUnlockRemoveObject @ 0x1C008DA30 (HmgShareUnlockRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BB020 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0021BE8 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021F44 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0022034 (HmgDecProcessHandleCount.c)
 *     McTemplateK0pqqq @ 0x1C010DFB4 (McTemplateK0pqqq.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this)
{
  int v2; // ebx
  __int64 v3; // r14
  GdiHandleManager *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  unsigned __int8 v10; // cl
  __int64 v11; // r9
  GdiHandleManager *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  struct OBJECT *v19; // rdx
  unsigned int Arg1; // eax
  const void **v21; // r9
  PMCGEN_TRACE_CONTEXT v22; // rcx
  const GUID *v23; // r8
  unsigned int v24; // [rsp+28h] [rbp-30h]

  v2 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  HmgDecProcessHandleCount(v2 & 0xFFFFFFFE);
  v3 = *(_QWORD *)this;
  v4 = gpHandleManager;
  v5 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v6 = *((_QWORD *)v4 + 2);
  v7 = v5;
  v8 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    goto LABEL_19;
  v9 = ((v5 - v8) >> 16) + 1;
  if ( v5 < v8 )
    v9 = 0LL;
  v6 = *(_QWORD *)(v6 + 8 * v9 + 8);
  if ( (_DWORD)v9 )
    v7 = ((1 - (_DWORD)v9) << 16) - v8 + v5;
  if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 20) )
  {
LABEL_19:
    v11 = 0LL;
  }
  else
  {
    v10 = v7;
    v7 >>= 8;
    v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v6 + 24) + 8 * v7) + 16LL * v10 + 8);
  }
  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
  {
    Arg1 = GetEtwGdiHandleType(*(unsigned __int8 *)(v3 + 14), v7, v6, v11);
    McTemplateK0pqqq(v22, &GdiDestroyHandle, v23, *v21, Arg1, v24, v2 & 0xFFFFFFFE);
    v3 = *(_QWORD *)this;
  }
  *(_BYTE *)(v3 + 14) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = v2 & 1;
  v12 = gpHandleManager;
  v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v14 = *((_QWORD *)v12 + 2);
  v15 = v13;
  v16 = *(_DWORD *)(v14 + 2056);
  v17 = v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16);
  if ( v13 >= (unsigned int)v17 )
    goto LABEL_18;
  v17 = ((v13 - v16) >> 16) + 1;
  if ( v13 < v16 )
    v17 = 0LL;
  v18 = *(_QWORD *)(v14 + 8 * v17 + 8);
  if ( (_DWORD)v17 )
    v15 = ((1 - (_DWORD)v17) << 16) - v16 + (unsigned int)v15;
  if ( (unsigned int)v15 >= *(_DWORD *)(v18 + 20) )
  {
LABEL_18:
    v19 = 0LL;
  }
  else
  {
    v17 = 2LL * (unsigned __int8)v15;
    v19 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
  }
  GdiHandleManager::ReleaseLockAndEntry((GdiHandleManager *)v17, v19);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
