/*
 * XREFs of sub_1800D4E64 @ 0x1800D4E64
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 */

__int64 sub_1800D4E64()
{
  __int64 *v0; // rdi
  __int64 v1; // r8
  __int64 (__fastcall **v2)(); // rdx
  char *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  _OWORD *v7; // rdx
  char *v8; // rcx
  char v9; // [rsp+30h] [rbp-68h] BYREF
  char v10; // [rsp+38h] [rbp-60h] BYREF

  v0 = (__int64 *)off_180118ED0;
  v1 = 5LL;
  v2 = off_180118ED0;
  v3 = &v9;
  do
  {
    v4 = (__int64)*v2++;
    *(_QWORD *)v3 = v4;
    v3 += 16;
    --v1;
  }
  while ( v1 );
  v5 = 0;
  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    v7 = &unk_1801660D0;
    v8 = &v10;
    while ( 1 )
    {
      result = *(unsigned int *)v8;
      if ( (result & 0x40000000) == 0 )
        break;
      result = *v0;
      ++v5;
      v8 += 16;
      ++v0;
      *v7++ = *(_OWORD *)result;
      if ( v5 >= 5 )
        return result;
    }
  }
  byte_180165300 = 1;
  return result;
}
