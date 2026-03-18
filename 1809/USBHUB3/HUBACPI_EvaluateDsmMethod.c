/*
 * XREFs of HUBACPI_EvaluateDsmMethod @ 0x1C0078184
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0078D48 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1C0036EB4 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
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
  unsigned int v9; // edi
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
  _WORD *v20; // rdi
  char *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  _DWORD *v24; // rax
  __int64 v26; // [rsp+30h] [rbp-71h]
  void *v27; // [rsp+58h] [rbp-49h] BYREF
  __int64 v28; // [rsp+60h] [rbp-41h] BYREF
  __int64 v29; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v30[7]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v31[2]; // [rsp+A8h] [rbp+7h] BYREF

  v28 = 0LL;
  memset(v30, 0, sizeof(v30));
  v30[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v30[0]) = 56;
  v30[3] = 0x100000001LL;
  v27 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v30,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         312LL,
         &v29,
         &v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 14;
LABEL_3:
    LODWORD(v26) = v8;
LABEL_4:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v10,
      (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
      v26);
    goto LABEL_28;
  }
  v11 = *a2;
  v12 = 256LL;
  if ( (unsigned __int64)(v11 + 6) <= 0x100 )
  {
    memset(v27, 0, 0x138uLL);
    v13 = *((_QWORD *)a2 + 1);
    *(_DWORD *)v27 = 1181312321;
    *((_DWORD *)v27 + 65) = 276;
    *((_DWORD *)v27 + 66) = 4;
    v14 = (char *)v27 + 4;
    v15 = v13 - ((_QWORD)v27 + 4);
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
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v27 + 4, v15, ".", 1uLL);
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v27 + 4, v18, "_DSM", 4uLL);
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v28 = 0LL;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           0LL,
           v19,
           &v28);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 16;
      goto LABEL_3;
    }
    v20 = v27;
    v21 = (char *)v27 + 272;
    *((_DWORD *)v27 + 67) = 1048578;
    memcpy_s(v21, 0x10uLL, &GUID_USB_ACPI_DSM, 0x10uLL);
    LOWORD(v22) = v20[135];
    if ( (unsigned __int16)v22 >= 4u )
      v22 = (unsigned __int16)v22;
    else
      v22 = 4LL;
    *(_QWORD *)((char *)v20 + v22 + 272) = 0x40000LL;
    *(_DWORD *)((char *)v20 + v22 + 280) = 0x40000;
    *(_DWORD *)((char *)v20 + v22 + 284) = 2;
    *(_DWORD *)((char *)v20 + v22 + 288) = 3;
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
            WdfDriverGlobals,
            v19,
            v28,
            3325976LL,
            v29,
            0LL,
            a6,
            0LL);
    v9 = v23;
    if ( v23 < 0 )
    {
      v10 = 17;
      LODWORD(v26) = v23;
      goto LABEL_4;
    }
    v31[1] = 0LL;
    v31[0] = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
            WdfDriverGlobals,
            v28,
            v19,
            v31) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x12u, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v28);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741810 )
    {
      v10 = 19;
      LODWORD(v26) = v9;
      goto LABEL_4;
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      a6,
                      0LL);
    if ( *v24 != 1114596673 || !v24[2] )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x14u, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
      v9 = -1072431089;
    }
  }
  else
  {
    v9 = -1073741811;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xFu, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
  }
LABEL_28:
  if ( v28 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v29 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v9;
}
