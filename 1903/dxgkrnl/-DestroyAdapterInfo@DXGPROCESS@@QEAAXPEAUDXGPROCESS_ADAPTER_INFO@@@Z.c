/*
 * XREFs of ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C013092C
 * Callers:
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0121764 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01305C0 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F49C4 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00343C8 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ??1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ @ 0x1C0130A1C (--1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C0130A44 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0130A6C (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0130AAC (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROCESS::DestroyAdapterInfo(DXGPROCESS *this, struct ADAPTER_RENDER **a2)
{
  struct ADAPTER_RENDER *v4; // rsi
  char *v5; // rdi
  __int64 v6; // rax
  char **v7; // rcx
  struct ADAPTER_RENDER *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v9 + 24) = 2094LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_BYTE *)a2 + 77) )
  {
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter((DXGPROCESS_ADAPTER_INFO *)a2, this, a2[6]);
    v8 = a2[2];
    if ( v8 )
    {
      ADAPTER_RENDER::DdiDestroyProcess(a2[6], v8);
      a2[2] = 0LL;
    }
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate((DXGPROCESS_ADAPTER_INFO_PASID_DATA *)a2);
  }
  if ( *((_DWORD *)a2 + 7) )
    ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(a2[6]);
  v4 = a2[6];
  v5 = (char *)(a2 + 7);
  if ( *((struct _KTHREAD **)v4 + 8) != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 4171LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = (char **)a2[8], *v7 != v5) )
    __fastfail(3u);
  *v7 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  --*((_DWORD *)v4 + 64);
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(*((_QWORD *)a2[6] + 2) + 208LL)) = 0LL;
  DXGPROCESS_ADAPTER_INFO_PASID_DATA::~DXGPROCESS_ADAPTER_INFO_PASID_DATA((DXGPROCESS_ADAPTER_INFO_PASID_DATA *)a2);
  operator delete(a2);
}
