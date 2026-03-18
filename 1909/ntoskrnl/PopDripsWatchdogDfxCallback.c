/*
 * XREFs of PopDripsWatchdogDfxCallback @ 0x1408AA5C0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F204C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIsDirectedPowerTransitionSupported @ 0x1402F364C (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDeviceConstraintsEnforced @ 0x1403058F4 (PopDeviceConstraintsEnforced.c)
 *     PopDirectedDripsNotify @ 0x140749280 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x1408A3E0C (PopDirectedDripsMarkCandidateDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408A52D4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x1408B9F68 (PopDripsWatchdogInvokeDeviceCallbacks.c)
 */

void __fastcall PopDripsWatchdogDfxCallback(__int64 a1)
{
  char v1; // bl
  int v3; // esi
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 v6; // r12
  _QWORD *i; // rdi
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  char v10; // dl
  __int64 v11; // rcx
  char v12; // r10
  __int64 v13; // r11
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v15 = 0LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v3 = *(_DWORD *)a1 & 0x80;
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v1 = 1;
    v15 = *(_QWORD *)(a1 + 24);
  }
  if ( (v3 || v1)
    && PopDeviceConstraintsEnforced()
    && (int)PopFxBuildDripsBlockingDeviceList(*(_QWORD *)(a1 + 16), v14) >= 0 )
  {
    if ( v1 )
    {
      _m_prefetchw(PopDirectedDripsState);
      v4 = PopDirectedDripsState[0];
      do
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange(PopDirectedDripsState, v4, v4);
      }
      while ( v5 != v4 );
      if ( (v4 & 1) != 0 )
        dword_1404447D4 = 0;
    }
    v6 = MEMORY[0xFFFFF78000000008];
    for ( i = (_QWORD *)v14[0]; i != v14; i = (_QWORD *)*i )
    {
      v8 = *(i - 102);
      v9 = (v6 - *(i - 31)) / 0x989680uLL;
      if ( PopFxIsDirectedPowerTransitionSupported((__int64)(i - 108), 0LL) && v9 >= *(unsigned int *)(v13 + 904) )
      {
        v12 = v10 + 1;
      }
      else if ( (*(_DWORD *)(v8 + 760) & 2) != 0 && v9 >= (unsigned int)PopFxDirectedFxDefaultTimeout )
      {
        v12 = 1;
      }
      if ( v1 && v12 )
      {
        PopDirectedDripsMarkCandidateDevice(v11);
      }
      else if ( v3 )
      {
        PopDripsWatchdogInvokeDeviceCallbacks(v11, *(unsigned int *)(a1 + 4));
      }
    }
    if ( v1 )
      PopDirectedDripsNotify(3, &v15);
    PopFxDestroyDripsBlockingDeviceList(v14);
  }
}
