/*
 * XREFs of McTemplateK0pqqqqqqqsssxqqqtn @ 0x1C0007064
 * Callers:
 *     Etw_ControllerCreate @ 0x1C003E34C (Etw_ControllerCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00029D4 (McGenEventWrite.c)
 */

ULONG McTemplateK0pqqqqqqqsssxqqqtn(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const struct _MCGEN_TRACE_CONTEXT *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ecx
  const struct _MCGEN_TRACE_CONTEXT *v7; // rdx
  __int64 v8; // rcx
  int v9; // ecx
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  int v11; // eax
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-D0h] BYREF
  va_list v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  va_list v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  va_list v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  va_list v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  va_list v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  va_list v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  va_list v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  va_list v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  const struct _MCGEN_TRACE_CONTEXT *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  const struct _MCGEN_TRACE_CONTEXT *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  struct _MCGEN_TRACE_CONTEXT *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  va_list v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  va_list v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  va_list v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  va_list v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  va_list v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  __int64 v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  __int64 v51; // [rsp+188h] [rbp+88h] BYREF
  va_list va; // [rsp+188h] [rbp+88h]
  __int64 v53; // [rsp+190h] [rbp+90h] BYREF
  va_list va1; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h] BYREF
  va_list va2; // [rsp+198h] [rbp+98h]
  __int64 v57; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va3; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va4; // [rsp+1A8h] [rbp+A8h]
  __int64 v61; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va5; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va6; // [rsp+1B8h] [rbp+B8h]
  __int64 v65; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va7; // [rsp+1C0h] [rbp+C0h]
  const struct _MCGEN_TRACE_CONTEXT *v67; // [rsp+1C8h] [rbp+C8h]
  const struct _MCGEN_TRACE_CONTEXT *v68; // [rsp+1D0h] [rbp+D0h]
  struct _MCGEN_TRACE_CONTEXT *v69; // [rsp+1D8h] [rbp+D8h]
  __int64 v70; // [rsp+1E0h] [rbp+E0h] BYREF
  va_list va8; // [rsp+1E0h] [rbp+E0h]
  __int64 v72; // [rsp+1E8h] [rbp+E8h] BYREF
  va_list va9; // [rsp+1E8h] [rbp+E8h]
  __int64 v74; // [rsp+1F0h] [rbp+F0h] BYREF
  va_list va10; // [rsp+1F0h] [rbp+F0h]
  __int64 v76; // [rsp+1F8h] [rbp+F8h] BYREF
  va_list va11; // [rsp+1F8h] [rbp+F8h]
  __int64 v78; // [rsp+200h] [rbp+100h] BYREF
  va_list va12; // [rsp+200h] [rbp+100h]
  __int64 v80; // [rsp+208h] [rbp+108h]
  __int64 v81; // [rsp+210h] [rbp+110h]
  va_list va13; // [rsp+218h] [rbp+118h] BYREF

  va_start(va13, a3);
  va_start(va12, a3);
  va_start(va11, a3);
  va_start(va10, a3);
  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v51 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v53 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v55 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v57 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v59 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v61 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v63 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v65 = va_arg(va8, _QWORD);
  v67 = va_arg(va8, const struct _MCGEN_TRACE_CONTEXT *);
  v68 = va_arg(va8, const struct _MCGEN_TRACE_CONTEXT *);
  v69 = va_arg(va8, struct _MCGEN_TRACE_CONTEXT *);
  va_copy(va9, va8);
  v70 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v72 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v74 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v76 = va_arg(va12, _QWORD);
  va_copy(va13, va12);
  v78 = va_arg(va13, _QWORD);
  v80 = va_arg(va13, _QWORD);
  v81 = va_arg(va13, _QWORD);
  v3 = v67;
  va_copy(v14, va);
  v15 = 8LL;
  va_copy(v16, va1);
  va_copy(v18, va2);
  va_copy(v20, va3);
  v17 = 4LL;
  va_copy(v22, va4);
  va_copy(v24, va5);
  va_copy(v26, va6);
  va_copy(v28, va7);
  v4 = -1LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  if ( v67 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *((_BYTE *)&v67->RegistrationHandle + v5) );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5;
  }
  v31 = v6;
  v32 = 0;
  if ( !v67 )
    v3 = &Context;
  v30 = v3;
  v7 = v68;
  if ( v68 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *((_BYTE *)&v68->RegistrationHandle + v8) );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5;
  }
  v34 = v9;
  v10 = v69;
  if ( !v68 )
    v7 = &Context;
  v35 = 0;
  v33 = v7;
  if ( v69 )
  {
    do
      ++v4;
    while ( *((_BYTE *)&v69->RegistrationHandle + v4) );
    v11 = v4 + 1;
  }
  else
  {
    v11 = 5;
  }
  v37 = v11;
  v38 = 0;
  va_copy(v39, va8);
  v40 = 8LL;
  va_copy(v41, va9);
  if ( !v69 )
    v10 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v36 = v10;
  va_copy(v43, va10);
  v42 = 4LL;
  va_copy(v45, va11);
  va_copy(v47, va12);
  v49 = v81;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 64LL;
  return McGenEventWrite(v10, &USBXHCI_ETW_EVENT_CONTROLLER_CREATE_V1, 0LL, 0x12u, &EventData);
}
