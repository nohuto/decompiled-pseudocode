/*
 * XREFs of _GetClientRect @ 0x1C00588F0
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C0056460 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     GetMonitorRect @ 0x1C004CC00 (GetMonitorRect.c)
 */

unsigned __int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // ecx
  unsigned __int64 result; // rax
  _DWORD *v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v3 + 31) & 0x20) == 0 || (*(_BYTE *)(v3 + 21) & 2) != 0 )
  {
    if ( (*(_WORD *)(v3 + 42) & 0x3FFF) == 0x29D )
    {
      result = (unsigned __int64)GetMonitorRect(&v7, *(_QWORD *)(gpDispInfo + 96));
      *(_OWORD *)a2 = *(_OWORD *)result;
    }
    else
    {
      v4 = *(_DWORD *)(v3 + 108);
      result = *(unsigned int *)(v3 + 104);
      *(_OWORD *)a2 = *(_OWORD *)(v3 + 104);
      *(_DWORD *)a2 -= result;
      *(_DWORD *)(a2 + 8) -= result;
      *(_DWORD *)(a2 + 12) -= v4;
      *(_DWORD *)(a2 + 4) -= v4;
    }
  }
  else
  {
    v6 = gpsi;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = v6[531];
    result = (unsigned int)v6[532];
    *(_DWORD *)(a2 + 12) = result;
  }
  return result;
}
