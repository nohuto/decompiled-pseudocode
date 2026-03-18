/*
 * XREFs of EtwpInitializeActivityIdSeed @ 0x14076B308
 * Callers:
 *     EtwInitializeProcessor @ 0x14076B26C (EtwInitializeProcessor.c)
 * Callees:
 *     HeadlessDispatch @ 0x14018F4B0 (HeadlessDispatch.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpInitializeActivityIdSeed(__int64 a1, __int16 a2)
{
  int v3; // eax
  __int64 result; // rax
  size_t v5; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-20h] BYREF

  *(_WORD *)(a1 + 6) = a2;
  v6[0] = 0LL;
  v6[1] = 0LL;
  *(_QWORD *)(a1 + 8) = MEMORY[0xFFFFF78000000014];
  v5 = 16LL;
  if ( (unsigned int)HeadlessDispatch(21LL, 0LL, 0LL, v6, &v5) )
  {
    v3 = MEMORY[0xFFFFF78000000014];
    v6[0] = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v3 = v6[0];
  }
  *(_DWORD *)a1 = v3;
  result = WORD2(v6[0]);
  *(_WORD *)(a1 + 4) = WORD2(v6[0]);
  return result;
}
