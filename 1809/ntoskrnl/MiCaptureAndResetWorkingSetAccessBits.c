/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x140173C88
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiDrainSystemAccessLog @ 0x14000FF28 (MiDrainSystemAccessLog.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, char a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  int *v11; // [rsp+28h] [rbp-D8h]
  _DWORD *v12; // [rsp+30h] [rbp-D0h]
  _QWORD v13[22]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v15; // [rsp+F4h] [rbp-Ch]
  __int64 v16; // [rsp+F8h] [rbp-8h]
  __int64 v17; // [rsp+100h] [rbp+0h]
  __int64 v18; // [rsp+108h] [rbp+8h]
  _DWORD v19[68]; // [rsp+1B0h] [rbp+B0h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v13[5] = -1LL;
  v13[19] = MiResetAccessBitPte;
  v6 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v13[20] = MiResetAccessBitsTail;
  LODWORD(v13[0]) = 6;
  v13[3] = a1;
  BYTE4(v13[0]) = a2;
  if ( v6 && *(_QWORD *)(a1 + 576) )
  {
    v19[0] = 0;
    v12 = v19;
    v19[1] = 32;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v16 = 20LL;
    v11 = &v14;
    v14 = MiTbFlushType(a1);
    v15 = v7;
    v17 = v7;
    v18 = v7;
  }
  LODWORD(v10) = dword_14043B9A8;
  v13[21] = &v10;
  MiWalkPageTables((int *)v13);
  return MiDrainSystemAccessLog(a1, v8);
}
