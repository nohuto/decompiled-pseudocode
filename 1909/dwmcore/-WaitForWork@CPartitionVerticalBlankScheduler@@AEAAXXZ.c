/*
 * XREFs of ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007134C
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180070CA0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800265E8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180159F30 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0qqqqq @ 0x1801780FC (McTemplateU0qqqqq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180191F38 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180192150 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::WaitForWork(CPartitionVerticalBlankScheduler *this)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  CDXGIEnumeration *v4; // rdi
  int v5; // esi
  CDXGIEnumeration *v6; // rdi
  __int64 v7; // rax
  HANDLE *v8; // r14
  __int64 v9; // rdi
  unsigned int v10; // r15d
  int v11; // eax
  int v12; // r12d
  DWORD *v13; // rsi
  unsigned int v14; // edi
  DWORD v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // r15d
  int v19; // r14d
  int v20; // esi
  char v21; // di
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned __int64 v31; // r9
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // rax
  int v35; // eax
  int v36; // edi
  BOOL v37; // eax
  CHAR v38; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CHAR Response[4]; // [rsp+68h] [rbp-9h] BYREF
  int v42; // [rsp+6Ch] [rbp-5h] BYREF
  int D3DObjects; // [rsp+70h] [rbp-1h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp+7h] BYREF
  CDXGIEnumeration *v45; // [rsp+80h] [rbp+Fh]
  __int64 v46; // [rsp+88h] [rbp+17h] BYREF
  __int64 v47; // [rsp+90h] [rbp+1Fh]

  v46 = 0LL;
  v47 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFW_Start);
  v2 = (char *)this + 30920;
  v3 = 0;
  if ( *((_BYTE *)this + 30944) && *((_BYTE *)this + 30945) )
  {
    v26 = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 30920));
    v44 = v26;
    if ( *((_BYTE *)this + 30946) )
    {
      if ( *((_DWORD *)this + 7734) == -1 )
      {
        *((_QWORD *)this + 3867) = 0LL;
        v27 = 0;
      }
      else
      {
        v27 = *((_DWORD *)this + 7735);
      }
      *((_QWORD *)this + 3871) = v26;
      *(_OWORD *)&v2[16 * v27 + 56] = *((_OWORD *)this + 1935);
      v28 = *((_DWORD *)this + 7734);
      v29 = *((_DWORD *)this + 7735);
      if ( v28 != v29 )
      {
        v30 = *((_DWORD *)this + 7734);
        do
        {
          v31 = *(_QWORD *)&v2[16 * v30 + 56];
          if ( v31 >= *((_QWORD *)this + 3871) - 10000000LL )
            break;
          *((_QWORD *)this + 3869) += v31 - *(_QWORD *)&v2[16 * v30 + 64];
          *(_QWORD *)&v2[16 * v30 + 64] = 0LL;
          *(_QWORD *)&v2[16 * v30 + 56] = 0LL;
          v28 = (unsigned __int8)(*((_DWORD *)this + 7734) + 1);
          *((_DWORD *)this + 7734) = v28;
          v30 = v28;
          v29 = *((_DWORD *)this + 7735);
        }
        while ( v28 != v29 );
      }
      v32 = *((_QWORD *)this + 3869) + *((_QWORD *)this + 2 * v29 + 3873) - *((_QWORD *)this + 2 * v29 + 3872);
      v33 = (unsigned __int8)(v29 + 1);
      *((_QWORD *)this + 3869) = v32;
      *((_DWORD *)this + 7735) = v33;
      if ( v28 == v33 )
      {
        v34 = 2LL * v28;
        *((_QWORD *)this + 3869) = *(_QWORD *)&v2[16 * v28 + 56] + v32 - *(_QWORD *)&v2[16 * v28 + 64];
        *(_QWORD *)&v2[8 * v34 + 64] = 0LL;
        *(_QWORD *)&v2[8 * v34 + 56] = 0LL;
        *((_DWORD *)this + 7734) = (unsigned __int8)(*((_DWORD *)this + 7734) + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CPartitionVerticalBlankScheduler *)((char *)this + 30920), &v44);
  }
  v4 = qword_180339CF8;
  v5 = 0;
  if ( !qword_180339CF8 )
    goto LABEL_53;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_180339CF8 + 2) + 104LL))(*((_QWORD *)qword_180339CF8
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v4 + 14)
    || qword_180339CF8 != v4 )
  {
    ReleaseInterface<CD3DSurface>((__int64 *)&qword_180339CF8);
  }
  if ( !qword_180339CF8 )
  {
LABEL_53:
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(this, &qword_180339CF8);
    TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
    v5 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_1802BE018, 1u, D3DObjects, 0xFEu, 0LL);
    if ( qword_180339D08 )
      (*(void (__fastcall **)(__int64, CDXGIEnumeration *))(*(_QWORD *)qword_180339D08 + 32LL))(
        qword_180339D08,
        qword_180339CF8);
  }
  v6 = qword_180339CF8;
  v45 = qword_180339CF8;
  if ( qword_180339CF8 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_180339CF8)(qword_180339CF8);
  if ( v5 < 0 )
    v7 = 0LL;
  else
    v7 = *((_QWORD *)v6 + 12);
  *((_QWORD *)this + 4) = v7;
  v8 = (HANDLE *)((char *)this + 8);
  v9 = v7;
  v10 = (v7 != 0) + 3;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64, _DWORD, int *))(**((_QWORD **)this + 18) + 32LL))(
          *((_QWORD *)this + 18),
          v10,
          (char *)this + 8,
          0xFFFFFFFFLL,
          0,
          &v42);
  v12 = v42;
  if ( v11 < 0 )
    v12 = -1;
  v42 = v12;
  if ( v12 == 3 && v9 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
  if ( CancelWaitableTimer(*((HANDLE *)this + 3)) )
    goto LABEL_17;
  while ( 1 )
  {
    while ( 1 )
    {
      v35 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v36 = v35;
      if ( !v35 )
      {
        v37 = IsDebuggerPresent();
        v38 = Response[0];
        if ( v37 )
          v38 = 103;
        Response[0] = v38;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        &pwsz,
        &pwsz,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::WaitForWork",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        338);
      if ( !v36 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          Response,
          Response);
        JUMPOUT(0x18011A7D7LL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      if ( Response[0] <= 98 )
        break;
      if ( Response[0] == 103 )
        goto LABEL_97;
      if ( Response[0] == 105 )
        goto LABEL_95;
      if ( Response[0] != 112 )
      {
        if ( Response[0] != 116 )
          goto LABEL_94;
        goto LABEL_92;
      }
LABEL_93:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_94:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( Response[0] == 98 || Response[0] == 66 )
      break;
    if ( Response[0] == 71 )
      goto LABEL_97;
    if ( Response[0] != 73 )
    {
      if ( Response[0] != 80 )
      {
        if ( Response[0] != 84 )
          goto LABEL_94;
LABEL_92:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_94;
      }
      goto LABEL_93;
    }
LABEL_95:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_97:
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_17:
  v13 = (DWORD *)&v46;
  *((_DWORD *)this + 7729) = -1;
  v14 = 0;
  do
  {
    v15 = WaitForSingleObject(*v8, 0);
    v42 = v15;
    *v13 = v15;
    if ( !v15 && v14 == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
    ++v14;
    ++v8;
    ++v13;
  }
  while ( v14 < v10 );
  v17 = (int)v45;
  if ( v45 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v45 + 8LL))(v45);
  v18 = HIDWORD(v47);
  v19 = v47;
  v20 = HIDWORD(v46);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qqqqq(v17, v16, v12, v46, SBYTE4(v46), v47, SBYTE4(v47));
  v21 = 0;
  if ( !v12 || !(_DWORD)v46 )
    v21 = 1;
  if ( v12 == 1 || !v20 )
    v21 |= 2u;
  if ( v12 == 2 || !v19 )
    v21 |= 4u;
  if ( v12 == 3 || !v18 )
  {
    v21 |= 8u;
    v23 = *(_QWORD *)(*((_QWORD *)this + 8) + 64LL);
    if ( *(_DWORD *)(v23 + 96) )
    {
      if ( *(_DWORD *)(v23 + 48) )
      {
        do
        {
          v24 = *(_QWORD *)(*(_QWORD *)(v23 + 24) + 8LL * v3);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 224LL))(v24);
          ++v3;
        }
        while ( v3 < *(_DWORD *)(v23 + 48) );
      }
    }
  }
  v22 = dword_180339AA8;
  if ( (v21 & 1) != 0 )
  {
    v22 = dword_180339AA8 | 8;
    dword_180339AA8 |= 8u;
  }
  if ( (v21 & 2) != 0 )
  {
    v22 |= 0x10u;
    dword_180339AA8 = v22;
  }
  if ( (v21 & 4) != 0 )
  {
    v22 |= 2u;
    dword_180339AA8 = v22;
  }
  if ( (v21 & 8) != 0 )
    dword_180339AA8 = v22 | 4;
}
