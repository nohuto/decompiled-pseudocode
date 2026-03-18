/*
 * XREFs of GetWindowMonitorAdapterLuid @ 0x1C011A798
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C0077534 (CreateOrGetRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C011A70C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowMonitorAdapterLuid(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL));
  if ( v4 )
    return (unsigned int)DrvGetWDDMAdapterInfo(*(_QWORD *)(v4 + 232), 0LL, a2, &v6);
  return v3;
}
