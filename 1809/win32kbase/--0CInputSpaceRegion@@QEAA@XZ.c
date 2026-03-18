/*
 * XREFs of ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C003DC10
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C003D900 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C003DBA8 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

CInputSpaceRegion *__fastcall CInputSpaceRegion::CInputSpaceRegion(CInputSpaceRegion *this)
{
  __int128 v2; // xmm1
  int v3; // ecx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _OWORD v8[6]; // [rsp+20h] [rbp-78h] BYREF

  memset(v8, 0, 0x54uLL);
  v2 = v8[1];
  v3 = v8[5];
  *(_OWORD *)this = v8[0];
  v4 = v8[2];
  *((_OWORD *)this + 1) = v2;
  v5 = v8[3];
  *((_OWORD *)this + 2) = v4;
  v6 = v8[4];
  *((_OWORD *)this + 3) = v5;
  *((_OWORD *)this + 4) = v6;
  *((_DWORD *)this + 20) = v3;
  memset((char *)this + 88, 0, 0x120uLL);
  *((_BYTE *)this + 376) = 0;
  memset((char *)this + 384, 0, 0xC8uLL);
  return this;
}
