/*
 * XREFs of PpmPerfArbitratorApplyProcessorState @ 0x1401755E0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyProcessorState @ 0x14017547C (PpmPerfApplyProcessorState.c)
 *     PoSetProcessorQoS @ 0x1402DB258 (PoSetProcessorQoS.c)
 * Callees:
 *     PpmEventArbitratorPerfStateChange @ 0x140175708 (PpmEventArbitratorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfArbitratorApplyProcessorState(__int64 a1, unsigned __int8 a2, char a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v6; // rbp
  char v9; // r9
  char v10; // bl
  char v11; // si
  __int64 v12; // r8
  int v13; // edx
  _DWORD *v14; // rcx
  __int64 v15; // r12
  int v17; // eax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // r10
  unsigned __int64 v22; // r11

  v4 = *(_QWORD *)(a1 + 24184);
  v6 = *(_QWORD *)(a1 + 24176);
  v9 = a3;
  v10 = 1;
  v11 = 0;
  if ( PpmPerfQosEnabled )
    v12 = *(unsigned int *)(a1 + 24304);
  else
    v12 = 0LL;
  v13 = *(_DWORD *)(v6 + 508);
  if ( (_DWORD)v12 != *(_DWORD *)(a1 + 24308) )
  {
    if ( !*(_BYTE *)(v6 + 347) || (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
    {
      v17 = *(unsigned __int16 *)(a1 + 24312);
      v14 = (_DWORD *)(v4 + 104);
      if ( !_bittest(&v17, v12) || *v14 != v13 )
      {
        *v14 = v13;
        v9 = 1;
        a2 = 1;
      }
      *(_DWORD *)(a1 + 24308) = v12;
      v11 = 1;
      goto LABEL_7;
    }
    return 0;
  }
  v14 = (_DWORD *)(v4 + 104);
  if ( *(_DWORD *)(v4 + 104) != v13 )
  {
    if ( !(_DWORD)v12 )
    {
LABEL_6:
      *v14 = v13;
      v9 = 1;
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(v6 + 347) || (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
    {
      a2 = 1;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_7:
  if ( v9 )
  {
    if ( a3 )
      *v14 = 0;
    v15 = (int)v12;
    LOBYTE(a4) = a3;
    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 72);
    LOBYTE(v12) = a2;
    *(_DWORD *)(v4 + 108) = *(_DWORD *)(v4 + 76);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(v6 + 40 * v15 + 512);
    *(_OWORD *)(v4 + 80) = *(_OWORD *)(v6 + 40 * v15 + 528);
    *(_QWORD *)(v4 + 96) = *(_QWORD *)(v6 + 40 * v15 + 544);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v6 + 280))(*(_QWORD *)(v4 + 8), v4 + 64, v12, a4);
    if ( PopHeteroSystem )
    {
      v18 = *(_WORD *)(v6 + 2 * v15 + 496);
      v19 = *(_WORD *)(a1 + 24312);
      if ( v18 != v19 )
      {
        *(_WORD *)(a1 + 24312) = v18;
        v20 = 0;
        v21 = *(_QWORD *)(a1 + 192);
        do
        {
          if ( (v18 & 1) != (v19 & 1) )
          {
            v22 = *(unsigned __int8 *)(a1 + 209);
            if ( (v18 & 1) != 0 )
              _interlockedbittestandset64((volatile signed __int32 *)(v21 + 8LL * v20 + 296), v22);
            else
              _interlockedbittestandreset64((volatile signed __int32 *)(v21 + 8LL * v20 + 296), v22);
          }
          v18 >>= 1;
          ++v20;
          v19 >>= 1;
        }
        while ( v20 < 4 );
      }
    }
    if ( !a3 )
      v11 = 1;
  }
  if ( v11 )
    PpmEventArbitratorPerfStateChange(a1, a2);
  return v10;
}
