/*
 * XREFs of StorpMarkDeviceFailed @ 0x1C003DA18
 * Callers:
 *     StorPortNotification @ 0x1C0005250 (StorPortNotification.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C0005F98 (RaidAdapterFindUnit.c)
 *     _TlgCreateWsz @ 0x1C000E488 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C000E4C8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C0017EAC (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssz @ 0x1C0039FD0 (McTemplateK0quuujjzssz.c)
 */

void __fastcall StorpMarkDeviceFailed(__int64 a1, __int64 a2, int a3, const WCHAR *a4)
{
  char v4; // di
  __int64 v7; // rcx
  unsigned __int8 v8; // r15
  unsigned __int8 v9; // r12
  __int64 Unit; // rdx
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  struct _DEVICE_OBJECT *v14; // rcx
  char v15; // cl
  const struct _TlgProvider_t *v16; // rcx
  __int64 v17; // r8
  unsigned __int64 *v18; // r14
  const EVENT_DESCRIPTOR *v19; // rdx
  int v20; // r9d
  int v21; // eax
  TraceLoggingHProvider v22; // rcx
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  char v25; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v26; // [rsp+71h] [rbp-8Fh] BYREF
  unsigned __int8 v27; // [rsp+72h] [rbp-8Eh] BYREF
  int v28; // [rsp+74h] [rbp-8Ch] BYREF
  LPCWSTR pwsz; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 *v32; // [rsp+90h] [rbp-70h]
  __int128 v33; // [rsp+98h] [rbp-68h] BYREF
  __int128 v34; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int128 *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  __int128 *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  int *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  char *v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  int v47; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int8 *v48; // [rsp+120h] [rbp+20h]
  int v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int8 *v51; // [rsp+130h] [rbp+30h]
  int v52; // [rsp+138h] [rbp+38h]
  int v53; // [rsp+13Ch] [rbp+3Ch]
  _DWORD *v54; // [rsp+140h] [rbp+40h]
  int v55; // [rsp+148h] [rbp+48h]
  int v56; // [rsp+14Ch] [rbp+4Ch]
  unsigned __int64 *v57; // [rsp+150h] [rbp+50h]
  _DWORD v58[2]; // [rsp+158h] [rbp+58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+170h] [rbp+70h] BYREF
  int *v61; // [rsp+180h] [rbp+80h]
  int v62; // [rsp+188h] [rbp+88h]
  int v63; // [rsp+18Ch] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+190h] [rbp+90h] BYREF
  struct _MCGEN_TRACE_CONTEXT psz; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 retaddr; // [rsp+208h] [rbp+108h]

  pwsz = a4;
  v4 = -1;
  v31 = 0LL;
  HIBYTE(v28) = -1;
  v32 = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = -1;
  v33 = 0uLL;
  v9 = -1;
  psz.RegistrationHandle = 0LL;
  LOBYTE(psz.Logger) = 0;
  memset(&psz.MatchAnyKeyword, 0, 17);
  RaidDriverGetName(v7, (__int64)&v31);
  v34 = *(_OWORD *)(a1 + 5128);
  if ( a2 )
  {
    if ( *(_WORD *)a2 != 1 || *(_DWORD *)(a2 + 4) < 4u )
      goto LABEL_13;
    v8 = *(_BYTE *)(a2 + 9);
    v9 = *(_BYTE *)(a2 + 10);
    LOBYTE(v28) = *(_BYTE *)(a2 + 8);
    v4 = v28;
    BYTE1(v28) = v8;
    BYTE2(v28) = v9;
    Unit = RaidAdapterFindUnit(a1, v28);
    v12 = v28;
    if ( !Unit )
      goto LABEL_14;
    v33 = *(_OWORD *)(Unit + 1720);
    v13 = *(_QWORD *)(Unit + 104);
    if ( v13 )
    {
      psz.RegistrationHandle = *(_QWORD *)(v13 + 8);
      *(_OWORD *)&psz.MatchAnyKeyword = *(_OWORD *)(*(_QWORD *)(Unit + 104) + 16LL);
    }
    if ( (((a3 & 1) != 0) & (unsigned __int8)~(*(_BYTE *)(Unit + 162) >> 5)) == 0 )
      goto LABEL_13;
    v14 = *(struct _DEVICE_OBJECT **)(Unit + 8);
    *(_BYTE *)(Unit + 162) |= 0x20u;
LABEL_12:
    IoInvalidateDeviceState(v14);
LABEL_13:
    v12 = v4;
    goto LABEL_14;
  }
  v15 = *(_BYTE *)(a1 + 110);
  v12 = -1;
  if ( (v15 & 4) == 0 && (a3 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 110) = v15 | 4;
    v14 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    goto LABEL_12;
  }
LABEL_14:
  DbgLogRequest(a1, 44, a1, retaddr, (__int64)pwsz, v9 | (unsigned __int64)((v8 | (v12 << 8)) << 8), 0LL);
  v18 = v32;
  if ( !StorEtwLoggingEnabled )
    goto LABEL_21;
  if ( (a3 & 1) != 0 )
  {
    if ( (byte_1C0061745 & 1) == 0 )
      goto LABEL_21;
    v19 = (const EVENT_DESCRIPTOR *)&EventMarkAndRemoveFailedDevice;
  }
  else
  {
    if ( (byte_1C0061745 & 1) == 0 )
      goto LABEL_21;
    v19 = (const EVENT_DESCRIPTOR *)&EventMarkDevicePotentiallyFailed;
  }
  McTemplateK0quuujjzssz(
    (__int64)v16,
    v19,
    v17,
    *(_DWORD *)(a1 + 56),
    v4,
    v8,
    v9,
    (__int64)&v33,
    (__int64)&v34,
    v32,
    &psz,
    (const struct _MCGEN_TRACE_CONTEXT *)&psz.MatchAnyKeyword,
    (unsigned __int64 *)pwsz);
LABEL_21:
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn(v16, 0x400000000000uLL) )
    {
      v21 = *(_DWORD *)(a1 + 56);
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v53 = 0;
      v56 = 0;
      v58[1] = 0;
      v28 = v21;
      v36 = &v34;
      v39 = &v33;
      v42 = &v28;
      v45 = &v25;
      v48 = &v26;
      v51 = &v27;
      v54 = v58;
      v37 = 16;
      v40 = 16;
      v58[0] = (unsigned __int16)v31;
      v25 = v4;
      v26 = v8;
      v27 = v9;
      v30 = a3;
      v43 = 4;
      v46 = v20;
      v49 = v20;
      v52 = v20;
      v55 = 2;
      v57 = v18;
      TlgCreateSz(&pDesc, (LPCSTR)&psz);
      TlgCreateSz(&v60, (LPCSTR)&psz.MatchAnyKeyword);
      v63 = 0;
      v61 = &v30;
      v62 = 4;
      TlgCreateWsz(&v64, pwsz);
      TlgWrite(v22, &unk_1C0055C97, v23, v24, 0xEu, &pData);
    }
  }
}
