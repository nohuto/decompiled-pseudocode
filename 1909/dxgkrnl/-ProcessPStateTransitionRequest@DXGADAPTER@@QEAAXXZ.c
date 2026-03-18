/*
 * XREFs of ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C00343D8
 * Callers:
 *     ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C0201010 (-DxgkpProcessPowerPStateWork@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0pqqq @ 0x1C00358C0 (McTemplateK0pqqq.c)
 *     ?DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z @ 0x1C01FD2B8 (-DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z.c)
 */

void __fastcall DXGADAPTER::ProcessPStateTransitionRequest(DXGADAPTER *this, __int64 a2, const GUID *a3)
{
  unsigned int v3; // edi
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  unsigned __int32 Arg3; // esi
  __int64 v7; // rdx
  __int64 Arg1; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = 0;
  _InterlockedExchange((volatile __int32 *)this + 1029, 0);
  if ( *((_DWORD *)this + 978) )
  {
    do
    {
      v5 = (struct _MCGEN_TRACE_CONTEXT *)(248LL * v3);
      Arg3 = _InterlockedExchange(
               (volatile __int32 *)((char *)&v5[3].MatchAllKeyword + *((_QWORD *)this + 488) + 4),
               -1);
      if ( Arg3 != -1 )
      {
        v7 = *((_QWORD *)this + 488);
        Arg1 = *(unsigned int *)((char *)&v5[2].RegistrationHandle + v7);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          McTemplateK0pqqq(
            v5,
            &Dxgk_SetPowerPState,
            a3,
            this,
            Arg1,
            *(_DWORD *)((char *)&v5[2].EnableBitMask + v7),
            Arg3);
        if ( (int)DXGADAPTER::DdiSetPowerPState(this, Arg1, Arg3) < 0 )
        {
          v11 = WdLogNewEntry5_WdWarning(v10, v9, a3);
          *(_QWORD *)(v11 + 32) = Arg3;
          *(_QWORD *)(v11 + 24) = Arg1;
          WdLogEvent5_WdWarning(v11);
        }
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 978) );
  }
}
