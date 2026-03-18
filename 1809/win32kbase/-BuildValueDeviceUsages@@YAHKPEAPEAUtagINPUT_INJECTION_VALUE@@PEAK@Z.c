/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C01206A8
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C011ED14 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall BuildValueDeviceUsages(__int64 a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  __int64 v7; // rsi
  unsigned int v8; // ebp
  int v9; // edi
  char *v10; // r15
  char *v11; // r12
  struct tagINPUT_INJECTION_VALUE *v12; // rax
  struct tagINPUT_INJECTION_VALUE *v13; // r8
  struct tagINPUT_INJECTION_VALUE *v14; // rcx
  __int16 *v15; // rdx
  unsigned int v16; // r9d
  __int16 v17; // ax
  unsigned int v18; // edx
  _WORD *v19; // r8
  __int64 v20; // rcx

  v3 = 0;
  v6 = a1;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = 5LL;
  if ( v6 == 3 )
  {
    v8 = 6;
    v9 = 11;
    v10 = (char *)&unk_1C01CB542;
    v11 = (char *)&unk_1C01CB544;
  }
  else
  {
    if ( v6 != 2 )
      return 0LL;
    v8 = 5;
    v10 = (char *)&unk_1C01CB462;
    v9 = 10;
    v11 = (char *)&unk_1C01CB464;
  }
  v12 = (struct tagINPUT_INJECTION_VALUE *)Win32AllocPoolZInit(0x90uLL, 0x6A6E6952u);
  *a2 = v12;
  v13 = v12;
  if ( v12 )
  {
    v14 = v12;
    v15 = (__int16 *)&unk_1C01CB624;
    v16 = 5;
    do
    {
      *(_WORD *)v14 = *(v15 - 1);
      v14 = (struct tagINPUT_INJECTION_VALUE *)((char *)v14 + 12);
      v17 = *v15;
      v15 += 16;
      *((_WORD *)v14 - 5) = v17;
      --v7;
    }
    while ( v7 );
    v18 = 0;
    v19 = (_WORD *)((char *)v13 + 60);
    do
    {
      if ( v18 >= v8 )
        break;
      ++v16;
      v20 = 32LL * v18++;
      *v19 = *(_WORD *)&v10[v20];
      v19[1] = *(_WORD *)&v11[v20];
      v19 += 6;
    }
    while ( v16 < 0xC );
    if ( v16 == v9 )
    {
      *a3 = 12;
      return 1;
    }
  }
  return v3;
}
