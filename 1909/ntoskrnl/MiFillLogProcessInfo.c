/*
 * XREFs of MiFillLogProcessInfo @ 0x14012A978
 * Callers:
 *     MiLogTrimWs @ 0x14012A8CC (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x1401436A4 (MiLogWsEmptyControl.c)
 *     MiLogHotPatchRundown @ 0x1405B0E40 (MiLogHotPatchRundown.c)
 *     MiLogHotPatchOperation @ 0x14088F15C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x14088F418 (MiLogHotPatchOperationStatus.c)
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
      v4 = *(_DWORD *)(a1 - 248);
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
    v4 = *(_DWORD *)(a1 - 536);
  }
  *a2 = v4;
  *a3 = result;
  return result;
}
