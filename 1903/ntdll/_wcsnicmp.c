/*
 * XREFs of _wcsnicmp @ 0x18008E310
 * Callers:
 *     sub_18001A6F0 @ 0x18001A6F0 (sub_18001A6F0.c)
 *     sub_18002C138 @ 0x18002C138 (sub_18002C138.c)
 *     sub_18005BC5C @ 0x18005BC5C (sub_18005BC5C.c)
 *     sub_18005C0EC @ 0x18005C0EC (sub_18005C0EC.c)
 *     sub_180062218 @ 0x180062218 (sub_180062218.c)
 *     sub_18007A034 @ 0x18007A034 (sub_18007A034.c)
 *     sub_1800808C0 @ 0x1800808C0 (sub_1800808C0.c)
 *     sub_1800F0AF4 @ 0x1800F0AF4 (sub_1800F0AF4.c)
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
