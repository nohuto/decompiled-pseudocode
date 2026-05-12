/*
 * XREFs of PortTraceInitTracing @ 0x1C0053258
 * Callers:
 *     RaidHandleTraceNotifyType @ 0x1C0043320 (RaidHandleTraceNotifyType.c)
 * Callees:
 *     memset @ 0x1C0024DC0 (memset.c)
 *     PortTraceErrorRegisterDriver @ 0x1C0076F38 (PortTraceErrorRegisterDriver.c)
 */

void __fastcall PortTraceInitTracing(__int64 a1)
{
  _QWORD *v1; // rdi
  char *PoolWithTag; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  v1 = *(_QWORD **)a1;
  if ( **(_DWORD **)a1 == 56 )
  {
    v1[6] = 0LL;
    if ( v1[5] )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x63546C50u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag + 4, 0, 0x9CuLL);
        *(_DWORD *)v4 = 160;
        v5 = v1[5];
        v4[1] = v5;
        v4[2] = *(_QWORD *)(v5 + 104);
        *(_QWORD *)(v5 + 104) = v1[4];
        PortTraceErrorRegisterDriver(v4);
        v1[6] = v4;
        *(_DWORD *)(a1 + 8) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 8) = -1073741670;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741811;
  }
}
