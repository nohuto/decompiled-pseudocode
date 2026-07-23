/*
 * XREFs of MiIterateOverPartitions @ 0x1401529C0
 * Callers:
 *     MiLockAllMemoryLists @ 0x140152930 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x140152968 (MiUnlockAllMemoryLists.c)
 *     MiResumeFromHibernate @ 0x1401529A0 (MiResumeFromHibernate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiIterateOverPartitions(void (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  unsigned int v6; // edx
  int v7; // r10d
  char *v8; // r11
  unsigned int v9; // esi
  unsigned int v10; // ecx
  char *v11; // rdx
  __int64 i; // r8
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  __int64 result; // rax
  __int64 v16; // rcx
  unsigned int SizeOfBitMap; // edx

  v2 = 0;
  while ( 1 )
  {
    v5 = v2 < qword_14043B7E8->SizeOfBitMap ? v2 : 0;
    v6 = qword_14043B7E8->SizeOfBitMap - 1;
    v7 = ((__int64)qword_14043B7E8->Buffer & 4) != 0LL ? 0x20 : 0;
    v8 = (char *)qword_14043B7E8->Buffer - (((__int64)qword_14043B7E8->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v9 = v7 + v6;
      v10 = v7 + v5;
      if ( v6 - v5 == -1 )
        goto LABEL_17;
      v11 = &v8[8 * ((unsigned __int64)v10 >> 6)];
      for ( i = ~*(_QWORD *)v11 | ((1LL << (v10 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v11 )
      {
        v11 += 8;
        if ( v11 > &v8[8 * ((unsigned __int64)v9 >> 6)] )
          goto LABEL_17;
      }
      _BitScanForward64(&v13, ~i);
      v14 = v13 + ((unsigned int)((v11 - v8) >> 3) << 6);
      if ( v14 > v9 )
      {
LABEL_17:
        v14 = -1;
      }
      else if ( v14 != -1 )
      {
        break;
      }
      if ( !v5 )
        break;
      SizeOfBitMap = v2 + 1;
      if ( v2 + 1 > qword_14043B7E8->SizeOfBitMap )
        SizeOfBitMap = qword_14043B7E8->SizeOfBitMap;
      v6 = SizeOfBitMap - 1;
      v5 = 0;
    }
    result = v14 - v7;
    if ( v14 == -1 )
      result = 0xFFFFFFFFLL;
    if ( (unsigned int)result < v2 || (_DWORD)result == -1 )
      return result;
    v2 = result + 1;
    v16 = *(_QWORD *)(qword_14043B808 + 8LL * (unsigned int)result);
    if ( (*(_DWORD *)(v16 + 4) & 2) != 0 )
      a1(v16, a2);
  }
}
