/*
 * XREFs of RIMIsParallelDevice @ 0x1C0140E44
 * Callers:
 *     RIMAssignTouchType @ 0x1C013D74C (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0141468 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMValidateAllCollectionUsages @ 0x1C0141B1C (RIMValidateAllCollectionUsages.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C014532C (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r12
  _DWORD *v8; // rdi
  unsigned int v9; // eax
  int v10; // ecx
  unsigned __int16 v11; // r15
  int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int v18; // ecx
  unsigned int *v19; // rax
  _WORD v21[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v22; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v23; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v24; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v25; // [rsp+50h] [rbp-69h]
  __int64 v26; // [rsp+58h] [rbp-61h] BYREF
  __int64 v27; // [rsp+60h] [rbp-59h] BYREF
  __int64 v28; // [rsp+68h] [rbp-51h]
  unsigned int *v29; // [rsp+70h] [rbp-49h]
  _BYTE v30[80]; // [rsp+80h] [rbp-39h] BYREF

  v3 = 0;
  v29 = a3;
  v28 = a1;
  v5 = a1;
  v26 = 0LL;
  v27 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(v30, 0, 0x48uLL);
  v8 = *(_DWORD **)(v5 + 712);
  v9 = 0;
  v23 = 0;
  v22 = 0;
  v21[0] = 1;
  v24 = 0;
  v25 = 0;
  if ( gpfnHidP_GetLinkCollectionNodes )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))gpfnHidP_GetLinkCollectionNodes)(0LL, &v24, a2);
    v9 = v24;
  }
  else
  {
    v10 = -1073741637;
  }
  if ( v10 == -1072627705 && v9 > 1 )
  {
    v8[3] = v9;
    v11 = 1;
    if ( v24 > 1 )
    {
      v12 = 0;
      do
      {
        if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v11, 81, (__int64)v30, (__int64)v21, a2) == 1114112 )
        {
          ++*v8;
          if ( v12 )
          {
            if ( v6 && !v25 )
            {
              v17 = RIMValidateAllCollectionUsages(v6, v23, v7, v22, v11, a2);
              v18 = v25;
              if ( !v17 )
                v18 = 1;
              v25 = v18;
            }
          }
          else
          {
            v13 = RIMRetrieveAllLinkIndexUsages(
                    v11,
                    a2,
                    (unsigned int)&v23,
                    (unsigned int)&v26,
                    (__int64)&v22,
                    (__int64)&v27);
            v6 = v26;
            if ( v13 != 1114112 )
            {
              if ( v26 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v14) = 3;
                WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 27, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
              }
            }
            v7 = v27;
            v12 = 1;
          }
        }
        ++v11;
        v21[0] = 1;
      }
      while ( v11 < v24 );
      v5 = v28;
      if ( v6 )
        Win32FreePool(v6);
      if ( v7 )
        Win32FreePool(v7);
    }
    v21[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, 0, 84, (__int64)v30, (__int64)v21, a2) == 1114112 )
    {
      v8[8] |= 1u;
      *(_DWORD *)(v5 + 24) = 3;
    }
    if ( *v8 > 1u && (v8[8] & 1) == 0 )
      *(_DWORD *)(v5 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 3) <= 1 )
    {
      v19 = v29;
      v3 = 1;
      *(_DWORD *)(v5 + 312) |= 2u;
      *v19 = v24;
    }
  }
  return v3;
}
