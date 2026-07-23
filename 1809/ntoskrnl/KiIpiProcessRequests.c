/*
 * XREFs of KiIpiProcessRequests @ 0x140103F70
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x1401C4020 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PerfInfoLogIpi @ 0x1403124D0 (PerfInfoLogIpi.c)
 */

__int64 KiIpiProcessRequests()
{
  unsigned __int8 v0; // si
  char v1; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  char *v4; // rbx
  char *v5; // rax
  char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  void **v11; // r12
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  void **v15; // r8
  unsigned __int64 v16; // r15
  _KPROCESS *v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rax
  _KPROCESS *v21; // rcx
  _KPROCESS *v22; // rcx
  __int64 v23; // rdx
  void *v24; // r15
  _KPROCESS *Process; // rcx
  unsigned __int64 v26; // rcx
  unsigned int v27; // [rsp+30h] [rbp-98h]
  __int64 v28; // [rsp+38h] [rbp-90h]
  void **v29; // [rsp+40h] [rbp-88h]
  __int128 v30; // [rsp+48h] [rbp-80h]
  __int128 v31; // [rsp+58h] [rbp-70h]
  __int128 v32; // [rsp+68h] [rbp-60h]
  _BYTE v33[32]; // [rsp+78h] [rbp-50h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v1 = 1;
    EtwGetKernelTraceTimestamp(v33, 1077936128LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( CurrentPrcb->Mailbox )
  {
    _R9D = 0;
    v4 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = v4;
        v6 = v4;
        v4 = *(char **)v4;
        v7 = *((_QWORD *)v6 + 1);
        v8 = KiProcessorBlock[(unsigned int)((v5 - (char *)CurrentPrcb - 32384) >> 6)];
        if ( (v7 & 0xF) == 1 )
        {
LABEL_6:
          v9 = __readcr3();
          __writecr3(v9);
        }
        else
        {
          switch ( v7 & 0xF )
          {
            case 2LL:
              v23 = v7 >> 16;
              v24 = *(void **)v23;
              if ( ((1 << *(_DWORD *)(v23 + 8)) & 0xA) == 0 )
                goto LABEL_38;
              if ( !KiFlushPcid )
                goto LABEL_38;
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy )
                goto LABEL_38;
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v32 = 1LL;
                *((_QWORD *)&v32 + 1) = *(_QWORD *)v23;
                __asm { invpcid r9d, [rsp+0C8h+var_60] }
                __invlpg(v24);
              }
              else
              {
                KiSetUserTbFlushPending(Process, v23, 0x140000000uLL, 0LL);
LABEL_38:
                __invlpg(v24);
              }
              break;
            case 3LL:
              if ( KiFlushPcid )
              {
                v20 = __readcr3();
                __writecr3(v20);
                v21 = KeGetCurrentThread()->ApcState.Process;
                if ( !v21->AddressPolicy )
                  KiSetUserTbFlushPending(v21, v7, 0x140000000uLL, 0LL);
              }
              else
              {
                v26 = __readcr4();
                if ( (v26 & 0x20080) == 0 )
                  goto LABEL_6;
                __writecr4(v26 ^ 0x80);
                __writecr4(v26);
              }
              break;
            case 4LL:
              v11 = *(void ***)(v7 >> 16);
              v12 = *(_DWORD *)((v7 >> 16) + 0xC);
              v13 = BYTE1(v7);
              v14 = (1 << v12) & 0xA;
              v27 = (1 << v12) & 0xA;
              v15 = &v11[v13];
              v29 = v15;
              do
              {
                v16 = (unsigned __int64)*v11;
                if ( (_DWORD)v14 )
                {
                  if ( KiFlushPcid )
                  {
                    v17 = KeGetCurrentThread()->ApcState.Process;
                    if ( !v17->AddressPolicy )
                    {
                      if ( (KiFlushPcid & 2) != 0 )
                      {
                        *(_QWORD *)&v30 = 1LL;
                        *((_QWORD *)&v30 + 1) = *v11;
                        __asm { invpcid r9d, [rsp+0C8h+var_80] }
                      }
                      else
                      {
                        KiSetUserTbFlushPending(v17, v14, v15, 0LL);
                        v14 = v27;
                        _R9D = 0;
                        v15 = v29;
                      }
                    }
                  }
                }
                __invlpg((void *)v16);
                v18 = 4096LL << (9 * ((unsigned __int8)(v16 >> 10) & 3u));
                v28 = v18;
                v19 = v16 & 0x3FF;
                if ( (v16 & 0x3FF) != 0 )
                {
                  do
                  {
                    v16 += v18;
                    if ( (_DWORD)v14 && KiFlushPcid )
                    {
                      v22 = KeGetCurrentThread()->ApcState.Process;
                      if ( !v22->AddressPolicy )
                      {
                        if ( (KiFlushPcid & 2) != 0 )
                        {
                          *(_QWORD *)&v31 = 1LL;
                          *((_QWORD *)&v31 + 1) = v16;
                          __asm { invpcid r9d, [rsp+0C8h+var_70] }
                        }
                        else
                        {
                          KiSetUserTbFlushPending(v22, v14, v15, 0LL);
                          v14 = v27;
                          _R9D = 0;
                        }
                      }
                      v18 = v28;
                    }
                    __invlpg((void *)v16);
                    --v19;
                  }
                  while ( v19 );
                  v15 = v29;
                }
                ++v11;
              }
              while ( v11 < v15 );
              break;
            case 5LL:
              (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v6 + 5))(
                v8,
                *((_QWORD *)v6 + 2),
                *((_QWORD *)v6 + 3),
                *((_QWORD *)v6 + 4));
              break;
            case 6LL:
              __wbinvd();
              break;
            case 7LL:
              break;
            default:
              __fastfail(0x25u);
          }
        }
        if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v6 + 6), 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 11652), 0xFFFFFFFF) == 1 )
        {
          *(_DWORD *)(v8 + 11648) = 0;
        }
        v0 = 1;
        _R9D = 0;
        if ( !v4 )
        {
          v4 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
          if ( !v4 )
            break;
        }
      }
    }
  }
  if ( v1 )
    PerfInfoLogIpi(v33);
  return v0;
}
