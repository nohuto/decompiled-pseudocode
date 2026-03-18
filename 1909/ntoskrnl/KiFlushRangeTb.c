/*
 * XREFs of KiFlushRangeTb @ 0x14017AA48
 * Callers:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140099010 (KeFlushMultipleRangeTb.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A96C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401C5850 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeTb(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rbp
  bool v8; // zf
  unsigned __int64 i; // rsi
  _KPROCESS *Process; // rcx
  _KPROCESS *v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+30h] [rbp-38h]

  _R14D = 0;
  v5 = (1 << a2) & 0xA;
  if ( v5 )
  {
    if ( KiFlushPcid )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process->AddressPolicy )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v13 = 1LL;
          *((_QWORD *)&v13 + 1) = a1;
          __asm { invpcid r14d, [rsp+68h+var_48] }
        }
        else
        {
          KiSetUserTbFlushPending(Process, a2, a3);
        }
      }
    }
  }
  LOBYTE(CurrentThread) = 8 * ((a1 >> 10) & 3);
  v7 = 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
  v8 = (a1 & 0x3FF) == 0;
  for ( i = a1 & 0x3FF; ; v8 = i == 0 )
  {
    __invlpg((void *)a1);
    if ( v8 )
      break;
    a1 += v7;
    if ( v5 )
    {
      if ( KiFlushPcid )
      {
        CurrentThread = KeGetCurrentThread();
        v11 = CurrentThread->ApcState.Process;
        if ( !v11->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v14 = 1LL;
            *((_QWORD *)&v14 + 1) = a1;
            __asm { invpcid r14d, [rsp+68h+var_38] }
          }
          else
          {
            LOBYTE(CurrentThread) = KiSetUserTbFlushPending(v11, a2, a3);
          }
        }
      }
    }
    --i;
  }
  return (char)CurrentThread;
}
