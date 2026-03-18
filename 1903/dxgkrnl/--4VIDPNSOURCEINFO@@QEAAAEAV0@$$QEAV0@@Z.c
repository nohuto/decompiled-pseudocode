/*
 * XREFs of ??4VIDPNSOURCEINFO@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0294944
 * Callers:
 *     ?Ensure@?$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z @ 0x1C0049AB0 (-Ensure@-$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall VIDPNSOURCEINFO::operator=(_OWORD *a1, _OWORD *a2)
{
  if ( a1 != a2 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = a2[3];
    a1[4] = a2[4];
    a1[5] = a2[5];
    a1[6] = a2[6];
    a1[7] = a2[7];
    a1[8] = a2[8];
    a1[9] = a2[9];
    a1[10] = a2[10];
    a1[11] = a2[11];
    a1[12] = a2[12];
    a1[13] = a2[13];
    *(_QWORD *)a2 = 0LL;
  }
  return a1;
}
