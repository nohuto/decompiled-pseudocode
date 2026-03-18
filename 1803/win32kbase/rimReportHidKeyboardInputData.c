/*
 * XREFs of rimReportHidKeyboardInputData @ 0x1C0104420
 * Callers:
 *     rimProcessHidKeyboardInput @ 0x1C010422C (rimProcessHidKeyboardInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     rimDispatchHidKeyboardInputData @ 0x1C0103AD4 (rimDispatchHidKeyboardInputData.c)
 *     rimFillKeyboardInputData @ 0x1C0103E0C (rimFillKeyboardInputData.c)
 *     rimIsHidUsageAllowedInLowPowerMode @ 0x1C01041A8 (rimIsHidUsageAllowedInLowPowerMode.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0140A4C (ApiSetGetPowerTransitionsState.c)
 */

void *__fastcall rimReportHidKeyboardInputData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int16 *v4; // rsi
  int v5; // ebp
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  __int16 *v12; // rsi
  unsigned int v13; // eax
  unsigned __int16 v15; // r9
  _BYTE v16[8]; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v17[16]; // [rsp+38h] [rbp-80h] BYREF

  v3 = *(unsigned int *)(a3 + 164);
  v4 = (__int16 *)(a3 + 84);
  v5 = 1;
  v9 = 20LL;
  while ( (unsigned int)v3 < 0x14 && *v4 )
  {
    v10 = rimFillKeyboardInputData((__int64)v16, *v4, (_WORD *)(a3 + 2 * (v3 + 62)));
    if ( v10 < 0 )
    {
      v15 = 12;
      return (void *)WPP_RECORDER_SF_D(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       3u,
                       0x13u,
                       v15,
                       (__int64)&WPP_4f47d605a3be32813e6cdb6a74498525_Traceguids,
                       v10);
    }
    *(_WORD *)(a3 + 2LL * *(unsigned int *)(a3 + 336) + 296) = *(_WORD *)(a3 + 2LL * *(unsigned int *)(a3 + 164) + 124);
    v11 = *(_DWORD *)(a3 + 164);
    ++*(_DWORD *)(a3 + 336);
    v3 = (unsigned int)(v11 + 1);
    *(_DWORD *)(a3 + 164) = v3;
    ++v4;
  }
  v12 = (__int16 *)(a3 + 44);
  if ( (unsigned int)v3 < 0x14 )
  {
    do
    {
      if ( !*v12 )
        break;
      ApiSetGetPowerTransitionsState(v17);
      if ( v17[0] || (unsigned int)rimIsHidUsageAllowedInLowPowerMode(a3, (unsigned __int16)*v12) )
      {
        v10 = rimFillKeyboardInputData((__int64)v16, *v12, (_WORD *)(a3 + 2 * (*(unsigned int *)(a3 + 164) + 62LL)));
        if ( v10 < 0 )
        {
          v15 = 13;
          return (void *)WPP_RECORDER_SF_D(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           3u,
                           0x13u,
                           v15,
                           (__int64)&WPP_4f47d605a3be32813e6cdb6a74498525_Traceguids,
                           v10);
        }
        v5 = 0;
        *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 248))++ + 208) = *(_WORD *)(a3
                                                                                        + 2LL
                                                                                        * (unsigned int)(*(_DWORD *)(a3 + 164))++
                                                                                        + 124);
      }
      ++v12;
    }
    while ( *(_DWORD *)(a3 + 164) < 0x14u );
    if ( !v5 )
      goto LABEL_15;
  }
  *(_DWORD *)(a3 + 356) = 1;
LABEL_15:
  rimDispatchHidKeyboardInputData(a1, a2, a3);
  v13 = *(_DWORD *)(a3 + 352);
  if ( v13 < 0x14 )
    v9 = v13;
  return memmove(*(void **)(a3 + 344), (const void *)a3, 2 * v9);
}
