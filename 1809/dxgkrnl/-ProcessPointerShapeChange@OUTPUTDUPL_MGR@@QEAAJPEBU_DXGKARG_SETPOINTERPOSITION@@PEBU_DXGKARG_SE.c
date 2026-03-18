/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C012C9F0
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C02414E8 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C012B874 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C023D9D8 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C023DED8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C023DF44 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0244708 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPointerShapeChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        UINT a4,
        UINT a5)
{
  __m128i v8; // xmm1
  __int64 v9; // xmm0_8
  __int64 v10; // rbx
  OUTPUTDUPL_CONTEXT **v11; // r15
  __int64 v12; // r14
  unsigned int v13; // ebx
  int v14; // r12d
  OUTPUTDUPL_CONTEXT *v15; // r9
  __int64 v17; // rax
  OUTPUTDUPL_MGR *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _BYTE v23[16]; // [rsp+28h] [rbp-89h] BYREF
  _DXGKARG_SETPOINTERSHAPE v24; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v25[20]; // [rsp+60h] [rbp-51h] BYREF

  if ( a3->VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v17 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v17 + 24) = a3->VidPnSourceId;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdWarning(v17);
    return 3221225473LL;
  }
  else
  {
    v8 = *(__m128i *)&a3->VidPnSourceId;
    *(_OWORD *)&v24.Flags.0 = *(_OWORD *)&a3->Flags.0;
    v24.Width = a4;
    v9 = *(_QWORD *)&a3->XHot;
    *(__m128i *)&v24.VidPnSourceId = v8;
    v24.Height = a5;
    *(_QWORD *)&v24.XHot = v9;
    v10 = *((_QWORD *)this + 2) + 32LL * (unsigned int)_mm_cvtsi128_si32(v8);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, *(struct DXGFASTMUTEX *const *)v10, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    v11 = *(OUTPUTDUPL_CONTEXT ***)(v10 + 8);
    LODWORD(v12) = 0;
    v13 = 0;
    v14 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        v15 = *v11;
        if ( *v11 && *((_DWORD *)v15 + 79) )
        {
          if ( v14 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
            {
              memset(v25, 0, sizeof(v25));
              OUTPUTDUPL_MGR::InitializePacketHeader(v18, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v25);
              v25[13] = a3->VidPnSourceId;
              v25[14] = a3->Flags.Value;
              v25[15] = a4;
              v25[16] = a5;
              v25[17] = a3->Pitch;
              v25[18] = a3->XHot;
              v25[19] = a3->YHot;
              v25[1] = 80;
              v25[12] = 3;
              OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v25, 1);
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(this, a2);
              v15 = *v11;
            }
            v14 = 0;
          }
          v19 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(v15, a2, &v24);
          v12 = v19;
          if ( v19 < 0 )
            break;
        }
        ++v13;
        ++v11;
        if ( v13 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v21[3] = v24.VidPnSourceId;
      v21[4] = v13;
      v21[5] = v12;
      WdLogEvent5_WdError(v21);
    }
LABEL_5:
    if ( v23[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    return (unsigned int)v12;
  }
}
