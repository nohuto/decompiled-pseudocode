/*
 * XREFs of ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01CDCD8
 * Callers:
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00AE764 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputTraceLogging::GetWindowDetails(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v5; // r8
  __int64 v6; // rax
  const WCHAR *v7; // rax
  __int64 v8; // rdx
  struct _KTHREAD *v9; // rcx
  unsigned int ThreadId; // eax
  PETHREAD *v11; // rcx

  v2 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  if ( a2 )
  {
    v5 = a2[2];
    v6 = a2[5];
    *(_QWORD *)a1 = *(_QWORD *)(a2[14] + 104LL);
    if ( *(_DWORD *)(v6 + 184) )
      v7 = (const WCHAR *)a2[21];
    else
      v7 = &pwsz;
    v8 = *(_QWORD *)(v5 + 424);
    v9 = *(struct _KTHREAD **)v5;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = v8 + 992;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v8 + 56);
    ThreadId = (unsigned int)PsGetThreadId(v9);
    v11 = (PETHREAD *)a2[31];
    *(_DWORD *)(a1 + 28) = ThreadId;
    if ( v11 )
      v2 = (unsigned int)PsGetThreadId(*v11);
    *(_DWORD *)(a1 + 32) = v2;
  }
  return a1;
}
