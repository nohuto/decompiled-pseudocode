/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C00332C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiControlVSync @ 0x1C007AEC0 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, __int64 a2, char a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v11; // rax
  struct _ERESOURCE *v12; // rbp
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  bool v16; // zf
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // eax
  _QWORD v25[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v26; // [rsp+40h] [rbp-18h]

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
    v16 = *(_DWORD *)(a1 + 1732) == 0;
    *(_DWORD *)(a1 + 1752) = v14 | v15;
    if ( !v16 )
    {
      v17 = 65538LL;
      LOBYTE(v13) = 1;
LABEL_11:
      VidSchiControlVSync(a1, v13, v17);
    }
  }
  else
  {
    v18 = v15 & ~v14;
    *(_DWORD *)(a1 + 1752) = v18;
    if ( !v18 )
    {
      v13 = 0LL;
      v17 = 2LL;
      goto LABEL_11;
    }
  }
  ExReleaseResourceLite(v12);
  if ( a3 )
  {
    _mm_lfence();
    v26 = 0;
    v25[0] = a1 + 1648;
    AcquireSpinLock::Acquire((Acquire *)v25);
    v20 = *(unsigned int *)(a4 + 12);
    v21 = v5;
    v22 = *(_QWORD *)(a1 + 8 * v5 + 2576);
    if ( (_DWORD)v20 )
    {
      v24 = 0x3E8 / (unsigned int)v20;
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19);
      *(_QWORD *)(v23 + 24) = v21;
      WdLogEvent5_WdWarning(v23);
      v24 = 0;
    }
    *(_DWORD *)(v22 + 70580) = v24;
    if ( a5 && *(int *)(*(_QWORD *)(a1 + 16) + 2452LL) >= 2600 )
      *(_DWORD *)(v22 + 70584) ^= (*(_DWORD *)(v22 + 70584) ^ (*a5 >> 11)) & 1;
    else
      *(_DWORD *)(v22 + 70584) &= ~1u;
    AcquireSpinLock::Release((AcquireSpinLock *)v25);
  }
  return 0LL;
}
