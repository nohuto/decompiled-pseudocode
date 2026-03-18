/*
 * XREFs of bQueryFntCacheReg @ 0x1C00C26BC
 * Callers:
 *     vGetLastBootTimeStatus @ 0x1C00C1528 (vGetLastBootTimeStatus.c)
 *     bServicingStackModifiedFonts @ 0x1C00C157C (bServicingStackModifiedFonts.c)
 *     vGetJpn98FixPitch @ 0x1C00C1650 (vGetJpn98FixPitch.c)
 *     bFntCacheDisabled @ 0x1C00C264C (bFntCacheDisabled.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 */

__int64 __fastcall bQueryFntCacheReg(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  char *v8; // rax
  char *v9; // rbx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF

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
