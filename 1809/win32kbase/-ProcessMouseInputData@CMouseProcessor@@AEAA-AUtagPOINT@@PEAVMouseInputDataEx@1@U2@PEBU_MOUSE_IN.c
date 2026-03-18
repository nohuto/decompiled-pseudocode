/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030698
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0030628 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0158B84 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030860 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0030CE0 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C003D1EC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C003D2D0 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C00807F8 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C009533C (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 */

struct tagPOINT __fastcall CMouseProcessor::ProcessMouseInputData(
        CMouseProcessor *this,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        const struct _MOUSE_INPUT_DATA *a4,
        const struct tagUIPI_INFO_INT *a5,
        struct tagUIPI_INFO_INT *a6)
{
  __m128i *UnionRect; // rax
  char v11; // r11
  struct tagPOINT v12; // r8
  __int64 v13; // r10
  __m128i v14; // xmm0
  unsigned __int16 v15; // r9
  int v16; // ecx
  LPCWSTR *v18; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v19; // [rsp+28h] [rbp-18h] BYREF
  struct tagPOINT v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v18, L"ProcessMouseInputData", 0LL);
  v21 = *(_QWORD *)((char *)this + 2436);
  v20 = (struct tagPOINT)a4;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          8LL)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          0x10000LL) )
  {
    goto LABEL_12;
  }
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          4LL) )
  {
    v21 = 0LL;
    v20 = *(struct tagPOINT *)(*(_QWORD *)&a3 + 12LL);
    UnionRect = (__m128i *)InputConfig::Mouse::GetUnionRect(&v19);
    v11 = gptInd;
    v12 = v20;
    v13 = 3LL * (unsigned int)gptInd;
    v14 = _mm_srli_si128(*UnionRect, 8);
    v15 = v14.m128i_i16[2] - HIDWORD(UnionRect->m128i_i64[0]) - 1;
    v16 = LOWORD(v20.x) | ((unsigned __int16)(v14.m128i_i16[0] - UnionRect->m128i_i64[0] - 1) << 16);
    LODWORD(UnionRect) = LOWORD(v20.y);
    *((_DWORD *)&gaptMouse + 2 * v13) = v16;
    *((_DWORD *)&gaptMouse + 2 * v13 + 1) = (unsigned int)UnionRect | (v15 << 16);
    *((_DWORD *)&gaptMouse + 2 * v13 + 2) = *(_DWORD *)(*(_QWORD *)&a3 + 40LL);
    *((_QWORD *)&gaptMouse + v13 + 2) = *(unsigned int *)(*(_QWORD *)&a3 + 20LL);
    gptInd = (v11 + 1) & 0x3F;
  }
  else
  {
    CMouseProcessor::GetMouseCoord(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      &v20,
      (struct _SUBPIXELS *)&v21);
    v12 = v20;
  }
  if ( !a5
    || *(_WORD *)(*(_QWORD *)&a3 + 4LL)
    || *((_WORD *)a5 + 2)
    || ((*((_BYTE *)a5 + 2) ^ *(_BYTE *)(*(_QWORD *)&a3 + 2LL)) & 1) != 0 )
  {
    CMouseProcessor::CommitMousePosAndMoveCursor(this, *(struct CMouseProcessor::MouseInputDataEx **)&a3, v12);
    v20 = gptCursorAsync;
LABEL_12:
    CMouseProcessor::QueueMouseEvent(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&v21,
      a6);
    goto LABEL_13;
  }
  InputTraceLogging::Mouse::CoalesceInput(*(_QWORD *)(*(_QWORD *)&a3 + 48LL));
LABEL_13:
  *a2 = v20;
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v18);
  return (struct tagPOINT)a2;
}
