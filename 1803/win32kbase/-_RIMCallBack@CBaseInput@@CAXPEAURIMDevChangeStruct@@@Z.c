/*
 * XREFs of ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C0124780
 * Callers:
 *     <none>
 * Callees:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0123CA0 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 */

void __fastcall CBaseInput::_RIMCallBack(CBaseInput **a1)
{
  CBaseInput::RIMCallBack(a1[2], (struct RIMDevChangeStruct *)a1);
}
