/*
 * XREFs of PpmPerfApplyHiddenProcessorState @ 0x1401B5AB8
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x140175290 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfApplyHiddenProcessorState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // r11
  char result; // al
  int v7; // eax
  __int64 v8; // rdx

  v5 = *(_BYTE *)(a1 + 350) || *(_BYTE *)(a1 + 345) != 0xFD && (_BYTE)a3;
  result = *(_DWORD *)(a2 + 104) != *(_DWORD *)(a1 + 508);
  if ( (_BYTE)a3 )
  {
    *(_DWORD *)(a2 + 104) = 0;
    result = 1;
  }
  if ( result )
  {
    v7 = *(_DWORD *)(a2 + 72);
    v8 = a2 + 64;
    *(_DWORD *)(a2 + 112) = v7;
    LOBYTE(a4) = a3;
    LOBYTE(a3) = v5;
    *(_DWORD *)(a2 + 108) = *(_DWORD *)(v8 + 12);
    *(_OWORD *)v8 = *(_OWORD *)(a1 + 512);
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(a1 + 528);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(a1 + 544);
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(a1 + 288))(*(_QWORD *)(a2 + 8), v8, a3, a4);
  }
  return result;
}
