/*
 * XREFs of RIMIsParallelDevice @ 0x1C00ED2E8
 * Callers:
 *     RIMAssignTouchType @ 0x1C00EA3D4 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C00ED92C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMValidateAllCollectionUsages @ 0x1C00EDF7C (RIMValidateAllCollectionUsages.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C00F0D7C (rimHidP_GetLinkCollectionNodes.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int *a3)
{
  _DWORD *v3; // r14
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int16 v7; // r12
  int v8; // edi
  int v9; // esi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rsi
  unsigned int *v16; // rax
  unsigned __int16 v18[2]; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int16 v19; // [rsp+44h] [rbp-85h] BYREF
  unsigned __int16 v20; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-7Dh] BYREF
  int v22; // [rsp+50h] [rbp-79h]
  struct _HIDP_PREPARSED_DATA *v23; // [rsp+58h] [rbp-71h]
  __int64 v24; // [rsp+68h] [rbp-61h] BYREF
  __int64 v25; // [rsp+70h] [rbp-59h] BYREF
  __int64 v26; // [rsp+78h] [rbp-51h]
  unsigned int *v27; // [rsp+80h] [rbp-49h]
  struct _HIDP_VALUE_CAPS v28; // [rsp+90h] [rbp-39h] BYREF

  v3 = *(_DWORD **)(a1 + 672);
  v4 = 0;
  v27 = a3;
  v23 = a2;
  v26 = a1;
  v24 = 0LL;
  v18[0] = 1;
  v5 = 0LL;
  v25 = 0LL;
  v6 = 0LL;
  v20 = 0;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  if ( (unsigned int)rimHidP_GetLinkCollectionNodes(0LL, &v21, a2) == -1072627705 && v21 > 1 )
  {
    v7 = 1;
    v8 = 3;
    v9 = 0;
    do
    {
      if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, v7, 0x51u, &v28, v18, v23) == 1114112 )
      {
        ++*v3;
        if ( v9 )
        {
          if ( v5 && !v22 )
          {
            v13 = RIMValidateAllCollectionUsages(v5, v20, v6, v19, v7, (__int64)v23);
            v14 = v22;
            if ( !v13 )
              v14 = 1;
            v22 = v14;
          }
        }
        else
        {
          v10 = RIMRetrieveAllLinkIndexUsages(
                  v7,
                  (_DWORD)v23,
                  (unsigned int)&v20,
                  (unsigned int)&v24,
                  (__int64)&v19,
                  (__int64)&v25);
          v5 = v24;
          if ( v10 != 1114112 )
          {
            if ( v24 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x13u,
              0x1Bu,
              (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
          }
          v6 = v25;
          v9 = 1;
        }
      }
      ++v7;
      v18[0] = 1;
    }
    while ( v7 < v21 );
    v15 = v26;
    if ( v5 )
      Win32FreePool(v5);
    if ( v6 )
      Win32FreePool(v6);
    v18[0] = 1;
    if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x54u, &v28, v18, v23) == 1114112 )
    {
      v3[8] |= 1u;
      *(_DWORD *)(v15 + 24) = 3;
    }
    else
    {
      v8 = *(_DWORD *)(v15 + 24);
    }
    if ( *v3 > 1u && (v3[8] & 1) == 0 )
    {
      v8 = 4;
      *(_DWORD *)(v15 + 24) = 4;
    }
    if ( (unsigned int)(v8 - 3) <= 1 )
    {
      v16 = v27;
      v4 = 1;
      *(_DWORD *)(v15 + 276) |= 8u;
      *v16 = v21;
    }
  }
  return v4;
}
