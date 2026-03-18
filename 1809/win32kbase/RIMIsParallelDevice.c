/*
 * XREFs of RIMIsParallelDevice @ 0x1C01186B4
 * Callers:
 *     RIMAssignTouchType @ 0x1C0114FC4 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0118CAC (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMValidateAllCollectionUsages @ 0x1C011930C (RIMValidateAllCollectionUsages.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r12
  unsigned int v8; // eax
  int v9; // r13d
  int v10; // ecx
  unsigned __int16 v11; // r15
  __int64 v12; // rsi
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
  __int64 v29; // [rsp+70h] [rbp-49h]
  unsigned int *v30; // [rsp+78h] [rbp-41h]
  _BYTE v31[80]; // [rsp+80h] [rbp-39h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a1 + 704);
  v5 = a1;
  v30 = a3;
  v6 = 0LL;
  v28 = a2;
  v7 = 0LL;
  v29 = a1;
  v21[0] = 1;
  v8 = 0;
  v26 = 0LL;
  v9 = 0;
  v27 = 0LL;
  v23 = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  if ( gpfnHidP_GetLinkCollectionNodes )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))gpfnHidP_GetLinkCollectionNodes)(0LL, &v24, a2);
    v8 = v24;
  }
  else
  {
    v10 = -1073741637;
  }
  if ( v10 == -1072627705 && v8 > 1 )
  {
    v4[3] = v8;
    v11 = 1;
    if ( v24 > 1 )
    {
      v12 = v28;
      do
      {
        if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v11, 81, (__int64)v31, (__int64)v21, v12) == 1114112 )
        {
          ++*v4;
          if ( v9 )
          {
            if ( v6 && !v25 )
            {
              v17 = RIMValidateAllCollectionUsages(v6, v23, v7, v22, v11, v12);
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
                    v12,
                    (unsigned int)&v23,
                    (unsigned int)&v26,
                    (__int64)&v22,
                    (__int64)&v27);
            v6 = v26;
            if ( v13 != 1114112 )
            {
              if ( v26 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
              WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x1Bu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
            }
            v7 = v27;
            v9 = 1;
          }
        }
        ++v11;
        v21[0] = 1;
      }
      while ( v11 < v24 );
      v5 = v29;
      if ( v6 )
        Win32FreePool(v6);
      if ( v7 )
        Win32FreePool(v7);
    }
    v21[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, 0, 84, (__int64)v31, (__int64)v21, v28) == 1114112 )
    {
      v4[8] |= 1u;
      *(_DWORD *)(v5 + 24) = 3;
    }
    if ( *v4 > 1u && (v4[8] & 1) == 0 )
      *(_DWORD *)(v5 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 3) <= 1 )
    {
      v19 = v30;
      v3 = 1;
      *(_DWORD *)(v5 + 308) |= 8u;
      *v19 = v24;
    }
  }
  return v3;
}
