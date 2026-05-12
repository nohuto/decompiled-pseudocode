/*
 * XREFs of StorPortAdapterIdleState @ 0x1C0043800
 * Callers:
 *     <none>
 * Callees:
 *     StorUpdateCrashDumpPowerReady @ 0x1C0016964 (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqqq @ 0x1C003D954 (McTemplateK0pqqq.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0042910 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 */

ULONG __fastcall StorPortAdapterIdleState(__int64 a1, unsigned int Arg2, const GUID *Arg3)
{
  unsigned int v3; // edi
  unsigned __int64 v6; // rcx
  bool v7; // sf
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // eax
  ULONG result; // eax
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  const GUID *v13; // r8

  v3 = (unsigned int)Arg3;
  if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x10) != 0 )
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)a1,
      &EventAdapterIdleStateStart,
      Arg3,
      **(const void ***)(a1 + 5152),
      *(_DWORD *)(a1 + 56),
      Arg2,
      (const unsigned int)Arg3);
  if ( v3 )
  {
    v7 = *(char *)(a1 + 108) < 0;
    v8 = *(_QWORD *)(a1 + 5152);
    *(_QWORD *)(a1 + 5456) = MEMORY[0xFFFFF78000000008];
    v9 = *(_DWORD *)(v8 + 20);
    if ( v7 )
      v10 = v9 | 0x10;
    else
      v10 = v9 & 0xFFFFFFEF;
    *(_DWORD *)(v8 + 20) = v10;
  }
  else
  {
    ++*(_DWORD *)(a1 + 5492);
    if ( *(_QWORD *)(a1 + 5456) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 5152) + 20LL) & 0x10) != 0 || *(char *)(a1 + 108) < 0 )
      {
        v6 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 5456);
        *(_QWORD *)(a1 + 5464) += v6 / 0x2710;
        if ( v6 / 0x2710 >= 0x2710 )
          ++*(_DWORD *)(a1 + 5500);
      }
      *(_QWORD *)(a1 + 5456) = 0LL;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 5152) + 16LL) = v3;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
  {
    if ( *(_DWORD *)(a1 + 96) && *(_QWORD *)(a1 + 5208) )
      StorUpdateCrashDumpPowerReady(a1);
    RaidAdapterSendPoFxIdleStateToMiniport(a1);
  }
  result = PoFxCompleteIdleState(**(_QWORD **)(a1 + 5152), Arg2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00617E2 & 0x10) != 0 )
      return McTemplateK0pqqq(
               v12,
               &EventAdapterIdleStateStop,
               v13,
               **(const void ***)(a1 + 5152),
               *(_DWORD *)(a1 + 56),
               Arg2,
               v3);
  }
  return result;
}
