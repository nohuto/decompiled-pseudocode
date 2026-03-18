/*
 * XREFs of LogFwReport @ 0x14098E514
 * Callers:
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     BgpGetResolution @ 0x14013D4FC (BgpGetResolution.c)
 *     BgpFwQueryPerformanceCounter @ 0x1401785D4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x140178A38 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_14042C030 & 0x80u) != 0 )
  {
    dword_14042C030 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_14042A030);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_1404F2B60 = v1;
    dword_1404F2B68 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140509438.Parameter = 0LL;
    stru_140509438.List.Flink = 0LL;
    dword_1404F2AF8 = BitsPerPixel;
    dword_1404F2B48 = dword_14042C030;
    dword_1404F2B78 = 1000000 * qword_1404F2B08 / qword_14042A030;
    dword_1404F2B44 = 1000000 * qword_1404F2B88 / qword_14042A030;
    dword_1404F2B10 = 1000000 * qword_1404F2B70 / qword_14042A030;
    stru_140509438.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140509438, DelayedWorkQueue);
    if ( (dword_14042C030 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_1404F2B60,
        HIDWORD(qword_1404F2B60),
        dword_1404F2AF8);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_1404F2B50 / qword_14042A030);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_1404F2B40);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_14042C050);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_14042A028 / qword_14042A030);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_1404F2AF0 / qword_14042A030);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_1404F2B28 / qword_14042A030,
        1000000 * qword_1404F2B38 / qword_14042A030);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_1404F2B58 / qword_14042A030);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_1404F2B14);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_14042C04C,
        dword_1404F2B44,
        dword_1404F2B10);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_14042A038 / qword_14042A030);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_1404F2B00 / qword_14042A030);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_1404F2B78,
        1000000 * qword_1404F2B20 / qword_14042A030);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_1404F2B18 / qword_14042A030);
      if ( qword_14042C060 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_14042C060);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140509FF8 / qword_14042A030);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
