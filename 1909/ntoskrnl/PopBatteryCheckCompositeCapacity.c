/*
 * XREFs of PopBatteryCheckCompositeCapacity @ 0x14073AC98
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400D6128 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 */

void __fastcall PopBatteryCheckCompositeCapacity(int *a1, int a2, _DWORD *a3)
{
  unsigned __int8 v6; // r9
  unsigned int v7; // ebx
  const CHAR *v8; // rsi
  const CHAR *v9; // r14
  const CHAR *v10; // r15
  const CHAR *v11; // r12
  const CHAR *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  int v15; // r10d
  unsigned int v16; // r9d
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  int v20; // eax
  const CHAR *v21; // r10
  __int64 v22; // r9
  const CHAR *v23; // rcx
  const CHAR *v24; // rcx
  bool v25; // zf
  const CHAR *v26; // rax
  unsigned __int64 v27; // rax
  LPCSTR v28; // r11
  int v29; // r10d
  int v30; // eax
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // r11
  unsigned int v34; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS updated; // [rsp+44h] [rbp-BCh] BYREF
  int Buffer; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+4Ch] [rbp-B4h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+54h] [rbp-ACh] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  LPCSTR psz; // [rsp+68h] [rbp-98h]
  LPCSTR v45; // [rsp+70h] [rbp-90h]
  LPCSTR v46; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  int *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  int *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  int *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  int *v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  int *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  NTSTATUS *v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  NTSTATUS *p_updated; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]

  *a3 = 0;
  if ( !dword_140443194 )
  {
    v6 = 0;
    dword_140443318 = 0;
LABEL_3:
    LOBYTE(v7) = 0;
LABEL_4:
    dword_140443320 = 0;
    goto LABEL_5;
  }
  v13 = (unsigned int)a1[1];
  LODWORD(v14) = 100000;
  if ( HIDWORD(qword_1404431E0) > (unsigned int)v13 )
  {
    if ( HIDWORD(qword_1404431E0) )
      v14 = 100000 * v13 / (unsigned __int64)HIDWORD(qword_1404431E0);
    else
      LODWORD(v14) = 0;
  }
  v15 = 0;
  if ( dword_14044330C != -1 )
    v15 = v14 - dword_14044330C;
  v16 = ((int)v14 + 500) / 0x3E8u;
  v17 = (dword_14044330C + 500) / 0x3E8u;
  if ( v16 != v17 )
    *a3 = v16 - v17;
  v6 = byte_14044331C;
  LOBYTE(v7) = byte_140443308;
  dword_14044330C = v14;
  if ( a2 == 1 )
  {
    v6 = 0;
    dword_140443318 = 0;
    LOBYTE(v7) = 1;
    goto LABEL_4;
  }
  if ( a2 != ((unk_1404431C0 & 1) == 0) )
  {
    v6 = 0;
LABEL_20:
    dword_140443318 = v14;
    goto LABEL_3;
  }
  if ( byte_140443198 )
  {
    if ( byte_14044331C )
      goto LABEL_3;
    goto LABEL_20;
  }
  v18 = dword_140443318;
  if ( dword_140443318 < (unsigned int)v14 )
  {
    v18 = v14;
    dword_140443318 = v14;
  }
  v6 = byte_14044331C;
  if ( v18 > (int)v14 + WeakChargerChargeDropMilliPercent )
    v6 = 1;
  v19 = v15 + dword_140443320;
  dword_140443320 = v19;
  if ( (int)abs32(v19) >= BatteryChargeTrajectoryThresholdMilliPercent )
  {
    v7 = v19 >> 31;
    goto LABEL_4;
  }
LABEL_5:
  v8 = "AC Power";
  v9 = "Battery Discharging";
  v10 = "Battery Charging";
  v11 = "Battery Critical";
  v12 = "Battery charge limiting mode";
  if ( byte_14044331C != v6 )
  {
    byte_14044331C = v6;
    Buffer = v6;
    updated = ZwUpdateWnfStateData(&WNF_PO_WEAK_CHARGER, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v20 = *a1;
        v21 = "AC Power";
        v22 = (unsigned int)a1[1];
        v37 = (unsigned __int8)byte_14044331C;
        v38 = dword_140443194;
        if ( (v20 & 1) == 0 )
          v21 = "DC Power";
        v23 = "Battery Charging";
        if ( (v20 & 4) == 0 )
          v23 = "-";
        psz = v23;
        v24 = "Battery Critical";
        if ( (v20 & 8) == 0 )
          v24 = "-";
        v25 = (v20 & 0x10) == 0;
        v26 = "Battery charge limiting mode";
        v45 = v24;
        if ( v25 )
          v26 = "-";
        v46 = v26;
        if ( HIDWORD(qword_1404431E0) )
        {
          v34 = (unsigned int)((HIDWORD(qword_1404431E0) >> 1) + 100 * v22) / HIDWORD(qword_1404431E0);
          v27 = 100000 * v22 / (unsigned __int64)HIDWORD(qword_1404431E0);
        }
        else
        {
          v34 = 0;
          LODWORD(v27) = 0;
        }
        v39 = v27;
        v42 = a1[2];
        v43 = a1[3];
        v48 = &v37;
        v50 = &v38;
        v40 = v22;
        v41 = HIDWORD(qword_1404431E0);
        v49 = 4LL;
        v51 = 4LL;
        TlgCreateSz(&pDesc, v21);
        TlgCreateSz(&v53, v28);
        TlgCreateSz(&v54, psz);
        TlgCreateSz(&v55, v45);
        TlgCreateSz(&v56, v46);
        v58 = 4LL;
        v59 = &v39;
        v57 = &v34;
        v61 = &v40;
        v63 = &v41;
        v65 = &v42;
        v67 = &v43;
        p_updated = &updated;
        v60 = 4LL;
        v62 = 4LL;
        v64 = 4LL;
        v66 = 4LL;
        v68 = 4LL;
        v70 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14038EF77, 0LL, 0LL, 0x10u, &pData);
      }
    }
  }
  if ( byte_140443308 != (_BYTE)v7 )
  {
    byte_140443308 = v7;
    v43 = (unsigned __int8)v7;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_DISCHARGING, &v43, 4u, 0LL, 0LL, 0, 0);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v30 = *a1;
        v31 = (unsigned int)a1[1];
        v42 = (unsigned __int8)byte_140443308;
        v41 = dword_140443194;
        if ( (v30 & 1) == 0 )
          v8 = "DC Power";
        if ( (v30 & 2) == 0 )
          v9 = "-";
        if ( (v30 & 4) == 0 )
          v10 = "-";
        if ( (v30 & 8) == 0 )
          v11 = "-";
        if ( (v30 & 0x10) == 0 )
          v12 = "-";
        if ( HIDWORD(qword_1404431E0) )
        {
          v34 = (unsigned int)((HIDWORD(qword_1404431E0) >> 1) + 100 * v31) / HIDWORD(qword_1404431E0);
          v32 = 100000 * v31 / (unsigned __int64)HIDWORD(qword_1404431E0);
        }
        else
        {
          v34 = 0;
          LODWORD(v32) = 0;
        }
        v40 = v32;
        v37 = a1[2];
        updated = a1[3];
        v48 = &v42;
        v50 = &v41;
        v39 = v31;
        v38 = HIDWORD(qword_1404431E0);
        Buffer = v29;
        v49 = 4LL;
        v51 = 4LL;
        TlgCreateSz(&pDesc, v8);
        TlgCreateSz(&v53, v9);
        TlgCreateSz(&v54, v10);
        TlgCreateSz(&v55, v11);
        TlgCreateSz(&v56, v12);
        v58 = v33;
        v59 = &v40;
        v57 = &v34;
        v61 = &v39;
        v63 = &v38;
        v65 = &v37;
        v67 = &updated;
        p_updated = &Buffer;
        v60 = v33;
        v62 = v33;
        v64 = v33;
        v66 = v33;
        v68 = v33;
        v70 = v33;
        TlgWrite(&pCallbackContext, &unk_14038EE16, 0LL, 0LL, 0x10u, &pData);
      }
    }
  }
}
