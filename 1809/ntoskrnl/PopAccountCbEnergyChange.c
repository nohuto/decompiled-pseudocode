/*
 * XREFs of PopAccountCbEnergyChange @ 0x14071B7C8
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

int PopAccountCbEnergyChange()
{
  __int64 *v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rdx
  const CHAR *v5; // r10
  const CHAR *v6; // rbx
  const CHAR *v7; // rdi
  const CHAR *v8; // rsi
  const CHAR *v9; // r14
  const CHAR *v10; // r15
  const CHAR *v11; // r12
  const CHAR *v12; // r13
  unsigned __int64 v13; // rax
  LPCSTR v14; // r11
  unsigned int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+D8h] [rbp-30h] BYREF
  __int128 *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  int *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+148h] [rbp+40h] BYREF
  unsigned int *v41; // [rsp+158h] [rbp+50h]
  __int64 v42; // [rsp+160h] [rbp+58h]
  int *v43; // [rsp+168h] [rbp+60h]
  __int64 v44; // [rsp+170h] [rbp+68h]
  unsigned int *v45; // [rsp+178h] [rbp+70h]
  __int64 v46; // [rsp+180h] [rbp+78h]
  int *v47; // [rsp+188h] [rbp+80h]
  __int64 v48; // [rsp+190h] [rbp+88h]
  int *v49; // [rsp+198h] [rbp+90h]
  __int64 v50; // [rsp+1A0h] [rbp+98h]
  int *v51; // [rsp+1A8h] [rbp+A0h]
  __int64 v52; // [rsp+1B0h] [rbp+A8h]

  v0 = (__int64 *)qword_1404189C0;
  v1 = 0LL;
  *((_QWORD *)&v23 + 1) = 0LL;
  if ( (__int64 *)qword_1404189C0 != &qword_1404189C0 )
  {
    do
    {
      v1 += v0[25];
      v0 = (__int64 *)*v0;
    }
    while ( v0 != &qword_1404189C0 );
    *((_QWORD *)&v23 + 1) = v1;
  }
  v2 = qword_1404189D0;
  v3 = 0;
  LODWORD(v23) = 0;
  if ( (__int64 *)qword_1404189D0 != &qword_1404189D0 )
  {
    do
    {
      v3 |= *(_DWORD *)(v2 + 128);
      v2 = *(_QWORD *)v2;
    }
    while ( (__int64 *)v2 != &qword_1404189D0 );
    LODWORD(v23) = v3;
  }
  if ( v3 != (_DWORD)xmmword_140418B90 || v1 != *((_QWORD *)&xmmword_140418B90 + 1) )
  {
    v4 = v1 - *((_QWORD *)&xmmword_140418B90 + 1);
    xmmword_140418B90 = v23;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v24 = v1;
      v5 = "Energy Counter Unavailable";
      if ( (v3 & 1) == 0 )
        v5 = "-";
      v17 = dword_1404189B4;
      *(_QWORD *)&v23 = v4;
      v6 = "FCC Unavailable";
      v7 = "Capacity Unavailable";
      v8 = "AC Power";
      v9 = "Battery Discharging";
      if ( (v3 & 4) == 0 )
        v6 = "-";
      v10 = "Battery Charging";
      v11 = "Battery Critical";
      if ( (v3 & 8) == 0 )
        v7 = "-";
      v12 = "Battery charge limiting mode";
      if ( (unk_1404189E0 & 1) == 0 )
        v8 = "DC Power";
      if ( (unk_1404189E0 & 2) == 0 )
        v9 = "-";
      if ( (unk_1404189E0 & 4) == 0 )
        v10 = "-";
      if ( (unk_1404189E0 & 8) == 0 )
        v11 = "-";
      if ( (unk_1404189E0 & 0x10) == 0 )
        v12 = "-";
      if ( HIDWORD(qword_140418A00) )
      {
        v16 = ((HIDWORD(qword_140418A00) >> 1) + 100 * dword_1404189E4) / HIDWORD(qword_140418A00);
        v13 = 100000 * (unsigned __int64)dword_1404189E4 / HIDWORD(qword_140418A00);
      }
      else
      {
        v16 = 0;
        LODWORD(v13) = 0;
      }
      v18 = v13;
      v19 = dword_1404189E4;
      v21 = unk_1404189E8;
      v22 = qword_1404189EC;
      v26 = &v24;
      v20 = HIDWORD(qword_140418A00);
      v27 = 8LL;
      TlgCreateSz(&pDesc, v5);
      TlgCreateSz(&v29, v14);
      TlgCreateSz(&v30, v6);
      TlgCreateSz(&v31, v7);
      v33 = 8LL;
      v32 = &v23;
      v34 = &v17;
      v35 = 4LL;
      TlgCreateSz(&v36, v8);
      TlgCreateSz(&v37, v9);
      TlgCreateSz(&v38, v10);
      TlgCreateSz(&v39, v11);
      TlgCreateSz(&v40, v12);
      v42 = 4LL;
      v43 = &v18;
      v41 = &v16;
      v45 = &v19;
      v47 = &v20;
      v49 = &v21;
      v51 = &v22;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      LODWORD(v1) = TlgWrite(&pCallbackContext, &unk_14036F9AC, 0LL, 0LL, 0x14u, &pData);
    }
  }
  return v1;
}
