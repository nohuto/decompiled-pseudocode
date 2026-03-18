/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0031458
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00313C0 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0190084 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0030C8C (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031188 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0031A80 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00528AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0052D88 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?CollectMouseCursorPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MouseCursorPerf@@@Z @ 0x1C007E108 (-CollectMouseCursorPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MouseCursorPerf@@@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C009327C (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C00A83CC (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

struct tagPOINT __fastcall CMouseProcessor::ProcessMouseInputData(
        LARGE_INTEGER *this,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        const struct _MOUSE_INPUT_DATA *a4,
        const struct tagUIPI_INFO_INT *a5,
        struct tagUIPI_INFO_INT *a6)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __m128i *UnionRect; // rax
  char v15; // r11
  struct tagPOINT v16; // r8
  __int64 v17; // r10
  __m128i v18; // xmm0
  unsigned __int16 v19; // r9
  int v20; // ecx
  _BYTE v22[8]; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v23; // [rsp+38h] [rbp-18h] BYREF
  struct tagPOINT v24; // [rsp+80h] [rbp+30h] BYREF
  LARGE_INTEGER v25; // [rsp+98h] [rbp+48h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v22,
    L"ProcessMouseInputData",
    0LL);
  memset(&this[341], 0, 0x30uLL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v24 = (struct tagPOINT)a4;
  this[341] = PerformanceCounter;
  v25 = this[393];
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a3, 8LL, v11)
    || CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a3, 0x8000LL, v12) )
  {
    CMouseProcessor::QueueMouseEvent(
      (CMouseProcessor *)this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&v25,
      a6,
      0LL);
    goto LABEL_13;
  }
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a3, 4LL, v13) )
  {
    v24 = *(struct tagPOINT *)(*(_QWORD *)&a3 + 12LL);
    v25.QuadPart = 0LL;
    UnionRect = (__m128i *)InputConfig::Mouse::GetUnionRect(&v23);
    v15 = gptInd;
    v16 = v24;
    v17 = 3LL * (unsigned int)gptInd;
    v18 = _mm_srli_si128(*UnionRect, 8);
    v19 = v18.m128i_i16[2] - HIDWORD(UnionRect->m128i_i64[0]) - 1;
    v20 = LOWORD(v24.x) | ((unsigned __int16)(v18.m128i_i16[0] - UnionRect->m128i_i64[0] - 1) << 16);
    LODWORD(UnionRect) = LOWORD(v24.y);
    *((_DWORD *)&gaptMouse + 2 * v17) = v20;
    *((_DWORD *)&gaptMouse + 2 * v17 + 1) = (unsigned int)UnionRect | (v19 << 16);
    *((_DWORD *)&gaptMouse + 2 * v17 + 2) = *(_DWORD *)(*(_QWORD *)&a3 + 48LL);
    *((_QWORD *)&gaptMouse + v17 + 2) = *(unsigned int *)(*(_QWORD *)&a3 + 20LL);
    gptInd = (v15 + 1) & 0x3F;
  }
  else
  {
    CMouseProcessor::GetMouseCoord(
      (CMouseProcessor *)this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      &v24,
      (struct _SUBPIXELS *)&v25);
    v16 = v24;
  }
  if ( !a5
    || *(_WORD *)(*(_QWORD *)&a3 + 4LL)
    || *((_WORD *)a5 + 2)
    || ((*((_BYTE *)a5 + 2) ^ *(_BYTE *)(*(_QWORD *)&a3 + 2LL)) & 1) != 0 )
  {
    CMouseProcessor::CommitMousePosAndMoveCursor(
      (CMouseProcessor *)this,
      *(struct CMouseProcessor::MouseInputDataEx **)&a3,
      v16);
    CMouseProcessor::QueueMouseEvent(
      (CMouseProcessor *)this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&v25,
      a6,
      &v24);
    v24 = gptCursorAsync;
LABEL_13:
    this[342] = KeQueryPerformanceCounter(0LL);
    MousePerfSummary::CollectMouseCursorPerfTelemetry(
      (MousePerfSummary *)&this[347],
      (const struct _MouseCursorPerf *)&this[341]);
    goto LABEL_14;
  }
  InputTraceLogging::Mouse::CoalesceInput(*(_QWORD *)(*(_QWORD *)&a3 + 56LL));
LABEL_14:
  *a2 = v24;
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v22);
  return (struct tagPOINT)a2;
}
