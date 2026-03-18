/*
 * XREFs of ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01F1AD0
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01F0FCC (_DelegateCapturePointers.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01F1CAC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall DeferNotifyDelegateCapture(struct _LIST_ENTRY *a1, unsigned __int16 a2, int a3, struct tagWND *a4)
{
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  struct tagTHREADPOINTERDATA *v8; // rbx
  struct tagWND *v9; // rax
  __int64 result; // rax
  struct tagWND *v11; // [rsp+40h] [rbp+8h] BYREF

  ThreadPointerData = FindThreadPointerData(a1, a2);
  v8 = ThreadPointerData;
  if ( !ThreadPointerData )
    return 0LL;
  CTouchProcessor::GetPointerCapture(gpTouchProcessor, *((_QWORD *)ThreadPointerData + 3), 0, (void **)&v11, 0LL);
  v9 = v11;
  if ( v11 )
    v9 = (struct tagWND *)*((_QWORD *)v11 + 10);
  if ( !v9 || v9 != a4 || a3 != CTouchProcessor::GetPointerDownFrame(gpTouchProcessor, *((_QWORD *)v8 + 3)) )
    return 0LL;
  *((_DWORD *)v8 + 12) |= 4u;
  result = 1LL;
  HIDWORD(a1[2].Flink) = 1;
  return result;
}
