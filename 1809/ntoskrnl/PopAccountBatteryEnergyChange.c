/*
 * XREFs of PopAccountBatteryEnergyChange @ 0x14086DABC
 * Callers:
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

int __fastcall PopAccountBatteryEnergyChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int128 v2; // xmm0
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  bool v10; // zf
  int v11; // ecx
  const CHAR *v12; // rsi
  int v13; // eax
  const CHAR *v14; // r14
  const CHAR *v15; // r15
  const CHAR *v16; // rbx
  const CHAR *v17; // rdi
  const CHAR *v18; // r12
  const CHAR *v19; // r13
  const char *v20; // rax
  unsigned int v21; // eax
  unsigned __int64 v22; // rax
  LPCSTR v23; // r11
  LPCGUID v24; // r9
  int v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  int v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  int v32; // [rsp+50h] [rbp-B8h] BYREF
  int v33; // [rsp+54h] [rbp-B4h] BYREF
  __int64 psz; // [rsp+58h] [rbp-B0h] BYREF
  LPCSTR psz_8[2]; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  _DWORD *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  __int64 v41; // [rsp+B8h] [rbp-50h]
  _DWORD v42[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  int *v51; // [rsp+128h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+28h]
  int *v53; // [rsp+138h] [rbp+30h]
  __int64 v54; // [rsp+140h] [rbp+38h]
  int *v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+150h] [rbp+48h]
  int *v57; // [rsp+158h] [rbp+50h]
  __int64 v58; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int *v64; // [rsp+1B8h] [rbp+B0h]
  __int64 v65; // [rsp+1C0h] [rbp+B8h]
  int *v66; // [rsp+1C8h] [rbp+C0h]
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  int *v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  int *v70; // [rsp+1E8h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+E8h]
  __int64 *p_psz; // [rsp+1F8h] [rbp+F0h]
  __int64 v73; // [rsp+200h] [rbp+F8h]
  char *v74; // [rsp+208h] [rbp+100h]
  __int64 v75; // [rsp+210h] [rbp+108h]
  _UNKNOWN *retaddr; // [rsp+250h] [rbp+148h] BYREF

  v1 = &retaddr;
  v2 = *(_OWORD *)(a1 + 192);
  v3 = *(unsigned int *)(a1 + 208);
  v4 = *(unsigned int *)(a1 + 212);
  v6 = *(unsigned int *)(a1 + 152);
  v7 = 0LL;
  v8 = *(unsigned int *)(a1 + 128);
  LODWORD(v9) = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 192) = 0;
  v10 = (*(_DWORD *)(a1 + 112) & 0x40000000) == 0;
  v11 = 2;
  *(_OWORD *)psz_8 = v2;
  if ( v10 )
  {
    LODWORD(v1) = v8 - 1;
    if ( (unsigned int)(v8 - 1) > 0xFFFFFFFD )
    {
      *(_QWORD *)(a1 + 208) = 0LL;
      v11 = 4;
      *(_DWORD *)(a1 + 192) = 4;
    }
    else if ( (_DWORD)v6 == -1 )
    {
      *(_DWORD *)(a1 + 192) = 8;
      v11 = 8;
    }
    else if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 != (_DWORD)v8 )
      {
        *(_DWORD *)(a1 + 212) = v8;
        v9 = (__int64)(v8 * (unsigned int)(100000 * v3 / v4)) / 100000;
      }
      LODWORD(v1) = v9;
      v7 = v6 - (unsigned int)v9;
      *(_DWORD *)(a1 + 208) = v6;
      *(_QWORD *)(a1 + 200) += v7;
      v11 = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 212) = v8;
      v11 = 1;
      *(_DWORD *)(a1 + 208) = v6;
      *(_DWORD *)(a1 + 192) = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 192) = 2;
  }
  if ( v11 != LODWORD(psz_8[0]) || (LODWORD(v1) = psz_8[1], *(LPCSTR *)(a1 + 200) != psz_8[1]) )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v36 = *(_QWORD *)(a1 + 200);
      v12 = "Energy Counter Unavailable";
      if ( (v11 & 1) == 0 )
        v12 = "-";
      v29 = dword_1404189B4;
      v13 = *(_DWORD *)(a1 + 148);
      v14 = "Relative Capacity Unit";
      v37 = v7;
      v28 = v4;
      if ( (v11 & 2) == 0 )
        v14 = "-";
      v26 = v3;
      v27 = v9;
      v15 = "FCC Unavailable";
      if ( (v11 & 4) == 0 )
        v15 = "-";
      v16 = "Battery Discharging";
      v17 = "Battery Charging";
      v18 = "Capacity Unavailable";
      if ( (v11 & 8) == 0 )
        v18 = "-";
      if ( (v13 & 2) == 0 )
        v16 = "-";
      if ( (v13 & 4) == 0 )
        v17 = "-";
      v19 = "Battery Critical";
      if ( (v13 & 8) == 0 )
        v19 = "-";
      v10 = (v13 & 0x10) == 0;
      v20 = "Battery charge limiting mode";
      if ( v10 )
        v20 = "-";
      psz_8[0] = v20;
      if ( (_DWORD)v8 )
        v21 = (((unsigned int)v8 >> 1) + 100 * (_DWORD)v6) / (unsigned int)v8;
      else
        v21 = 0;
      v30 = v21;
      if ( (_DWORD)v8 )
        v22 = 100000 * v6 / v8;
      else
        LODWORD(v22) = 0;
      v31 = v22;
      psz = *(_QWORD *)(a1 + 156);
      v39 = v42;
      v41 = *(_QWORD *)(a1 + 40);
      v42[0] = *(unsigned __int16 *)(a1 + 32);
      v33 = v8;
      v43 = &v36;
      v32 = v6;
      v40 = 2LL;
      v42[1] = 0;
      v44 = 8LL;
      TlgCreateSz(&pDesc, v12);
      TlgCreateSz(&v46, v14);
      TlgCreateSz(&v47, v15);
      TlgCreateSz(&v48, v18);
      v50 = 8LL;
      v51 = &v26;
      v49 = &v37;
      v53 = &v27;
      v52 = 4LL;
      v55 = &v28;
      v54 = 4LL;
      v57 = &v29;
      v56 = 4LL;
      v58 = 4LL;
      TlgCreateSz(&v59, v23);
      TlgCreateSz(&v60, v16);
      TlgCreateSz(&v61, v17);
      TlgCreateSz(&v62, v19);
      TlgCreateSz(&v63, psz_8[0]);
      v65 = 4LL;
      v66 = &v31;
      v64 = &v30;
      v68 = &v32;
      v70 = &v33;
      p_psz = &psz;
      v74 = (char *)&psz + 4;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 4LL;
      v73 = 4LL;
      v75 = 4LL;
      LODWORD(v1) = TlgWrite(&pCallbackContext, &unk_14036FCAD, 0LL, v24, 0x19u, &pData);
    }
  }
  return (int)v1;
}
