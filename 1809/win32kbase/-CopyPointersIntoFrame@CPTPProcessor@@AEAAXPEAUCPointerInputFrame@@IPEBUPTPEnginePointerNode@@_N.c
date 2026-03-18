/*
 * XREFs of ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C014A750
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C014A844 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@@Z @ 0x1C01359E8 (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0135AD4 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@PEBUtagPOINTEREVEN.c)
 */

void __fastcall CPTPProcessor::CopyPointersIntoFrame(
        CPTPProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        const struct PTPEnginePointerNode *a4,
        bool a5)
{
  __int64 v5; // rcx
  unsigned int v7; // edi
  unsigned int v8; // edx
  __int64 v9; // rcx
  const struct tagPOINTEREVENTINT *v10; // rsi

  v5 = *((_QWORD *)a2 + 13);
  v7 = 0;
  v8 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v9 = v5 + 232;
    do
    {
      *(_WORD *)(v9 - 8) = *((_WORD *)a4 + 2);
      *(_OWORD *)v9 = *(_OWORD *)a4;
      *(_OWORD *)(v9 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v9 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v9 + 48) = *((_OWORD *)a4 + 3);
      *(_OWORD *)(v9 + 64) = *((_OWORD *)a4 + 4);
      *(_OWORD *)(v9 + 80) = *((_OWORD *)a4 + 5);
      *(_DWORD *)(v9 + 4) = 0;
      if ( a5 )
        *((_QWORD *)a2 + 10) = ++*(_QWORD *)(v9 + 80);
      *(_DWORD *)(v9 - 228) |= 0x1000u;
      a4 = (const struct PTPEnginePointerNode *)((char *)a4 + 96);
      v9 += 576LL;
      ++v8;
    }
    while ( v8 < *((_DWORD *)a2 + 12) );
  }
  if ( a5 )
  {
    InputTraceLogging::Pointer::CommitFrame(*(const void **)(*((_QWORD *)a2 + 15) + 16LL), a2);
    if ( *((_DWORD *)a2 + 12) )
    {
      v10 = (const struct tagPOINTEREVENTINT *)(*((_QWORD *)a2 + 13) + 224LL);
      do
      {
        InputTraceLogging::Pointer::CommitFramePointer(*(const void **)(*((_QWORD *)a2 + 15) + 16LL), a2, v10);
        ++v7;
        v10 = (const struct tagPOINTEREVENTINT *)((char *)v10 + 576);
      }
      while ( v7 < *((_DWORD *)a2 + 12) );
    }
  }
}
