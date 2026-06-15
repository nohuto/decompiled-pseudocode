/*
 * XREFs of ?F32TOI32@@YAXPEAEM@Z @ 0x14001B3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall F32TOI32(unsigned __int8 *a1, float a2)
{
  *(_DWORD *)a1 = (int)(a2 * 2147483648.0);
}
