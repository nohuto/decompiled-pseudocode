/*
 * XREFs of PpmPerfArbitratorApplyProcessorState @ 0x140175CE4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyProcessorState @ 0x140175B70 (PpmPerfApplyProcessorState.c)
 *     PoSetProcessorQoS @ 0x1402F6BF8 (PoSetProcessorQoS.c)
 * Callees:
 *     PpmEventArbitratorPerfStateChange @ 0x140175EE8 (PpmEventArbitratorPerfStateChange.c)
 *     KeUpdateQosGroupingSets @ 0x1401BE624 (KeUpdateQosGroupingSets.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfArbitratorApplyProcessorState(__int64 a1, unsigned __int8 a2, char a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v6; // r14
  char v7; // r9
  __int64 v8; // r8
  char v11; // di
  char v12; // si
  signed int v13; // ebp
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // rcx
  __int64 v17; // r8
  unsigned __int16 v18; // cx
  unsigned int v19; // edx
  __int64 v20; // r10
  unsigned __int64 v21; // r11

  v4 = *(_QWORD *)(a1 + 24184);
  v6 = *(_QWORD *)(a1 + 24176);
  v7 = a3;
  v8 = 0LL;
  v11 = 1;
  v12 = 0;
  if ( PpmPerfQosEnabled )
    v13 = *(_DWORD *)(a1 + 24304);
  else
    v13 = 0;
  v14 = *(_DWORD *)(v6 + 508);
  if ( v13 == *(_DWORD *)(a1 + 24308) )
  {
    v16 = (_DWORD *)(v4 + 104);
    if ( *(_DWORD *)(v4 + 104) != v14 )
    {
      if ( v13 )
      {
        if ( *(_BYTE *)(v6 + 347) && (struct _KPRCB *)a1 != KeGetCurrentPrcb() )
          return 0;
        a2 = 1;
      }
      *v16 = v14;
      v7 = 1;
    }
  }
  else
  {
    if ( *(_BYTE *)(v6 + 347) && (struct _KPRCB *)a1 != KeGetCurrentPrcb() )
      return 0;
    v15 = *(unsigned __int16 *)(a1 + 24312);
    v16 = (_DWORD *)(v4 + 104);
    if ( !_bittest(&v15, v13) || *v16 != v14 )
    {
      *v16 = v14;
      v7 = 1;
      a2 = 1;
    }
    *(_DWORD *)(a1 + 24308) = v13;
    v12 = 1;
  }
  if ( v7 )
  {
    if ( a3 )
      *v16 = 0;
    LOBYTE(a4) = a3;
    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 72);
    LOBYTE(v8) = a2;
    *(_DWORD *)(v4 + 108) = *(_DWORD *)(v4 + 76);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(v6 + 40LL * v13 + 512);
    *(_OWORD *)(v4 + 80) = *(_OWORD *)(v6 + 40LL * v13 + 528);
    *(_QWORD *)(v4 + 96) = *(_QWORD *)(v6 + 40LL * v13 + 544);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v6 + 280))(*(_QWORD *)(v4 + 8), v4 + 64, v8, a4);
    if ( PopHeteroSystem )
    {
      v18 = *(_WORD *)(v6 + 2LL * v13 + 496);
      v17 = *(unsigned __int16 *)(a1 + 24312);
      if ( v18 != (_WORD)v17 )
      {
        *(_WORD *)(a1 + 24312) = v18;
        v19 = 0;
        v20 = *(_QWORD *)(a1 + 192);
        do
        {
          if ( (v18 & 1) != (v17 & 1) )
          {
            v21 = *(unsigned __int8 *)(a1 + 209);
            if ( (v18 & 1) != 0 )
              _interlockedbittestandset64((volatile signed __int32 *)(v20 + 8LL * v19 + 304), v21);
            else
              _interlockedbittestandreset64((volatile signed __int32 *)(v20 + 8LL * v19 + 304), v21);
          }
          v18 >>= 1;
          ++v19;
          LOWORD(v17) = (unsigned __int16)v17 >> 1;
        }
        while ( v19 < 4 );
      }
    }
    KeUpdateQosGroupingSets(a1, (unsigned int)v13, v17);
    if ( !a3 )
      v12 = 1;
  }
  if ( v12 )
    PpmEventArbitratorPerfStateChange(a1, a2);
  return v11;
}
