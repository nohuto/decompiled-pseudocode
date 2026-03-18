/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021C70
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00919C0 (HmgShareUnlockRemoveObject.c)
 *     HmgFree @ 0x1C00B35F0 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BE02C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0021B94 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021EDC (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0021FCC (HmgDecProcessHandleCount.c)
 *     McTemplateK0pqqq @ 0x1C0110924 (McTemplateK0pqqq.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this)
{
  int v2; // ebx
  __int64 v3; // r14
  GdiHandleManager *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned __int8 v11; // cl
  __int64 v12; // r9
  GdiHandleManager *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  struct OBJECT *v20; // rdx
  unsigned int Arg1; // eax
  const void **v22; // r9
  PMCGEN_TRACE_CONTEXT v23; // rcx
  const GUID *v24; // r8
  unsigned int v25; // [rsp+28h] [rbp-20h]

  v2 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  HmgDecProcessHandleCount(v2 & 0xFFFFFFFE);
  v3 = *(_QWORD *)this;
  v4 = gpHandleManager;
  v5 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v6 = *((_QWORD *)v4 + 2);
  v7 = v5;
  v8 = *(unsigned int *)(v6 + 2056);
  v9 = (unsigned int)v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16);
  if ( v5 >= (unsigned int)v9 )
    goto LABEL_20;
  if ( v5 >= (unsigned int)v8 )
    v9 = ((v5 - (unsigned int)v8) >> 16) + 1;
  else
    v9 = 0LL;
  v10 = *(_QWORD *)(v6 + 8 * v9 + 8);
  if ( (_DWORD)v9 )
    v7 = ((1 - (_DWORD)v9) << 16) - (_DWORD)v8 + v5;
  if ( (unsigned int)v7 >= *(_DWORD *)(v10 + 20) )
  {
LABEL_20:
    v12 = 0LL;
  }
  else
  {
    v11 = v7;
    v7 >>= 8;
    v9 = 2LL * v11;
    v12 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * v7) + 8 * v9 + 8);
  }
  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
  {
    LOBYTE(v9) = *(_BYTE *)(v3 + 14);
    Arg1 = GetEtwGdiHandleType(v9, v7, v8, v12);
    McTemplateK0pqqq(v23, &GdiDestroyHandle, v24, *v22, Arg1, v25, v2 & 0xFFFFFFFE);
    v3 = *(_QWORD *)this;
  }
  *(_BYTE *)(v3 + 14) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = v2 & 1;
  v13 = gpHandleManager;
  v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v15 = *((_QWORD *)v13 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  v18 = v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16);
  if ( v14 >= (unsigned int)v18 )
    goto LABEL_18;
  v18 = v14 >= v17 ? ((v14 - v17) >> 16) + 1 : 0LL;
  v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
  if ( (_DWORD)v18 )
    v16 = ((1 - (_DWORD)v18) << 16) - v17 + (unsigned int)v16;
  if ( (unsigned int)v16 >= *(_DWORD *)(v19 + 20) )
  {
LABEL_18:
    v20 = 0LL;
  }
  else
  {
    v18 = 2LL * (unsigned __int8)v16;
    v20 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
  }
  GdiHandleManager::ReleaseLockAndEntry((GdiHandleManager *)v18, v20);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
