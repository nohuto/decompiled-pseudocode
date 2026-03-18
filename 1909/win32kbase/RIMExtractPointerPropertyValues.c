/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x1C013C920
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0169AE8 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     GetPreparsedData @ 0x1C013A960 (GetPreparsedData.c)
 *     SignExtendLong @ 0x1C0140370 (SignExtendLong.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C0142D10 (rimHidP_GetUsageValue.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // r8
  struct _USAGE_AND_PAGE *v14; // rsi
  __int64 v15; // r8
  unsigned int v17; // r15d
  __int64 v18; // r13
  int SpecificValueCaps; // eax
  __int64 v20; // r10
  int v21; // eax
  __int64 v22; // rdx
  int v23; // r8d
  _DWORD *v24; // r13
  __int64 v25; // r8
  __int64 v26; // r9
  int Usages; // eax
  unsigned int v28; // ecx
  unsigned __int16 v30; // [rsp+44h] [rbp-124h]
  __int16 v31[2]; // [rsp+48h] [rbp-120h] BYREF
  int UsageValue; // [rsp+4Ch] [rbp-11Ch]
  int v33; // [rsp+50h] [rbp-118h]
  unsigned int v34; // [rsp+54h] [rbp-114h]
  int v35; // [rsp+58h] [rbp-110h]
  unsigned int v36; // [rsp+5Ch] [rbp-10Ch] BYREF
  struct _HIDP_PREPARSED_DATA *v37; // [rsp+60h] [rbp-108h] BYREF
  int v38; // [rsp+68h] [rbp-100h]
  unsigned int v39; // [rsp+6Ch] [rbp-FCh]
  int v40; // [rsp+70h] [rbp-F8h]
  unsigned int v41; // [rsp+80h] [rbp-E8h]
  char *v42; // [rsp+88h] [rbp-E0h]
  __int64 v43; // [rsp+90h] [rbp-D8h]
  __int64 v44; // [rsp+98h] [rbp-D0h]
  __int64 v45; // [rsp+A8h] [rbp-C0h]
  struct _USAGE_AND_PAGE *v46; // [rsp+B0h] [rbp-B8h]
  __int64 v47; // [rsp+B8h] [rbp-B0h]
  _DWORD v48[20]; // [rsp+D0h] [rbp-98h] BYREF

  v42 = a4;
  v34 = a3;
  v7 = a2;
  v41 = a5;
  v43 = a6;
  v44 = a7;
  v9 = 0;
  v37 = 0LL;
  v10 = 0;
  v33 = 0;
  v35 = 0;
  memset(v48, 0, 0x48uLL);
  v31[0] = 1;
  if ( !a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  if ( a1 )
  {
    if ( a5 <= *(_DWORD *)(a1 + 336) )
    {
      v14 = (struct _USAGE_AND_PAGE *)Win32AllocPoolZInit(4LL * *(unsigned int *)(a1 + 984), 2020635477LL);
      v46 = v14;
      if ( v14 )
      {
        if ( !(unsigned int)GetPreparsedData(a1, &v37, v15) )
        {
          Win32FreePool((__int64)v14);
          return 0LL;
        }
        v36 = *(_DWORD *)(a1 + 984);
        v17 = 0;
        v40 = 0;
        while ( v17 < a5 )
        {
          v30 = v7;
          if ( *(_DWORD *)(a1 + 356) == (unsigned __int8)*v42 )
          {
            v31[0] = 1;
            v18 = 28LL * v17;
            v45 = v18;
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                                  0,
                                  *(unsigned __int16 *)(v43 + v18 + 24),
                                  a2,
                                  *(unsigned __int16 *)(v43 + v18 + 26),
                                  (__int64)v48,
                                  (__int64)v31,
                                  (__int64)v37);
            UsageValue = SpecificValueCaps;
            v20 = v43;
            if ( *(int *)(v43 + v18 + 4) > 1
              || (int)(SpecificValueCaps + 0x80000000) < 0
              || SpecificValueCaps == -1072627705 )
            {
              v21 = 1;
              v38 = 1;
            }
            else
            {
              v21 = 0;
              v38 = 0;
            }
            if ( v21 )
            {
              v22 = *(_QWORD *)(a1 + 712);
              v47 = v22;
              if ( v22 && *(_WORD *)(v22 + 8) && (unsigned __int16)(*(_WORD *)(v43 + v18 + 26) - 48) <= 1u )
                v23 = *(unsigned __int16 *)(*(_QWORD *)(v22 + 24) + 8LL * a2 + 2);
              else
                v23 = v30;
              v24 = (_DWORD *)(v44 + 4LL * v17);
              UsageValue = rimHidP_GetUsageValue(
                             0,
                             *(unsigned __int16 *)(v45 + v43 + 24),
                             v23,
                             *(unsigned __int16 *)(v45 + v43 + 26),
                             (__int64)v24,
                             (__int64)v37,
                             (__int64)v42,
                             v34);
              if ( UsageValue < 0 )
                break;
              if ( v48[10] < 0 )
                *v24 = SignExtendLong((unsigned int)*v24, HIWORD(v48[4]));
            }
            else
            {
              v25 = v17;
              v26 = v44;
              *(_DWORD *)(v44 + 4LL * v17) = 0;
              if ( !v35 )
              {
                if ( gpfnHidP_GetUsagesEx )
                {
                  Usages = gpfnHidP_GetUsagesEx(HidP_Input, a2, v14, &v36, v37, v42, v34);
                  v20 = v43;
                  v25 = v17;
                  v26 = v44;
                }
                else
                {
                  Usages = -1073741637;
                }
                UsageValue = Usages;
                v35 = 1;
                if ( Usages < 0 )
                  break;
              }
              v28 = 0;
              v39 = 0;
              while ( v28 < v36 )
              {
                if ( v14[v28].UsagePage == *(_WORD *)(v20 + v18 + 24) && v14[v28].Usage == *(_WORD *)(v20 + v18 + 26) )
                  *(_DWORD *)(v26 + 4 * v25) = 1;
                v39 = ++v28;
              }
            }
            ++v10;
            v7 = a2;
            v33 = v10;
          }
          v40 = ++v17;
        }
        Win32FreePool((__int64)v14);
      }
    }
  }
  LOBYTE(v9) = v10 == a5;
  return v9;
}
