/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C00C9520
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C0069FD0 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v9; // rax
  __int64 v11; // rax
  struct _ERESOURCE *v12; // r15
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  v12 = (struct _ERESOURCE *)(a1 + 1008);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1008), 1u);
  v14 = 1 << v5;
  v15 = *(_DWORD *)(a1 + 1752);
  if ( a3 )
  {
    *(_DWORD *)(a1 + 1752) = v14 | v15;
    if ( *(_DWORD *)(a1 + 1732) )
    {
      v16 = 65538;
      LOBYTE(v13) = 1;
LABEL_11:
      VidSchiControlVSync(a1, v13, v16);
    }
  }
  else
  {
    v17 = v15 & ~v14;
    *(_DWORD *)(a1 + 1752) = v17;
    if ( !v17 )
    {
      v13 = 0LL;
      v16 = 2;
      goto LABEL_11;
    }
  }
  v18 = *(_DWORD *)(a4 + 20);
  if ( v18 )
  {
    v19 = *(_DWORD *)(a4 + 16) / v18;
    if ( v19 )
      v4 = 0x3E8 / v19;
  }
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(8 * v5 + 2576 + a1) + 70564LL), v4);
  ExReleaseResourceLite(v12);
  return 0LL;
}
