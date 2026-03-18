/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x1C00EBBB0
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0115D14 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     GetPreparsedData @ 0x1C004DD54 (GetPreparsedData.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     SignExtendLong @ 0x1C00EE080 (SignExtendLong.c)
 *     rimHidP_GetUsageValue @ 0x1C00F0DA4 (rimHidP_GetUsageValue.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMExtractPointerPropertyValues(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // r13
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _USAGE_AND_PAGE *v13; // rsi
  unsigned int v15; // r15d
  __int64 v16; // r13
  int SpecificValueCaps; // eax
  __int64 v18; // r10
  int v19; // eax
  __int64 v20; // rdx
  int v21; // r8d
  _DWORD *v22; // r13
  __int64 v23; // r8
  __int64 v24; // r9
  int Usages; // eax
  unsigned int v26; // ecx
  unsigned __int16 v28; // [rsp+44h] [rbp-124h]
  unsigned __int16 v29[2]; // [rsp+48h] [rbp-120h] BYREF
  int UsageValue; // [rsp+4Ch] [rbp-11Ch]
  int v31; // [rsp+50h] [rbp-118h]
  unsigned int v32; // [rsp+54h] [rbp-114h]
  int v33; // [rsp+58h] [rbp-110h]
  unsigned int v34; // [rsp+5Ch] [rbp-10Ch] BYREF
  struct _HIDP_PREPARSED_DATA *v35; // [rsp+60h] [rbp-108h] BYREF
  int v36; // [rsp+68h] [rbp-100h]
  unsigned int v37; // [rsp+6Ch] [rbp-FCh]
  int v38; // [rsp+70h] [rbp-F8h]
  unsigned int v39; // [rsp+80h] [rbp-E8h]
  char *v40; // [rsp+88h] [rbp-E0h]
  __int64 v41; // [rsp+90h] [rbp-D8h]
  __int64 v42; // [rsp+98h] [rbp-D0h]
  __int64 v43; // [rsp+A8h] [rbp-C0h]
  struct _USAGE_AND_PAGE *v44; // [rsp+B0h] [rbp-B8h]
  __int64 v45; // [rsp+B8h] [rbp-B0h]
  struct _HIDP_VALUE_CAPS v46; // [rsp+D0h] [rbp-98h] BYREF

  v40 = a4;
  v32 = a3;
  v7 = a2;
  v39 = a5;
  v41 = a6;
  v42 = a7;
  v9 = 0;
  v35 = 0LL;
  v10 = 0;
  v31 = 0;
  v33 = 0;
  memset(&v46, 0, sizeof(v46));
  v29[0] = 1;
  if ( !a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  if ( a1 )
  {
    if ( a5 <= *(_DWORD *)(a1 + 296) )
    {
      v13 = (struct _USAGE_AND_PAGE *)Win32AllocPoolZInit(4LL * *(unsigned int *)(a1 + 944), 0x78707355u);
      v44 = v13;
      if ( v13 )
      {
        if ( !(unsigned int)GetPreparsedData(a1, &v35) )
        {
          Win32FreePool((__int64)v13);
          return 0LL;
        }
        v34 = *(_DWORD *)(a1 + 944);
        v15 = 0;
        v38 = 0;
        while ( v15 < a5 )
        {
          v28 = v7;
          if ( *(_DWORD *)(a1 + 316) == (unsigned __int8)*v40 )
          {
            v29[0] = 1;
            v16 = 28LL * v15;
            v43 = v16;
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                                  HidP_Input,
                                  *(_WORD *)(v41 + v16 + 24),
                                  a2,
                                  *(_WORD *)(v41 + v16 + 26),
                                  &v46,
                                  v29,
                                  v35);
            UsageValue = SpecificValueCaps;
            v18 = v41;
            if ( *(int *)(v41 + v16 + 4) > 1
              || (int)(SpecificValueCaps + 0x80000000) < 0
              || SpecificValueCaps == -1072627705 )
            {
              v19 = 1;
              v36 = 1;
            }
            else
            {
              v19 = 0;
              v36 = 0;
            }
            if ( v19 )
            {
              v20 = *(_QWORD *)(a1 + 672);
              v45 = v20;
              if ( v20 && *(_WORD *)(v20 + 8) && (unsigned __int16)(*(_WORD *)(v41 + v16 + 26) - 48) <= 1u )
                v21 = *(unsigned __int16 *)(*(_QWORD *)(v20 + 24) + 8LL * a2 + 2);
              else
                v21 = v28;
              v22 = (_DWORD *)(v42 + 4LL * v15);
              UsageValue = rimHidP_GetUsageValue(
                             0,
                             *(unsigned __int16 *)(v43 + v41 + 24),
                             v21,
                             *(unsigned __int16 *)(v43 + v41 + 26),
                             (__int64)v22,
                             (__int64)v35,
                             (__int64)v40,
                             v32);
              if ( UsageValue < 0 )
                break;
              if ( v46.LogicalMin < 0 )
                *v22 = SignExtendLong((unsigned int)*v22, v46.BitSize);
            }
            else
            {
              v23 = v15;
              v24 = v42;
              *(_DWORD *)(v42 + 4LL * v15) = 0;
              if ( !v33 )
              {
                if ( gpfnHidP_GetUsagesEx )
                {
                  Usages = gpfnHidP_GetUsagesEx(HidP_Input, a2, v13, &v34, v35, v40, v32);
                  v18 = v41;
                  v23 = v15;
                  v24 = v42;
                }
                else
                {
                  Usages = -1073741637;
                }
                UsageValue = Usages;
                v33 = 1;
                if ( Usages < 0 )
                  break;
              }
              v26 = 0;
              v37 = 0;
              while ( v26 < v34 )
              {
                if ( v13[v26].UsagePage == *(_WORD *)(v18 + v16 + 24) && v13[v26].Usage == *(_WORD *)(v18 + v16 + 26) )
                  *(_DWORD *)(v24 + 4 * v23) = 1;
                v37 = ++v26;
              }
            }
            ++v10;
            v7 = a2;
            v31 = v10;
          }
          v38 = ++v15;
        }
        Win32FreePool((__int64)v13);
      }
    }
  }
  LOBYTE(v9) = v10 == a5;
  return v9;
}
