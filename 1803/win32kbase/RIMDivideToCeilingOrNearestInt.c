/*
 * XREFs of RIMDivideToCeilingOrNearestInt @ 0x1C00FFB84
 * Callers:
 *     rimExtractScantime @ 0x1C0102018 (rimExtractScantime.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDivideToCeilingOrNearestInt(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx

  v4 = 0;
  v5 = (unsigned int)a2;
  v6 = (unsigned int)a1;
  if ( !(_DWORD)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( a3 )
  {
    if ( (_DWORD)v6 )
      v9 = v6 - 1;
    else
      v9 = -1;
    v10 = (_DWORD)v6 == 0 ? 0x80070216 : 0;
    if ( (_DWORD)v6 )
    {
      v11 = v9 / (unsigned int)v5 + 1;
LABEL_12:
      *a4 = v11;
    }
  }
  else
  {
    v12 = (v5 + 2 * v6) / (unsigned __int64)(2 * v5);
    v11 = -1;
    if ( v12 > 0xFFFFFFFF )
    {
      v10 = -2147024362;
      goto LABEL_12;
    }
    *a4 = v12;
    v10 = 0;
  }
  LOBYTE(v4) = v10 == 0;
  return v4;
}
