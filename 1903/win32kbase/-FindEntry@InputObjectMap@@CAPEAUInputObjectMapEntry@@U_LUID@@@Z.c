/*
 * XREFs of ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@U_LUID@@@Z @ 0x1C01C808C
 * Callers:
 *     ?AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01C7D14 (-AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJU_LUID@@@Z @ 0x1C01C8200 (-RemoveMapping@InputObjectMap@@SAJU_LUID@@@Z.c)
 *     ?ResolveInputObject@InputObjectMap@@SAJU_LUID@@PEAPEBUCompositionInputObject@@@Z @ 0x1C01C8398 (-ResolveInputObject@InputObjectMap@@SAJU_LUID@@PEAPEBUCompositionInputObject@@@Z.c)
 * Callees:
 *     <none>
 */

struct InputObjectMapEntry *__fastcall InputObjectMap::FindEntry(struct _LUID a1)
{
  __int64 v1; // r10
  __int64 v2; // rsi
  __int64 v3; // r11
  __int64 v4; // rbx
  _QWORD *v5; // r8
  __int64 v7; // [rsp+20h] [rbp+10h]

  v1 = 0LL;
  v2 = HIBYTE(a1.HighPart)
     + 37
     * (BYTE2(a1.HighPart)
      + 37
      * (BYTE1(a1.HighPart)
       + 37
       * (LOBYTE(a1.HighPart)
        + 37
        * (HIBYTE(a1.LowPart)
         + 37 * (BYTE2(a1.LowPart) + 37 * (BYTE1(a1.LowPart) + 37 * (LOBYTE(a1.LowPart) + 11623883LL)))))));
  v3 = -1LL << (dword_1C02187CC & 0x1F);
  v4 = v3 & v2;
  if ( (unsigned int)dword_1C02187CC >> 5 )
  {
    v7 = v3 & v2;
    v5 = (char *)qword_1C02187D0
       + 8
       * ((37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v4 + 11623883)))))))
         + HIBYTE(v7)) & (((unsigned int)dword_1C02187CC >> 5) - 1));
    do
    {
      v5 = (_QWORD *)*v5;
      if ( ((unsigned __int8)v5 & 1) != 0 )
        goto LABEL_11;
    }
    while ( v4 != (v3 & v5[1]) );
LABEL_12:
    while ( v5 )
    {
      if ( v5[2] == a1 )
        return (struct InputObjectMapEntry *)v5;
      while ( 1 )
      {
        v5 = (_QWORD *)*v5;
        if ( ((unsigned __int8)v5 & 1) != 0 )
          break;
        if ( (v2 & v3) == (v3 & v5[1]) )
          goto LABEL_12;
      }
LABEL_11:
      v5 = 0LL;
    }
  }
  return (struct InputObjectMapEntry *)v1;
}
