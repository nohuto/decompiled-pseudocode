/*
 * XREFs of LogDiagSDC @ 0x1C0047D78
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0048030 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062C00 (xxxUserSetDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C0119360 (NtUserSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B6660 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LogDiagSDC(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rsi
  unsigned int v12; // edi
  _DWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  char *v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rax

  v8 = a1;
  v12 = 192 * a1 + 88;
  v13 = PALLOCMEM2(v12, 0x73726447u, 1);
  v14 = (__int64)v13;
  if ( v13 )
  {
    v13[10] = 0;
    *((_QWORD *)v13 + 4) = 0LL;
    *v13 = 38;
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
      v16 = (char *)(v13 + 26);
      v17 = v8;
      v18 = (_QWORD *)(a2 + 16);
      do
      {
        *((_QWORD *)v16 - 2) = *(v18 - 2);
        *((_QWORD *)v16 - 1) = *(v18 - 1);
        v19 = *v18;
        v18 += 25;
        *(_QWORD *)v16 = v19;
        *((_DWORD *)v16 + 2) = *((_DWORD *)v18 - 48);
        *((_DWORD *)v16 + 3) = *((_DWORD *)v18 - 47);
        *((_OWORD *)v16 + 1) = *(_OWORD *)(v18 - 23);
        *((_OWORD *)v16 + 2) = *(_OWORD *)(v18 - 21);
        *((_OWORD *)v16 + 3) = *(_OWORD *)(v18 - 19);
        *((_DWORD *)v16 + 16) = *((_DWORD *)v18 - 34);
        *((_DWORD *)v16 + 17) = *((_DWORD *)v18 - 33);
        *((_QWORD *)v16 + 9) = *(v18 - 16);
        *((_DWORD *)v16 + 20) = *((_DWORD *)v18 - 30);
        v16[84] = *((_BYTE *)v18 - 116);
        v16[85] = *((_BYTE *)v18 - 115);
        *((_DWORD *)v16 + 22) = *((_DWORD *)v18 - 28);
        *((_DWORD *)v16 + 23) = *((_DWORD *)v18 - 27);
        *((_DWORD *)v16 + 24) = *((_DWORD *)v18 - 26);
        *(_QWORD *)(v16 + 100) = *(_QWORD *)((char *)v18 - 100);
        *(_QWORD *)(v16 + 108) = *(_QWORD *)((char *)v18 - 92);
        *(_QWORD *)(v16 + 116) = *(_QWORD *)((char *)v18 - 84);
        *(_OWORD *)(v16 + 124) = *(_OWORD *)((char *)v18 - 76);
        *((_DWORD *)v16 + 35) = *((_DWORD *)v18 - 15);
        *((_DWORD *)v16 + 36) = *((_DWORD *)v18 - 14);
        *((_DWORD *)v16 + 37) = *((_DWORD *)v18 - 13);
        *((_QWORD *)v16 + 19) = *(v18 - 6);
        *((_QWORD *)v16 + 20) = *(v18 - 5);
        *((_DWORD *)v16 + 42) = *((_DWORD *)v18 - 8);
        v16 += 192;
        --v17;
      }
      while ( v17 );
    }
    ((void (__fastcall *)(__int64))qword_1C0212140)(v14);
    Win32FreePool(v14);
  }
  else
  {
    v15 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v15 + 24) = v12;
    WdLogEvent5_WdLowResource(v15);
    DrvDxgkLogCodePointPacket(3LL, a3, a4, a6);
  }
}
