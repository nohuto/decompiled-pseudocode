/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x140021BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeHandleCommit @ 0x140021E00 (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpHpSegMgrCommit @ 0x140022010 (RtlpHpSegMgrCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  int v5; // edi
  __int64 v6; // r9
  __int64 v7; // rax
  char v8; // cl
  unsigned __int64 v9; // rbx
  char v10; // al
  char v11; // dl
  __int64 v12; // r10
  unsigned int v13; // r8d
  __int64 v14; // r12
  int v15; // r13d
  unsigned int v16; // edi
  int v17; // edx
  int v18; // r12d
  unsigned int v19; // r15d
  unsigned int v20; // r14d
  int v21; // eax
  unsigned __int64 v22; // rbp
  int v23; // eax
  __int64 result; // rax
  unsigned int v25; // [rsp+80h] [rbp+8h] BYREF
  int v26; // [rsp+88h] [rbp+10h]
  unsigned int v27; // [rsp+90h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a1;
  v5 = a2;
  v6 = a2 & *(_QWORD *)a1;
  v7 = a1 ^ v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 0x10);
  v8 = *(_BYTE *)(a1 + 8);
  if ( v7 != 0xA2E64EADA2E64EADuLL )
    goto LABEL_10;
  v9 = 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> v8) + v6;
  if ( !v9 )
    goto LABEL_10;
  v10 = *(_BYTE *)(v9 + 24);
  if ( (v10 & 1) == 0 )
    goto LABEL_10;
  if ( (v10 & 2) != 0 )
  {
    if ( (v10 & 0xCu) >= 8 || (((1 << v8) - 1) & a2) == 0 )
      goto LABEL_11;
LABEL_10:
    v9 = 0LL;
    goto LABEL_11;
  }
  v9 -= 32LL * *(unsigned __int8 *)(v9 + 31);
  v11 = *(_BYTE *)(v9 + 24);
  if ( (v11 & 3) != 3 || (v11 & 0xCu) < 8 )
    goto LABEL_10;
LABEL_11:
  v12 = v9 & v3;
  v13 = a3 >> 12;
  v14 = (__int64)(v9 - v12) >> 5;
  v15 = 511;
  v16 = (v5 - (unsigned int)(v14 << v8) - (unsigned int)v12) >> 12;
  if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    v15 = 0x7FFF;
  v17 = 0;
  v18 = (_DWORD)v14 << *(_BYTE *)(a1 + 9);
  v19 = v16 + v13;
  if ( !v13 )
    v17 = 2;
  v26 = v17;
  if ( !v13 )
    v19 = v16;
  if ( v16 < v19 )
  {
    while ( 1 )
    {
      v25 = v16;
      v20 = v15 - (v15 & (v16 + v18)) + 1;
      if ( v20 >= v19 - v16 )
        v20 = v19 - v16;
      v27 = v20;
      v21 = RtlpHpSegPageRangeHandleCommit(a1, v9, (unsigned int)&v25, (unsigned int)&v27, v17);
      v22 = v21;
      if ( v21 )
      {
        v23 = 4096;
        if ( (int)v22 <= 0 )
          v23 = 0x4000;
        result = RtlpHpSegMgrCommit(a1, v22, v23, 0);
        if ( (int)result < 0 )
          return result;
        if ( (int)v22 > 0 )
          RtlpHpSegPageRangeHandleCommit(a1, v9, (unsigned int)&v25, (unsigned int)&v27, 1);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v22);
        *(_WORD *)(v9 + 28) = ~(v22 + ~*(_WORD *)(v9 + 28));
      }
      v16 += v20;
      if ( v16 >= v19 )
        return 0LL;
      v17 = v26;
    }
  }
  return 0LL;
}
