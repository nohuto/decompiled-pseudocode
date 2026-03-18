/*
 * XREFs of ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C023D850
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C023C8AC (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C003F13C (--0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z @ 0x1C023D2D8 (-GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(OUTPUTDUPL_MGR *this)
{
  unsigned int DiagnosticBufferSize; // edi
  DXGDIAGNOSTICSWITHMUTEX *v3; // rax
  enum _POOL_TYPE v4; // r8d
  __int64 v5; // rax
  unsigned int v6; // edi
  DXGDIAGNOSTICSWITHMUTEX *v7; // rax
  __int64 v8; // rcx
  enum _POOL_TYPE v9; // r8d
  __int64 v10; // rax

  if ( !*((_QWORD *)this + 7) )
  {
    DiagnosticBufferSize = OUTPUTDUPL_MGR::GetDiagnosticBufferSize(this, 1);
    if ( DiagnosticBufferSize )
    {
      v3 = (DXGDIAGNOSTICSWITHMUTEX *)operator new(0x30uLL, 0x674D444Fu, PagedPool);
      if ( v3 )
        v3 = DXGDIAGNOSTICSWITHMUTEX::DXGDIAGNOSTICSWITHMUTEX(v3, DiagnosticBufferSize, v4);
      *((_QWORD *)this + 7) = v3;
      if ( !v3 )
      {
        v5 = WdLogNewEntry5_WdLowResource(this);
        *(_QWORD *)(v5 + 24) = 956LL;
        WdLogEvent5_WdLowResource(v5);
      }
    }
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v6 = OUTPUTDUPL_MGR::GetDiagnosticBufferSize(this, 0);
    if ( v6 )
    {
      v7 = (DXGDIAGNOSTICSWITHMUTEX *)operator new(0x30uLL, 0x674D444Fu, PagedPool);
      if ( v7 )
        v7 = DXGDIAGNOSTICSWITHMUTEX::DXGDIAGNOSTICSWITHMUTEX(v7, v6, v9);
      *((_QWORD *)this + 8) = v7;
      if ( !v7 )
      {
        v10 = WdLogNewEntry5_WdLowResource(v8);
        *(_QWORD *)(v10 + 24) = 969LL;
        WdLogEvent5_WdLowResource(v10);
      }
    }
  }
}
