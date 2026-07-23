/*
 * XREFs of ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18006B674
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18006B220 (LdrShutdownProcess.c)
 *     RtlProcessFlsData @ 0x18006B660 (RtlProcessFlsData.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x18009C268 (-Cleanup@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpFlsDataCleanup(struct _RTLP_FLS_CONTEXT *a1, struct _RTLP_FLS_DATA *a2, char a3)
{
  unsigned int v5; // esi
  __int64 v6; // r15
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rcx
  _RTL_SRWLOCK *v14; // rdi
  void (*Value)(void); // rax
  __int64 v16; // rdx
  struct _RTLP_FLS_DATA **v17; // rax

  if ( (a3 & 1) != 0 )
  {
    if ( (_DWORD)qword_180166188 )
    {
      v5 = 17;
      v6 = (unsigned int)qword_180166188;
      do
      {
        _BitScanReverse(&v7, v5);
        v8 = v5 ^ (1 << v7);
        v9 = *((_QWORD *)a2 + v7 - 2);
        if ( v9 )
        {
          v10 = (_QWORD *)(v9 + 8 * (v8 + 1LL));
          if ( v10 )
          {
            if ( *v10 )
            {
              _BitScanReverse(&v11, v5);
              v12 = v5 ^ (1 << v11);
              v13 = *((_QWORD *)&RtlpFlsContext + v11 - 3);
              if ( v13 )
                v14 = (_RTL_SRWLOCK *)(16LL * v12 + v13 + 8);
              else
                v14 = 0LL;
              RtlAcquireSRWLockShared(v14);
              Value = (void (*)(void))v14[1].Value;
              if ( (unsigned __int64)Value - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v10 )
              {
                Value();
                *v10 = 0LL;
              }
              RtlReleaseSRWLockShared(v14);
            }
          }
        }
        ++v5;
        --v6;
      }
      while ( v6 );
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v16 = *(_QWORD *)a2;
    if ( *(struct _RTLP_FLS_DATA **)(*(_QWORD *)a2 + 8LL) != a2
      || (v17 = (struct _RTLP_FLS_DATA **)*((_QWORD *)a2 + 1), *v17 != a2) )
    {
      __fastfail(3u);
    }
    *v17 = (struct _RTLP_FLS_DATA *)v16;
    *(_QWORD *)(v16 + 8) = v17;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
  if ( (a3 & 2) != 0 )
  {
    RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::Cleanup((char *)a2 + 16);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}
