/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C
 * Callers:
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x1C0036724 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00F7380 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C01EA108 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C0214900 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0218090 (DxgkSubmitPresentToHwQueue.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223420 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223C84 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0224A24 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     DxgkPresentRedirected @ 0x1C0227800 (DxgkPresentRedirected.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C023315C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0011444 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  __int64 v2; // rbx
  int v3; // edi
  PSLIST_ENTRY v4; // r9
  unsigned int VidSchSibmitDataSize; // eax
  void *v6; // r9
  DXGADAPTER *v7; // rcx
  unsigned __int8 IsDxgmms2; // al
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // ecx
  int v12; // edi
  unsigned int v13; // eax

  v2 = *((_QWORD *)this + 1) + 1120LL;
  v3 = 1;
  ++*(_DWORD *)(v2 + 20);
  v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v2);
  if ( !v4 )
  {
    ++*(_DWORD *)(v2 + 24);
    v4 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v2 + 48))(
                         *(unsigned int *)(v2 + 36),
                         *(unsigned int *)(v2 + 44),
                         *(unsigned int *)(v2 + 40),
                         v2);
  }
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize(*((ADAPTER_RENDER **)this + 1));
    memset(v6, 0, VidSchSibmitDataSize);
    v7 = *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL);
    if ( *((int *)v7 + 540) >= 0x2000 )
      v3 = *((_DWORD *)v7 + 64);
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v7);
    *(_BYTE *)(v9 + 356) = IsDxgmms2;
    if ( IsDxgmms2 )
    {
      *(_DWORD *)(v9 + 568) = v3;
      v11 = 8 * v3;
      v12 = v3 << 6;
      *(_DWORD *)(v9 + 564) = v10;
      *(_DWORD *)(v9 + 572) = v10 * (v12 + ((v11 + 191) & 0xFFFFFFF8)) + 16;
      v13 = v10 * (v12 + ((v11 + 191) & 0xFFFFFFF8)) + 576;
      *(_DWORD *)(v9 + 536) = v13;
      *(_DWORD *)(v9 + 540) = v11 + v13;
    }
  }
}
