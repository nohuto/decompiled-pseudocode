/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0071020
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0071350 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00749D0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0070E40 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, int a3)
{
  __int64 v4; // rdi
  int v8; // ecx
  __int64 v9; // rdx
  struct _VIDMM_LOCAL_ALLOC **v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
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
    v8 = *((_DWORD *)a2 + 19);
    if ( v8 )
    {
      v14 = (unsigned int)-v8;
      if ( (int)v14 + _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 344), v14) < 0 )
      {
        if ( g_IsInternalRelease )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, a2);
          v15[5] = 0LL;
          v15[6] = 0LL;
          v15[7] = 0LL;
          v15[3] = 270LL;
          v15[4] = 9LL;
          WdLogEvent5_WdCriticalError(v15);
        }
      }
    }
    if ( (*(_DWORD *)(v4 + 92) & 1) != 0 )
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, a2, a3 != 0);
    --*(_DWORD *)(v4 + 312);
    v9 = *((_QWORD *)a2 + 7);
    if ( *(struct _VIDMM_LOCAL_ALLOC **)(v9 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
      || (v10 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8), *v10 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)) )
    {
      __fastfail(3u);
    }
    *v10 = (struct _VIDMM_LOCAL_ALLOC *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( *(_DWORD *)(v4 + 128) )
    {
      v10 = *(struct _VIDMM_LOCAL_ALLOC ***)(*((_QWORD *)a2 + 1) + 16LL);
      v12 = *((_QWORD *)v10[*(unsigned int *)(*((_QWORD *)this + 3) + 208LL)] + 6)
          + 296LL * (*(_DWORD *)(v4 + 76) & 0x3F);
      v13 = *(_QWORD *)(v4 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 136) + 80LL) & 0x1001) != 0 )
        *(_QWORD *)(v12 + 240) -= v13;
      else
        *(_QWORD *)(v12 + 232) -= v13;
    }
    v11 = *(_QWORD *)a2;
    if ( (**(_DWORD **)(*(_QWORD *)a2 + 504LL) & 0x20000000) != 0
      && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v11 + 104)
      && (*(_DWORD *)(v11 + 84) & 4) == 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v11);
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
