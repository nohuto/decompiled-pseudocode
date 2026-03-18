/*
 * XREFs of RtlStringCchCatA @ 0x1C0147D08
 * Callers:
 *     flagString @ 0x1C0147A9C (flagString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  __int64 v3; // rdx
  char *v4; // rax
  NTSTATUS result; // eax
  __int64 v7; // r8
  char *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  const char *v11; // r9
  char v12; // r8
  char *v13; // rax

  v3 = 512LL;
  v4 = byte_1C01D0D30;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
    v7 = 512 - v3;
  else
    v7 = 0LL;
  if ( v3 )
  {
    v8 = &byte_1C01D0D30[v7];
    v9 = 512 - v7;
    if ( 512 != v7 )
    {
      v10 = 2147483646LL;
      v11 = (const char *)(pszSrc - v8);
      do
      {
        if ( !v10 )
          break;
        v12 = v8[(_QWORD)v11];
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x80000005 : 0;
  }
  return result;
}
