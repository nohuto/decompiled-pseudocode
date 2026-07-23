/*
 * XREFs of MiInitializeLargePageColorSizes @ 0x14017F470
 * Callers:
 *     MiInitializeCacheSizes @ 0x1409BCF1C (MiInitializeCacheSizes.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 MiInitializeLargePageColorSizes()
{
  __int64 result; // rax
  unsigned __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  int (__fastcall *v5)(_QWORD, __int64, _BYTE *); // [rsp+38h] [rbp-40h] BYREF
  _BYTE v6[8]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-20h]

  dword_14043B1C4 = 17;
  dword_14043B1C0[0] = 4;
  result = ((__int64 (__fastcall *)(__int64, __int64, int (__fastcall **)(_QWORD, __int64, _BYTE *), __int64 *))off_140401458[0])(
             49LL,
             8LL,
             &v5,
             &v4);
  if ( (int)result >= 0 )
  {
    v1 = -1LL;
    v2 = 0;
    if ( KeNumberNodes )
    {
      do
      {
        if ( v5(v2, 1LL, v6) >= 0 && v7 && v8 == 1 && v7 < v1 )
          v1 = v7;
        result = (unsigned __int16)KeNumberNodes;
        ++v2;
      }
      while ( v2 < (unsigned __int16)KeNumberNodes );
      if ( v1 != -1LL )
      {
        v3 = v1 >> 30;
        if ( (_DWORD)v3 )
        {
          dword_14043B1C0[0] = v3;
          dword_14043B1C4 = v3;
        }
      }
    }
  }
  return result;
}
