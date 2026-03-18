/*
 * XREFs of RtlpHpSegMgrAllocate @ 0x14010F674
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x14010E6BC (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x140022010 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14010D410 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrReserve @ 0x14010F724 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrRelease @ 0x1401664A8 (RtlpHpSegMgrRelease.c)
 */

__int64 __fastcall RtlpHpSegMgrAllocate(__int64 a1, int a2, unsigned int a3)
{
  int v6; // r9d
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v10; // [rsp+20h] [rbp-38h]
  unsigned int v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( (int)RtlpHpSegMgrReserve(a1, a3, (unsigned int)&v12, (unsigned int)&v11, (__int64)&v13) < 0 )
  {
    v7 = v12;
    v8 = 0LL;
  }
  else
  {
    v6 = a2;
    v10 = a2;
    v7 = v12;
    if ( (int)RtlpHpSegMgrCommit(a1, v12, 0, v6, v10, 0x40001000u, a3) < 0 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v11 < v13 )
        RtlpHpSegMgrVaCtxInsert(a1, v7);
      v8 = v7;
      v7 = 0LL;
    }
  }
  if ( v7 )
    RtlpHpSegMgrRelease(a1);
  return v8;
}
