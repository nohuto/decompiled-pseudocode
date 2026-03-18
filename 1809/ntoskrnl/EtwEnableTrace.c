/*
 * XREFs of EtwEnableTrace @ 0x140717DB0
 * Callers:
 *     WdipSemEnableDisableTrace @ 0x140717D54 (WdipSemEnableDisableTrace.c)
 *     EtwWmitraceWorker @ 0x1408BD7A0 (EtwWmitraceWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEnableTrace @ 0x140717E74 (EtwpEnableTrace.c)
 */

__int64 __fastcall EtwEnableTrace(int a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, int a8)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  size_t Size; // [rsp+60h] [rbp-38h]
  size_t v15; // [rsp+70h] [rbp-28h]
  size_t v16; // [rsp+80h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  LODWORD(v16) = 0;
  LODWORD(v15) = 0;
  LODWORD(Size) = 0;
  return EtwpEnableTrace(
           CurrentServerSiloGlobals[108],
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0LL,
           0LL,
           0LL,
           Size,
           0LL,
           v15,
           0LL,
           v16,
           0LL);
}
