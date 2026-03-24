/*
 * XREFs of LogFwReport @ 0x14094E514
 * Callers:
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140950F24 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 *     BgpGetResolution @ 0x14013B8C0 (BgpGetResolution.c)
 *     DbgPrintEx @ 0x140160460 (DbgPrintEx.c)
 *     BgpFwQueryPerformanceCounter @ 0x14016EE14 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x14016F1E0 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140405AD0 & 0x80u) != 0 )
  {
    dword_140405AD0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140403BE0);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_1404C6550 = v1;
    dword_1404C6558 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_1404DBDE8.Parameter = 0LL;
    stru_1404DBDE8.List.Flink = 0LL;
    dword_1404C6500 = BitsPerPixel;
    dword_1404C6548 = dword_140405AD0;
    dword_1404C6580 = 1000000 * qword_1404C6510 / qword_140403BE0;
    dword_1404C6568 = 1000000 * qword_1404C6590 / qword_140403BE0;
    dword_1404C64F0 = 1000000 * qword_1404C6588 / qword_140403BE0;
    stru_1404DBDE8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_1404DBDE8, DelayedWorkQueue);
    if ( (dword_140405AD0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_1404C6550,
        HIDWORD(qword_1404C6550),
        dword_1404C6500);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_1404C6560 / qword_140403BE0);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_1404C6538);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140405AF0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140403BD8 / qword_140403BE0);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_1404C64F8 / qword_140403BE0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_1404C6540 / qword_140403BE0,
        1000000 * qword_1404C6518 / qword_140403BE0);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_1404C6570 / qword_140403BE0);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_1404C64F4);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140405AEC,
        dword_1404C6568,
        dword_1404C64F0);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140403BE8 / qword_140403BE0);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_1404C6508 / qword_140403BE0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_1404C6580,
        1000000 * qword_1404C6520 / qword_140403BE0);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_1404C6528 / qword_140403BE0);
      if ( qword_140405B00 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140405B00);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_1404DC878 / qword_140403BE0);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
