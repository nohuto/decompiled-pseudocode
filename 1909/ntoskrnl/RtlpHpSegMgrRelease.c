/*
 * XREFs of RtlpHpSegMgrRelease @ 0x1401664A8
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x14010F674 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x140166420 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x140022010 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x14010DAD4 (RtlpHpFreeVA.c)
 *     RtlpHpQueryVA @ 0x14010FFC8 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14031B2A0 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  _WORD *v7; // r14
  unsigned __int64 v8; // r15
  unsigned int v9; // edi
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v12; // [rsp+90h] [rbp+40h] BYREF
  __int64 v13; // [rsp+98h] [rbp+48h] BYREF
  _WORD *v14; // [rsp+A8h] [rbp+58h] BYREF

  v3 = a2;
  LODWORD(v6) = ~*(_DWORD *)a1;
  v13 = a2;
  v5 = (unsigned int)(v6 + 1);
  LOBYTE(v6) = *(_BYTE *)(a1 + 13) & 7;
  v12 = v5;
  if ( !(_BYTE)v6 )
  {
LABEL_2:
    if ( v3 )
    {
      v11 = *(_OWORD *)(a1 + 40);
      LOBYTE(v6) = RtlpHpFreeVA((unsigned __int64 *)&v13, &v12, 0x8000LL, &v11);
    }
    return v6;
  }
  if ( v5 >= 0x200000 )
  {
LABEL_10:
    v11 = *(_OWORD *)(a1 + 40);
    LOBYTE(v6) = RtlpHpQueryVA(v3, &v11, &v14, 0LL);
    v7 = v14;
    v8 = (unsigned __int64)&v14[v5 >> 21];
    v9 = 0;
    if ( (unsigned __int64)v14 < v8 )
    {
      do
      {
        LOWORD(v6) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v6) = RtlpHpSegMgrCommit(a1, v3, v9, 512, -(v6 & 0x7FF), 0x4000u, 0);
        ++v7;
        v9 += 512;
      }
      while ( (unsigned __int64)v7 < v8 );
    }
    goto LABEL_2;
  }
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, a2, 0, (unsigned int)v5 >> 12, -a3, 0x4000u, 0);
  v6 = RtlpHpSegMgrVaCtxFree(a1, v3, &v12);
  v13 = v6;
  v3 = v6;
  if ( v6 )
  {
    v5 = v12;
    goto LABEL_10;
  }
  return v6;
}
