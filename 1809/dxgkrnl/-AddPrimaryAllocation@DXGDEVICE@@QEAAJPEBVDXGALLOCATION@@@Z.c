/*
 * XREFs of ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0121440
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C001397C (-InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0013B08 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 */

__int64 __fastcall DXGDEVICE::AddPrimaryAllocation(DXGADAPTER **this, const struct DXGALLOCATION *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGADAPTER **v10; // rcx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 3559LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v13 + 24) = 3560LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v5 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[216]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v14 + 24) = 3564LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( v5 >= *((_DWORD *)this + 434) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v15 + 24) = 3565LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v17 = 0;
  if ( DXGDEVICE::InsertPrimaryAllocation(this, v5, a2, &v17) )
  {
    v10 = (DXGADAPTER **)this[2];
    if ( !v17 )
      return 0LL;
    if ( this[216] != v10[2] )
      return 0LL;
    if ( *((_DWORD *)this + 82) != 1 )
      return 0LL;
    if ( (*((_DWORD *)a2 + 18) & 0x800) != 0 )
      return 0LL;
    result = VIDMM_EXPORT::VidMmPinAllocation(v10[68], v10[69], *((struct _VIDMM_MULTI_ALLOC **)a2 + 3), 0LL, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v16[3] = this;
    v16[5] = -1073741801LL;
    v16[4] = a2;
    WdLogEvent5_WdWarning(v16);
    return 3221225495LL;
  }
  return result;
}
