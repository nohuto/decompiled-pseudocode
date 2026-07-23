/*
 * XREFs of AslPathCombine @ 0x1408EB4D4
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x140324070 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x1403241F0 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppPatch @ 0x1408E9C20 (SdbpGetPathAppPatch.c)
 *     SdbpGetPathAppraiser @ 0x1408E9D10 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdb @ 0x1408E9E50 (SdbpGetPathCustomSdb.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1408ED134 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1408ED390 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400F5038 (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCombine(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, wchar_t *a3, size_t a4)
{
  NTSTATUS v8; // ebx
  const wchar_t *v9; // r11
  const wchar_t *v10; // r11
  const wchar_t *v11; // r8
  size_t v12; // rdx
  const wchar_t *v13; // r15
  unsigned int v14; // ebp
  unsigned int v15; // eax
  size_t pcchLength[7]; // [rsp+30h] [rbp-38h] BYREF
  size_t v17; // [rsp+88h] [rbp+20h] BYREF

  pcchLength[0] = 0LL;
  v17 = 0LL;
  if ( !a4 )
    return 3221225507LL;
  v8 = RtlStringCchLengthW(pszSrc, 0x7FFFFFFFuLL, pcchLength);
  if ( v8 < 0 )
    goto LABEL_23;
  v8 = RtlStringCchLengthW(v9, 0x7FFFFFFFuLL, &v17);
  if ( v8 < 0 )
    goto LABEL_23;
  if ( pcchLength[0] )
  {
    v11 = pszSrc;
    v12 = a4;
    if ( v17 )
    {
      v13 = v10 + 1;
      v14 = (pszSrc[pcchLength[0] - 1] == 92) + 1;
      if ( *v10 != 92 )
        v14 = pszSrc[pcchLength[0] - 1] == 92;
      if ( v14 <= 1 )
        v13 = v10;
      v8 = RtlStringCchCopyW(a3, a4, pszSrc);
      if ( v8 < 0 )
        goto LABEL_23;
      v15 = v14 - 1;
      if ( v14 <= 1 )
        v15 = v14;
      if ( !v15 )
      {
        v8 = RtlStringCchCatW(a3, a4, L"\\");
        if ( v8 < 0 )
          goto LABEL_23;
      }
      v8 = RtlStringCchCatW(a3, a4, v13);
      if ( v8 < 0 )
        goto LABEL_23;
      v8 = 0;
LABEL_22:
      if ( v8 >= 0 )
        return (unsigned int)v8;
LABEL_23:
      AslLogCallPrintf(1LL);
      return (unsigned int)v8;
    }
LABEL_9:
    v8 = RtlStringCchCopyW(a3, v12, v11);
    goto LABEL_22;
  }
  if ( v17 )
  {
    v11 = v10;
    v12 = a4;
    goto LABEL_9;
  }
  *a3 = 0;
  return 0;
}
