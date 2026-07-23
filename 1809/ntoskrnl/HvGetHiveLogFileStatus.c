/*
 * XREFs of HvGetHiveLogFileStatus @ 0x1405A72C8
 * Callers:
 *     CmpGenerateFlushControlData @ 0x1405A6D78 (CmpGenerateFlushControlData.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14000F1D0 (RtlAreBitsClear.c)
 *     HvpCountSetRangesInVector @ 0x1405E08D4 (HvpCountSetRangesInVector.c)
 */

unsigned __int64 __fastcall HvGetHiveLogFileStatus(__int64 a1, unsigned int a2, int *a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  int v12; // ecx

  v4 = a2;
  v6 = (unsigned int)(*(_DWORD *)(a1 + 104) << 9)
     + 40LL
     + 8LL * (unsigned int)HvpCountSetRangesInVector((PRTL_BITMAP)(a1 + 88));
  if ( RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), 0, 8u) )
    v6 += 4104LL;
  v7 = *(unsigned int *)(a1 + 176);
  v8 = 0;
  *a3 = 0;
  v9 = v6 + v7;
  if ( *(_BYTE *)(a1 + 191) )
  {
    *a3 = 2;
    v8 = 2;
  }
  if ( v9 > 0x2000000 )
  {
    v8 |= 4u;
    *a3 = v8;
  }
  if ( *(_DWORD *)(a1 + 168) == -1 )
  {
    v8 |= 8u;
    *a3 = v8;
  }
  if ( v8 )
  {
    result = *(unsigned int *)(a1 + 4280);
    if ( (result & 2) != 0 )
    {
      v12 = v8 | 1;
      goto LABEL_14;
    }
  }
  v10 = *(unsigned int *)(a1 + 176);
  if ( v10 + v6 >= v4 )
  {
    v8 |= 0x10u;
    *a3 = v8;
    LODWORD(v10) = *(_DWORD *)(a1 + 176);
  }
  result = v6 + (unsigned int)v10;
  if ( result >= v4 )
  {
    v12 = v8 | 0x20;
LABEL_14:
    *a3 = v12;
  }
  return result;
}
