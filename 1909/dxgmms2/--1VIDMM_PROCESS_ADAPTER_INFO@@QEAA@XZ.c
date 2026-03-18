/*
 * XREFs of ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C005C454
 * Callers:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C00013F0 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C005C568 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::~VIDMM_PROCESS_ADAPTER_INFO(VIDMM_PROCESS_ADAPTER_INFO *this, __int64 a2)
{
  void *v3; // rcx
  unsigned int i; // r14d
  __int64 v5; // r15
  __int64 *v6; // rbp
  __int64 *v7; // rsi
  char *v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax

  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
    operator delete(v3);
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 88) )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6992LL); ++i )
      {
        v5 = 2LL;
        v6 = (__int64 *)(*((_QWORD *)this + 6) + 296LL * i);
        v7 = v6 + 25;
        do
        {
          if ( *(v7 - 8) || *(v7 - 16) || *v7 )
          {
            v9 = *v7;
            v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
            v10[7] = 0LL;
            v10[3] = 270LL;
            v10[4] = 51LL;
            v10[5] = this;
            v10[6] = v9;
            WdLogEvent5_WdCriticalError(v10);
          }
          ++v7;
          --v5;
        }
        while ( v5 );
        if ( VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v6) )
        {
          v11 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v6);
          v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12);
          v14[7] = 0LL;
          v14[3] = 270LL;
          v14[4] = 51LL;
          v14[5] = this;
          v14[6] = v11;
          WdLogEvent5_WdCriticalError(v14);
        }
        if ( v6[27] )
        {
          v15 = v6[27];
          v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, a2);
          v16[7] = 0LL;
          v16[3] = 270LL;
          v16[4] = 51LL;
          v16[5] = this;
          v16[6] = v15;
          WdLogEvent5_WdCriticalError(v16);
        }
      }
    }
  }
  v8 = (char *)*((_QWORD *)this + 6);
  if ( v8 != (char *)this + 56 && v8 )
    ExFreePoolWithTag(v8, 0);
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 88) = 0;
}
