/*
 * XREFs of ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002D914
 * Callers:
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003898C (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C0003EA0 (DecodeAcpiIdleState.c)
 *     GetDevExtFromIndex @ 0x1C00082B4 (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_SSS @ 0x1C0009840 (WPP_RECORDER_SF_SSS.c)
 */

__int64 __fastcall ValidateCoordinatedLpiDependenciesProcessor(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 DevExtFromIndex; // rsi
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-48h]
  char v13; // [rsp+78h] [rbp+10h] BYREF
  char v14; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  DevExtFromIndex = GetDevExtFromIndex(*(_DWORD *)a2);
  v6 = *(_QWORD *)(DevExtFromIndex + 528);
  if ( !*(_DWORD *)(a2 + 4) )
    return 0LL;
  while ( 1 )
  {
    v7 = 80LL * *(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 4 * v4);
    result = DecodeAcpiIdleState(
               DevExtFromIndex,
               (char *)(v7 + v6 + 48),
               0xFFFFFFFF,
               *(unsigned int *)(v6 + v7 + 36),
               0LL,
               &v13,
               &v14,
               0LL);
    if ( (int)result < 0 )
      break;
    if ( v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SSS(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v9,
          v10,
          v11,
          v12,
          *(const wchar_t **)(a1 + 176),
          *(const wchar_t **)(DevExtFromIndex + 64),
          *(_QWORD *)(v6 + v7 + 96));
      return 3221225473LL;
    }
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *(_DWORD *)(a2 + 4) )
      return 0LL;
  }
  return result;
}
