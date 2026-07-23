/*
 * XREFs of HvlpFastFlushPasidAddressList @ 0x14027658C
 * Callers:
 *     HvlSvmFlushPasid @ 0x140275EB0 (HvlSvmFlushPasid.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpCopyFlushVaList @ 0x1402798E8 (HvlpCopyFlushVaList.c)
 */

__int64 __fastcall HvlpFastFlushPasidAddressList(int a1, int a2, unsigned int a3, __int64 a4)
{
  __int16 v4; // di
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-98h]
  _DWORD v8[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v9; // [rsp+38h] [rbp-80h]
  _BYTE v10[96]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a3;
  v5 = 8 * a3 + 16;
  v8[1] = a1;
  v8[0] = a2;
  v9 = 0LL;
  HvlpCopyFlushVaList(a3, a4, 0LL, v10);
  LODWORD(v7) = 65697;
  HIDWORD(v7) = v4 & 0xFFF;
  return HvcallpExtendedFastHypercall(v7, (__int64)v8, v5);
}
