/*
 * XREFs of DrvDbGetObjectSubKeyList @ 0x140903710
 * Callers:
 *     DrvDbGetObjectList @ 0x140903200 (DrvDbGetObjectList.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14074C4D4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7,
        int a8)
{
  int v12; // edx
  int v13; // eax
  unsigned int v14; // eax
  _QWORD v16[70]; // [rsp+20h] [rbp-288h] BYREF

  *a7 = 0;
  if ( a6 )
    *a5 = 0;
  memset(v16, 0, 0x228uLL);
  LODWORD(v16[0]) = a8;
  v16[65] = a3;
  v16[66] = a4;
  v16[67] = a5;
  v16[68] = a6;
  v12 = PnpCtxRegEnumKeyWithCallback(a1, a2, (__int64)DrvDbGetObjectSubKeyCallback, (__int64)v16);
  if ( v12 >= 0 )
  {
    v13 = HIDWORD(v16[68]);
    *a7 = HIDWORD(v16[68]);
    if ( v13 )
    {
      v14 = v13 + 1;
      *a7 = v14;
      if ( a5 && v14 <= a6 )
        a5[v14 - 1] = 0;
      else
        return (unsigned int)-1073741789;
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v12;
}
