/*
 * XREFs of EditionPointerActivate @ 0x1C01DD410
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01DCC74 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 */

void __fastcall EditionPointerActivate(__int64 a1, __int16 a2, __int64 a3, const struct tagPOINTEREVENTINT *a4)
{
  xxxPointerActivateInternal(*(struct tagWND **)(a1 + 72), a2, a3, a4);
}
