/*
 * XREFs of HvHiveStartFileBacked @ 0x1405A5A3C
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     HvpFillFileName @ 0x1405A5BD4 (HvpFillFileName.c)
 *     CmpTraceHiveMountStop @ 0x1405A5C40 (CmpTraceHiveMountStop.c)
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 *     CmpTraceHiveMountStart @ 0x1405A751C (CmpTraceHiveMountStart.c)
 *     HvMarkBaseBlockDirty @ 0x1406CC1D4 (HvMarkBaseBlockDirty.c)
 */

__int64 __fastcall HvHiveStartFileBacked(
        ULONG_PTR a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        int a6,
        int a7,
        __int64 a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        _DWORD *a12,
        __int64 a13)
{
  unsigned int v14; // ebp
  int v15; // eax
  __int64 v16; // rbx
  __int64 Hive; // rbx
  __int64 v18; // rcx
  char *v20; // rax
  char *v21; // rsi
  int v22; // ebp
  int v23; // eax

  if ( *(_DWORD *)a1 != -1092567328 || (a3 & 0xFF617CEC) != 0 || a4 > 2 || (unsigned int)(a6 - 1) > 7 )
    __fastfail(5u);
  v14 = a3 & 0xFFFDFFFF;
  if ( !(_BYTE)a2 )
    v14 = a3;
  *(_DWORD *)(a1 + 160) = v14;
  if ( a5 )
  {
    *(_QWORD *)(a1 + 24) = *a5;
    *(_QWORD *)(a1 + 32) = a5[1];
    *(_QWORD *)(a1 + 40) = a5[3];
    *(_QWORD *)(a1 + 48) = a5[4];
  }
  if ( a4 )
  {
    v15 = 4;
    if ( a4 == 1 )
      v15 = 1;
    *(_DWORD *)(a1 + 164) = v15;
  }
  else
  {
    *(_DWORD *)(a1 + 164) = 0;
  }
  *(_DWORD *)(a1 + 132) = 4096;
  *(_QWORD *)(a1 + 8) = HvpGetCellPaged;
  *(_DWORD *)(a1 + 136) = a6;
  *(_QWORD *)(a1 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(a1 + 208) = 2;
  v16 = MEMORY[0xFFFFF78000000014];
  if ( (_BYTE)a2 )
  {
    LOBYTE(a2) = 1;
    v20 = (char *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(
                    *(unsigned int *)(a1 + 132),
                    a2,
                    825314627LL);
    v21 = v20;
    if ( !v20 )
    {
      LODWORD(Hive) = -1073741670;
      SetFailureLocation(a13, 0, 24, -1073741670, 16);
      return (unsigned int)Hive;
    }
    memset(v20, 0, *(unsigned int *)(a1 + 132));
    *((_DWORD *)v21 + 7) = 0;
    *((_DWORD *)v21 + 9) = -1;
    *((_DWORD *)v21 + 10) = 0;
    *(_DWORD *)v21 = 1718052210;
    *((_DWORD *)v21 + 1) = 1;
    *((_DWORD *)v21 + 2) = 1;
    *((_DWORD *)v21 + 8) = 1;
    *((_DWORD *)v21 + 11) = 1;
    HvpFillFileName(v21, a8);
    *((_DWORD *)v21 + 36) = 0;
    v22 = v14 & 0x80000;
    if ( v22 )
      *((_DWORD *)v21 + 36) = 2;
    *((_DWORD *)v21 + 5) = 1;
    v23 = v22 != 0 ? 6 : 3;
    *((_DWORD *)v21 + 6) = v23;
    *(_DWORD *)(a1 + 212) = v23;
    *((_DWORD *)v21 + 41) = 1836346738;
    *(_QWORD *)(v21 + 12) = v16;
    if ( a9 )
    {
      *((_OWORD *)v21 + 7) = *a9;
      *((_OWORD *)v21 + 8) = *a9;
    }
    if ( a10 )
      *(_OWORD *)(v21 + 148) = *a10;
    *((_DWORD *)v21 + 127) = HvpHeaderCheckSum(v21);
    *(_QWORD *)(a1 + 64) = v21;
    *(_DWORD *)(a1 + 180) = 1;
    *(_DWORD *)(a1 + 168) = 1;
    *(_DWORD *)(a1 + 172) = 1;
    *(_BYTE *)(a1 + 190) = 1;
    if ( a12 )
      *a12 = 825314627;
  }
  else
  {
    CmpTraceHiveMountStart();
    Hive = (unsigned int)HvLoadHive(a1);
    CmpTraceHiveMountStop(Hive);
    if ( (int)Hive < 0 )
    {
      SetFailureLocation(a13, 0, 24, Hive, 64);
      return (unsigned int)Hive;
    }
    if ( (_DWORD)Hive == 1073741833 && a11 )
      *a11 = 1;
    if ( a12 )
      *a12 = 825445699;
    v18 = *(_QWORD *)(a1 + 64);
    if ( (*(_DWORD *)(v18 + 144) & 1) != 0 )
    {
      HvMarkBaseBlockDirty(a1);
      if ( a11 )
        *a11 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) &= ~1u;
      v18 = *(_QWORD *)(a1 + 64);
    }
    HvpFillFileName(v18, a8);
  }
  LODWORD(Hive) = 0;
  return (unsigned int)Hive;
}
