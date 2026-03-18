/*
 * XREFs of HUBACPI_EvalAcpiMethodEx @ 0x1C007FE68
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

__int64 __fastcall HUBACPI_EvalAcpiMethodEx(__int64 a1, unsigned __int16 *a2, int a3, __int64 a4)
{
  __int64 v7; // rax
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
  __int64 v19; // rax
  __int64 v20; // rbx
  _DWORD *v21; // rax
  __int64 v23; // [rsp+28h] [rbp-61h]
  void *v24; // [rsp+50h] [rbp-39h] BYREF
  __int64 v25; // [rsp+58h] [rbp-31h] BYREF
  __int64 v26; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v27[7]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+1Fh]
  int pszSrc; // [rsp+100h] [rbp+77h] BYREF

  pszSrc = a3;
  v25 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  memset(v27, 0, sizeof(v27));
  v7 = *(_QWORD *)(a1 + 16);
  v24 = 0LL;
  v27[4] = v7;
  LODWORD(v27[0]) = 56;
  v27[3] = 0x100000001LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v27,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         276LL,
         &v26,
         &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v10 = 21;
    goto LABEL_4;
  }
  v11 = *a2;
  v12 = 256LL;
  if ( (unsigned __int64)(v11 + 6) > 0x100 )
  {
    v9 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x16u, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
    goto LABEL_31;
  }
  memset(v24, 0, 0x114uLL);
  v13 = *((_QWORD *)a2 + 1);
  *(_DWORD *)v24 = 1181312321;
  *((_DWORD *)v24 + 65) = 276;
  v14 = (char *)v24 + 4;
  v15 = v13 - ((_QWORD)v24 + 4);
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
  RtlStringCbCatNA((NTSTRSAFE_PSTR)v24 + 4, v15, ".", 1uLL);
  RtlStringCbCatNA((NTSTRSAFE_PSTR)v24 + 4, v18, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 16));
  v25 = 0LL;
  v20 = v19;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v19,
         &v25);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v10 = 23;
    goto LABEL_4;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
         WdfDriverGlobals,
         v20,
         v25,
         3325976LL,
         v26,
         0LL,
         a4,
         0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v10 = 24;
    goto LABEL_4;
  }
  v29 = 0LL;
  v28 = 0x200000010LL;
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64 *))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v25,
          v20,
          &v28)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x19u, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v25);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v10 = 26;
LABEL_4:
    LODWORD(v23) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v10,
      (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
      v23);
    goto LABEL_31;
  }
  v21 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                    WdfDriverGlobals,
                    a4,
                    0LL);
  if ( *v21 != 1114596673 || !v21[2] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x1Bu, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
    v9 = -1072431089;
  }
LABEL_31:
  if ( v25 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v26 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v9;
}
