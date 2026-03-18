/*
 * XREFs of LogFwReport @ 0x14098E514
 * Callers:
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     BgpGetResolution @ 0x14013DA0C (BgpGetResolution.c)
 *     BgpFwQueryPerformanceCounter @ 0x140178CC4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x140179128 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_14042C010 & 0x80u) != 0 )
  {
    dword_14042C010 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_14042A040);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_1404F2890 = v1;
    dword_1404F2898 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140509178.Parameter = 0LL;
    stru_140509178.List.Flink = 0LL;
    dword_1404F2840 = BitsPerPixel;
    dword_1404F2870 = dword_14042C010;
    dword_1404F28A4 = 1000000 * qword_1404F2850 / qword_14042A040;
    dword_1404F28A0 = 1000000 * qword_1404F28B8 / qword_14042A040;
    dword_1404F2830 = 1000000 * qword_1404F28C0 / qword_14042A040;
    stru_140509178.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140509178, DelayedWorkQueue);
    if ( (dword_14042C010 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_1404F2890,
        HIDWORD(qword_1404F2890),
        dword_1404F2840);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_1404F28B0 / qword_14042A040);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_1404F289C);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_14042C030);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_14042A038 / qword_14042A040);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_1404F2838 / qword_14042A040);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_1404F2880 / qword_14042A040,
        1000000 * qword_1404F2860 / qword_14042A040);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_1404F2888 / qword_14042A040);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_1404F2834);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_14042C02C,
        dword_1404F28A0,
        dword_1404F2830);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_14042A048 / qword_14042A040);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_1404F2848 / qword_14042A040);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_1404F28A4,
        1000000 * qword_1404F2878 / qword_14042A040);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_1404F2868 / qword_14042A040);
      if ( qword_14042C040 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_14042C040);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140509D38 / qword_14042A040);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
