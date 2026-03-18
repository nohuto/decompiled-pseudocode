/*
 * XREFs of KiIpiProcessRequests @ 0x1401002D0
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x1401CB2C0 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401C5850 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PerfInfoLogIpiReceive @ 0x14032FEB0 (PerfInfoLogIpiReceive.c)
 */

char KiIpiProcessRequests()
{
  struct _KPRCB *CurrentPrcb; // rdi
  char result; // al
  char *v3; // rbx
  signed __int64 v4; // rax
  char *v5; // r14
  __int64 v6; // r8
  __int64 v7; // r10
  char v8; // r13
  __int64 v9; // rdx
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  void **v13; // r15
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rdx
  void **v17; // r8
  unsigned __int64 v18; // rbp
  _KPROCESS *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  _KPROCESS *v22; // rcx
  unsigned __int64 v23; // rax
  _KPROCESS *v24; // rcx
  __int64 v25; // rdx
  void *v26; // rbp
  _KPROCESS *Process; // rcx
  unsigned __int64 v28; // rcx
  unsigned int v29; // [rsp+30h] [rbp-A8h]
  __int64 v30; // [rsp+38h] [rbp-A0h]
  __int64 v31; // [rsp+48h] [rbp-90h]
  void **v32; // [rsp+50h] [rbp-88h]
  __int128 v33; // [rsp+58h] [rbp-80h]
  __int128 v34; // [rsp+68h] [rbp-70h]
  __int128 v35; // [rsp+78h] [rbp-60h]
  _QWORD v36[4]; // [rsp+88h] [rbp-50h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  result = 0;
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( CurrentPrcb->Mailbox )
  {
    _R9D = 0;
    v3 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = v3 - (char *)CurrentPrcb;
        v5 = v3;
        v3 = *(char **)v3;
        v6 = 0LL;
        v7 = KiProcessorBlock[(unsigned int)((v4 - 36544) >> 6)];
        v30 = v7;
        memset(v36, 0, sizeof(v36));
        if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          v8 = 1;
          EtwGetKernelTraceTimestamp(v36, 1077936128LL);
          v7 = v30;
          v6 = 0LL;
          _R9D = 0;
        }
        else
        {
          v8 = 0;
        }
        v9 = *((_QWORD *)v5 + 1);
        v10 = v9 & 0xF;
        if ( v10 == 1 )
        {
LABEL_6:
          v11 = __readcr3();
          __writecr3(v11);
        }
        else
        {
          switch ( v9 & 0xF )
          {
            case 2LL:
              v25 = v9 >> 7;
              v26 = *(void **)v25;
              if ( ((1 << *(_DWORD *)(v25 + 8)) & 0xA) == 0 )
                goto LABEL_38;
              if ( !KiFlushPcid )
                goto LABEL_38;
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy )
                goto LABEL_38;
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v35 = 1LL;
                *((_QWORD *)&v35 + 1) = *(_QWORD *)v25;
                __asm { invpcid r9d, [rsp+0D8h+var_60] }
                __invlpg(v26);
              }
              else
              {
                KiSetUserTbFlushPending(Process, v25, 0LL);
                v7 = v30;
                v6 = 0LL;
                _R9D = 0;
LABEL_38:
                __invlpg(v26);
              }
              break;
            case 3LL:
              if ( KiFlushPcid )
              {
                v23 = __readcr3();
                __writecr3(v23);
                v24 = KeGetCurrentThread()->ApcState.Process;
                if ( !v24->AddressPolicy )
                {
                  KiSetUserTbFlushPending(v24, v9, 0LL);
                  v7 = v30;
                  v6 = 0LL;
                  _R9D = 0;
                }
              }
              else
              {
                v28 = __readcr4();
                if ( (v28 & 0x20080) == 0 )
                  goto LABEL_6;
                __writecr4(v28 ^ 0x80);
                __writecr4(v28);
              }
              break;
            case 4LL:
              v12 = v9 >> 7;
              v13 = *(void ***)v12;
              v14 = *(unsigned int *)(v12 + 8);
              v15 = *(_DWORD *)(v12 + 12);
              v16 = (1 << v15) & 0xA;
              v17 = &v13[v14];
              v29 = (1 << v15) & 0xA;
              v32 = v17;
              do
              {
                v18 = (unsigned __int64)*v13;
                if ( (_DWORD)v16 )
                {
                  if ( KiFlushPcid )
                  {
                    v19 = KeGetCurrentThread()->ApcState.Process;
                    if ( !v19->AddressPolicy )
                    {
                      if ( (KiFlushPcid & 2) != 0 )
                      {
                        *(_QWORD *)&v33 = 1LL;
                        *((_QWORD *)&v33 + 1) = *v13;
                        __asm { invpcid r9d, [rsp+0D8h+var_80] }
                      }
                      else
                      {
                        KiSetUserTbFlushPending(v19, v16, v17);
                        v16 = v29;
                        _R9D = 0;
                        v17 = v32;
                      }
                    }
                  }
                }
                __invlpg((void *)v18);
                v20 = 4096LL << (9 * ((unsigned __int8)(v18 >> 10) & 3u));
                v31 = v20;
                v21 = v18 & 0x3FF;
                if ( (v18 & 0x3FF) != 0 )
                {
                  do
                  {
                    v18 += v20;
                    if ( (_DWORD)v16 && KiFlushPcid )
                    {
                      v22 = KeGetCurrentThread()->ApcState.Process;
                      if ( !v22->AddressPolicy )
                      {
                        if ( (KiFlushPcid & 2) != 0 )
                        {
                          *(_QWORD *)&v34 = 1LL;
                          *((_QWORD *)&v34 + 1) = v18;
                          __asm { invpcid r9d, [rsp+0D8h+var_70] }
                        }
                        else
                        {
                          KiSetUserTbFlushPending(v22, v16, v17);
                          v16 = v29;
                          _R9D = 0;
                        }
                      }
                      v20 = v31;
                    }
                    __invlpg((void *)v18);
                    --v21;
                  }
                  while ( v21 );
                  v17 = v32;
                }
                ++v13;
              }
              while ( v13 < v17 );
              v7 = v30;
              v6 = 0LL;
              break;
            case 5LL:
              (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v5 + 5))(
                v7,
                *((_QWORD *)v5 + 2),
                *((_QWORD *)v5 + 3),
                *((_QWORD *)v5 + 4));
              v6 = *((_QWORD *)v5 + 5);
              v7 = v30;
              _R9D = 0;
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
        if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v5 + 6), 0xFFFFFFFF) == 1
          && !_InterlockedDecrement((volatile signed __int32 *)(v7 + 11652)) )
        {
          *(_DWORD *)(v7 + 11648) = 0;
        }
        if ( v8 )
        {
          PerfInfoLogIpiReceive(v36, v10, v6);
          _R9D = 0;
        }
        result = 1;
        if ( !v3 )
        {
          v3 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
          if ( !v3 )
            break;
        }
      }
    }
  }
  return result;
}
