/*
 * XREFs of ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C0273310
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02744A0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C013D744 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014B958 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0273200 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::LogPresentParams(
        DXGFASTMUTEX ***this,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a2,
        struct _D3DKMT_PRESENT_RGNS *a3,
        int a4,
        struct AUTOEXPANDALLOCATION *a5)
{
  size_t v8; // rdi
  UINT v10; // ebp
  char *Buffer; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rsi
  __int64 v17; // rax
  OUTPUTDUPL_MGR *v19; // rcx

  v8 = 16 * a3->DirtyRectCount;
  v10 = 24 * a3->MoveRectCount;
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a5, v10 + v8 + 72, 0);
  v16 = Buffer;
  if ( Buffer )
  {
    memset(Buffer, 0, 0x48uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v19, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v16);
    *((struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)v16 + 14) = a2;
    *((_DWORD *)v16 + 1) = v10 + v8 + 72;
    *((_DWORD *)v16 + 12) = 2;
    *((_DWORD *)v16 + 13) = a4;
    *((_DWORD *)v16 + 15) = a3->DirtyRectCount;
    *((_DWORD *)v16 + 16) = a3->MoveRectCount;
    memmove(v16 + 72, a3->pDirtyRects, v8);
    memmove(&v16[(v8 & 0xFFFFFFFFFFFFFFF0uLL) + 72], a3->pMoveRects, v10);
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v16, 1);
    return 0LL;
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = 1221LL;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
