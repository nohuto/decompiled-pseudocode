/*
 * XREFs of ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C016CFCC
 * Callers:
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x1C0034984 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C0034A88 (-HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C016D5E0 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0171C58 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C017499C (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputTraceLogging::GetWindowDetails(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // r8
  __int64 v8; // rax
  const WCHAR *v9; // rax
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rcx
  unsigned int ThreadId; // eax
  PETHREAD *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rcx
  unsigned int v18; // eax
  PETHREAD *v19; // rcx

  v3 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)(a2 + 136) + 104LL);
    if ( *(_DWORD *)(v8 + 184) )
      v9 = *(const WCHAR **)(a2 + 184);
    else
      v9 = &pwsz;
    v10 = *(_QWORD *)(v7 + 416);
    v11 = *(struct _KTHREAD **)v7;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v10 + 984;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v10 + 56);
    ThreadId = (unsigned int)PsGetThreadId(v11);
    v13 = *(PETHREAD **)(a2 + 264);
    *(_DWORD *)(a1 + 28) = ThreadId;
    if ( v13 )
      v3 = (unsigned int)PsGetThreadId(*v13);
    v14 = *(_DWORD *)(a2 + 260);
LABEL_12:
    *(_DWORD *)(a1 + 36) = v14;
    *(_DWORD *)(a1 + 32) = v3;
    return a1;
  }
  if ( a3 )
  {
    v15 = *(_QWORD *)(a3 + 16);
    v16 = *(_QWORD *)(v15 + 416);
    v17 = *(struct _KTHREAD **)v15;
    *(_QWORD *)(a1 + 16) = v16 + 984;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v16 + 56);
    v18 = (unsigned int)PsGetThreadId(v17);
    v19 = *(PETHREAD **)(a3 + 64);
    *(_DWORD *)(a1 + 28) = v18;
    if ( v19 )
      v3 = (unsigned int)PsGetThreadId(*v19);
    v14 = *(_DWORD *)(a3 + 72);
    goto LABEL_12;
  }
  return a1;
}
