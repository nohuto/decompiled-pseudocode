/*
 * XREFs of ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E165C
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00E19D0 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015B9B4 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E17E8 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0121764 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::OpenAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2, char a3)
{
  __int64 v4; // rdi
  __int64 v7; // r13
  _QWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct ADAPTER_RENDER *v17; // r14
  struct ADAPTER_RENDER **v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax

  LODWORD(v4) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 56, 0LL);
  *((_QWORD *)a2 + 8) = KeGetCurrentThread();
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 208LL);
  v8 = *(_QWORD **)(*((_QWORD *)this + 6) + 8 * v7);
  if ( !v8 )
  {
    v14 = operator new(0x50uLL, 0x4B677844u, 1, PagedPool);
    v8 = v14;
    if ( v14 )
    {
      *v14 = 0LL;
      v14[7] = 0LL;
      v14[8] = 0LL;
      v14[9] = 0LL;
      v14[1] = 0LL;
      v14[2] = 0LL;
      v14[3] = 0LL;
      v14[4] = 0LL;
      v14[5] = 0LL;
      v14[6] = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
    {
      LODWORD(v4) = -1073741801;
      goto LABEL_5;
    }
    v8[4] = this;
    v17 = (struct ADAPTER_RENDER *)(v8 + 7);
    v8[6] = a2;
    if ( *((struct _KTHREAD **)a2 + 8) != KeGetCurrentThread() )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v19 + 24) = 4164LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v18 = (struct ADAPTER_RENDER **)*((_QWORD *)a2 + 31);
    if ( *v18 != (struct ADAPTER_RENDER *)((char *)a2 + 240) )
      __fastfail(3u);
    *(_QWORD *)v17 = (char *)a2 + 240;
    v8[8] = v18;
    *v18 = v17;
    *((_QWORD *)a2 + 31) = v17;
    ++*((_DWORD *)a2 + 64);
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7) = v8;
  }
  ++*((_DWORD *)v8 + 6);
  if ( a3 )
  {
    v9 = DXGPROCESS_ADAPTER_INFO::Initialize((DXGPROCESS_ADAPTER_INFO *)v8, this, a2);
    v4 = v9;
    if ( v9 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v20 + 24) = v4;
      WdLogEvent5_WdWarning(v20);
    }
  }
LABEL_5:
  *((_QWORD *)a2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 56, 0LL);
  KeLeaveCriticalRegion();
  if ( (int)v4 < 0 )
    DXGPROCESS::CloseAdapter(this, a2);
  return (unsigned int)v4;
}
