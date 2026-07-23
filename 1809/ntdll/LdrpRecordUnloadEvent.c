/*
 * XREFs of LdrpRecordUnloadEvent @ 0x180055E8C
 * Callers:
 *     LdrpProcessDetachNode @ 0x180055D48 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800560AC (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

PVOID __fastcall LdrpRecordUnloadEvent(__int64 a1)
{
  int v1; // eax
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int16 v5; // bp
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdi
  PVOID result; // rax
  unsigned int v11; // ecx
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+24h] [rbp-34h]
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  __int64 v16; // [rsp+60h] [rbp+8h]

  v1 = LdrpUnloadIndex;
  v3 = LdrpUnloadIndex & 0xF;
  v4 = 104 * v3;
  *(_DWORD *)((char *)&RtlpUnloadEventTrace + v4 + 16) = LdrpUnloadIndex;
  LdrpUnloadIndex = v1 + 1;
  *((_QWORD *)&RtlpUnloadEventTrace + 13 * v3) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)((char *)&RtlpUnloadEventTrace + v4 + 8) = *(unsigned int *)(a1 + 64);
  v5 = *(_WORD *)(a1 + 88);
  if ( v5 > 0x40u )
    v5 = 64;
  memmove((char *)&RtlpUnloadEventTrace + v4 + 28, *(const void **)(a1 + 96), v5);
  if ( v5 < 0x40u )
    *((_WORD *)&RtlpUnloadEventTrace + 52 * v3 + ((unsigned __int64)v5 >> 1) + 14) = 0;
  WerEscalationReadImageVersionInfoForModuleBaseSafe(*(PVOID *)(a1 + 48));
  v6 = RtlpUnloadEventTraceEx;
  *(_DWORD *)((char *)&RtlpUnloadEventTrace + v4 + 20) = v12;
  *(_DWORD *)((char *)&RtlpUnloadEventTrace + v4 + 24) = v13;
  *(_DWORD *)((char *)&RtlpUnloadEventTrace + v4 + 92) = v14;
  *(_DWORD *)((char *)&RtlpUnloadEventTrace + v4 + 96) = v15;
  if ( v6 )
    goto LABEL_6;
  v11 = RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
    v11 = 0xFFFF;
  RtlpUnloadEventTraceExNumber = v11;
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 104LL * v11);
  RtlpUnloadEventTraceEx = (__int64)result;
  v6 = (__int64)result;
  if ( result )
  {
LABEL_6:
    v7 = LdrpUnloadIndexEx;
    v8 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v9 = 104 * v8;
    *(_DWORD *)(v9 + v6 + 16) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v7 + 1;
    v16 = v8;
    *(_QWORD *)(104 * v8 + RtlpUnloadEventTraceEx) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v9 + RtlpUnloadEventTraceEx + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(104 * v8 + RtlpUnloadEventTraceEx + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (52 * v16 + ((unsigned __int64)v5 >> 1)) + 28) = 0;
    *(_DWORD *)(v9 + RtlpUnloadEventTraceEx + 20) = v12;
    *(_DWORD *)(v9 + RtlpUnloadEventTraceEx + 24) = v13;
    *(_DWORD *)(v9 + RtlpUnloadEventTraceEx + 92) = v14;
    result = (PVOID)RtlpUnloadEventTraceEx;
    *(_DWORD *)(v9 + RtlpUnloadEventTraceEx + 96) = v15;
  }
  return result;
}
