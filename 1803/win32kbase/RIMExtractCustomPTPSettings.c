/*
 * XREFs of RIMExtractCustomPTPSettings @ 0x1C0108FC8
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C00EC5C4 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     RIMExtractCustomPTPSetting @ 0x1C0108CD0 (RIMExtractCustomPTPSetting.c)
 */

__int64 __fastcall RIMExtractCustomPTPSettings(
        _DWORD *a1,
        struct _HIDP_PREPARSED_DATA *a2,
        __int64 a3,
        char *a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned __int16 v9; // r14
  unsigned __int16 v11; // r9
  unsigned int v12; // ecx
  __int64 result; // rax
  unsigned int v14; // ecx
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  a1[66] = 0;
  a1[67] = 0;
  a1[68] = 0;
  a1[62] = 0;
  v9 = a6;
  v11 = a5;
  a1[63] = 1000;
  a1[64] = 50;
  a1[65] = 25;
  if ( (int)RIMExtractCustomPTPSetting(a2, a3, a4, v11, v9, 0xE2u, 1, &v15) >= 0 )
  {
    a1[62] = v15;
    a1[66] = 1;
  }
  if ( (int)RIMExtractCustomPTPSetting(a2, a3, a4, a5, v9, 0xE3u, 1, &v15) >= 0 )
  {
    a1[63] = v15;
    a1[66] = 1;
  }
  if ( (int)RIMExtractCustomPTPSetting(a2, a3, a4, a5, v9, 0xE1u, 2, &v15) >= 0 )
    a1[68] = v15 != 0;
  if ( (int)RIMExtractCustomPTPSetting(a2, a3, a4, a5, v9, 0xE4u, 0, &v15) >= 0 )
  {
    v12 = v15;
    if ( v15 - 1 <= 0x63 )
    {
      a1[67] = 1;
      a1[64] = v12;
    }
  }
  result = RIMExtractCustomPTPSetting(a2, a3, a4, a5, v9, 0xE5u, 0, &v15);
  if ( (int)result >= 0 )
  {
    v14 = v15;
    result = v15 - 1;
    if ( (unsigned int)result <= 0x63 )
    {
      a1[67] = 1;
      a1[65] = v14;
    }
  }
  return result;
}
