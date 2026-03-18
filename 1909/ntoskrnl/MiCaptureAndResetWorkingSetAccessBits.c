/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x14017D428
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiTbFlushType @ 0x1400241C0 (MiTbFlushType.c)
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiDrainSystemAccessLog @ 0x14012FE58 (MiDrainSystemAccessLog.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

LONG *__fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-D8h]
  _DWORD *v11; // [rsp+30h] [rbp-D0h]
  _QWORD v12[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[24]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v14[68]; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(v13, 0, 0xB8uLL);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  memset(v12, 0, 0xA8uLL);
  memset(v14, 0, 0x108uLL);
  v12[4] = -1LL;
  LOWORD(v12[0]) = 6;
  v6 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v12[18] = MiResetAccessBitPte;
  v12[19] = MiResetAccessBitsTail;
  v12[2] = a1;
  BYTE6(v12[0]) = a2;
  if ( v6 && *(_QWORD *)(a1 + 624) )
  {
    v14[1] = 32;
    v11 = v14;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v10 = v13;
    LODWORD(v13[0]) = MiTbFlushType(a1);
    WORD2(v13[0]) = v7;
    v13[2] = v7;
    LODWORD(v13[1]) = 20;
    v13[3] = v7;
  }
  LODWORD(v9) = dword_140466068;
  v12[20] = &v9;
  MiWalkPageTables((__int16 *)v12);
  return MiDrainSystemAccessLog(a1);
}
