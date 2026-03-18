/*
 * XREFs of MiFillLogProcessInfo @ 0x140129F58
 * Callers:
 *     MiLogTrimWs @ 0x140129EAC (MiLogTrimWs.c)
 *     MiLogWsEmptyControl @ 0x140143164 (MiLogWsEmptyControl.c)
 *     MiLogHotPatchRundown @ 0x1405B1004 (MiLogHotPatchRundown.c)
 *     MiLogHotPatchOperation @ 0x14088F93C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x14088FBF8 (MiLogHotPatchOperationStatus.c)
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
