/*
 * XREFs of MiInitializeLargePageColorSizes @ 0x1401893E4
 * Callers:
 *     MiInitializeCacheSizes @ 0x1409F3BB8 (MiInitializeCacheSizes.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 MiInitializeLargePageColorSizes()
{
  __int64 result; // rax
  unsigned __int64 v1; // rdi
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi
  int (__fastcall *v4)(_QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[8]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v6[5]; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0LL;
  memset(v6, 0, sizeof(v6));
  dword_140465844 = 17;
  dword_140465840[0] = 4;
  result = ((__int64 (__fastcall *)(__int64, __int64, int (__fastcall **)(_QWORD, __int64, _QWORD *), _BYTE *))off_140426798[0])(
             49LL,
             8LL,
             &v4,
             v5);
  if ( (int)result >= 0 )
  {
    v1 = -1LL;
    v2 = 0;
    if ( KeNumberNodes )
    {
      do
      {
        if ( v4(v2, 1LL, v6) >= 0 && v6[1] && LODWORD(v6[3]) == 1 && v6[1] < v1 )
          v1 = v6[1];
        result = (unsigned __int16)KeNumberNodes;
        ++v2;
      }
      while ( v2 < (unsigned __int16)KeNumberNodes );
      if ( v1 != -1LL )
      {
        v3 = v1 >> 30;
        if ( (_DWORD)v3 )
        {
          dword_140465840[0] = v3;
          dword_140465844 = v3;
        }
      }
    }
  }
  return result;
}
