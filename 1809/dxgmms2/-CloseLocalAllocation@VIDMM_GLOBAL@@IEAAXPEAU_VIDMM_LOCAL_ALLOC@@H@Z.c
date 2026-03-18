/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0065A48
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00621D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00626E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0065BEC (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, int a3)
{
  __int64 v4; // rdi
  __int64 v8; // rdx
  struct _VIDMM_LOCAL_ALLOC **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax

  v4 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = *((unsigned int *)a2 + 9);
  if ( !a3 )
  {
    *(_DWORD *)(v4 + 84) |= 1u;
    ++*((_DWORD *)a2 + 18);
    ++*(_DWORD *)(v4 + 380);
  }
  if ( (*((_DWORD *)a2 + 9))-- == 1 )
  {
    if ( *((_DWORD *)a2 + 19) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4 + 480, 0LL);
      v11 = *(unsigned int *)(v4 + 344);
      v12 = *((unsigned int *)a2 + 19);
      if ( (unsigned int)v11 < (unsigned int)v12 && g_IsInternalRelease )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v12);
        v15[5] = 0LL;
        v15[6] = 0LL;
        v15[7] = 0LL;
        v15[3] = 270LL;
        v15[4] = 9LL;
        WdLogEvent5_WdCriticalError(v15);
        LODWORD(v11) = *(_DWORD *)(v4 + 344);
        LODWORD(v12) = *((_DWORD *)a2 + 19);
      }
      *(_DWORD *)(v4 + 344) = v11 - v12;
      ExReleasePushLockExclusiveEx(v4 + 480, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (*(_DWORD *)(v4 + 92) & 1) != 0 )
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, a2, a3 != 0);
    --*(_DWORD *)(v4 + 312);
    v8 = *((_QWORD *)a2 + 7);
    if ( *(struct _VIDMM_LOCAL_ALLOC **)(v8 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
      || (v9 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8), *v9 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)) )
    {
      __fastfail(3u);
    }
    *v9 = (struct _VIDMM_LOCAL_ALLOC *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    if ( *(_DWORD *)(v4 + 128) )
    {
      v9 = *(struct _VIDMM_LOCAL_ALLOC ***)(*((_QWORD *)a2 + 1) + 16LL);
      v13 = *((_QWORD *)v9[*(unsigned int *)(*((_QWORD *)this + 3) + 208LL)] + 6)
          + 296LL * (*(_DWORD *)(v4 + 76) & 0x3F);
      v14 = *(_QWORD *)(v4 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 136) + 80LL) & 0x1001) != 0 )
        *(_QWORD *)(v13 + 240) -= v14;
      else
        *(_QWORD *)(v13 + 232) -= v14;
    }
    v10 = *(_QWORD *)a2;
    if ( (**(_DWORD **)(*(_QWORD *)a2 + 504LL) & 0x20000000) != 0
      && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v10 + 104)
      && (*(_DWORD *)(v10 + 84) & 4) == 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v10);
      v16[3] = 270LL;
      v16[4] = 26LL;
      v16[5] = a2;
      v16[6] = 0LL;
      v16[7] = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    if ( a3 )
    {
      *((_BYTE *)a2 + 32) |= 4u;
      operator delete(a2);
    }
  }
}
