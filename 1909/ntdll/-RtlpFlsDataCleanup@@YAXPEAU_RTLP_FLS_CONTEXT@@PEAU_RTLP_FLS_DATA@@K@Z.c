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

void __fastcall RtlpFlsDataCleanup(
        struct _RTLP_FLS_CONTEXT *a1,
        struct _RTLP_FLS_DATA *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char v4; // bp
  unsigned int v6; // esi
  __int64 v7; // r15
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rcx
  _QWORD *v11; // r14
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  void (*v16)(void); // rax
  __int64 v17; // rdx
  struct _RTLP_FLS_DATA **v18; // rax

  v4 = a3;
  if ( (a3 & 1) != 0 )
  {
    if ( (_DWORD)qword_180166188 )
    {
      v6 = 17;
      v7 = (unsigned int)qword_180166188;
      do
      {
        _BitScanReverse(&v8, v6);
        v9 = v6 ^ (1 << v8);
        v10 = *((_QWORD *)a2 + v8 - 2);
        if ( v10 )
        {
          v11 = (_QWORD *)(v10 + 8 * (v9 + 1LL));
          if ( v11 )
          {
            if ( *v11 )
            {
              _BitScanReverse(&v12, v6);
              v13 = v6 ^ (1 << v12);
              v14 = *((_QWORD *)&RtlpFlsContext + v12 - 3);
              if ( v14 )
                v15 = 16LL * (unsigned int)v13 + v14 + 8;
              else
                v15 = 0LL;
              RtlAcquireSRWLockShared((volatile signed __int64 *)v15, v13, a3, a4);
              v16 = *(void (**)(void))(v15 + 8);
              if ( (unsigned __int64)v16 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v11 )
              {
                v16();
                *v11 = 0LL;
              }
              RtlReleaseSRWLockShared((volatile signed __int64 *)v15);
            }
          }
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
    v17 = *(_QWORD *)a2;
    if ( *(struct _RTLP_FLS_DATA **)(*(_QWORD *)a2 + 8LL) != a2
      || (v18 = (struct _RTLP_FLS_DATA **)*((_QWORD *)a2 + 1), *v18 != a2) )
    {
      __fastfail(3u);
    }
    *v18 = (struct _RTLP_FLS_DATA *)v17;
    *(_QWORD *)(v17 + 8) = v18;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  }
  if ( (v4 & 2) != 0 )
  {
    RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::Cleanup((char *)a2 + 16);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a2);
  }
}
