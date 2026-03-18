/*
 * XREFs of RIMDivideToCeilingOrNearestInt @ 0x1C0127F58
 * Callers:
 *     rimExtractScantime @ 0x1C012A79C (rimExtractScantime.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDivideToCeilingOrNearestInt(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v8; // ebp
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  unsigned __int64 v11; // rax
  int v12; // ecx

  v4 = 0;
  v5 = (unsigned int)a2;
  v6 = (unsigned int)a1;
  v8 = a3;
  if ( !(_DWORD)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v8 )
  {
    if ( (_DWORD)v6 )
      v9 = v6 - 1;
    else
      v9 = -1;
    v10 = (_DWORD)v6 == 0 ? 0x80070216 : 0;
    if ( (_DWORD)v6 )
      *a4 = v9 / (unsigned int)v5 + 1;
  }
  else
  {
    v11 = (v5 + 2 * v6) / (unsigned __int64)(2 * v5);
    v12 = -1;
    if ( v11 <= 0xFFFFFFFF )
      v12 = (v5 + 2 * v6) / (unsigned __int64)(2 * v5);
    *a4 = v12;
    v10 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
  }
  LOBYTE(v4) = v10 == 0;
  return v4;
}
