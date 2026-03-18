/*
 * XREFs of Interrupter_UpdateERDP @ 0x1C001BDE4
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001B0B0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_InitializeForOffload @ 0x1C001BAB4 (Interrupter_InitializeForOffload.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C001BC1C (Interrupter_InterrupterRegisterIntialize.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall Interrupter_UpdateERDP(__int64 a1, char a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  signed __int32 v8[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = ((unsigned __int8)*(_DWORD *)(a1 + 128) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL)) & 7 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) + 16LL * *(unsigned int *)(a1 + 124));
  v4 = v3 & 0xFFFFFFFFFFFFFFF7uLL;
  v5 = v3 | 8;
  if ( !a2 )
    v5 = v4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      5u,
      9u,
      0x1Eu,
      (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids,
      v5);
  v6 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
  if ( (result & 1) != 0 )
  {
    *(_DWORD *)(v6 + 24) = v5;
    _InterlockedOr(v8, 0);
    *(_DWORD *)(v6 + 28) = HIDWORD(v5);
  }
  else
  {
    *(_QWORD *)(v6 + 24) = v5;
  }
  _InterlockedOr(v8, 0);
  return result;
}
