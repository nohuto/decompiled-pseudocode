/*
 * XREFs of HUBACPI_EvaluateDsmMethod @ 0x1C007F978
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C00806B0 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1C003B204 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBACPI_EvaluateDsmMethod(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v8; // eax
  unsigned int v9; // esi
  unsigned __int16 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  char *v14; // rcx
  size_t v15; // rdx
  char v16; // al
  char *v17; // rax
  size_t v18; // rdx
  __int64 v19; // r12
  _WORD *v20; // rbx
  char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  _DWORD *v25; // rax
  __int64 v27; // [rsp+30h] [rbp-71h]
  void *v28; // [rsp+58h] [rbp-49h] BYREF
  __int64 v29; // [rsp+60h] [rbp-41h] BYREF
  __int64 v30; // [rsp+68h] [rbp-39h]
  __int64 v31; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v32[7]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+B8h] [rbp+17h]

  v30 = a6;
  v33 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  memset(v32, 0, sizeof(v32));
  v32[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v32[0]) = 56;
  v32[3] = 0x100000001LL;
  v28 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v32,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         312LL,
         &v31,
         &v28);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_36;
    v10 = 14;
    goto LABEL_4;
  }
  v11 = *a2;
  v12 = 256LL;
  if ( (unsigned __int64)(v11 + 6) <= 0x100 )
  {
    memset(v28, 0, 0x138uLL);
    v13 = *((_QWORD *)a2 + 1);
    *(_DWORD *)v28 = 1181312321;
    *((_DWORD *)v28 + 65) = 276;
    *((_DWORD *)v28 + 66) = 4;
    v14 = (char *)v28 + 4;
    v15 = v13 - ((_QWORD)v28 + 4);
    do
    {
      if ( !(v12 + v11 - 256) )
        break;
      v16 = v14[v15];
      if ( !v16 )
        break;
      *v14++ = v16;
      --v12;
    }
    while ( v12 );
    v17 = v14 - 1;
    if ( v12 )
      v17 = v14;
    *v17 = 0;
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v28 + 4, v15, ".", 1uLL);
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v28 + 4, v18, "_DSM", 4uLL);
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v29 = 0LL;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           0LL,
           v19,
           &v29);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v20 = v28;
      v21 = (char *)v28 + 272;
      *((_DWORD *)v28 + 67) = 1048578;
      memcpy_s(v21, 0x10uLL, &GUID_USB_ACPI_DSM, 0x10uLL);
      LOWORD(v22) = v20[135];
      if ( (unsigned __int16)v22 >= 4u )
        v22 = (unsigned __int16)v22;
      else
        v22 = 4LL;
      v23 = v30;
      *(_QWORD *)((char *)v20 + v22 + 272) = 0x40000LL;
      *(_DWORD *)((char *)v20 + v22 + 280) = 0x40000;
      *(_DWORD *)((char *)v20 + v22 + 284) = 2;
      *(_DWORD *)((char *)v20 + v22 + 288) = 3;
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
              WdfDriverGlobals,
              v19,
              v29,
              3325976LL,
              v31,
              0LL,
              v23,
              0LL);
      v9 = v24;
      if ( v24 >= 0 )
      {
        v34 = 0LL;
        v33 = 0x200000010LL;
        if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64 *))(WdfFunctions_01015
                                                                                                  + 2024))(
                WdfDriverGlobals,
                v29,
                v19,
                &v33)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2520),
            2u,
            3u,
            0x12u,
            (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
        }
        v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
               WdfDriverGlobals,
               v29);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741810 )
        {
          v25 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            v30,
                            0LL);
          if ( *v25 != 1114596673 || !v25[2] )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                *(_QWORD *)(a1 + 2520),
                2u,
                3u,
                0x14u,
                (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
            v9 = -1072431089;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = 19;
          LODWORD(v27) = v9;
          goto LABEL_5;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 17;
        LODWORD(v27) = v24;
        goto LABEL_5;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 16;
LABEL_4:
      LODWORD(v27) = v8;
LABEL_5:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v10,
        (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
        v27);
    }
  }
  else
  {
    v9 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xFu, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
  }
LABEL_36:
  if ( v29 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v31 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v9;
}
