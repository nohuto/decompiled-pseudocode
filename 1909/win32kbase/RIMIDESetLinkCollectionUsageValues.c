/*
 * XREFs of RIMIDESetLinkCollectionUsageValues @ 0x1C0148C04
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C01479DC (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     rimHidP_SetUsageValue @ 0x1C0142E44 (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C0142EB0 (rimHidP_SetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rdi
  unsigned __int16 *v20; // rbx
  unsigned int v22[4]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v23[16]; // [rsp+50h] [rbp-C8h] BYREF

  memset(v23, 0, 0x78uLL);
  v8 = *(_QWORD *)(a1 + 464);
  v9 = 0LL;
  v22[0] = 1;
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
        v18 = v11[1];
        v9 = (unsigned int)(v9 + 1);
        *(_QWORD *)((char *)v23 + 4 * v16) = *(_QWORD *)(v11 - 1);
        *((_DWORD *)&v23[1] + v16) = v18;
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
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
    v19 = 0LL;
    v20 = (unsigned __int16 *)v23;
    do
    {
      if ( v22[0] <= 1 )
      {
        if ( rimHidP_SetUsages(HidP_Input, *v20, a4, (unsigned __int16 *)v23 + 6 * v19 + 1, v22, v13, v12, v14) < 0 )
          return 0LL;
        if ( a5 && *v20 == 13 && v20[1] == 66 )
          ++*a5;
      }
      v19 = (unsigned int)(v19 + 1);
      v20 += 6;
    }
    while ( (unsigned int)v19 < (unsigned int)v9 );
  }
  return 1LL;
}
