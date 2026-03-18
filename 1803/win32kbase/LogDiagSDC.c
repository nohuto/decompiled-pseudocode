/*
 * XREFs of LogDiagSDC @ 0x1C004B714
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C004BB20 (DrvDxgkWriteDiagEntry.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall LogDiagSDC(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rsi
  unsigned int v12; // edi
  _DWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rax
  char *v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rax

  v8 = a1;
  v12 = 192 * a1 + 88;
  v13 = PALLOCMEM2(v12, 0x73726447u, 1);
  v14 = (__int64)v13;
  if ( v13 )
  {
    *v13 = 38;
    v13[10] = 0;
    *((_QWORD *)v13 + 4) = 0LL;
    v13[1] = v12;
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    v13[15] = a5;
    v13[16] = a6;
    v13[13] = v8;
    v13[17] = a4;
    v13[18] = a3;
    v13[12] = (a8 != 0 ? 8 : 0) | (a2 == 0) | 2;
    *((_QWORD *)v13 + 10) = a7;
    v13[19] = 192;
    if ( a2 && (_DWORD)v8 )
    {
      v17 = (char *)(v13 + 26);
      v18 = v8;
      v19 = (_QWORD *)(a2 + 16);
      do
      {
        *((_QWORD *)v17 - 2) = *(v19 - 2);
        *((_QWORD *)v17 - 1) = *(v19 - 1);
        v20 = *v19;
        v19 += 25;
        *(_QWORD *)v17 = v20;
        *((_DWORD *)v17 + 2) = *((_DWORD *)v19 - 48);
        *((_DWORD *)v17 + 3) = *((_DWORD *)v19 - 47);
        *((_OWORD *)v17 + 1) = *(_OWORD *)(v19 - 23);
        *((_OWORD *)v17 + 2) = *(_OWORD *)(v19 - 21);
        *((_OWORD *)v17 + 3) = *(_OWORD *)(v19 - 19);
        *((_DWORD *)v17 + 16) = *((_DWORD *)v19 - 34);
        *((_DWORD *)v17 + 17) = *((_DWORD *)v19 - 33);
        *((_QWORD *)v17 + 9) = *(v19 - 16);
        *((_DWORD *)v17 + 20) = *((_DWORD *)v19 - 30);
        v17[84] = *((_BYTE *)v19 - 116);
        v17[85] = *((_BYTE *)v19 - 115);
        *((_DWORD *)v17 + 22) = *((_DWORD *)v19 - 28);
        *((_DWORD *)v17 + 23) = *((_DWORD *)v19 - 27);
        *((_DWORD *)v17 + 24) = *((_DWORD *)v19 - 26);
        *(_QWORD *)(v17 + 100) = *(_QWORD *)((char *)v19 - 100);
        *(_QWORD *)(v17 + 108) = *(_QWORD *)((char *)v19 - 92);
        *(_QWORD *)(v17 + 116) = *(_QWORD *)((char *)v19 - 84);
        *(_OWORD *)(v17 + 124) = *(_OWORD *)((char *)v19 - 76);
        *((_DWORD *)v17 + 35) = *((_DWORD *)v19 - 15);
        *((_DWORD *)v17 + 36) = *((_DWORD *)v19 - 14);
        *((_DWORD *)v17 + 37) = *((_DWORD *)v19 - 13);
        *((_QWORD *)v17 + 19) = *(v19 - 6);
        *((_QWORD *)v17 + 20) = *(v19 - 5);
        *((_DWORD *)v17 + 42) = *((_DWORD *)v19 - 8);
        v17 += 192;
        --v18;
      }
      while ( v18 );
    }
    DrvDxgkWriteDiagEntry(v14);
    return Win32FreePool(v14);
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v16 + 24) = v12;
    WdLogEvent5_WdLowResource(v16);
    return DrvDxgkLogCodePointPacket(3LL, a3, a4);
  }
}
