/*
 * XREFs of GetLbaFromCdb @ 0x1C001044C
 * Callers:
 *     MdlToPrp @ 0x1C0004B10 (MdlToPrp.c)
 *     BuildReadWriteCommand @ 0x1C000FC58 (BuildReadWriteCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLbaFromCdb(_BYTE *a1, int a2)
{
  char v2; // al
  __int64 v4; // [rsp+20h] [rbp+20h]

  if ( a2 == 16 )
  {
    HIBYTE(v4) = a1[2];
    BYTE6(v4) = a1[3];
    BYTE5(v4) = a1[4];
    BYTE4(v4) = a1[5];
    BYTE3(v4) = a1[6];
    BYTE2(v4) = a1[7];
    BYTE1(v4) = a1[8];
    v2 = a1[9];
  }
  else
  {
    HIBYTE(v4) = 0;
    *(_DWORD *)((char *)&v4 + 3) = (unsigned __int8)a1[2];
    BYTE2(v4) = a1[3];
    BYTE1(v4) = a1[4];
    v2 = a1[5];
  }
  LOBYTE(v4) = v2;
  return v4;
}
