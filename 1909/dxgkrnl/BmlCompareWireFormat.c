/*
 * XREFs of BmlCompareWireFormat @ 0x1C02C17D8
 * Callers:
 *     BmlCompareTargetModes @ 0x1C00DB708 (BmlCompareTargetModes.c)
 * Callees:
 *     BmlCompareSingleWireFormatType @ 0x1C02C16FC (BmlCompareSingleWireFormatType.c)
 */

__int64 __fastcall BmlCompareWireFormat(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  char v6; // r10^1
  char v7; // r11^1
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  unsigned int v11; // r11d

  if ( a1 == a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  result = BmlCompareSingleWireFormatType(
             (*(_DWORD *)(a1 + 128) >> 2) & 0x3F,
             (unsigned __int8)*(_DWORD *)(a2 + 128) >> 2);
  if ( !(_DWORD)result )
  {
    result = BmlCompareSingleWireFormatType(v6 & 0x3F, v7 & 0x3F);
    if ( !(_DWORD)result )
    {
      result = BmlCompareSingleWireFormatType((v8 >> 14) & 0x3F, (v9 >> 14) & 0x3F);
      if ( !(_DWORD)result )
        return BmlCompareSingleWireFormatType((v10 >> 20) & 0x3F, (v11 >> 20) & 0x3F);
    }
  }
  return result;
}
