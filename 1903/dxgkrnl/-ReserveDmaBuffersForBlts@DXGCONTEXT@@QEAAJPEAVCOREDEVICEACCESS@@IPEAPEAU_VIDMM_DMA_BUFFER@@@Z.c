/*
 * XREFs of ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C025AF14
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02744A0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C014E3FC (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C025BD24 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 */

__int64 __fastcall DXGCONTEXT::ReserveDmaBuffersForBlts(
        DXGCONTEXT *this,
        struct COREDEVICEACCESS *a2,
        unsigned int a3,
        struct _VIDMM_DMA_BUFFER **a4)
{
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax

  v6 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 7272LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_QWORD *)this + 47) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = 7273LL;
    WdLogEvent5_WdAssertion(v11);
  }
  LODWORD(v12) = 0;
  if ( (_DWORD)v6 )
  {
    memset(a4, 0, 8 * v6);
    *((_QWORD *)this + 47) = a4;
    *((_DWORD *)this + 96) = v6;
  }
  v13 = 0LL;
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      v14 = DXGCONTEXT::AcquireDmaBuffer(this, &a4[v13], a2, 1);
      v12 = v14;
      if ( v14 < 0 )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= (unsigned int)v6 )
        return (unsigned int)v12;
    }
    v18 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = v12;
    WdLogEvent5_WdError(v18);
    DXGCONTEXT::UnreserveDmaBuffersForBlts(this);
  }
  return (unsigned int)v12;
}
