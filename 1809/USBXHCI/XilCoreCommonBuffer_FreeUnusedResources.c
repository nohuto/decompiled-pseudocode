/*
 * XREFs of XilCoreCommonBuffer_FreeUnusedResources @ 0x1C00426BC
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001870 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     CommonBuffer_RebalanceResourcesWorkItem @ 0x1C000AC10 (CommonBuffer_RebalanceResourcesWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C0062E10 (SecureDmaEnabler_FreeCommonBufferPage.c)
 */

__int64 *__fastcall XilCoreCommonBuffer_FreeUnusedResources(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 *result; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v11; // [rsp+38h] [rbp-8h]

  v11 = &v10;
  v10 = (__int64 *)&v10;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v3 = a1 + 184;
  *(_BYTE *)(a1 + 25) = v2;
  v4 = *(__int64 **)(a1 + 184);
  if ( v4 != (__int64 *)(a1 + 184) )
  {
    *v11 = v4;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = v11;
    **(_QWORD **)(a1 + 192) = &v10;
    v11 = *(__int64 ***)(a1 + 192);
    *(_QWORD *)(a1 + 192) = a1 + 184;
    *(_QWORD *)v3 = v3;
  }
  *(_DWORD *)(a1 + 200) -= *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 176) = 0;
  ++*(_DWORD *)(a1 + 212);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  while ( 1 )
  {
    result = v10;
    if ( v10 == (__int64 *)&v10 )
      break;
    if ( (__int64 **)v10[1] != &v10 || (v6 = (__int64 *)*v10, *(__int64 **)(*v10 + 8) != v10) )
      __fastfail(3u);
    v10 = (__int64 *)*v10;
    v6[1] = (__int64)&v10;
    v7 = result;
    result[1] = (__int64)result;
    *result = (__int64)result;
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      8u,
      0x18u,
      (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
      result[3]);
    v9 = v7[3];
    if ( *(_BYTE *)(*(_QWORD *)a1 + 80LL) )
      SecureDmaEnabler_FreeCommonBufferPage(v8, v9);
    else
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        *(_QWORD *)(v9 + 16));
  }
  return result;
}
