/*
 * XREFs of _GetClientRect @ 0x1C0142368
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C0013B30 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C0142334 (GetPrimaryMonitorRect.c)
 */

unsigned __int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *v4; // rcx
  unsigned __int64 result; // rax
  int v6; // eax
  int v7; // ecx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v3 + 31) & 0x20) == 0 || (*(_BYTE *)(v3 + 21) & 2) != 0 )
  {
    if ( (*(_WORD *)(v3 + 42) & 0x3FFF) == 0x29D )
    {
      result = (unsigned __int64)GetPrimaryMonitorRect(&v8);
      *(_OWORD *)a2 = *(_OWORD *)result;
    }
    else
    {
      v6 = *(_DWORD *)(v3 + 104);
      v7 = -*(_DWORD *)(v3 + 108);
      *(_OWORD *)a2 = *(_OWORD *)(v3 + 104);
      *(_DWORD *)(a2 + 12) += v7;
      result = (unsigned int)-v6;
      *(_DWORD *)a2 += result;
      *(_DWORD *)(a2 + 8) += result;
      *(_DWORD *)(a2 + 4) += v7;
    }
  }
  else
  {
    v4 = gpsi;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = v4[531];
    result = (unsigned int)v4[532];
    *(_DWORD *)(a2 + 12) = result;
  }
  return result;
}
