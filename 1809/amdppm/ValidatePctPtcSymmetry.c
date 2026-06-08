/*
 * XREFs of ValidatePctPtcSymmetry @ 0x1C002FF94
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C002FA1C (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_dds @ 0x1C000C04C (WPP_RECORDER_SF_dds.c)
 */

__int64 __fastcall ValidatePctPtcSymmetry(char a1, _BYTE *a2, char a3, __int64 a4, __int64 a5)
{
  SIZE_T v6; // rsi
  __int64 v9; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int16 v14; // r9
  int v16; // [rsp+20h] [rbp-48h]

  v6 = 4LL;
  v9 = 4LL;
  v11 = -1073741823;
  if ( *a2 != 10 )
    v9 = 12LL;
  if ( RtlCompareMemory(a2, (const void *)a4, (unsigned int)v9) == v9 )
  {
    if ( a2[12] != 10 )
      v6 = 12LL;
    if ( RtlCompareMemory(a2 + 12, (const void *)(a4 + 12), v6) == v6 )
      return 0;
    v14 = 65;
  }
  else
  {
    v14 = 64;
  }
  WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14, v16, a1, a3, a5);
  return v11;
}
