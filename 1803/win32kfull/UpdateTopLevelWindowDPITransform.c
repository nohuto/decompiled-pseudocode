/*
 * XREFs of UpdateTopLevelWindowDPITransform @ 0x1C0073610
 * Callers:
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     GetMonitorTransform @ 0x1C0073680 (GetMonitorTransform.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall UpdateTopLevelWindowDPITransform(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF

  result = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(result + 288) & 0xF) != 2
    && (memset(v9, 0, sizeof(v9)), result = GetMonitorTransform(a2, a1, v9), (_DWORD)result)
    && ((result = *(_QWORD *)(a1 + 200)) != 0
     || (result = Win32AllocPoolWithQuota(64LL, 2020438869LL), (*(_QWORD *)(a1 + 200) = result) != 0LL)) )
  {
    v6 = v9[1];
    *(_OWORD *)result = v9[0];
    v7 = v9[2];
    *(_OWORD *)(result + 16) = v6;
    v8 = v9[3];
    *(_OWORD *)(result + 32) = v7;
    *(_OWORD *)(result + 48) = v8;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 200);
    if ( v5 )
    {
      result = Win32FreePool(v5);
      *(_QWORD *)(a1 + 200) = 0LL;
    }
  }
  return result;
}
