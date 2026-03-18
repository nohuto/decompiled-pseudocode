/*
 * XREFs of ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0001738
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8E10 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetCddDisplayMode(
        DXGADAPTER **this,
        unsigned int a2,
        const struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v4; // rdi
  DXGADAPTER *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v8 + 24) = 5307LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v9 + 24) = 5308LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v6 = this[14];
  v7 = 3968 * v4;
  *(_OWORD *)((char *)v6 + v7 + 968) = *(_OWORD *)&a3->Width;
  *(_OWORD *)((char *)v6 + v7 + 984) = *(_OWORD *)&a3->RefreshRate.Numerator;
  *(_QWORD *)((char *)v6 + v7 + 1000) = *(_QWORD *)&a3->DisplayFixedOutput;
  *(_DWORD *)((char *)v6 + v7 + 1008) = *((_DWORD *)&a3->Flags + 1);
}
