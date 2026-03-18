/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C00F616C
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F5F0C (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269474 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(DXGADAPTERSYNCOBJECT *this, struct DXGSYNCOBJECT *a2)
{
  char *v2; // rbx
  char *v5; // r8
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rbx
  struct _KTHREAD **v13; // rbp
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rdi
  char *v20; // rsi
  char **v21; // rax

  v2 = (char *)this + 32;
  if ( *((_QWORD *)this + 4) )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v17 + 24) = 1630LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_BYTE *)a2 + 277) )
    goto LABEL_9;
  v5 = 0LL;
  if ( (unsigned int)(*((_DWORD *)a2 + 48) - 5) <= 1 )
    v5 = (char *)a2 + 120;
  v6 = 0LL;
  if ( (*((_DWORD *)a2 + 49) & 4) != 0 )
    v6 = *((_QWORD *)a2 + 38);
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct DXGSYNCOBJECT *, char *, _QWORD, __int64, _QWORD, char *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 608LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
         a2,
         (char *)a2 + 192,
         *((unsigned int *)a2 + 68),
         v6,
         0LL,
         v2,
         v5);
  v11 = v7;
  if ( v7 >= 0 )
  {
LABEL_9:
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
    v12 = *((_QWORD *)this + 2);
    v13 = (struct _KTHREAD **)(v12 + 152);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 152));
    v14 = (__int64 *)(v12 + 192);
    v15 = *v14;
    if ( *(__int64 **)(*v14 + 8) == v14 )
    {
      *(_QWORD *)this = v15;
      *((_QWORD *)this + 1) = v14;
      *(_QWORD *)(v15 + 8) = this;
      *v14 = (__int64)this;
      DXGFASTMUTEX::Release(v13);
      *((_BYTE *)this + 24) = 1;
      *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 49) & 4) != 0;
      if ( (*((_DWORD *)a2 + 49) & 4) == 0 )
        return 0LL;
      v19 = (char *)a2 + 288;
      v20 = (char *)this + 40;
      v21 = (char **)*((_QWORD *)v19 + 1);
      if ( *v21 == v19 )
      {
        *(_QWORD *)v20 = v19;
        *((_QWORD *)v20 + 1) = v21;
        *v21 = v20;
        *((_QWORD *)v19 + 1) = v20;
        return 0LL;
      }
    }
    __fastfail(3u);
  }
  v18 = WdLogNewEntry5_WdWarning(v9, v8, v10);
  *(_QWORD *)(v18 + 24) = a2;
  *(_QWORD *)(v18 + 32) = v11;
  WdLogEvent5_WdWarning(v18);
  return (unsigned int)v11;
}
