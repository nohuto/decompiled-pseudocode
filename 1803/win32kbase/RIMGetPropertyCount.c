/*
 * XREFs of RIMGetPropertyCount @ 0x1C00ECC88
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C00EDB24 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, __int64 a2, unsigned __int16 a3, struct _HIDP_PREPARSED_DATA *a4)
{
  __int64 v5; // r13
  unsigned int v7; // esi
  unsigned __int16 v8; // r15
  int SpecificValueCaps; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // di
  unsigned __int16 v12; // cx
  struct _HIDP_VALUE_CAPS *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  UCHAR *p_ReportID; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v20; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v21[2]; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int16 v22; // [rsp+54h] [rbp-65h] BYREF
  unsigned __int16 v23; // [rsp+58h] [rbp-61h]
  int v24; // [rsp+5Ch] [rbp-5Dh]
  __int64 v25; // [rsp+60h] [rbp-59h]
  struct _HIDP_VALUE_CAPS v26; // [rsp+70h] [rbp-49h] BYREF

  v20 = a3;
  v19 = a3;
  v5 = a1;
  v25 = a1;
  v23 = a2;
  v21[0] = 0;
  v7 = 0;
  v24 = 0;
  v8 = a2;
  SpecificValueCaps = -1073741668;
  v22 = 1;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2);
  v10 = *(_QWORD *)(v5 + 672);
  v11 = a3;
  if ( v10 )
  {
    v12 = *(_WORD *)(v10 + 8);
    if ( v12 )
    {
      v8 = *(_WORD *)(v10 + 8);
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v12, 0, 0LL, v21, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v18 = *(_QWORD *)(v5 + 672);
        v11 = v21[0] + v20;
        v19 = v21[0];
        v24 = 1;
        *(_WORD *)(v18 + 10) = v21[0];
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x1Fu,
          (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
      }
    }
  }
  if ( v11 > 1u )
  {
    v13 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * v11, 0x63707352u);
    if ( v13 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v8, 0x30u, &v26, &v22, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v5 + 736) = v26.ReportID;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v8, 0, v13, &v19, a4);
        if ( SpecificValueCaps >= 0 )
        {
          v15 = v19;
          if ( v19 )
          {
            p_ReportID = &v13->ReportID;
            v14 = v19;
            do
            {
              if ( *p_ReportID == v26.ReportID )
                ++v7;
              p_ReportID += 72;
              --v14;
            }
            while ( v14 );
          }
          if ( v24 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v23, 0, &v13[v19], &v20, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v14 = v19;
              if ( v20 )
              {
                do
                {
                  if ( (unsigned __int16)v14 >= v11 )
                    break;
                  v15 = 9LL * (unsigned __int16)v14;
                  if ( v13[(unsigned __int16)v14].ReportID == v26.ReportID )
                    ++v7;
                  LOWORD(v14) = v14 + 1;
                }
                while ( (unsigned __int16)(v14 - v19) < v20 );
                v5 = v25;
              }
            }
          }
          if ( v7 <= 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
          *(_DWORD *)(v5 + 296) = v7;
        }
      }
      Win32FreePool((__int64)v13);
    }
  }
  return SpecificValueCaps >= 0;
}
