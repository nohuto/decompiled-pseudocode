/*
 * XREFs of PspCaptureAndValidateUnicodeString @ 0x140608328
 * Callers:
 *     PspCaptureUserProcessParameters @ 0x140607D50 (PspCaptureUserProcessParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspCaptureAndValidateUnicodeString(_OWORD *a1, __int64 a2)
{
  unsigned __int16 v2; // cx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx

  *(_OWORD *)a2 = *a1;
  v2 = *(_WORD *)a2;
  if ( (*(_WORD *)a2 & 1) != 0 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    *(_WORD *)(a2 + 2) = v2 + 2;
    if ( (unsigned __int16)(v2 + 2) >= v2 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( v2 )
    return 3221225485LL;
  *(_WORD *)(a2 + 2) = 0;
LABEL_4:
  if ( v2 )
  {
    v4 = v3 + v2;
    if ( v4 > 0x7FFFFFFF0000LL || v4 < v3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return 0LL;
}
