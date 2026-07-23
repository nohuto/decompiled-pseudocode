/*
 * XREFs of RtlpHpSegMgrAllocate @ 0x18004E8C8
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x18004E58C (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x180047844 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x18004E96C (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrRelease @ 0x180050284 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x18010B890 (RtlpHpSegMgrVaCtxInsert.c)
 */

__int64 __fastcall RtlpHpSegMgrAllocate(__int64 a1, int a2, int a3)
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
    if ( (int)RtlpHpSegMgrCommit(a1, v12, 0, v6, v10, 1073745920, a3) < 0 )
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
