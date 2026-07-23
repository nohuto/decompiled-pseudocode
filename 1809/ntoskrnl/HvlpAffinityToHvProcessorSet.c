/*
 * XREFs of HvlpAffinityToHvProcessorSet @ 0x140279580
 * Callers:
 *     HvlMapDeviceInterrupt @ 0x1402749B0 (HvlMapDeviceInterrupt.c)
 *     HvlRetargetDeviceInterrupt @ 0x140275260 (HvlRetargetDeviceInterrupt.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140276630 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x140276884 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x140279A5C (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x140279BE8 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140279F90 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x14027A214 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall HvlpAffinityToHvProcessorSet(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  unsigned int v6; // edi
  __int64 v7; // rsi
  char v8; // r15
  __int64 v9; // rax
  unsigned __int16 *v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+70h] [rbp+8h] BYREF

  v3 = a3;
  a2[1] = 0LL;
  if ( a1 )
  {
    *a2 = 0LL;
    v6 = 0;
    v10[1] = *(unsigned __int16 **)(a1 + 8);
    v11 = 0;
    v10[0] = (unsigned __int16 *)a1;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v10) )
    {
      v7 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v12];
      v8 = HvlpVirtualProcessorMapping[2 * v12 + 1];
      if ( (unsigned int)v7 >= v6 )
      {
        if ( 8 * (unsigned __int64)(unsigned int)(v7 + 1) > v3 )
          return 0xFFFFFFFFLL;
        memset(&a2[v6 + 2], 0, 8LL * ((unsigned int)v7 - v6 + 1));
        v6 = v7 + 1;
      }
      a2[v7 + 2] |= 1LL << v8;
    }
    if ( v6 == 64 )
      v9 = -1LL;
    else
      v9 = (1LL << v6) - 1;
    a2[1] = v9;
    return 8 * v6;
  }
  else
  {
    *a2 = 1LL;
    return 0LL;
  }
}
