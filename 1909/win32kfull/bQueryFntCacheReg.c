/*
 * XREFs of bQueryFntCacheReg @ 0x1C0141964
 * Callers:
 *     vGetJpn98FixPitch @ 0x1C0141890 (vGetJpn98FixPitch.c)
 *     bFntCacheDisabled @ 0x1C01418F4 (bFntCacheDisabled.c)
 *     bServicingStackModifiedFonts @ 0x1C0141A3C (bServicingStackModifiedFonts.c)
 *     vGetLastBootTimeStatus @ 0x1C0141B10 (vGetLastBootTimeStatus.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 */

__int64 __fastcall bQueryFntCacheReg(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  char *v8; // rax
  char *v9; // rbx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v6 = 0;
  RtlInitUnicodeString(&ValueName, a2);
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  Length = 2 * v7 + 30;
  v8 = (char *)PALLOCMEM2(Length, 1128682580LL, 1);
  v9 = v8;
  if ( v8 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v8, Length, &Length) >= 0 )
    {
      v6 = 1;
      *a3 = *(_DWORD *)&v9[*((unsigned int *)v9 + 2)];
    }
    Win32FreePool(v9);
  }
  return v6;
}
