/*
 * XREFs of ??0DXGGLOBAL@@AEAA@XZ @ 0x1C01599C4
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C0159960 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DBB8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014B958 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ??0REMOTE_VSYNC@@QEAA@XZ @ 0x1C015A004 (--0REMOTE_VSYNC@@QEAA@XZ.c)
 *     ??0DXGBLACKBOX@@QEAA@XZ @ 0x1C015A048 (--0DXGBLACKBOX@@QEAA@XZ.c)
 */

DXGGLOBAL *__fastcall DXGGLOBAL::DXGGLOBAL(DXGGLOBAL *this)
{
  DXGGLOBAL *result; // rax
  __int128 v3; // xmm1
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF

  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 42) = 1;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 9;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 10;
  *((_DWORD *)this + 60) = 28;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 31) = (char *)this + 248;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = -1;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 32;
  *((_DWORD *)this + 80) = 1;
  *((_QWORD *)this + 42) = (char *)this + 328;
  *((_QWORD *)this + 41) = (char *)this + 328;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 35;
  *((_DWORD *)this + 96) = 1;
  *((_QWORD *)this + 50) = (char *)this + 392;
  *((_QWORD *)this + 49) = (char *)this + 392;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 11;
  *((_DWORD *)this + 110) = 18;
  *((_QWORD *)this + 57) = (char *)this + 448;
  *((_QWORD *)this + 56) = (char *)this + 448;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 123) = 12;
  *((_DWORD *)this + 124) = 1;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_DWORD *)this + 142) = -1;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  REMOTE_VSYNC::REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 632));
  REMOTE_VSYNC::REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 696));
  *((_QWORD *)this + 95) = 0LL;
  *((_WORD *)this + 488) = 1;
  *((_BYTE *)this + 978) = 0;
  *(_QWORD *)((char *)this + 980) = 0LL;
  *(_QWORD *)((char *)this + 988) = 1LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_DWORD *)this + 260) = 0;
  *((_DWORD *)this + 261) = 65;
  *((_DWORD *)this + 262) = 1;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((DXGGLOBAL *)((char *)this + 1056), 0, 0);
  *((_DWORD *)this + 268) = 0;
  *((_DWORD *)this + 269) = 8;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_DWORD *)this + 274) = 67;
  *((_DWORD *)this + 276) = 0;
  *((_QWORD *)this + 139) = 0LL;
  *((_DWORD *)this + 280) = 0;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  *((_QWORD *)this + 148) = 0LL;
  *((_DWORD *)this + 298) = 0;
  *((_DWORD *)this + 299) = 70;
  *((_DWORD *)this + 300) = 32;
  *((_QWORD *)this + 152) = (char *)this + 1208;
  *((_QWORD *)this + 151) = (char *)this + 1208;
  *((_BYTE *)this + 1224) = 0;
  *((_DWORD *)this + 307) = 0;
  *((_QWORD *)this + 154) = 0LL;
  *((_QWORD *)this + 155) = 0LL;
  *((_QWORD *)this + 156) = 0LL;
  *((_QWORD *)this + 157) = 0LL;
  *((_DWORD *)this + 316) = 0;
  *((_DWORD *)this + 317) = 70;
  *((_DWORD *)this + 318) = 21;
  *(_QWORD *)((char *)this + 1284) = 0LL;
  *((_QWORD *)this + 170) = 0x200000000LL;
  *(_QWORD *)((char *)this + 1292) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  *((_QWORD *)this + 164) = 0LL;
  *((_QWORD *)this + 167) = 0LL;
  *((_QWORD *)this + 168) = 0LL;
  *((_QWORD *)this + 169) = 0LL;
  *((_QWORD *)this + 172) = 0LL;
  *((_QWORD *)this + 173) = 0LL;
  *((_DWORD *)this + 348) = 74;
  *((_QWORD *)this + 176) = (char *)this + 1400;
  *((_QWORD *)this + 175) = (char *)this + 1400;
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  *((_DWORD *)this + 360) = 0;
  *((_DWORD *)this + 361) = -1;
  *((_DWORD *)this + 362) = 1;
  *((_QWORD *)this + 184) = 0LL;
  *((_DWORD *)this + 370) = 0;
  *((_QWORD *)this + 183) = (char *)this + 1456;
  *((_QWORD *)this + 182) = (char *)this + 1456;
  *((_QWORD *)this + 186) = 0LL;
  *((_BYTE *)this + 1496) = 0;
  *((_DWORD *)this + 416) = 0;
  *((_QWORD *)this + 209) = 0LL;
  *((_QWORD *)this + 210) = 0LL;
  *((_QWORD *)this + 211) = 0LL;
  *((_QWORD *)this + 212) = 0LL;
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *((_DWORD *)this + 430) = 0;
  *((_DWORD *)this + 431) = 78;
  *((_DWORD *)this + 432) = 1;
  memset((char *)this + 1744, 0, 0x49C00uLL);
  `vector constructor iterator'(
    (char *)this + 1744,
    4720LL,
    64LL,
    (void (__fastcall *)(char *))DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_BlockerArray_);
  *((_BYTE *)this + 303824) = 0;
  *((_QWORD *)this + 37979) = 0LL;
  *((_QWORD *)this + 37980) = 0LL;
  *((_BYTE *)this + 303848) = 0;
  *((_QWORD *)this + 37982) = 0LL;
  *((_QWORD *)this + 37983) = 0LL;
  *((_BYTE *)this + 303872) = 0;
  *((_QWORD *)this + 37985) = 0LL;
  *((_QWORD *)this + 37986) = 0LL;
  *((_WORD *)this + 151948) = 0;
  *((_QWORD *)this + 37988) = 0LL;
  *((_QWORD *)this + 37989) = 0LL;
  *((_QWORD *)this + 37990) = 0LL;
  *((_BYTE *)this + 303928) = 0;
  *((_DWORD *)this + 75983) = -1;
  *((_WORD *)this + 151968) = 0;
  *((_QWORD *)this + 37993) = 0LL;
  *((_QWORD *)this + 37994) = 0LL;
  *((_QWORD *)this + 37995) = 0LL;
  *((_DWORD *)this + 75992) = 0;
  *((_DWORD *)this + 75993) = -1;
  *((_DWORD *)this + 75994) = 14;
  *((_WORD *)this + 151992) = 0;
  *(_QWORD *)((char *)this + 303988) = 0LL;
  *((_QWORD *)this + 38000) = 0LL;
  *((_QWORD *)this + 38001) = 0LL;
  *((_QWORD *)this + 38002) = 0LL;
  *((_QWORD *)this + 38003) = 0LL;
  *((_DWORD *)this + 76008) = 0;
  *((_DWORD *)this + 76009) = -1;
  *((_DWORD *)this + 76010) = 1;
  DXGBLACKBOX::DXGBLACKBOX((DXGGLOBAL *)((char *)this + 304048));
  *((_QWORD *)this + 38013) = 0LL;
  *((_DWORD *)this + 76028) = 0;
  *((_BYTE *)this + 304116) = 1;
  *((_QWORD *)this + 38015) = 0LL;
  *((_QWORD *)this + 38016) = 0LL;
  *((_QWORD *)this + 38017) = 0LL;
  *((_DWORD *)this + 76037) = -1;
  *((_DWORD *)this + 76036) = 0;
  *((_QWORD *)this + 38019) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  memset((char *)this + 104, 0, 0x20uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)this + 120);
  *((_QWORD *)this + 166) = (char *)this + 1320;
  *((_QWORD *)this + 165) = (char *)this + 1320;
  memset(v4, 0, sizeof(v4));
  result = this;
  v3 = v4[1];
  *((_OWORD *)this + 102) = v4[0];
  *((_BYTE *)this + 696) = 1;
  *((_OWORD *)this + 103) = v3;
  return result;
}
