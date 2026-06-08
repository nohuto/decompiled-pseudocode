/*
 * XREFs of UpdateKernelIdleDomains @ 0x1C0032E1C
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C0023B34 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0023FAC (DeregisterKernelIdleDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UpdateKernelIdleDomains(__int64 a1)
{
  __int64 v2; // rbp
  char *PoolWithTag; // rax
  char *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rsi
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // eax

  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 680) + 56LL);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(168 * v2 + 176), 0x72637250u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = 60;
    *((_DWORD *)PoolWithTag + 1) = v2;
    KeInitializeAffinityEx(PoolWithTag + 8);
    KeAddProcessorAffinityEx(v4 + 8, *(unsigned int *)(a1 + 56));
    if ( (_DWORD)v2 )
    {
      v6 = 0LL;
      v7 = v4 + 176;
      do
      {
        KeInitializeAffinityEx(v7);
        v8 = *(_QWORD *)(v6 + *(_QWORD *)(a1 + 680) + 136);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 8);
          if ( v9 )
          {
            if ( *(_DWORD *)(v9 + 32) >= *(_DWORD *)(v9 + 44) )
              KeCopyAffinityEx(v7, v9 + 48);
          }
        }
        v7 += 168;
        v6 += 88LL;
        --v2;
      }
      while ( v2 );
    }
    v10 = ((__int64 (__fastcall *)(char *))qword_1C001A5C0)(v4);
    v5 = v10;
    if ( v10 < 0 )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Du,
        (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids,
        v10);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
