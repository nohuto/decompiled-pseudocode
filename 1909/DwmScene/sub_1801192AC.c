/*
 * XREFs of sub_1801192AC @ 0x1801192AC
 * Callers:
 *     sub_18011937C @ 0x18011937C (sub_18011937C.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

int __fastcall sub_1801192AC(GUID *rguid)
{
  int result; // eax
  int v3; // r8d
  unsigned int v4; // edx
  CHAR *v5; // rcx
  GUID *i; // rbx
  CHAR MultiByteStr[48]; // [rsp+40h] [rbp-98h] BYREF
  OLECHAR sz[40]; // [rsp+70h] [rbp-68h] BYREF

  memset(sz, 0, sizeof(sz));
  memset(MultiByteStr, 0, 0x28uLL);
  StringFromGUID2(rguid, sz, 40);
  result = WideCharToMultiByte(0, 0, sz, -1, MultiByteStr, 40, 0LL, 0LL);
  v4 = 0;
  v5 = MultiByteStr;
  for ( i = rguid + 1; *v5; ++v4 )
  {
    if ( v4 >= 0x28 )
      break;
    LOBYTE(v3) = *v5;
    result = v3 - 123;
    if ( ((*v5 - 123) & 0xFD) != 0 )
    {
      LOBYTE(i->Data1) = v3;
      i = (GUID *)((char *)i + 1);
    }
    ++v5;
  }
  LOBYTE(i->Data1) = 0;
  return result;
}
