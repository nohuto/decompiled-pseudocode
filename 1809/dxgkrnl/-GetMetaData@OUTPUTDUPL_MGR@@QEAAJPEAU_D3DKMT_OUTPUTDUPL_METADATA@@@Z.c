/*
 * XREFs of ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C023D424
 * Callers:
 *     _lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_ @ 0x1C023BC50 (_lambda_2348832400fa9218d4247e5b02438479_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C012B874 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C013B158 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C023CD5C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C023D9D8 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C023DED8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C024375C (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetMetaData(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_METADATA *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v9; // rcx
  D3DKMT_OUTPUTDUPL_METADATATYPE Type; // edx
  __int64 v11; // rax
  int DirtyRects; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rdx
  char *Buffer; // rax
  __int64 v17; // rcx
  char *v18; // rsi
  __int64 v19; // rax
  OUTPUTDUPL_MGR *v20; // rcx
  UINT v21; // eax
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, *(struct DXGFASTMUTEX *const *)v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v4,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    Type = a2->Type;
    if ( Type )
    {
      if ( Type != D3DKMT_OUTPUTDUPL_METADATATYPE_MOVE_RECTS )
      {
        v11 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v11 + 24) = a2->Type;
        WdLogEvent5_WdError(v11);
        DirtyRects = -1073741811;
        goto LABEL_13;
      }
      v13 = *((_QWORD *)*ContextForProcess + 33);
      if ( *(_DWORD *)(v13 + 16) == 2 )
      {
        v14 = *(_QWORD *)(v13 + 8);
        v15 = **(void ***)(v14 + 48);
        LODWORD(v14) = 24 * *(_DWORD *)(v14 + 44);
        a2->BufferSizeRequired = v14;
        if ( a2->BufferSizeSupplied < (unsigned int)v14 )
        {
          DirtyRects = -1073741789;
          goto LABEL_13;
        }
        a2->pBuffer = v15;
      }
      else
      {
        a2->BufferSizeRequired = 0;
      }
      DirtyRects = 0;
    }
    else
    {
      DirtyRects = OUTPUTDUPL_CONTEXT::GetDirtyRects(*ContextForProcess, a2);
    }
  }
  else
  {
    DirtyRects = -1073741275;
  }
LABEL_13:
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(
                       *(AUTOEXPANDALLOCATION **)(v4 + 16),
                       a2->BufferSizeRequired + 72,
                       0);
    v18 = Buffer;
    if ( Buffer )
    {
      memset(Buffer, 0, 0x48uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v20, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v18);
      v21 = a2->BufferSizeRequired + 72;
      *((_DWORD *)v18 + 12) = 8;
      *((_DWORD *)v18 + 1) = v21;
      *((_DWORD *)v18 + 13) = a2->VidPnSourceId;
      *((_DWORD *)v18 + 14) = a2->Type;
      *((_DWORD *)v18 + 15) = a2->BufferSizeSupplied;
      *((_DWORD *)v18 + 16) = a2->BufferSizeRequired;
      *((_DWORD *)v18 + 17) = DirtyRects;
      if ( DirtyRects >= 0 )
        memmove(v18 + 72, a2->pBuffer, a2->BufferSizeRequired);
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v18, 1);
    }
    else
    {
      v19 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v19 + 24) = 1894LL;
      WdLogEvent5_WdLowResource(v19);
      DirtyRects = -1073741801;
    }
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return (unsigned int)DirtyRects;
}
