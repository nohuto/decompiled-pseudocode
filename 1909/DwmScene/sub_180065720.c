/*
 * XREFs of sub_180065720 @ 0x180065720
 * Callers:
 *     sub_180024DD0 @ 0x180024DD0 (sub_180024DD0.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_180068FD4 @ 0x180068FD4 (sub_180068FD4.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18009EDE4 @ 0x18009EDE4 (sub_18009EDE4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180065720(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _QWORD v3[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_18000E4E8(v4);
    v2 = (unsigned int)sub_18000E4E8(v3);
    sub_18006586C((unsigned int)pExceptionObject, v2, 70, (unsigned int)v4, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( *(_QWORD *)(a1 + 136) )
    sub_18009EDE4();
}
