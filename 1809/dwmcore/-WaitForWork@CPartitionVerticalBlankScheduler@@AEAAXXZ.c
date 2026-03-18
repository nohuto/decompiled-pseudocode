/*
 * XREFs of ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800C92F0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007FE1C (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18008A4FC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0qqqqq @ 0x180149C38 (McTemplateU0qqqqq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180151A04 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180151C20 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801E8C7C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::WaitForWork(CPartitionVerticalBlankScheduler *this)
{
  char *v2; // rbx
  unsigned int v3; // r13d
  int v4; // esi
  char v5; // di
  CD3DModuleLoaderInternal *v6; // rcx
  CDXGIEnumeration *v7; // rbx
  unsigned int v8; // r12d
  CDXGIEnumeration *v9; // rbx
  __int64 v10; // rax
  HANDLE *v11; // rdi
  int v12; // r15d
  DWORD *v13; // rsi
  unsigned int i; // ebx
  DWORD v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // r12d
  int v20; // esi
  char v21; // bl
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  char *v31; // r8
  unsigned __int64 v32; // r9
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // rax
  int v36; // eax
  int v37; // ebx
  BOOL v38; // eax
  CHAR v39; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CHAR Response[4]; // [rsp+60h] [rbp-9h] BYREF
  int v43; // [rsp+64h] [rbp-5h] BYREF
  int D3DObjects; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp+7h] BYREF
  CDXGIEnumeration *v46; // [rsp+78h] [rbp+Fh]
  __int64 v47; // [rsp+80h] [rbp+17h] BYREF
  __int64 v48; // [rsp+88h] [rbp+1Fh]

  v47 = 0LL;
  v48 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFW_Start);
  v2 = (char *)this + 30592;
  v3 = 0;
  if ( *((_BYTE *)this + 30616) && *((_BYTE *)this + 30617) )
  {
    v26 = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 30592));
    v45 = v26;
    if ( *((_BYTE *)this + 30618) )
    {
      if ( *((_DWORD *)this + 7652) == -1 )
      {
        *((_QWORD *)this + 3826) = 0LL;
        v27 = 0;
      }
      else
      {
        v27 = *((_DWORD *)this + 7653);
      }
      *((_QWORD *)this + 3830) = v26;
      *(_OWORD *)&v2[16 * v27 + 56] = *(_OWORD *)((char *)this + 30632);
      v28 = *((_DWORD *)this + 7652);
      v29 = *((_DWORD *)this + 7653);
      if ( v28 != v29 )
      {
        v30 = *((_DWORD *)this + 7652);
        do
        {
          v31 = &v2[16 * v30];
          v32 = *((_QWORD *)v31 + 7);
          if ( v32 >= *((_QWORD *)this + 3830) - 10000000LL )
            break;
          *((_QWORD *)this + 3828) += v32 - *((_QWORD *)v31 + 8);
          *((_QWORD *)v31 + 8) = 0LL;
          *((_QWORD *)v31 + 7) = 0LL;
          v28 = (unsigned __int8)(*((_DWORD *)this + 7652) + 1);
          *((_DWORD *)this + 7652) = v28;
          v30 = v28;
          v29 = *((_DWORD *)this + 7653);
        }
        while ( v28 != v29 );
      }
      v33 = *((_QWORD *)this + 3828) + *((_QWORD *)this + 2 * v29 + 3832) - *((_QWORD *)this + 2 * v29 + 3831);
      v34 = (unsigned __int8)(v29 + 1);
      *((_QWORD *)this + 3828) = v33;
      *((_DWORD *)this + 7653) = v34;
      if ( v28 == v34 )
      {
        v35 = 2LL * v28;
        *((_QWORD *)this + 3828) = *(_QWORD *)&v2[16 * v28 + 56] + v33 - *(_QWORD *)&v2[16 * v28 + 64];
        *(_QWORD *)&v2[8 * v35 + 64] = 0LL;
        *(_QWORD *)&v2[8 * v35 + 56] = 0LL;
        *((_DWORD *)this + 7652) = (unsigned __int8)(*((_DWORD *)this + 7652) + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CPartitionVerticalBlankScheduler *)((char *)this + 30592), &v45);
  }
  v4 = 0;
  v5 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v7 = qword_180308260;
  v8 = 4;
  if ( !qword_180308260 )
    goto LABEL_55;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_180308260 + 2) + 104LL))(*((_QWORD *)qword_180308260
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v7 + 14)
    || qword_180308260 != v7 )
  {
    ReleaseInterface<CD3DSurface>((__int64 *)&qword_180308260);
    v5 = 1;
  }
  if ( !qword_180308260 )
  {
LABEL_55:
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v6, &qword_180308260);
    TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
    v4 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_18029B8C0, 1u, D3DObjects, 0x128u);
  }
  if ( v5 && qword_180308270 )
    CSurfaceManager::ResetTokenThread(qword_180308270);
  v9 = qword_180308260;
  v46 = qword_180308260;
  if ( qword_180308260 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_180308260)(qword_180308260);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v4 < 0 )
    v10 = 0LL;
  else
    v10 = *((_QWORD *)v9 + 12);
  *((_QWORD *)this + 4) = v10;
  if ( !v10 )
    v8 = 3;
  v11 = (HANDLE *)((char *)this + 8);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, char *, __int64, _DWORD, int *))(**((_QWORD **)this + 13) + 56LL))(
         *((_QWORD *)this + 13),
         v8,
         (char *)this + 8,
         0xFFFFFFFFLL,
         0,
         &v43) < 0 )
  {
    v12 = -1;
    v43 = -1;
  }
  else
  {
    v12 = v43;
  }
  if ( v12 == 3 && v8 == 4 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
  if ( !CancelWaitableTimer(*((HANDLE *)this + 3)) )
  {
    while ( 1 )
    {
      v36 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v37 = v36;
      if ( !v36 )
      {
        v38 = IsDebuggerPresent();
        v39 = Response[0];
        if ( v38 )
          v39 = 103;
        Response[0] = v39;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_180276388,
        word_180276388,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::WaitForWork",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        342);
      if ( !v37 )
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
        JUMPOUT(0x180130F70LL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_89;
        case 'G':
        case 'g':
LABEL_89:
          RaiseFailFastException(0LL, 0LL, 0);
          goto LABEL_20;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_87;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_87;
        default:
LABEL_87:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_20:
  *((_DWORD *)this + 7647) = -1;
  v13 = (DWORD *)&v47;
  for ( i = 0; i < v8; ++i )
  {
    v15 = WaitForSingleObject(*v11, 0);
    v43 = v15;
    *v13 = v15;
    if ( !v15 && i == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
    ++v11;
    ++v13;
  }
  v17 = (int)v46;
  if ( v46 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v46 + 8LL))(v46);
  v18 = HIDWORD(v48);
  v19 = v48;
  v20 = HIDWORD(v47);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qqqqq(v17, v16, v12, v47, SBYTE4(v47), v48, SBYTE4(v48));
  v21 = 0;
  if ( !v12 || !(_DWORD)v47 )
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
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 184LL))(v24);
          ++v3;
        }
        while ( v3 < *(_DWORD *)(v23 + 48) );
      }
    }
  }
  v22 = dword_180307F24;
  if ( (v21 & 1) != 0 )
  {
    v22 = dword_180307F24 | 8;
    dword_180307F24 |= 8u;
  }
  if ( (v21 & 2) != 0 )
  {
    v22 |= 0x10u;
    dword_180307F24 = v22;
  }
  if ( (v21 & 4) != 0 )
  {
    v22 |= 2u;
    dword_180307F24 = v22;
  }
  if ( (v21 & 8) != 0 )
    dword_180307F24 = v22 | 4;
}
