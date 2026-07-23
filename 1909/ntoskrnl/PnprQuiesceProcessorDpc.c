/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x1405AA170
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140015DA0 (KeGetProcessorNumberFromIndex.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14012EBFC (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1401311F4 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x14015F4DC (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x14015FAD8 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x14015FB58 (KeRestoreProcessorSpecificFeatures.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PnprGetStackLimits @ 0x1402A04C4 (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x1402A5144 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1402A51E0 (KeSuspendClockTimerSafe.c)
 *     PnprMirrorMarkedPages @ 0x1405A9E1C (PnprMirrorMarkedPages.c)
 */

void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // esi
  ULONG v6; // r14d
  __int64 v7; // rax
  bool v8; // bl
  __int64 Group; // r15
  __int64 v10; // rbp
  bool v11; // di
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  PVOID v16[14]; // [rsp+20h] [rbp-78h] BYREF
  int v17; // [rsp+90h] [rbp-8h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+20h] BYREF

  v5 = (int)SystemArgument1;
  v6 = (unsigned int)SystemArgument2;
  memset(v16, 0, 0x38uLL);
  ProcNumber = 0;
  v20 = 0LL;
  v7 = PnprContext;
  *DeferredContext = 1;
  v8 = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < v5 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _disable();
    v8 = (v17 & 0x200) != 0;
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < v5 )
      _mm_pause();
  }
  if ( KeGetProcessorNumberFromIndex(v6, &ProcNumber) < 0 )
    goto LABEL_54;
  Group = ProcNumber.Group;
  v10 = 1LL << ProcNumber.Number;
  if ( ((1LL << ProcNumber.Number) & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group)) == 0 )
    goto LABEL_27;
  while ( *(int *)(PnprContext + 200) < 1 )
    _mm_pause();
  KeSuspendClockTimerSafe();
  KeSaveIptStateBeforeProcessorGoesOffline();
  v11 = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v11 = (int)KeSaveExtendedAndSupervisorState(
                 (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                 v16) >= 0;
  if ( (int)HalGetProcessorIdByNtNumber(v6, &v19) < 0 )
LABEL_54:
    __fastfail(5u);
  if ( (*(_DWORD *)(PnprContext + 20896) & 2) != 0 )
  {
    LOBYTE(v12) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(PnprContext + 20936))(*(_QWORD *)(PnprContext + 20880), v19, v12);
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    ((void (__fastcall *)(_QWORD, __int64 *))off_140424428[0])(*(_QWORD *)(PnprContext + 20872), &v20);
  ((void (__fastcall *)(_QWORD))off_1404243C0[0])(*(_QWORD *)(PnprContext + 20872));
  if ( (*(_DWORD *)(PnprContext + 20896) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(PnprContext + 20936))(*(_QWORD *)(PnprContext + 20880), v19, 0LL);
  KeResumeClockTimerSafe();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v8 )
    _enable();
  KeRestoreProcessorSpecificFeatures();
  if ( v11 )
    KeRestoreExtendedAndSupervisorState((__int64)v16);
  KeRestoreIptStateAfterProcessorComesOnline();
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
LABEL_27:
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    while ( *(int *)(PnprContext + 200) < 2 )
      _mm_pause();
    if ( (int)PnprMirrorMarkedPages() < 0 )
    {
      v13 = PnprContext;
      v14 = *(_DWORD *)(PnprContext + 20984);
      if ( !v14 )
        v14 = 2258;
      *(_DWORD *)(PnprContext + 20984) = v14;
      v15 = *(_DWORD *)(v13 + 20988);
      if ( !v15 )
        v15 = 1;
      *(_DWORD *)(v13 + 20988) = v15;
    }
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  }
  while ( *(int *)(PnprContext + 200) < 4 )
    _mm_pause();
  PnprGetStackLimits((char **)(PnprContext + 216 + 8LL * v6), PnprContext + 10456 + 8LL * v6);
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  while ( *(int *)(PnprContext + 200) < 5 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    if ( (v10 & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8 * Group)) != 0 )
    {
      ((void (__fastcall *)(__int64))off_140424430[0])(v20);
    }
    else if ( v8 )
    {
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
