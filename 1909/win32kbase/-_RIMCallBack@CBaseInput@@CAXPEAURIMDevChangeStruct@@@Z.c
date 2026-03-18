/*
 * XREFs of ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C0055830
 * Callers:
 *     <none>
 * Callees:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C005584C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 */

void __fastcall CBaseInput::_RIMCallBack(CBaseInput **a1)
{
  CBaseInput::RIMCallBack(a1[2], (struct RIMDevChangeStruct *)a1);
}
