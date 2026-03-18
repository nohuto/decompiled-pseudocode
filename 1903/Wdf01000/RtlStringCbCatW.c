/*
 * XREFs of RtlStringCbCatW @ 0x1C0093318
 * Callers:
 *     USBDInternal_BuildServicePath @ 0x1C009357C (USBDInternal_BuildServicePath.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00933A0 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCbCatW(wchar_t *pszDest, unsigned __int64 cbDest, const wchar_t *a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v6; // rcx
  wchar_t *i; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-18h]

  v3 = cbDest >> 1;
  v4 = 0LL;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = 3221225485LL;
  if ( (int)v4 < 0 )
    goto LABEL_9;
  v6 = v3;
  for ( i = pszDest; v6; --v6 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v4 = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
    v8 = v3 - v6;
  else
LABEL_9:
    v8 = 0LL;
  if ( (int)v4 >= 0 )
    LODWORD(v4) = RtlStringCopyWorkerW(&pszDest[v8], v3 - v8, (unsigned __int64 *)v4, pszDest, v10);
  return (unsigned int)v4;
}
