/*
 * XREFs of VidSchReportDevice @ 0x1C00CBFC0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003E48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqq @ 0x1C0026244 (McTemplateK0pqq.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0030854 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0032258 (McTemplateK0pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  const GUID *v7; // r8
  unsigned int v8; // edx
  __int64 v9; // r9
  __int64 v10; // r10
  char v11; // r11
  __int64 v12; // r9
  __int64 v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+28h] [rbp-80h]
  _DWORD v15[8]; // [rsp+80h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( a1 == *(_QWORD *)(v4 + 224) )
      v5 = *(_QWORD *)(v4 + 232);
    else
      v5 = 0LL;
    if ( v5 )
    {
      memset(v15, 0, sizeof(v15));
      if ( bTracingEnabled )
      {
        VidSchiSchedulerNodeToDriverEngine(v4, *(_DWORD *)(v5 + 88));
        v7 = (const GUID *)(unsigned int)VidSchiSchedulerNodeToDriverNode(v4, v8);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp(
            v6,
            &EventReportContext,
            v7,
            v9,
            (char)v7,
            v11,
            v15[0],
            v15[1],
            v15[2],
            v15[3],
            v15[4],
            (2 * ((*(_DWORD *)(v10 + 48) & 0x10) != 0)) | 1,
            v5);
      }
      v12 = *(_QWORD *)(v5 + 56);
      if ( !v12 || (*(_DWORD *)(v5 + 112) & 0x40) != 0 )
        v12 = v5;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v14) = *(_DWORD *)(v5 + 404);
        LODWORD(v13) = *(_DWORD *)(v5 + 400);
        McTemplateK0pqq(v6, &EventChangePriority, v7, v12, v13, v14);
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
