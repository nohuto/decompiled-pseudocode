/*
 * XREFs of HUBACPI_EnumChildren @ 0x1C00802A0
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C00806B0 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBACPI_EnumChildren(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  _DWORD *v11; // rax
  unsigned __int16 v12; // r9
  __int64 v13; // rax
  __int64 v15; // [rsp+28h] [rbp-61h]
  __int64 v16; // [rsp+50h] [rbp-39h] BYREF
  __int64 v17; // [rsp+58h] [rbp-31h] BYREF
  __int64 v18; // [rsp+60h] [rbp-29h] BYREF
  __int64 v19; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v20[7]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+B0h] [rbp+27h]

  v16 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(v20, 0, sizeof(v20));
  v4 = *(_QWORD *)(a1 + 16);
  v17 = 0LL;
  v20[4] = v4;
  LODWORD(v20[0]) = 56;
  v20[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v20,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         16LL,
         &v19,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_36;
    v7 = 28;
    goto LABEL_4;
  }
  v8 = v17;
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)v17 = 1214866753;
  *(_DWORD *)(v17 + 4) = 1;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v16 = 0LL;
  v10 = v9;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v9,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 29;
LABEL_4:
      LODWORD(v15) = v5;
LABEL_5:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v7,
        (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
        v15);
      goto LABEL_36;
    }
    goto LABEL_36;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
         WdfDriverGlobals,
         v10,
         v16,
         3325984LL,
         v19,
         0LL,
         a2,
         0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v22 = 0LL;
    v21 = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64 *))(WdfFunctions_01015 + 2024))(
            WdfDriverGlobals,
            v16,
            v10,
            &v21)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x1Fu, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
    }
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v16);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147483643 )
    {
      if ( v6 != -1073741637 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 32;
        LODWORD(v15) = v6;
        goto LABEL_5;
      }
      goto LABEL_36;
    }
    v11 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      a2,
                      &v18);
    if ( v18 == 20 )
    {
      if ( v6 != -2147483643 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v15) = v6;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            3u,
            0x21u,
            (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
            v15);
        }
        goto LABEL_35;
      }
      if ( *v11 == 1198089537 && v11[1] >= 0x14u )
        goto LABEL_36;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 34;
LABEL_34:
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, v12, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
      }
    }
    else
    {
      if ( v6 < 0 )
        goto LABEL_36;
      if ( *v11 == 1198089537 )
      {
        if ( v11[1] )
        {
          v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2208))(
                  WdfDriverGlobals,
                  v16);
          if ( v13 == v18 )
            goto LABEL_36;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 35;
        goto LABEL_34;
      }
    }
LABEL_35:
    v6 = -1072431089;
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 30;
    goto LABEL_4;
  }
LABEL_36:
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v19 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v6;
}
