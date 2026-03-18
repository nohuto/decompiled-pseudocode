/*
 * XREFs of ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1C023D304
 * Callers:
 *     _lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_ @ 0x1C023BCD0 (_lambda_a555c8f1bf148962729f2402570fc0b4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C012B874 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C023CD5C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C023D9D8 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C023DED8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z @ 0x1C02437B4 (-GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetFrameInfo(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *a2)
{
  struct DXGFASTMUTEX **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  int v9; // ebx
  OUTPUTDUPL_MGR *v10; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _BYTE v15[16]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v16[14]; // [rsp+30h] [rbp-39h] BYREF

  v4 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, *v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v4,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    OUTPUTDUPL_CONTEXT::GetFrameInfo(*ContextForProcess, &a2->FrameInfo);
    v9 = 0;
  }
  else
  {
    v9 = -1073741275;
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) && v9 >= 0 )
  {
    memset(v16, 0, 0x68uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v10, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v16);
    VidPnSourceId = a2->VidPnSourceId;
    v12 = *(_OWORD *)&a2->FrameInfo.AccumulatedFrames;
    *(_OWORD *)&v16[7] = *(_OWORD *)&a2->FrameInfo.LastPresentTime.LowPart;
    HIDWORD(v16[0]) = 104;
    v13 = *(_OWORD *)&a2->FrameInfo.PointerPosition.Position.y;
    LODWORD(v16[6]) = 7;
    HIDWORD(v16[6]) = VidPnSourceId;
    *(_OWORD *)&v16[11] = v13;
    *(_OWORD *)&v16[9] = v12;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v16, 1);
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v9;
}
