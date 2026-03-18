/*
 * XREFs of WheaInitializeProcessor @ 0x1405AEEA8
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 * Callees:
 *     WheapCallErrorSourceInitialize @ 0x14018B9C0 (WheapCallErrorSourceInitialize.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheaInitializeProcessor(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdx
  __int64 i; // rbx

  result = 0LL;
  if ( a2 )
  {
    for ( i = qword_1404F27E8; (__int64 *)i != &qword_1404F27E8; i = *(_QWORD *)i )
    {
      result = WheapCallErrorSourceInitialize(i, a2);
      if ( (int)result < 0 )
        break;
      *(_DWORD *)(i + 108) = 2;
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x61656857u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[1] = &WheapErrorSourceTable;
      *(_DWORD *)PoolWithTag = dword_1404F27DC;
      PoolWithTag[2] = &WheapWorkQueue;
      result = 0LL;
      *(_QWORD *)(a1 + 24608) = v6;
    }
    else
    {
      LODWORD(WheapStatus) = WheapStatus + 1;
      result = 3221225626LL;
      HIDWORD(WheapStatus) |= 0x10u;
    }
  }
  return result;
}
