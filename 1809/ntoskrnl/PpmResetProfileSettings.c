/*
 * XREFs of PpmResetProfileSettings @ 0x14018E950
 * Callers:
 *     PpmRegisterProfiles @ 0x140757D74 (PpmRegisterProfiles.c)
 *     PpmDisableProfile @ 0x14087B8A0 (PpmDisableProfile.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

_QWORD *__fastcall PpmResetProfileSettings(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v1 = (_QWORD *)(a1 + 40);
  memmove((void *)(a1 + 40), &unk_14040F848, 0xAA8uLL);
  memmove((void *)(a1 + 2768), &unk_1404102F0, 0xAA8uLL);
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
