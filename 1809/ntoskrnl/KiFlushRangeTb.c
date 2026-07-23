/*
 * XREFs of KiFlushRangeTb @ 0x140173E64
 * Callers:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140075BA0 (KeFlushMultipleRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173D9C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeTb(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp
  bool v9; // zf
  unsigned __int64 i; // rsi
  _KPROCESS *Process; // rcx
  _KPROCESS *v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-48h]
  __int128 v15; // [rsp+30h] [rbp-38h]

  _R14D = 0;
  v6 = (1 << a2) & 0xA;
  if ( v6 )
  {
    if ( KiFlushPcid )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process->AddressPolicy )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v14 = 1LL;
          *((_QWORD *)&v14 + 1) = a1;
          __asm { invpcid r14d, [rsp+68h+var_48] }
        }
        else
        {
          KiSetUserTbFlushPending(Process, a2, a3, a4);
        }
      }
    }
  }
  LOBYTE(CurrentThread) = 8 * ((a1 >> 10) & 3);
  v8 = 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
  v9 = (a1 & 0x3FF) == 0;
  for ( i = a1 & 0x3FF; ; v9 = i == 0 )
  {
    __invlpg((void *)a1);
    if ( v9 )
      break;
    a1 += v8;
    if ( v6 )
    {
      if ( KiFlushPcid )
      {
        CurrentThread = KeGetCurrentThread();
        v12 = CurrentThread->ApcState.Process;
        if ( !v12->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v15 = 1LL;
            *((_QWORD *)&v15 + 1) = a1;
            __asm { invpcid r14d, [rsp+68h+var_38] }
          }
          else
          {
            LOBYTE(CurrentThread) = KiSetUserTbFlushPending(v12, a2, a3, a4);
          }
        }
      }
    }
    --i;
  }
  return (char)CurrentThread;
}
