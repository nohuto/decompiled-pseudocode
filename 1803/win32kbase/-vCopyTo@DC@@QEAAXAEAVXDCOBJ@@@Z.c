/*
 * XREFs of ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00274B0
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002FE90 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0027610 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

void __fastcall DC::vCopyTo(DC *this, DC **a2)
{
  DC *v2; // rax
  DC *v5; // rdx
  __int64 v6; // rcx
  _OWORD *v7; // rcx
  __int64 v8; // rsi
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm1
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  DC *v15; // rcx
  void *v16; // rcx

  v2 = *a2;
  v5 = v2;
  v6 = *((_QWORD *)v2 + 38);
  if ( v6 && (DC *)v6 != (DC *)((char *)v2 + 272) )
  {
    Win32FreePool(v6);
    v5 = *a2;
  }
  v7 = (_OWORD *)*((_QWORD *)v5 + 10);
  v8 = 3LL;
  v9 = (_OWORD *)*((_QWORD *)this + 10);
  v10 = 3LL;
  do
  {
    *v7 = *v9;
    v7[1] = v9[1];
    v7[2] = v9[2];
    v7[3] = v9[3];
    v7[4] = v9[4];
    v7[5] = v9[5];
    v7[6] = v9[6];
    v7 += 8;
    v11 = v9[7];
    v9 += 8;
    *(v7 - 1) = v11;
    --v10;
  }
  while ( v10 );
  *v7 = *v9;
  v7[1] = v9[1];
  DC::hpath(*a2, *((struct HPATH__ **)this + 26));
  v12 = (_OWORD *)((char *)this + 88);
  v13 = (_OWORD *)((char *)*a2 + 88);
  do
  {
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v13[3] = v12[3];
    v13[4] = v12[4];
    v13[5] = v12[5];
    v13[6] = v12[6];
    v13 += 8;
    v14 = v12[7];
    v12 += 8;
    *(v13 - 1) = v14;
    --v8;
  }
  while ( v8 );
  *v13 = *v12;
  v13[1] = v12[1];
  v13[2] = v12[2];
  v13[3] = v12[3];
  v13[4] = v12[4];
  v15 = (DC *)*((_QWORD *)this + 38);
  if ( v15 == (DC *)((char *)this + 272) )
  {
    *((_QWORD *)*a2 + 38) = (char *)*a2 + 272;
  }
  else if ( v15 )
  {
    *((_QWORD *)*a2 + 38) = PALLOCMEM2((unsigned int)(8 * *((_DWORD *)this + 78)), 0x64646147u, 1);
    v16 = (void *)*((_QWORD *)*a2 + 38);
    if ( v16 )
      memmove(v16, *((const void **)this + 38), 8LL * *((unsigned int *)this + 78));
    else
      *((_DWORD *)*a2 + 78) = 0;
  }
}
