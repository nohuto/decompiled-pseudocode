/*
 * XREFs of ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1C003282C
 * Callers:
 *     DxgkCompletePStateTransitionCB @ 0x1C003EA10 (DxgkCompletePStateTransitionCB.c)
 * Callees:
 *     McTemplateK0pqqq @ 0x1C00358C0 (McTemplateK0pqqq.c)
 *     ?RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C0043A6C (-RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 */

void __fastcall DXGADAPTER::CompletePStateTransitionCB(struct _MCGEN_TRACE_CONTEXT *this, int a2, unsigned int a3)
{
  const GUID *Arg1; // r8
  __int64 v5; // rdi

  if ( this[36].Logger )
  {
    v5 = *(_QWORD *)(520LL
                   * ((unsigned __int16)a2 + (unsigned int)*((unsigned __int16 *)&this[36].MatchAnyKeyword + HIWORD(a2)))
                   + this[36].RegistrationHandle
                   + 512);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        Arg1 = (const GUID *)((unsigned __int16)a2
                            + (unsigned int)*((unsigned __int16 *)&this[36].MatchAnyKeyword + HIWORD(a2)));
        McTemplateK0pqqq(
          this,
          &Dxgk_PowerPStateCompleted,
          Arg1,
          this,
          (const unsigned int)Arg1,
          *(_DWORD *)(v5 + 192),
          a3);
      }
    }
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordPStateChange((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v5 + 136), a3);
  }
}
