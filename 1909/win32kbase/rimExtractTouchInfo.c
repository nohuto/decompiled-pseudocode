/*
 * XREFs of rimExtractTouchInfo @ 0x1C0155698
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C0154E08 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     rimExtractData @ 0x1C015455C (rimExtractData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractTouchInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  int v6; // ebp
  __int64 result; // rax
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0;
  v4 = *(unsigned int *)(a1 + 24);
  v8 = 0;
  v6 = a2;
  if ( (unsigned int)(v4 - 1) > 3 && (_DWORD)v4 != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
  a3[6] = rimExtractData(a1, 13, 72, 1, &v9);
  a3[7] = rimExtractData(a1, 13, 73, 1, &v8);
  if ( v9 == v8 && v8 == 1 )
    a3[41] |= 1u;
  a3[5] = 1;
  if ( (*(_DWORD *)(a1 + 312) & 0x8000) != 0 )
  {
    a3[51] = rimExtractData(a1, 13, 48, 4, a3 + 41);
  }
  else if ( v6 )
  {
    a3[41] |= 4u;
    a3[51] = 512;
  }
  result = rimExtractData(a1, 13, 63, 2, a3 + 41);
  a3[50] = result;
  return result;
}
