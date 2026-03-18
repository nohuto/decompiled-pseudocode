/*
 * XREFs of rimExtractButtonPageButtonUsages @ 0x1C0156684
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C0158A10 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     rimHidP_GetUsages @ 0x1C0145458 (rimHidP_GetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rcx
  int result; // eax
  __int64 v13; // r8
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_WORD **)(a1 + 768);
  v7 = *(_DWORD *)(a1 + 984);
  v14 = v7;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v7 = v14;
  }
  v10 = a5;
  *a5 = 0;
  memset(v5, 0, 2LL * v7);
  result = rimHidP_GetUsages(v11, 9u, 0, v5, &v14, a2, a3, a4);
  if ( result >= 0 && v14 )
  {
    v13 = v14;
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
      --v13;
    }
    while ( v13 );
  }
  return result;
}
