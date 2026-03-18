/*
 * XREFs of rimDispatchHidKeyboardInputData @ 0x1C0103AD4
 * Callers:
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01040A8 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C0104420 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimHidP_SetUsages @ 0x1C00F0F54 (rimHidP_SetUsages.c)
 *     rimStackAttachAndProcessInput @ 0x1C00FFA5C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDispatchHidKeyboardInputData(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // r15d
  __int64 j; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rbp
  unsigned int i; // edi
  _DWORD *v14; // rsi
  unsigned int v15; // eax
  unsigned __int16 *v16; // r14
  unsigned int k; // ecx
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // r10d
  struct _HIDP_PREPARSED_DATA *v23; // rcx
  __int64 v24; // rax
  __m128i v25; // [rsp+50h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a3 + 164) )
  {
    v6 = 0;
    v7 = 0;
    memset(*(void **)(a3 + 440), 0, *(unsigned __int16 *)(*(_QWORD *)(a2 + 464) + 44LL));
    v9 = *(unsigned int *)(a3 + 248);
    if ( (_DWORD)v9 )
    {
      v10 = *(_DWORD *)(a3 + 292);
      if ( v10 )
      {
        v11 = 0;
        do
        {
          if ( v10 >= 0x14 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, j);
            v10 = *(_DWORD *)(a3 + 292);
          }
          v12 = v11;
          for ( i = 0; i < v10; ++i )
          {
            if ( *(_WORD *)(a3 + 2LL * i + 252) == *(_WORD *)(a3 + 2LL * v11 + 208) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(i, j);
            v10 = *(_DWORD *)(a3 + 292);
          }
          v9 = v10;
          ++v11;
          *(_WORD *)(a3 + 2LL * v10 + 252) = *(_WORD *)(a3 + 2 * v12 + 208);
          v10 = ++*(_DWORD *)(a3 + 292);
        }
        while ( v11 < *(_DWORD *)(a3 + 248) );
        v6 = 0;
      }
      else
      {
        if ( (unsigned int)v9 >= 0x14 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, j);
          LODWORD(v9) = *(_DWORD *)(a3 + 248);
        }
        memmove((void *)(a3 + 252), (const void *)(a3 + 208), 2LL * (unsigned int)v9);
        *(_DWORD *)(a3 + 292) = *(_DWORD *)(a3 + 248);
      }
    }
    v14 = (_DWORD *)(a3 + 336);
    if ( *(_DWORD *)(a3 + 336) )
    {
      v15 = *(_DWORD *)(a3 + 292);
      if ( v15 )
      {
        if ( v15 >= 0x14 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, j);
        v16 = (unsigned __int16 *)(a3 + 168);
        memset((void *)(a3 + 168), 0, 0x28uLL);
        memmove((void *)(a3 + 168), (const void *)(a3 + 252), 2LL * *(unsigned int *)(a3 + 292));
        for ( j = 0LL; (unsigned int)j < *v14; j = (unsigned int)(j + 1) )
        {
          for ( k = 0; k < *(_DWORD *)(a3 + 292); ++k )
          {
            if ( *(_WORD *)(a3 + 2LL * k + 168) == *(_WORD *)(a3 + 2LL * (unsigned int)j + 296) )
              *(_WORD *)(a3 + 2LL * k + 168) = 0;
          }
        }
        *(_DWORD *)(a3 + 292) = 0;
        v18 = 20LL;
        do
        {
          v9 = *v16;
          if ( (_WORD)v9 )
          {
            v19 = *(unsigned int *)(a3 + 292);
            if ( (unsigned int)v19 >= 0x14 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, j);
              v19 = *(unsigned int *)(a3 + 292);
              v9 = *v16;
            }
            *(_WORD *)(a3 + 2 * v19 + 252) = v9;
            ++*(_DWORD *)(a3 + 292);
          }
          ++v16;
          --v18;
        }
        while ( v18 );
      }
    }
    v20 = *(_DWORD *)(a3 + 292);
    if ( v20 )
    {
      if ( v20 >= 0x14 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, j);
      v6 = rimHidP_SetUsages(
             HidP_Input,
             7u,
             0,
             (unsigned __int16 *)(a3 + 252),
             (unsigned int *)(a3 + 292),
             *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL),
             *(char **)(a3 + 440),
             *(unsigned __int16 *)(*(_QWORD *)(a2 + 464) + 44LL));
      *(_DWORD *)(a3 + 248) = 0;
    }
    if ( *v14 )
    {
      v21 = *(_QWORD *)(a2 + 464);
      v22 = *(unsigned __int16 *)(v21 + 44);
      v23 = *(struct _HIDP_PREPARSED_DATA **)(v21 + 16);
      v7 = gpfnHidP_UnsetUsages
         ? gpfnHidP_UnsetUsages(
             HidP_Input,
             7u,
             0,
             (unsigned __int16 *)(a3 + 296),
             (unsigned int *)(a3 + 336),
             v23,
             *(char **)(a3 + 440),
             v22)
         : -1073741637;
      *v14 = 0;
      if ( v7 == -1072627697 )
        v7 = 0;
    }
    if ( v6 >= 0 && v7 >= 0 )
    {
      v24 = *(_QWORD *)(a2 + 464);
      v25.m128i_i32[0] = 0;
      v25.m128i_i64[1] = *(unsigned __int16 *)(v24 + 44);
      *(_BYTE *)(a1 + 568) = 0;
      rimStackAttachAndProcessInput(a1, a2, *(_QWORD **)(a3 + 440), &v25, 0);
    }
    *(_DWORD *)(a3 + 164) = 0;
  }
}
