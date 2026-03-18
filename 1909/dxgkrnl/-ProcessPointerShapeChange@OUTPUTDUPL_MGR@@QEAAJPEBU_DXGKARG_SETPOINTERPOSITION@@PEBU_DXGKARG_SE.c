/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C013C180
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C0276DB8 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0141B94 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C02733A0 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0273928 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0273994 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C027A2B0 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPointerShapeChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        UINT a4,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a5)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v5; // eax
  __m128i v9; // xmm1
  __int64 v10; // xmm0_8
  __int64 *v11; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // eax
  __int64 v18; // r15
  int v19; // eax
  OUTPUTDUPL_CONTEXT **v20; // rbx
  unsigned int v21; // edi
  OUTPUTDUPL_CONTEXT *v22; // r9
  __int64 v23; // rbx
  int v24; // eax
  int v25; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rax
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rax
  OUTPUTDUPL_MGR *v36; // rcx
  int v37; // eax
  __int64 v38; // r8
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  int v42; // [rsp+28h] [rbp-A1h]
  __int64 v43; // [rsp+30h] [rbp-99h] BYREF
  __int64 v44; // [rsp+38h] [rbp-91h]
  _DXGKARG_SETPOINTERSHAPE v45; // [rsp+40h] [rbp-89h] BYREF
  __int64 v46; // [rsp+68h] [rbp-61h]
  _DWORD v47[20]; // [rsp+78h] [rbp-51h] BYREF

  v5 = *((_DWORD *)this + 13);
  *(_QWORD *)&v45.Flags.0 = a2;
  if ( a3->VidPnSourceId >= v5 )
  {
    v27 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v27 + 24) = a3->VidPnSourceId;
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdWarning(v27);
    return 3221225473LL;
  }
  v9 = *(__m128i *)&a3->VidPnSourceId;
  *(_OWORD *)&v45.Height = *(_OWORD *)&a3->Flags.0;
  v45.Pitch = a4;
  v10 = *(_QWORD *)&a3->XHot;
  *(__m128i *)&v45.pPixels = v9;
  v45.VidPnSourceId = a5;
  v11 = (__int64 *)(*((_QWORD *)this + 2) + 32LL * (unsigned int)_mm_cvtsi128_si32(v9));
  v46 = v10;
  v43 = *v11;
  LOBYTE(v44) = 0;
  if ( !v43 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v28 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v28);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v43 + 16) == CurrentThread )
  {
    v29 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v29 + 24) = 667LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( (_BYTE)v44 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v30[5] = &v43;
    v30[3] = 275LL;
    v30[4] = 4LL;
    v30[6] = 0LL;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  v13 = v43;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v13 + 16) == KeGetCurrentThread() )
  {
    v31 = *(_DWORD *)(v13 + 24);
    if ( v31 <= 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v32 + 24) = 559LL;
      WdLogEvent5_WdAssertion(v32);
      v31 = *(_DWORD *)(v13 + 24);
    }
    v17 = v31 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v33 = *(_DWORD *)(v13 + 28);
        if ( v33 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v15, &EventBlockThread, v16, v33);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 8));
      ExAcquirePushLockExclusiveEx(v13, 0LL);
    }
    if ( *(_QWORD *)(v13 + 16) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v34 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v34);
    }
    if ( *(_DWORD *)(v13 + 24) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v35 + 24) = 584LL;
      WdLogEvent5_WdAssertion(v35);
    }
    *(_QWORD *)(v13 + 16) = KeGetCurrentThread();
    v17 = 1;
  }
  *(_DWORD *)(v13 + 24) = v17;
  LODWORD(v18) = 0;
  LOBYTE(v44) = 1;
  v19 = 1;
  v20 = (OUTPUTDUPL_CONTEXT **)v11[1];
  v21 = 0;
  v42 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_19;
  while ( 1 )
  {
    v22 = *v20;
    if ( !*v20 || !*((_DWORD *)v22 + 79) )
      goto LABEL_17;
    if ( v19 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        memset(v47, 0, sizeof(v47));
        OUTPUTDUPL_MGR::InitializePacketHeader(v36, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v47);
        v47[13] = a3->VidPnSourceId;
        v47[14] = a3->Flags.Value;
        v47[17] = a3->Pitch;
        v47[18] = a3->XHot;
        v47[19] = a3->YHot;
        v47[1] = 80;
        v47[12] = 3;
        v47[15] = a4;
        v47[16] = a5;
        OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v47, 1);
        OUTPUTDUPL_MGR::LogPointerPositionChangeParams(this, *(const struct _DXGKARG_SETPOINTERPOSITION **)&v45.Flags.0);
        v22 = *v20;
      }
      v42 = 0;
    }
    v37 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(
            v22,
            *(const struct _DXGKARG_SETPOINTERPOSITION **)&v45.Flags.0,
            (const struct _DXGKARG_SETPOINTERSHAPE *)&v45.Height);
    v18 = v37;
    if ( v37 < 0 )
      break;
    v19 = v42;
LABEL_17:
    ++v21;
    ++v20;
    if ( v21 >= *((_DWORD *)this + 2) )
      goto LABEL_18;
  }
  v39 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v38);
  v39[3] = LODWORD(v45.pPixels);
  v39[4] = v21;
  v39[5] = v18;
  WdLogEvent5_WdError(v39);
LABEL_18:
  if ( (_BYTE)v44 )
  {
LABEL_19:
    v23 = v43;
    LOBYTE(v44) = 0;
    if ( *(struct _KTHREAD **)(v43 + 16) != KeGetCurrentThread() )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
      v40[3] = 275LL;
      v40[4] = 4LL;
      v40[5] = v23;
      v40[6] = 0LL;
      v40[7] = 0LL;
      WdLogEvent5_WdCriticalError(v40);
    }
    v24 = *(_DWORD *)(v23 + 24);
    if ( v24 <= 0 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v41 + 24) = 603LL;
      WdLogEvent5_WdAssertion(v41);
      v24 = *(_DWORD *)(v23 + 24);
    }
    v25 = v24 - 1;
    *(_DWORD *)(v23 + 24) = v25;
    if ( !v25 )
    {
      *(_QWORD *)(v23 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v23, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v18;
}
