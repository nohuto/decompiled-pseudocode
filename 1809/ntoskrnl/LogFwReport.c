/*
 * XREFs of LogFwReport @ 0x14094F514
 * Callers:
 *     ResFwFreeContext @ 0x14094F218 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140951F24 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     BgpGetResolution @ 0x14013B9C0 (BgpGetResolution.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     BgpFwQueryPerformanceCounter @ 0x14016EF14 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x14016F2E0 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140406AD0 & 0x80u) != 0 )
  {
    dword_140406AD0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140404BE0);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_1404C7620 = v1;
    dword_1404C7628 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_1404DCEA8.Parameter = 0LL;
    stru_1404DCEA8.List.Flink = 0LL;
    dword_1404C75B0 = BitsPerPixel;
    dword_1404C75F0 = dword_140406AD0;
    dword_1404C761C = 1000000 * qword_1404C75C0 / qword_140404BE0;
    dword_1404C7608 = 1000000 * qword_1404C7640 / qword_140404BE0;
    dword_1404C75B4 = 1000000 * qword_1404C7638 / qword_140404BE0;
    stru_1404DCEA8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_1404DCEA8, DelayedWorkQueue);
    if ( (dword_140406AD0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_1404C7620,
        HIDWORD(qword_1404C7620),
        dword_1404C75B0);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_1404C7630 / qword_140404BE0);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_1404C7618);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140406AF0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140404BD8 / qword_140404BE0);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_1404C75B8 / qword_140404BE0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_1404C75E8 / qword_140404BE0,
        1000000 * qword_1404C75F8 / qword_140404BE0);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_1404C7610 / qword_140404BE0);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_1404C75C8);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140406AEC,
        dword_1404C7608,
        dword_1404C75B4);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140404BE8 / qword_140404BE0);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_1404C75D0 / qword_140404BE0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_1404C761C,
        1000000 * qword_1404C7600 / qword_140404BE0);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_1404C75D8 / qword_140404BE0);
      if ( qword_140406B00 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140406B00);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_1404DD948 / qword_140404BE0);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
