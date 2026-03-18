/*
 * XREFs of BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x140006F1C
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140007BC0 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140006C7C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     BlackScreenDiagnostics::IsSectionAllBlackPixels @ 0x140007588 (BlackScreenDiagnostics--IsSectionAllBlackPixels.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000892C (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall BlackScreenDiagnostics::GetDwmFrontBufferBitsColor(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  HANDLE EventW; // rbx
  DWORD LastError; // ebx
  __int64 v7; // rcx
  int v9; // esi
  int v10; // ebp
  char *FileMappingW; // rdi
  ULONG v12; // esi
  __int64 v13; // rcx
  void *v14; // rdx
  NTSTATUS v15; // eax
  int IsSectionAllBlackPixels; // eax

  EventW = CreateEventW(0LL, 0, 0, 0LL);
  if ( !EventW )
  {
    LastError = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v7, LastError, 0LL);
    return LastError;
  }
  v9 = GetSystemMetrics(0) / 2;
  v10 = GetSystemMetrics(1) / 2;
  FileMappingW = (char *)CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0x8000004u, 0, 0x75300u, 0LL);
  if ( ((unsigned __int64)(FileMappingW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v15 = NtDesktopCaptureBits(
            0LL,
            (unsigned int)(v9 - 200),
            (unsigned int)(v10 - 150),
            400LL,
            300,
            87,
            EventW,
            FileMappingW);
    if ( v15 < 0 )
    {
      v12 = RtlNtStatusToDosError(v15);
    }
    else
    {
      v12 = WaitForSingleObject(EventW, 0x1388u);
      if ( !v12 )
      {
        IsSectionAllBlackPixels = BlackScreenDiagnostics::IsSectionAllBlackPixels(FileMappingW);
LABEL_10:
        *a4 = IsSectionAllBlackPixels;
        goto LABEL_11;
      }
    }
    IsSectionAllBlackPixels = 3;
    goto LABEL_10;
  }
  v12 = GetLastError();
  MicrosoftTelemetryAssertTriggeredArgs(v13, v12, 0LL);
LABEL_11:
  if ( (unsigned __int64)(FileMappingW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(FileMappingW);
  wil::details::CloseHandle((wil::details *)EventW, v14);
  return v12;
}
