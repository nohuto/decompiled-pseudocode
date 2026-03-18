/*
 * XREFs of ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00632D4
 * Callers:
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0063180 (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C00633CC (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006345C (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0063BD4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0063C64 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::UnreferenceAllocationList(
        VIDMM_DEVICE *this,
        __int64 ***a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  struct VIDMM_ALLOC **v8; // r14
  __int64 **v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v16,
    (struct _KTHREAD **)(*((_QWORD *)this + 2) + 360LL));
  VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
  v8 = (struct VIDMM_ALLOC **)&a2[a3];
  while ( a2 != (__int64 ***)v8 )
  {
    v9 = *a2;
    v10 = ***a2;
    v11 = (*(_DWORD *)(v10 + 80) >> 5) & 1;
    if ( *((_DWORD *)*a2 + 38) == (_DWORD)v11 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10, v11);
      *(_QWORD *)(v13 + 24) = v9;
      *(_QWORD *)(v13 + 32) = (*(_DWORD *)(**v9 + 80) >> 5) & 1;
      WdLogEvent5_WdAssertion(v13);
    }
    else
    {
      --*((_DWORD *)v9 + 38);
      v12 = *((int *)v9 + 39);
      if ( !*((_DWORD *)v9 + 38) )
      {
        if ( (_DWORD)v12 )
        {
          v14 = **v9;
          if ( !*(_BYTE *)(v14 + 96) )
          {
            v15 = WdLogNewEntry5_WdAssertion(v14, v11);
            *(_QWORD *)(v15 + 24) = v12;
            WdLogEvent5_WdAssertion(v15);
            VidSchMarkDeviceAsError(v9[1][4]);
          }
        }
      }
      if ( !(*((_BYTE *)v9 + 25) & 1 | *((_DWORD *)v9 + 38)) )
        VIDMM_DEVICE::NotifyAllocationEvicted(this, (struct VIDMM_ALLOC *)v9);
    }
    ++a2;
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), a4, 0, 1);
  VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
}
