/*
 * XREFs of RIMComputeSpecificHighMetricValue @ 0x1C0108488
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00EFEF4 (RIMPopulatePointerDevice.c)
 *     RIMExtractCustomPTPSetting @ 0x1C0108CD0 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     RIMComputePower @ 0x1C0108454 (RIMComputePower.c)
 */

__int64 __fastcall RIMComputeSpecificHighMetricValue(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  unsigned int v5; // edi
  _BYTE *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned __int16 v9; // r11
  __int16 v10; // r9
  __int64 result; // rax

  v2 = 0;
  v3 = abs32(a1);
  v4 = 0;
  v5 = a1 >> 31;
  v6 = word_1C0183A60;
  do
  {
    if ( *v6 == (*(_BYTE *)(a2 + 32) & 0xF) )
      break;
    ++v2;
    v6 += 4;
  }
  while ( v2 < 0xB );
  v7 = *(_DWORD *)(a2 + 36) & 0xF;
  if ( (unsigned int)v7 < 5 && (unsigned int)(dword_1C0183A48[v7] - 1) <= 1 && v2 < 0xB )
  {
    v8 = RIMComputePower(word_1C0183A60[2 * v2 + 1]);
    if ( v10 >= 0 )
    {
      v4 = v8 * v3 * v9;
    }
    else if ( v8 )
    {
      v4 = v3 * v9 / v8;
    }
  }
  result = -v4;
  if ( !(_BYTE)v5 )
    return v4;
  return result;
}
