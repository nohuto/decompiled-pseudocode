/*
 * XREFs of ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140005780
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001570 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x14000438D (memcpy_0.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1400061C4 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequestNative(HANDLE *this, ULONG a2, const void *a3, __int16 a4)
{
  unsigned int v4; // edi
  struct _PORT_MESSAGE *v10; // rax
  struct _PORT_MESSAGE *v11; // rbx
  int v12; // eax
  int v13; // r14d
  BOOL v14; // eax
  char v15; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  NTSTATUS v18; // eax
  int v19; // eax
  __int16 Response; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  if ( a3 )
  {
    v10 = (struct _PORT_MESSAGE *)HeapAlloc(this[10], 8u, (unsigned __int16)(a4 + 48));
    v11 = v10;
    if ( v10 )
    {
      v10[1].u1.Length = a2;
      v10->u1.s1.DataLength = a4 + 8;
      v10->u1.s1.TotalLength = a4 + 48;
      if ( (__int16)(a4 + 48) > 512 )
      {
        while ( 1 )
        {
          v12 = IsKernelDebuggerPresent();
          Response = 63;
          v13 = v12;
          if ( !v12 )
          {
            v14 = IsDebuggerPresent();
            v15 = Response;
            if ( v14 )
              v15 = 103;
            LOBYTE(Response) = v15;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            word_140007F4C,
            word_140007F4C,
            L"pMsg->u1.s1.TotalLength <= 512",
            "Function: ",
            L"LpcVerifyOutgoingPayloadSize",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\lpcshared.h",
            310);
          if ( !v13 )
          {
            DbgPrintEx(
              0x65u,
              0,
              "(No kernel debugger is present.) Respond with:\n"
              "  g                    -- Go (continue)\n"
              "  eb 0x%p 'p';g  -- terminate Process\n"
              "  eb 0x%p 't';g  -- terminate Thread\n"
              " or regular debugging.\n",
              &Response,
              &Response);
            __debugbreak();
          }
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
          switch ( (char)Response )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_19;
            case 'G':
            case 'g':
              goto LABEL_19;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_17;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_17;
            default:
LABEL_17:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_19:
      memcpy_0(&v11[1].DoNotUseThisField, a3, a4);
      v18 = NtRequestPort(this[6], v11);
      v19 = CPortClient::CheckStatus((CPortClient *)this, v18);
      if ( v19 < 0 )
      {
        v4 = v19 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(
          1u,
          &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
          8u,
          v19 | 0x10000000,
          0x69u);
      }
      HeapFree(this[10], 0, v11);
      return v4;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0x5Fu);
      return 2147942414LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024890, 0x5Cu);
    return 2147942406LL;
  }
}
