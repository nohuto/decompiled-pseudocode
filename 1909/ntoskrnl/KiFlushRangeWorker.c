/*
 * XREFs of KiFlushRangeWorker @ 0x140100700
 * Callers:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140099010 (KeFlushMultipleRangeTb.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401C5850 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeWorker(__int64 a1, __int64 a2, __int64 a3)
{
  void **v3; // rsi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  int v8; // edi
  _KPROCESS *Process; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rbp
  _KPROCESS *v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-58h]
  __int128 v16; // [rsp+30h] [rbp-48h]

  v3 = *(void ***)a1;
  _R13D = 0;
  v6 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
  {
    v7 = (unsigned __int64)*v3;
    v8 = (1 << *(_DWORD *)(a1 + 12)) & 0xA;
    if ( v8 )
    {
      if ( KiFlushPcid )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v15 = 1LL;
            *((_QWORD *)&v15 + 1) = *v3;
            __asm { invpcid r13d, [rsp+78h+var_58] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, a2, a3);
          }
        }
      }
    }
    __invlpg((void *)v7);
    LOBYTE(CurrentThread) = 8 * ((v7 >> 10) & 3);
    v11 = 4096LL << (9 * ((unsigned __int8)(v7 >> 10) & 3u));
    v12 = v7 & 0x3FF;
    if ( (v7 & 0x3FF) != 0 )
    {
      do
      {
        v7 += v11;
        if ( v8 )
        {
          if ( KiFlushPcid )
          {
            CurrentThread = KeGetCurrentThread();
            v13 = CurrentThread->ApcState.Process;
            if ( !v13->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v16 = 1LL;
                *((_QWORD *)&v16 + 1) = v7;
                __asm { invpcid r13d, [rsp+78h+var_48] }
              }
              else
              {
                LOBYTE(CurrentThread) = KiSetUserTbFlushPending(v13, a2, a3);
              }
            }
          }
        }
        __invlpg((void *)v7);
        --v12;
      }
      while ( v12 );
    }
    ++v3;
  }
  while ( (unsigned __int64)v3 < v6 );
  return (char)CurrentThread;
}
