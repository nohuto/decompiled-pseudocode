/*
 * XREFs of DxgkCheckGpuVirtualizationCaps @ 0x1C01C7D18
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C014C474 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCheckGpuVirtualizationCaps(_DWORD *a1, char a2, _BYTE *a3)
{
  __int64 v3; // rax

  *a3 = 0;
  if ( (a1[600] & 4) != 0 )
  {
    if ( (a1[473] & 0x400) == 0 && !a2 )
    {
      v3 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v3 + 24) = 1238LL;
LABEL_5:
      WdLogEvent5_WdError(v3);
      return 3221225485LL;
    }
    if ( a1[332] )
    {
      v3 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v3 + 24) = 1243LL;
      goto LABEL_5;
    }
    *a3 = 1;
  }
  if ( a2 )
  {
    if ( g_VirtualGpuOnly )
    {
      a1[600] |= 4u;
      *a3 = 1;
    }
  }
  return 0LL;
}
