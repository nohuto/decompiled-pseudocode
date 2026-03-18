/*
 * XREFs of PopReadResumeContext @ 0x1408A835C
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopReadPagesFromHiberFile @ 0x1408A80FC (PopReadPagesFromHiberFile.c)
 */

__int64 __fastcall PopReadResumeContext(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // rdi
  int v5; // eax
  unsigned int *v6; // rsi
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // edx
  int PagesFromHiberFile; // eax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int *v15; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  v15 = 0LL;
  v5 = PopReadPagesFromHiberFile(0, 1u, &P);
  v6 = (unsigned int *)P;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = *(_DWORD *)P;
    if ( *(_DWORD *)P
      && v8 != 1380075848
      && v8 != 1381258066
      && v8 != 1162559831
      && v8 != 1347113538
      && v8 != 1297239880 )
    {
      goto LABEL_8;
    }
    v9 = *((_DWORD *)P + 216);
    if ( !v9 )
      goto LABEL_8;
    PagesFromHiberFile = PopReadPagesFromHiberFile(2u, v9, (PVOID *)&v15);
    v2 = v15;
    v7 = PagesFromHiberFile;
    if ( PagesFromHiberFile < 0 )
      goto LABEL_18;
    v11 = (unsigned __int64)v6[216] << 12;
    if ( !is_mul_ok(v6[216], 0x1000uLL) )
      goto LABEL_12;
    if ( *v15 != 1 )
      goto LABEL_8;
    v12 = v15[1];
    if ( v12 > v11 )
      goto LABEL_8;
    v13 = 48LL * v15[2];
    if ( v13 > 0xFFFFFFFF )
    {
LABEL_12:
      v7 = -1073741675;
      goto LABEL_18;
    }
    v7 = 0;
    if ( (unsigned int)v13 > (unsigned int)v12 )
    {
LABEL_8:
      v7 = -1073741271;
      goto LABEL_18;
    }
    memset((char *)v15 + v12, 0, v11 - v12);
    *a1 = v2[1];
    *a2 = v2;
  }
LABEL_18:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x206D654Du);
  if ( v7 < 0 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0x206D654Du);
    *a2 = 0LL;
    *a1 = 0;
  }
  return (unsigned int)v7;
}
