/*
 * XREFs of rimExtractButtonPageButtonUsages @ 0x1C0101288
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C0102D4C (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00F0E7C (rimHidP_GetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall rimExtractButtonPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5)
{
  _WORD *v5; // rdi
  unsigned int v7; // eax
  _DWORD *v10; // rbx
  int result; // eax
  __int64 v12; // r8
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_WORD **)(a1 + 728);
  v7 = *(_DWORD *)(a1 + 944);
  v13 = v7;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v7 = v13;
  }
  v10 = a5;
  *a5 = 0;
  memset(v5, 0, 2LL * v7);
  result = rimHidP_GetUsages(HidP_Input, 9u, 0, v5, &v13, a2, a3, a4);
  if ( result >= 0 && v13 )
  {
    v12 = v13;
    do
    {
      switch ( *v5 )
      {
        case 1:
          *v10 |= 0x16u;
          break;
        case 2:
          *v10 |= 0x26u;
          break;
        case 3:
          *v10 |= 0x46u;
          break;
      }
      ++v5;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
