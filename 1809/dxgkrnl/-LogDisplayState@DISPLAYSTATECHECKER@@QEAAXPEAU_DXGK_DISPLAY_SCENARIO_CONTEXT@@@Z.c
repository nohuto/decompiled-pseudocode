/*
 * XREFs of ?LogDisplayState@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C025F9C8
 * Callers:
 *     ?CheckDisplayState@DISPLAYSTATECHECKER@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C025EDC0 (-CheckDisplayState@DISPLAYSTATECHECKER@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     _TlgCreateSz @ 0x1C0042A48 (_TlgCreateSz.c)
 *     ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1C025FFA0 (-Reserve@DXGBLACKBOX@@QEAAPEAEI@Z.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayState(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  DISPLAYSTATECHECKER *v2; // rax
  DISPLAYSTATECHECKER *v3; // rsi
  DXGBLACKBOX *v6; // r14
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int16 *v12; // rdi
  unsigned int v13; // ecx
  LPCGUID v14; // r9
  bool v15; // zf
  unsigned int v16; // r9d
  unsigned __int8 v17; // dl
  __int64 v18; // r10
  unsigned int v19; // ecx
  LPCGUID v20; // r9
  int v21; // eax
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v23[3]; // [rsp+31h] [rbp-CFh] BYREF
  __int16 v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  _QWORD InputBuffer[4]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v39; // [rsp+90h] [rbp-70h] BYREF
  char *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  int *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  int *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  _BYTE *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  int *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  int *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  int *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  int *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  int *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  int *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  int *v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  int *v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  int *v70; // [rsp+1A0h] [rbp+A0h]
  __int64 v71; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1B0h] [rbp+B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  __int16 *v74; // [rsp+1E0h] [rbp+E0h]
  __int64 v75; // [rsp+1E8h] [rbp+E8h]
  char *v76; // [rsp+1F0h] [rbp+F0h]
  __int64 v77; // [rsp+1F8h] [rbp+F8h]
  int *v78; // [rsp+200h] [rbp+100h]
  __int64 v79; // [rsp+208h] [rbp+108h]
  _BYTE *v80; // [rsp+210h] [rbp+110h]
  __int64 v81; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp+120h] BYREF

  v2 = (DISPLAYSTATECHECKER *)*((_QWORD *)this + 56);
  v24 = 0;
  v3 = this;
  if ( v2 )
    v3 = v2;
  v6 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)this) + 20376);
  v7 = DXGBLACKBOX::Reserve(v6, 32 * *((_DWORD *)this + 116) + 20);
  v8 = v7;
  if ( v7 )
  {
    v9 = 0;
    *(_OWORD *)v7 = *(_OWORD *)((char *)this + 468);
    for ( *((_DWORD *)v7 + 4) = *((_DWORD *)this + 121);
          v9 < *((_DWORD *)this + 116);
          *(_OWORD *)&v8[v10 + 36] = *(_OWORD *)((char *)v3 + v11 + 28) )
    {
      v10 = v9++;
      v11 = 56 * v10;
      v10 *= 32LL;
      *(_OWORD *)&v8[v10 + 20] = *(_OWORD *)((char *)v3 + v11 + 12);
    }
    v12 = (__int16 *)*((_QWORD *)v6 + 6);
    if ( *((_DWORD *)v12 + 1) != 8 )
    {
      memset(InputBuffer, 0, sizeof(InputBuffer));
      LODWORD(InputBuffer[3]) = 12;
      InputBuffer[0] = v12;
      InputBuffer[1] = *((unsigned int *)v12 + 1);
      ZwPowerInformation(TraceApplicationPowerMessage|0x40, InputBuffer, 0x20u, 0LL, 0);
      v12 = (__int16 *)*((_QWORD *)v6 + 6);
    }
    v24 = *v12;
  }
  if ( dword_1C008D838 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x400000000400uLL) )
  {
    v13 = *((_DWORD *)this + 117);
    v74 = &v24;
    v22 = *((_BYTE *)this + 468);
    v76 = &v22;
    v25 = (v13 >> 8) & 1;
    v78 = &v25;
    v23[0] = v13 >> 9;
    v80 = v23;
    v75 = 2LL;
    v77 = 1LL;
    v79 = 4LL;
    v81 = 1LL;
    TlgCreateSz(&pDesc, (LPCSTR)this + 472);
    TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006B4AB, (LPCGUID)((char *)a2 + 8), v14, 7u, &pData);
  }
  v15 = (*((_DWORD *)this + 117) & 0x1FE00) == 0;
  LOBYTE(v16) = 0;
  v22 = 0;
  if ( !v15 )
  {
    v17 = 0;
    do
    {
      v37 = *(_QWORD *)((char *)v3 + 56 * v17 + 12);
      if ( dword_1C008D838 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x400000000400uLL) )
        {
          v19 = *(_DWORD *)((char *)v3 + v18 + 24);
          v40 = &v22;
          v42 = &v37;
          v41 = 1LL;
          v44 = (char *)v3 + v18 + 20;
          v43 = 8LL;
          v25 = (v19 >> 1) & 1;
          v46 = &v25;
          v45 = 4LL;
          v26 = v19 & 1;
          v48 = &v26;
          v47 = 4LL;
          v27 = (v19 >> 2) & 1;
          v50 = &v27;
          v23[0] = (int)(v19 << 27) >> 30;
          v52 = v23;
          v49 = 4LL;
          v28 = (v19 >> 5) & 1;
          v54 = &v28;
          v51 = 4LL;
          v29 = (v19 >> 6) & 1;
          v56 = &v29;
          v53 = 1LL;
          v30 = (v19 >> 7) & 1;
          v58 = &v30;
          v55 = 4LL;
          v31 = (v19 >> 8) & 1;
          v60 = &v31;
          v57 = 4LL;
          v32 = (v19 >> 9) & 1;
          v62 = &v32;
          v59 = 4LL;
          v33 = (v19 >> 10) & 1;
          v64 = &v33;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v34 = (v19 >> 11) & 1;
          v69 = 4LL;
          v66 = &v34;
          v35 = (v19 >> 12) & 1;
          v36 = (v19 >> 13) & 1;
          v68 = &v35;
          v71 = 4LL;
          v70 = &v36;
          TlgCreateSz(&v72, (LPCSTR)v3 + v18 + 28);
          TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006B39A, (LPCGUID)((char *)a2 + 8), v20, 0x13u, &v39);
          LOBYTE(v16) = v22;
        }
      }
      v16 = (unsigned __int8)(v16 + 1);
      v21 = *((_DWORD *)this + 117) >> 9;
      v17 = v16;
      v22 = v16;
    }
    while ( v16 < (unsigned __int8)v21 );
  }
}
