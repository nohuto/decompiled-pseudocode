/*
 * XREFs of USBType1AsyncEndpointPollCallback @ 0x1C0003990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDddd @ 0x1C0003118 (WPP_RECORDER_SF_DDDddd.c)
 */

__int64 __fastcall USBType1AsyncEndpointPollCallback(__int64 a1, __int64 a2, struct _KSPIN *a3)
{
  _QWORD *Context; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  KIRQL v8; // r13
  __int64 v9; // r8
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  unsigned int v12; // esi
  unsigned int v13; // ecx
  unsigned int v14; // edx
  PKSGATE i; // rax
  int v17; // [rsp+20h] [rbp-68h]

  Context = a3->Context;
  v6 = Context[19];
  v7 = *(_QWORD *)(v6 + 864);
  v8 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  if ( *(_DWORD *)(v6 + 908) )
    *(_DWORD *)(v6 + 908) = *(_DWORD *)(v6 + 900) + 16;
  *(_BYTE *)(v6 + 917) = 0;
  KeSetEvent((PRKEVENT)(v6 + 920), 0, 0);
  if ( *(int *)(a2 + 48) >= 0 && *(int *)(v7 + 4) >= 0 && *(_DWORD *)(v7 + 36) == 3 )
  {
    v9 = *(unsigned int *)(v6 + 856);
    v10 = (*(unsigned __int8 *)(v6 + 977) >> 6) | (4 * *(unsigned __int8 *)(v6 + 978));
    v11 = 1000 * (*(_WORD *)(v6 + 976) & 0x3FFF);
    v12 = (v11 >> 14) + 1000 * v10;
    v13 = v9 - v12;
    v14 = (unsigned int)v9 / 0xA;
    if ( (unsigned int)v9 <= v12 )
      v13 = ((1000 * (*(_WORD *)(v6 + 976) & 0x3FFFu)) >> 14) + 1000 * v10 - v9;
    if ( v13 > v14 )
    {
      v12 = v9 - v14;
      if ( (unsigned int)v9 <= ((1000 * (*(_WORD *)(v6 + 976) & 0x3FFFu)) >> 14) + 1000 * v10 )
        v12 = v14 + v9;
      v10 = v12 / 0x3E8;
      v11 = (v12 % 0x3E8) << 14;
    }
    if ( v12 != *((_DWORD *)Context + 26) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v11 / 0x3E8,
          v9,
          *(unsigned __int8 *)(v6 + 977),
          v17);
      *((_DWORD *)Context + 26) = v12;
      *(_DWORD *)(v6 + 116) = v10;
      *(_DWORD *)(v6 + 120) = v11;
    }
  }
  if ( *((_BYTE *)Context + 44) )
  {
    *((_BYTE *)Context + 44) = 0;
    for ( i = KsPinGetAndGate(a3); i && _InterlockedIncrement(&i->Count) == 1; i = i->NextGate )
      ;
    if ( !*(_BYTE *)(v6 + 100) )
      goto LABEL_26;
    KsPinAttemptProcessing(a3, 1u);
  }
  if ( !*(_BYTE *)(v6 + 100) )
  {
LABEL_26:
    *(_BYTE *)(v6 + 916) = 0;
    goto LABEL_27;
  }
  *(_DWORD *)(v6 + 896) += *(_DWORD *)(v6 + 900);
  IoQueueWorkItem(*(PIO_WORKITEM *)(v6 + 968), USBType1AsyncEndpointPoll, CriticalWorkQueue, a3);
LABEL_27:
  KeReleaseSpinLock(Context + 14, v8);
  return 3221225494LL;
}
