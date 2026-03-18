/*
 * XREFs of RIMIDESetLinkCollectionUsageValues @ 0x1C00F4E2C
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C00F3FE0 (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimHidP_SetUsageValue @ 0x1C00F0EE8 (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C00F0F54 (rimHidP_SetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDESetLinkCollectionUsageValues(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ebx
  unsigned int *v11; // rdi
  char *v12; // r15
  struct _HIDP_PREPARSED_DATA *v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned __int16 *v19; // rbx
  unsigned int v21[4]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v22[16]; // [rsp+50h] [rbp-C8h] BYREF

  memset(v22, 0, 0x78uLL);
  v8 = *(_QWORD *)(a1 + 464);
  v9 = 0LL;
  v21[0] = 1;
  v10 = 0;
  v11 = (unsigned int *)(a3 + 4);
  v12 = *(char **)(v8 + 24);
  v13 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v14 = *(unsigned __int16 *)(v8 + 44);
  do
  {
    if ( rimHidP_SetUsageValue(HidP_Input, *((_WORD *)v11 - 2), a4, *((_WORD *)v11 - 1), *v11, v13, v12, v14) < 0 )
    {
      if ( *v11 == 1 )
      {
        if ( (unsigned int)v9 >= 0xA )
          return 0LL;
        v16 = 3 * v9;
        v17 = v11[1];
        v9 = (unsigned int)(v9 + 1);
        *(_QWORD *)((char *)v22 + 4 * v16) = *(_QWORD *)(v11 - 1);
        *((_DWORD *)&v22[1] + v16) = v17;
      }
      else if ( *v11 )
      {
        return 0LL;
      }
    }
    ++v10;
    v11 += 3;
  }
  while ( !v10 );
  if ( (_DWORD)v9 )
  {
    if ( (unsigned int)v9 > 0xA )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
    v18 = 0LL;
    v19 = (unsigned __int16 *)v22;
    do
    {
      if ( v21[0] <= 1 )
      {
        if ( rimHidP_SetUsages(HidP_Input, *v19, a4, (unsigned __int16 *)v22 + 6 * v18 + 1, v21, v13, v12, v14) < 0 )
          return 0LL;
        if ( a5 && *v19 == 13 && v19[1] == 66 )
          ++*a5;
      }
      v18 = (unsigned int)(v18 + 1);
      v19 += 6;
    }
    while ( (unsigned int)v18 < (unsigned int)v9 );
  }
  return 1LL;
}
