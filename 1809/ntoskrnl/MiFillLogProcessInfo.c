/*
 * XREFs of MiFillLogProcessInfo @ 0x1401311C4
 * Callers:
 *     MiLogTrimWs @ 0x140131118 (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x1402CBB90 (MiLogWsEmptyControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFillLogProcessInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // ecx

  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    {
      v4 = *(_DWORD *)(a1 - 3000);
      result = 0LL;
    }
    else
    {
      result = 0LL;
      v4 = 0;
    }
  }
  else
  {
    result = a1 - 176;
    v4 = *(_DWORD *)(a1 - 544);
  }
  *a2 = v4;
  *a3 = result;
  return result;
}
