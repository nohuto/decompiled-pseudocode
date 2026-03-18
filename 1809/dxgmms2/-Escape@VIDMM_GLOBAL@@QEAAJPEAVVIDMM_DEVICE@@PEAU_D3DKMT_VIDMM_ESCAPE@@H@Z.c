/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00A8384
 * Callers:
 *     VidMmEscape @ 0x1C0025260 (VidMmEscape.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A3C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C0025974 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0071FF8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C007A5AC (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1C00AAC08 (-PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z.c)
 *     ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B0E94 (-Flush@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C00B2194 (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00B4E7C (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Escape(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        unsigned __int64 *a4)
{
  D3DKMT_VIDMMESCAPETYPE Type; // eax
  unsigned int v7; // ebx
  PRKEVENT *v8; // rcx
  ULONG v9; // ecx
  D3DKMT_HANDLE v10; // edx
  UINT v11; // r8d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  VIDMM_PROCESS *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  HANDLE hProcess; // r9
  UINT64 NtHandle; // r10
  VIDMM_GLOBAL **v21; // rdx
  VIDMM_GLOBAL *v22; // rcx
  unsigned int i; // r8d
  __int64 v24; // rax
  __int64 v25; // rcx
  VIDMM_PROCESS *v26; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned __int64 *v28; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v29; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v30; // [rsp+30h] [rbp-38h]
  _BYTE v31[40]; // [rsp+40h] [rbp-28h] BYREF

  Type = a3->Type;
  v7 = -1073741811;
  if ( a3->Type == D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 18020LL;
    WdLogEvent5_WdAssertion(v13);
    v7 = -1073741823;
LABEL_20:
    if ( v7 != -1073741811 )
      return v7;
    goto LABEL_21;
  }
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_SETFAULT )
    goto LABEL_21;
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_RUN_UNMAP_TO_DUMMY_PAGE_TEST )
    return 0;
  if ( Type == D3DKMT_VIDMMESCAPETYPE_APERTURE_CORRUPTION_CHECK )
  {
    v7 = VIDMM_GLOBAL::ApertureCorruptionCheck(this, 0LL);
    goto LABEL_20;
  }
  if ( Type != D3DKMT_VIDMMESCAPETYPE_SUSPEND_CPU_ACCESS_TEST )
  {
    switch ( Type )
    {
      case D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS:
        v9 = dword_1C004D390;
        v10 = dword_1C004D38C;
        v11 = dword_1C004D384;
        dword_1C004D390 = a3->Wake.bFlush;
        dword_1C004D38C = a3->Evict.AllocationHandle;
        dword_1C004D384 = a3->SuspendProcess.bAllowWakeOnSubmission;
        a3->SetFault.Value = v9;
        a3->Evict.AllocationHandle = v10;
        a3->GetVads.GetVadRange.VaRangeIndex = v11;
        v8 = *(PRKEVENT **)this;
        break;
      case D3DKMT_VIDMMESCAPETYPE_WAKE:
        v8 = *(PRKEVENT **)this;
        if ( a3->SetFault.Value )
        {
          VIDMM_WORKER_THREAD::Flush((VIDMM_WORKER_THREAD *)v8);
          return 0;
        }
        break;
      case D3DKMT_VIDMMESCAPETYPE_DEFRAG:
        VIDMM_GLOBAL::PerformDefragmentationEscape(this, a3->Defrag.Operation, (unsigned int)a3, a4, v28, v29, v30);
        return 0;
      default:
LABEL_21:
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
          (DXGAUTOPUSHLOCKSHARED *)v31,
          (VIDMM_GLOBAL *)((char *)this + 40968));
        switch ( a3->Type )
        {
          case D3DKMT_VIDMMESCAPETYPE_GET_VAD_INFO:
            v26 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 9);
            if ( v26 )
              v26 = (VIDMM_PROCESS *)*((_QWORD *)v26 + 1);
            VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                        v26,
                                        *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
                                        0xFFFFFFFF);
            if ( !VirtualAddressAllocator )
              goto LABEL_40;
            CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
            break;
          case D3DKMT_VIDMMESCAPETYPE_SET_BUDGET:
            v17 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9);
            if ( v17 )
              v18 = *(_QWORD *)(v17 + 8);
            else
              v18 = 0LL;
            hProcess = a3->Evict.hProcess;
            NtHandle = a3->EvictByNtHandle.NtHandle;
            v21 = *(VIDMM_GLOBAL ***)(*(_QWORD *)(v18 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL));
            if ( v21 )
            {
              v22 = *v21;
              for ( i = 0; i < *((_DWORD *)*v21 + 1748); v22 = *v21 )
              {
                v24 = i++;
                v25 = (__int64)v21[6] + 296 * v24;
                *(_QWORD *)(v25 + 40) = NtHandle;
                *(_QWORD *)(v25 + 48) = hProcess;
              }
              VIDMM_GLOBAL::RequestNewBudget(v22, 0);
            }
            break;
          case D3DKMT_VIDMMESCAPETYPE_GET_BUDGET:
            v16 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 9);
            if ( v16 )
              v16 = (VIDMM_PROCESS *)*((_QWORD *)v16 + 1);
            VIDMM_PROCESS::GetNumBytesToTrim(
              v16,
              *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
              &a3->EvictByNtHandle.NtHandle);
            break;
          default:
            v15 = WdLogNewEntry5_WdWarning((unsigned int)(a3->Type - 8), v14);
            WdLogEvent5_WdWarning(v15);
LABEL_40:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
            return v7;
        }
        v7 = 0;
        goto LABEL_40;
    }
    KeSetEvent(v8[19], 0, 0);
    return 0;
  }
  if ( (_DWORD)a4 )
    return 0LL;
  return (unsigned int)-1073741790;
}
