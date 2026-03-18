/*
 * XREFs of UpdateTopLevelWindowDPITransform @ 0x1C00349E0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     UpdateWindowMonitor @ 0x1C0068A30 (UpdateWindowMonitor.c)
 * Callees:
 *     GetMonitorTransform @ 0x1C0034A54 (GetMonitorTransform.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

char __fastcall UpdateTopLevelWindowDPITransform(__int64 a1, __int64 a2)
{
  int v4; // ecx
  _OWORD *v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
  LOBYTE(v5) = v4 & 0xF;
  if ( ((v4 & 0xF) != 2 || (v4 & 0x20000000) != 0)
    && (memset(v11, 0, sizeof(v11)), LODWORD(v5) = GetMonitorTransform(a2, a1, v11), (_DWORD)v5)
    && ((v5 = *(_OWORD **)(a1 + 216)) != 0LL
     || (v5 = (_OWORD *)Win32AllocPoolWithQuota(64LL, 2020438869LL), (*(_QWORD *)(a1 + 216) = v5) != 0LL)) )
  {
    v7 = v11[1];
    *v5 = v11[0];
    v8 = v11[2];
    v5[1] = v7;
    v9 = v11[3];
    v5[2] = v8;
    v5[3] = v9;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 216);
    if ( v6 )
    {
      LOBYTE(v5) = Win32FreePool(v6);
      *(_QWORD *)(a1 + 216) = 0LL;
    }
  }
  return (char)v5;
}
