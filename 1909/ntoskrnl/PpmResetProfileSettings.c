/*
 * XREFs of PpmResetProfileSettings @ 0x14019947C
 * Callers:
 *     PpmRegisterProfiles @ 0x14077FA64 (PpmRegisterProfiles.c)
 *     PpmDisableProfile @ 0x1408B64C4 (PpmDisableProfile.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 */

_QWORD *__fastcall PpmResetProfileSettings(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v1 = (_QWORD *)(a1 + 40);
  memmove((void *)(a1 + 40), &unk_140437088, 0xAA8uLL);
  memmove((void *)(a1 + 2768), &unk_140437B30, 0xAA8uLL);
  v3 = 2LL;
  do
  {
    result = v1;
    v5 = 2LL;
    do
    {
      *result = 0LL;
      result += 341;
      --v5;
    }
    while ( v5 );
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}
