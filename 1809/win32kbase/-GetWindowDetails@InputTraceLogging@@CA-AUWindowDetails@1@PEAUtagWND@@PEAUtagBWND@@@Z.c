/*
 * XREFs of ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C013E49C
 * Callers:
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@_N@Z @ 0x1C002FE14 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@_N@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C002FF64 (-HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C013EABC (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0142CD4 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z @ 0x1C0145A10 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputTraceLogging::GetWindowDetails(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v7; // r8
  __int64 v8; // rax
  const WCHAR *v9; // rax
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rcx
  unsigned int ThreadId; // eax
  PETHREAD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct _KTHREAD *v16; // rcx

  v3 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  if ( a2 )
  {
    v7 = a2[2];
    v8 = a2[5];
    *(_QWORD *)a1 = *(_QWORD *)(a2[14] + 104LL);
    if ( *(_DWORD *)(v8 + 184) )
      v9 = (const WCHAR *)a2[21];
    else
      v9 = &word_1C01944BC;
    v10 = *(_QWORD *)(v7 + 424);
    v11 = *(struct _KTHREAD **)v7;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v10 + 992;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v10 + 56);
    ThreadId = (unsigned int)PsGetThreadId(v11);
    v13 = (PETHREAD *)a2[31];
  }
  else
  {
    if ( !a3 )
      return a1;
    v14 = *(_QWORD *)(a3 + 16);
    v15 = *(_QWORD *)(v14 + 424);
    v16 = *(struct _KTHREAD **)v14;
    *(_QWORD *)(a1 + 16) = v15 + 992;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v15 + 56);
    ThreadId = (unsigned int)PsGetThreadId(v16);
    v13 = *(PETHREAD **)(a3 + 64);
  }
  *(_DWORD *)(a1 + 28) = ThreadId;
  if ( v13 )
    v3 = (unsigned int)PsGetThreadId(*v13);
  *(_DWORD *)(a1 + 32) = v3;
  return a1;
}
