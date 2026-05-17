/*
 * XREFs of LdrpRecordUnloadEvent @ 0x180055E8C
 * Callers:
 *     LdrpProcessDetachNode @ 0x180055D48 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800560AC (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall LdrpRecordUnloadEvent(__int64 a1)
{
  int v1; // eax
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int16 v5; // bp
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // r8
  int v9; // r12d
  int v10; // r13d
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 result; // rax
  unsigned int v15; // ecx
  _DWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+2Ch] [rbp-2Ch]
  __int64 v18; // [rsp+60h] [rbp+8h]

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
  WerEscalationReadImageVersionInfoForModuleBaseSafe(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v16);
  v6 = v16[0];
  v7 = v16[1];
  v8 = RtlpUnloadEventTraceEx;
  v9 = v16[2];
  *(_DWORD *)((char *)&RtlpUnloadEventTrace + v4 + 20) = v16[0];
  *(_DWORD *)((char *)&RtlpUnloadEventTrace + v4 + 24) = v7;
  *(_DWORD *)((char *)&RtlpUnloadEventTrace + v4 + 92) = v9;
  v10 = v17;
  *(_DWORD *)((char *)&RtlpUnloadEventTrace + v4 + 96) = v17;
  if ( v8 )
    goto LABEL_6;
  v15 = RtlpUnloadEventTraceExNumber;
  if ( (unsigned int)RtlpUnloadEventTraceExNumber > 0xFFFF )
    v15 = 0xFFFF;
  RtlpUnloadEventTraceExNumber = v15;
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 104LL * v15);
  RtlpUnloadEventTraceEx = result;
  v8 = result;
  if ( result )
  {
LABEL_6:
    v11 = LdrpUnloadIndexEx;
    v12 = (unsigned __int16)(LdrpUnloadIndexEx % (unsigned int)RtlpUnloadEventTraceExNumber);
    v13 = 104 * v12;
    *(_DWORD *)(v13 + v8 + 16) = LdrpUnloadIndexEx;
    LdrpUnloadIndexEx = v11 + 1;
    v18 = v12;
    *(_QWORD *)(104 * v12 + RtlpUnloadEventTraceEx) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v13 + RtlpUnloadEventTraceEx + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(104 * v12 + RtlpUnloadEventTraceEx + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(RtlpUnloadEventTraceEx + 2 * (52 * v18 + ((unsigned __int64)v5 >> 1)) + 28) = 0;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 20) = v6;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 24) = v7;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 92) = v9;
    result = RtlpUnloadEventTraceEx;
    *(_DWORD *)(v13 + RtlpUnloadEventTraceEx + 96) = v10;
  }
  return result;
}
