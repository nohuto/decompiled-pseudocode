/*
 * XREFs of RtlpHpSegMgrRelease @ 0x14015484C
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x14000AC04 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x1401547C4 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x14000A390 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrCommit @ 0x14000C244 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x14000D214 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1402FCFF0 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  _WORD *v7; // rbx
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+38h] BYREF
  _WORD *v14; // [rsp+98h] [rbp+48h] BYREF

  v12 = a2;
  v4 = a2;
  v5 = (unsigned int)-*(_DWORD *)a1;
  LOBYTE(v6) = *(_BYTE *)(a1 + 13) & 7;
  v13 = v5;
  if ( !(_BYTE)v6 )
  {
LABEL_2:
    if ( v4 )
    {
      v11 = *(_OWORD *)(a1 + 40);
      LOBYTE(v6) = RtlpHpFreeVA((unsigned __int64 *)&v12, &v13, 0x8000LL, &v11);
    }
    return v6;
  }
  if ( v5 >= 0x200000 )
    goto LABEL_9;
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, a2, 0, (unsigned int)v5 >> 12, -a3, 0x4000, 0);
  v6 = RtlpHpSegMgrVaCtxFree(a1, v4, &v13);
  v12 = v6;
  v4 = v6;
  if ( v6 )
  {
LABEL_9:
    v11 = *(_OWORD *)(a1 + 40);
    RtlpHpQueryVA(v4, &v11, &v14, 0LL);
    v7 = v14;
    v8 = 0;
    v6 = v13 >> 21;
    v9 = (unsigned __int64)&v14[v13 >> 21];
    if ( (unsigned __int64)v14 < v9 )
    {
      do
      {
        LOWORD(v6) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v6) = RtlpHpSegMgrCommit(a1, v12, v8, 512, -(v6 & 0x7FF), 0x4000, 0);
        ++v7;
        v8 += 512;
      }
      while ( (unsigned __int64)v7 < v9 );
    }
    v4 = v12;
    goto LABEL_2;
  }
  return v6;
}
