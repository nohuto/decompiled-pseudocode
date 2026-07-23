/*
 * XREFs of KiFlushRangeWorker @ 0x140109B40
 * Callers:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140075BA0 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v4; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rsi
  int v9; // edi
  _KPROCESS *Process; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rbp
  _KPROCESS *v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-58h]
  __int128 v17; // [rsp+30h] [rbp-48h]

  v4 = *(void ***)a1;
  _R13D = 0;
  v7 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
  {
    v8 = (unsigned __int64)*v4;
    v9 = (1 << *(_DWORD *)(a1 + 12)) & 0xA;
    if ( v9 )
    {
      if ( KiFlushPcid )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v16 = 1LL;
            *((_QWORD *)&v16 + 1) = *v4;
            __asm { invpcid r13d, [rsp+78h+var_58] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, a2, a3, a4);
          }
        }
      }
    }
    __invlpg((void *)v8);
    LOBYTE(CurrentThread) = 8 * ((v8 >> 10) & 3);
    v12 = 4096LL << (9 * ((unsigned __int8)(v8 >> 10) & 3u));
    v13 = v8 & 0x3FF;
    if ( (v8 & 0x3FF) != 0 )
    {
      do
      {
        v8 += v12;
        if ( v9 )
        {
          if ( KiFlushPcid )
          {
            CurrentThread = KeGetCurrentThread();
            v14 = CurrentThread->ApcState.Process;
            if ( !v14->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v17 = 1LL;
                *((_QWORD *)&v17 + 1) = v8;
                __asm { invpcid r13d, [rsp+78h+var_48] }
              }
              else
              {
                LOBYTE(CurrentThread) = KiSetUserTbFlushPending(v14, a2, a3, a4);
              }
            }
          }
        }
        __invlpg((void *)v8);
        --v13;
      }
      while ( v13 );
    }
    ++v4;
  }
  while ( (unsigned __int64)v4 < v7 );
  return (char)CurrentThread;
}
