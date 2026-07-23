/*
 * XREFs of RtlStateDurationCapture @ 0x14009030C
 * Callers:
 *     PoEnergyContextCleanup @ 0x1406088D0 (PoEnergyContextCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStateDurationCapture(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // r9d
  unsigned __int64 v6; // r10
  unsigned int v8; // r10d
  int v9; // eax
  int v10; // ecx

  v3 = *a2;
  v4 = 0;
  *(_QWORD *)a1 = *a2;
  v6 = HIDWORD(v3);
  if ( (v6 & 0x80000000) != 0LL )
  {
    v8 = v6 & 0x7FFFFFFF;
    *(_DWORD *)(a1 + 4) = v8;
    v9 = *(_DWORD *)a2;
    if ( a3 > *(_DWORD *)a2 )
    {
      *(_DWORD *)a1 = a3;
      v4 = a3 - v9;
      v10 = -1;
      if ( a3 - v9 != -1 && ~v4 >= v8 )
        v10 = v8 + v4;
      *(_DWORD *)(a1 + 4) = v10 & 0x7FFFFFFF;
    }
  }
  return v4;
}
