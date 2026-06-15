/*
 * XREFs of ?F32TOUI8@@YAXPEAEM@Z @ 0x140015250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall F32TOUI8(unsigned __int8 *a1, float a2)
{
  *a1 = (int)(a2 * 128.0) + 0x80;
}
