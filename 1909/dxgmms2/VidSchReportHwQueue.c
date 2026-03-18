/*
 * XREFs of VidSchReportHwQueue @ 0x1C00CCCF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppp @ 0x1C0026760 (McTemplateK0ppp.c)
 */

ULONG __fastcall VidSchReportHwQueue(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  ULONG result; // eax

  if ( !*(_QWORD *)(a1 + 48) && bTracingEnabled )
  {
    v1 = *(_QWORD *)(a1 + 40);
    v2 = *(_QWORD *)(v1 + 24);
    if ( !v2 || (result = *(_DWORD *)(v1 + 56), (result & 0x40) != 0) )
      v2 = *(_QWORD *)(a1 + 40);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      return McTemplateK0ppp(a1, &EventReportHwQueue, 0LL, v2, 0LL, a1);
  }
  return result;
}
