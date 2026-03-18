/*
 * XREFs of ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C02265A4
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C023F1D0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D9E8 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C022727C (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 */

__int64 __fastcall DXGCONTEXT::ReserveDmaBuffersForBlts(
        DXGCONTEXT *this,
        struct COREDEVICEACCESS *a2,
        unsigned int a3,
        struct _VIDMM_DMA_BUFFER **a4)
{
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax

  v6 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 7112LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_QWORD *)this + 45) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 7113LL;
    WdLogEvent5_WdAssertion(v10);
  }
  LODWORD(v11) = 0;
  if ( (_DWORD)v6 )
  {
    memset(a4, 0, 8 * v6);
    *((_QWORD *)this + 45) = a4;
    *((_DWORD *)this + 92) = v6;
  }
  v12 = 0LL;
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      v13 = DXGCONTEXT::AcquireDmaBuffer(this, &a4[v12], a2, 1);
      v11 = v13;
      if ( v13 < 0 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= (unsigned int)v6 )
        return (unsigned int)v11;
    }
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = v11;
    WdLogEvent5_WdError(v15);
    DXGCONTEXT::UnreserveDmaBuffersForBlts(this);
  }
  return (unsigned int)v11;
}
