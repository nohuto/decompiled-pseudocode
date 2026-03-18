/*
 * XREFs of VidSchReportDevice @ 0x1C00C9070
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002CAC (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pqq @ 0x1C00267A4 (McTemplateK0pqq.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C002FDB4 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0031A08 (McTemplateK0pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  const GUID *v7; // r8
  unsigned int v8; // edx
  char v9; // dl
  __int64 v10; // r9
  char v11; // r10
  char v12; // r11
  __int64 v13; // r9
  __int64 v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+28h] [rbp-80h]
  _DWORD v16[8]; // [rsp+80h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( a1 == *(_QWORD *)(v4 + 224) )
      v5 = *(_QWORD *)(v4 + 232);
    else
      v5 = 0LL;
    if ( v5 )
    {
      memset(v16, 0, sizeof(v16));
      if ( bTracingEnabled )
      {
        VidSchiSchedulerNodeToDriverEngine(v4, *(_DWORD *)(v5 + 88));
        v9 = VidSchiSchedulerNodeToDriverNode(v4, v8);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp(
            v16[4],
            &EventReportContext,
            v7,
            v10,
            v9,
            v12,
            v16[0],
            v16[1],
            v16[2],
            v16[3],
            v16[4],
            (2 * (v11 & 1)) | 1,
            v5);
      }
      v13 = *(_QWORD *)(v5 + 56);
      if ( !v13 || (*(_DWORD *)(v5 + 112) & 0x40) != 0 )
        v13 = v5;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v15) = *(_DWORD *)(v5 + 404);
        LODWORD(v14) = *(_DWORD *)(v5 + 400);
        McTemplateK0pqq(v6, &EventChangePriority, v7, v13, v14, v15);
      }
    }
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v2);
    return 3221225485LL;
  }
}
