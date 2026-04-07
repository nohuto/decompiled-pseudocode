/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800B79A8
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800B7824 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18004C5C4 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800B78E8 (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800B7938 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall MilInstrumentationBreak(char a1, char a2)
{
  int v3; // eax
  int v4; // ebx
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  unsigned int Response; // [rsp+78h] [rbp+10h] BYREF

  LOBYTE(Response) = a2;
  if ( !g_fDisableInstrumentationBreaks )
  {
    Response = 0;
    if ( RegGetHKLMDword(L"Software\\Microsoft\\Avalon.Graphics", L"DisableInstrumentationBreaking", &Response)
      && !Response
      && ((a1 & 8) == 0
       || (unsigned int)IsKernelDebuggerPresent()
       || !IsDebuggerPresent() && (unsigned int)IsKernelDebuggerEnabled()) )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v3 = IsKernelDebuggerPresent();
          LOWORD(Response) = 63;
          v4 = v3;
          if ( !v3 )
          {
            v5 = IsDebuggerPresent();
            v6 = Response;
            if ( v5 )
              v6 = 103;
            LOBYTE(Response) = v6;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            L"Unexpected HRESULT in MilInstrumentation* caller",
            word_1800C3E20,
            word_1800C3E20,
            "Function: ",
            L"MilInstrumentationBreak",
            ", ",
            L"windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
            221);
          if ( !v4 )
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
          if ( (char)Response <= 98 )
            break;
          if ( (char)Response == 103 )
            return;
          if ( (char)Response != 105 )
          {
            if ( (char)Response != 112 )
            {
              if ( (char)Response != 116 )
                goto LABEL_29;
LABEL_27:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_29;
            }
LABEL_28:
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_29;
          }
LABEL_30:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
        switch ( (char)Response )
        {
          case 'b':
          case 'B':
            __debugbreak();
            return;
          case 'G':
            return;
          case 'I':
            goto LABEL_30;
          case 'P':
            goto LABEL_28;
          case 'T':
            goto LABEL_27;
        }
LABEL_29:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
    }
  }
}
