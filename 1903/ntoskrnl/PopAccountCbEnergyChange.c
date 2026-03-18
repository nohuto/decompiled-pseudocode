/*
 * XREFs of PopAccountCbEnergyChange @ 0x140738970
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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
  __int128 v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+D8h] [rbp-30h] BYREF
  __int128 *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+148h] [rbp+40h] BYREF
  unsigned int *v40; // [rsp+158h] [rbp+50h]
  __int64 v41; // [rsp+160h] [rbp+58h]
  int *v42; // [rsp+168h] [rbp+60h]
  __int64 v43; // [rsp+170h] [rbp+68h]
  unsigned int *v44; // [rsp+178h] [rbp+70h]
  __int64 v45; // [rsp+180h] [rbp+78h]
  int *v46; // [rsp+188h] [rbp+80h]
  __int64 v47; // [rsp+190h] [rbp+88h]
  __int64 *v48; // [rsp+198h] [rbp+90h]
  __int64 v49; // [rsp+1A0h] [rbp+98h]
  char *v50; // [rsp+1A8h] [rbp+A0h]
  __int64 v51; // [rsp+1B0h] [rbp+A8h]

  v0 = (__int64 *)qword_140443220;
  v1 = 0LL;
  v17 = 0uLL;
  if ( (__int64 *)qword_140443220 != &qword_140443220 )
  {
    do
    {
      v1 += v0[25];
      v0 = (__int64 *)*v0;
    }
    while ( v0 != &qword_140443220 );
    *((_QWORD *)&v17 + 1) = v1;
  }
  v2 = qword_140443230;
  v3 = 0;
  LODWORD(v17) = 0;
  if ( (__int64 *)qword_140443230 != &qword_140443230 )
  {
    do
    {
      v3 |= *(_DWORD *)(v2 + 128);
      v2 = *(_QWORD *)v2;
    }
    while ( (__int64 *)v2 != &qword_140443230 );
    LODWORD(v17) = v3;
  }
  if ( v3 != (_DWORD)xmmword_1404433E8 || v1 != *((_QWORD *)&xmmword_1404433E8 + 1) )
  {
    v4 = v1 - *((_QWORD *)&xmmword_1404433E8 + 1);
    xmmword_1404433E8 = v17;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v23 = v1;
      v5 = "Energy Counter Unavailable";
      if ( (v3 & 1) == 0 )
        v5 = "-";
      v18 = dword_140443214;
      *(_QWORD *)&v17 = v4;
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
      if ( (unk_140443240 & 1) == 0 )
        v8 = "DC Power";
      if ( (unk_140443240 & 2) == 0 )
        v9 = "-";
      if ( (unk_140443240 & 4) == 0 )
        v10 = "-";
      if ( (unk_140443240 & 8) == 0 )
        v11 = "-";
      if ( (unk_140443240 & 0x10) == 0 )
        v12 = "-";
      if ( HIDWORD(qword_140443260) )
      {
        v16 = ((HIDWORD(qword_140443260) >> 1) + 100 * dword_140443244) / HIDWORD(qword_140443260);
        v13 = 100000 * (unsigned __int64)dword_140443244 / HIDWORD(qword_140443260);
      }
      else
      {
        v16 = 0;
        LODWORD(v13) = 0;
      }
      v19 = v13;
      v20 = dword_140443244;
      v22 = qword_140443248;
      v25 = &v23;
      v21 = HIDWORD(qword_140443260);
      v26 = 8LL;
      TlgCreateSz(&pDesc, v5);
      TlgCreateSz(&v28, v14);
      TlgCreateSz(&v29, v6);
      TlgCreateSz(&v30, v7);
      v32 = 8LL;
      v31 = &v17;
      v33 = &v18;
      v34 = 4LL;
      TlgCreateSz(&v35, v8);
      TlgCreateSz(&v36, v9);
      TlgCreateSz(&v37, v10);
      TlgCreateSz(&v38, v11);
      TlgCreateSz(&v39, v12);
      v41 = 4LL;
      v42 = &v19;
      v40 = &v16;
      v44 = &v20;
      v46 = &v21;
      v48 = &v22;
      v50 = (char *)&v22 + 4;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      LODWORD(v1) = TlgWrite(&pCallbackContext, &unk_14038E75B, 0LL, 0LL, 0x14u, &pData);
    }
  }
  return v1;
}
