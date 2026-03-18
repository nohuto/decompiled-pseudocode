/*
 * XREFs of vCheckCharSet @ 0x1C0055ED4
 * Callers:
 *     vProcessEntry @ 0x1C0055E00 (vProcessEntry.c)
 * Callees:
 *     <none>
 */

int __fastcall vCheckCharSet(__int64 a1, WCHAR *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  _DWORD *v5; // rax
  ULONG v6; // ecx
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  Value = 1;
  v3 = -1LL;
  *(_WORD *)(a1 + 64) = 1;
  String.Buffer = a2;
  do
    ++v3;
  while ( a2[v3] );
  String.Length = 2 * v3;
  String.MaximumLength = 2 * v3;
  LODWORD(v5) = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
  if ( (_DWORD)v5 || (v6 = Value, Value > 0xFF) )
  {
LABEL_8:
    *(_BYTE *)(a1 + 65) |= 2u;
  }
  else
  {
    *(_BYTE *)(a1 + 64) = Value;
    v5 = &charsets;
    while ( v6 != *v5 )
    {
      ++v2;
      ++v5;
      if ( v2 >= 0x10 )
        goto LABEL_8;
    }
  }
  return (int)v5;
}
