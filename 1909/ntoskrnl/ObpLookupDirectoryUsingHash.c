/*
 * XREFs of ObpLookupDirectoryUsingHash @ 0x1406BECC4
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x1406BEB70 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x140003F90 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x140004114 (ObpLockDirectoryShared.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

void *__fastcall ObpLookupDirectoryUsingHash(char *a1, const UNICODE_STRING *a2, __int64 a3, BOOLEAN a4)
{
  char v5; // bp
  char *v9; // rsi
  __int64 *v10; // rdi
  int v11; // r15d
  void *v12; // rdi
  void *v13; // rcx
  void *result; // rax

  v5 = *(_BYTE *)(a3 + 30);
  v9 = &a1[8 * *(unsigned __int16 *)(a3 + 28)];
  if ( !v5 )
    ObpLockDirectoryShared(a3, a1);
  v10 = *(__int64 **)v9;
  if ( !*(_QWORD *)v9 )
    goto LABEL_15;
  v11 = *(_DWORD *)(a3 + 24);
  do
  {
    if ( *((_DWORD *)v10 + 4) == v11
      && RtlEqualUnicodeString(
           a2,
           (PCUNICODE_STRING)(v10[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v10[1] - 48 + 26) & 3] + 8),
           a4) )
    {
      break;
    }
    v9 = (char *)v10;
    v10 = (__int64 *)*v10;
  }
  while ( v10 );
  if ( v10 )
  {
    v12 = (void *)v10[1];
    ObfReferenceObject(v12);
    if ( !v5 )
    {
      ObpUnlockDirectory((__int64)a1, a3);
      v9 = 0LL;
    }
    v13 = *(void **)(a3 + 8);
    if ( v13 )
      ObfDereferenceObject(v13);
    *(_QWORD *)(a3 + 8) = v12;
    result = v12;
    *(_QWORD *)(a3 + 16) = v9;
  }
  else
  {
LABEL_15:
    if ( !v5 )
      ObpUnlockDirectory((__int64)a1, a3);
    return 0LL;
  }
  return result;
}
