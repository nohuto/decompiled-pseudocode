/*
 * XREFs of ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C0129BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00D889C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCu.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _LoadCursorsAndIcons(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct tagCURSOR *i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
  {
    v4 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( i = gpcurFirst; i; i = (struct tagCURSOR *)*((_QWORD *)i + 4) )
    {
      v6 = (unsigned int)*((unsigned __int16 *)i + 37) - 1;
      if ( *((_WORD *)i + 37) == 1 )
      {
        if ( *((struct tagCURSOR **)i + 6) == i )
        {
          v7 = *((unsigned __int16 *)i + 32);
          v8 = v7 - 100;
          if ( (unsigned int)(v7 - 100) > 0x12 || (v6 = 552 * v7, *(_QWORD *)&gasyscur[276 * v7 - 27596]) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
          zzzInternalSetSystemCursor((__int64)i, v8, (const UNICODE_STRING *)((char *)i + 56), 0);
        }
      }
      else if ( *((_WORD *)i + 37) == 3 )
      {
        v10 = 552 * (*((unsigned __int16 *)i + 32) - 100LL);
        *((_QWORD *)i + 8) = *(unsigned __int16 *)((char *)&gasysico + v10);
        if ( (*((_DWORD *)i + 20) & 4) != 0 )
        {
          *((_QWORD *)&v11 + 1) = i;
          *(_QWORD *)&v11 = (char *)&gasysico + v10 + 8;
          v12 = v11;
          HMAssignmentLock(&v12);
        }
        else
        {
          *(_QWORD *)(gpsi + 6968LL) = *(_QWORD *)i;
        }
      }
    }
    if ( qword_1C030E080 )
      v4 = *(_QWORD *)qword_1C030E080;
    *(_QWORD *)(gpsi + 6976LL) = v4;
  }
  return 1LL;
}
