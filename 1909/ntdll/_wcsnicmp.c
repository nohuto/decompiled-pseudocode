/*
 * XREFs of _wcsnicmp @ 0x18008E9B0
 * Callers:
 *     RtlpCheckPseudoEnvironmentVariable @ 0x18001A6F0 (RtlpCheckPseudoEnvironmentVariable.c)
 *     punycode_decode @ 0x18002C138 (punycode_decode.c)
 *     IsOverlaySupportedPath @ 0x18005BCFC (IsOverlaySupportedPath.c)
 *     IsProgramFilesPath @ 0x18005C18C (IsProgramFilesPath.c)
 *     LdrpGetModuleName @ 0x1800622B8 (LdrpGetModuleName.c)
 *     LdrpGetFileDriverStoreRoot @ 0x18007A6D4 (LdrpGetFileDriverStoreRoot.c)
 *     punycode_encode @ 0x180080F60 (punycode_encode.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800F0BD4 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = String2;
  if ( MaxCount )
  {
    v6 = (char *)String1 - (char *)String2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
