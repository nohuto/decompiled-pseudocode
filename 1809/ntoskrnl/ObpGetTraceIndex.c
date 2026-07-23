/*
 * XREFs of ObpGetTraceIndex @ 0x140864228
 * Callers:
 *     ObpPushRefDerefInfo @ 0x140864614 (ObpPushRefDerefInfo.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpGetTraceIndex(unsigned __int16 *Source2)
{
  unsigned int v1; // ebp
  unsigned __int16 *v3; // r8
  __int64 v4; // rcx
  int v5; // edx
  int v6; // eax
  _QWORD *v7; // r14
  unsigned __int16 v8; // bp
  unsigned int v9; // esi
  unsigned int v10; // ebx
  unsigned __int16 *v11; // r8
  PVOID PoolWithTag; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx

  v1 = 0;
  v3 = Source2;
  v4 = 32LL;
  do
  {
    v5 = v3[1];
    v6 = *v3;
    v3 += 2;
    v1 += v6 ^ v5;
    --v4;
  }
  while ( v4 );
  v7 = ObpStackTable;
  v8 = v1 % 0x3FFD;
  LOWORD(v9) = v8;
  LOWORD(v10) = *((_WORD *)ObpStackTable + v8 + 68);
  while ( (_WORD)v10 != 0xFFFF )
  {
    if ( RtlCompareMemory(
           (const void *)(v7[((unsigned __int64)(unsigned __int16)v10 >> 10) + 1]
                        + ((unsigned __int64)(v10 & 0x3FF) << 7)),
           Source2,
           0x80uLL) == 128 )
      return (unsigned __int16)v10;
    v9 = ((unsigned int)(unsigned __int16)v9 + 1) % 0x3FFD;
    if ( (_WORD)v9 == v8 )
      return 16381LL;
    LOWORD(v10) = *((_WORD *)ObpStackTable + (unsigned __int16)v9 + 68);
  }
  v11 = (unsigned __int16 *)ObpStackTable;
  if ( *(_WORD *)ObpStackTable == *((_WORD *)ObpStackTable + 1) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x7452624Fu);
    if ( !PoolWithTag )
      return 16381LL;
    v11 = (unsigned __int16 *)ObpStackTable;
    *((_QWORD *)ObpStackTable + ((unsigned __int64)*((unsigned __int16 *)ObpStackTable + 1) >> 10) + 1) = PoolWithTag;
    v11[1] += 1024;
  }
  v10 = *v11;
  v14 = (unsigned __int64)(*v11 & 0x3FF) << 7;
  v11[(unsigned __int16)v9 + 68] = v10;
  v15 = *(_QWORD *)&v11[4 * ((unsigned __int64)v10 >> 10) + 4];
  *(_OWORD *)(v15 + v14) = *(_OWORD *)Source2;
  *(_OWORD *)(v15 + v14 + 16) = *((_OWORD *)Source2 + 1);
  *(_OWORD *)(v15 + v14 + 32) = *((_OWORD *)Source2 + 2);
  *(_OWORD *)(v15 + v14 + 48) = *((_OWORD *)Source2 + 3);
  *(_OWORD *)(v15 + v14 + 64) = *((_OWORD *)Source2 + 4);
  *(_OWORD *)(v15 + v14 + 80) = *((_OWORD *)Source2 + 5);
  *(_OWORD *)(v15 + v14 + 96) = *((_OWORD *)Source2 + 6);
  *(_OWORD *)(v15 + v14 + 112) = *((_OWORD *)Source2 + 7);
  ++*v11;
  return (unsigned __int16)v10;
}
