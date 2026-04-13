/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18007D494
 * Callers:
 *     ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x18007B9A8 (--1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007D110 (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007B3FC (-Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ @ 0x18007B590 (-StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this,
        int a2)
{
  int *v4; // rbx
  int v5; // eax
  int *v6; // rbx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rsi
  const unsigned __int16 *v9; // r9
  const unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // rcx
  const unsigned __int16 *v14; // r8
  const WCHAR *v15; // rcx
  const WCHAR *v16; // r10
  const WCHAR *v17; // r8
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // r8
  const unsigned __int16 *v20; // rcx
  const unsigned __int16 *v21; // r8
  const WCHAR *v22; // rcx
  const WCHAR *v23; // r8
  const unsigned __int16 *v24; // rcx
  const WCHAR *v25; // rcx
  __int64 v26; // r8
  const unsigned __int16 *v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  const WCHAR *v30; // r10
  __int64 v31; // rcx
  int v32; // [rsp+38h] [rbp-D0h] BYREF
  int v33; // [rsp+3Ch] [rbp-CCh] BYREF
  int v34; // [rsp+40h] [rbp-C8h] BYREF
  int v35; // [rsp+44h] [rbp-C4h] BYREF
  int v36; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v40; // [rsp+88h] [rbp-80h]
  int v41; // [rsp+90h] [rbp-78h]
  int v42; // [rsp+94h] [rbp-74h]
  int *v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v45; // [rsp+A8h] [rbp-60h]
  int v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+B4h] [rbp-54h]
  int *v48; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp-48h]
  const WCHAR *v50; // [rsp+C8h] [rbp-40h]
  int v51; // [rsp+D0h] [rbp-38h]
  int v52; // [rsp+D4h] [rbp-34h]
  int *v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v55; // [rsp+E8h] [rbp-20h]
  int v56; // [rsp+F0h] [rbp-18h]
  int v57; // [rsp+F4h] [rbp-14h]
  int *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v60; // [rsp+108h] [rbp+0h]
  int v61; // [rsp+110h] [rbp+8h]
  int v62; // [rsp+114h] [rbp+Ch]
  const WCHAR *v63; // [rsp+118h] [rbp+10h]
  int v64; // [rsp+120h] [rbp+18h]
  int v65; // [rsp+124h] [rbp+1Ch]
  int *v66; // [rsp+128h] [rbp+20h]
  __int64 v67; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v68; // [rsp+138h] [rbp+30h]
  int v69; // [rsp+140h] [rbp+38h]
  int v70; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v71; // [rsp+148h] [rbp+40h]
  int v72; // [rsp+150h] [rbp+48h]
  int v73; // [rsp+154h] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+158h] [rbp+50h] BYREF
  int *v75; // [rsp+178h] [rbp+70h]
  __int64 v76; // [rsp+180h] [rbp+78h]
  int *v77; // [rsp+188h] [rbp+80h]
  __int64 v78; // [rsp+190h] [rbp+88h]
  const unsigned __int16 *v79; // [rsp+198h] [rbp+90h]
  int v80; // [rsp+1A0h] [rbp+98h]
  int v81; // [rsp+1A4h] [rbp+9Ch]
  const WCHAR *v82; // [rsp+1A8h] [rbp+A0h]
  int v83; // [rsp+1B0h] [rbp+A8h]
  int v84; // [rsp+1B4h] [rbp+ACh]

  if ( a2 < 0 )
  {
    v4 = (int *)*((_QWORD *)this + 6);
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    v7 = CDMUtilsUnlockLogging::Provider();
    v8 = v7;
    if ( v6 )
    {
      if ( *(_DWORD *)v7 > 5u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v9 = &word_1800F8406;
        v10 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
        v34 = v6[1];
        v38 = &v34;
        LODWORD(v11) = 0;
        v39 = 4LL;
        v12 = &word_1800F8406;
        if ( v10 )
        {
          v12 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v10 + v11) );
        }
        v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
        v41 = v11 + 1;
        v43 = v6 + 14;
        LODWORD(v11) = 0;
        v40 = v12;
        v14 = &word_1800F8406;
        v42 = 0;
        v44 = 4LL;
        if ( v13 )
        {
          v14 = v13;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v13 + v11) );
        }
        v15 = (const WCHAR *)*((_QWORD *)v6 + 2);
        v16 = &Src;
        v45 = v14;
        v46 = v11 + 1;
        v17 = &Src;
        v35 = *v6;
        v48 = &v35;
        LODWORD(v11) = 0;
        v47 = 0;
        v49 = 4LL;
        if ( v15 )
        {
          v17 = v15;
          v11 = -1LL;
          do
            ++v11;
          while ( v15[v11] );
        }
        v18 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
        v51 = 2 * v11 + 2;
        v36 = v6[6];
        v53 = &v36;
        LODWORD(v11) = 0;
        v50 = v17;
        v19 = &word_1800F8406;
        v52 = 0;
        v54 = 4LL;
        if ( v18 )
        {
          v19 = v18;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v18 + v11) );
        }
        v20 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
        v56 = v11 + 1;
        v32 = v6[18];
        v58 = &v32;
        LODWORD(v11) = 0;
        v55 = v19;
        v21 = &word_1800F8406;
        v57 = 0;
        v59 = 4LL;
        if ( v20 )
        {
          v21 = v20;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v20 + v11) );
        }
        v22 = (const WCHAR *)*((_QWORD *)v6 + 11);
        v61 = v11 + 1;
        LODWORD(v11) = 0;
        v60 = v21;
        v23 = &Src;
        v62 = 0;
        if ( v22 )
        {
          v23 = v22;
          v11 = -1LL;
          do
            ++v11;
          while ( v22[v11] );
        }
        v24 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
        v64 = 2 * v11 + 2;
        v33 = v6[24];
        v66 = &v33;
        LODWORD(v11) = 0;
        v63 = v23;
        v65 = 0;
        v67 = 4LL;
        if ( v24 )
        {
          v9 = v24;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v24 + v11) );
        }
        v25 = (const WCHAR *)*((_QWORD *)v6 + 14);
        v69 = v11 + 1;
        LODWORD(v11) = 0;
        v68 = v9;
        v70 = 0;
        if ( v25 )
        {
          v16 = v25;
          v11 = -1LL;
          do
            ++v11;
          while ( v25[v11] );
        }
        v71 = v16;
        v72 = 2 * v11 + 2;
        v73 = 0;
        TlgWrite(v8, &unk_180161FD5, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
      }
    }
    else if ( *(_DWORD *)v7 > 5u
           && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
           && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v33 = a2;
      v75 = &v33;
      v76 = 4LL;
      LODWORD(v28) = GetCurrentThreadId();
      v26 = *((_QWORD *)this + 6);
      v27 = &word_1800F8406;
      v32 = v28;
      v78 = 4LL;
      v77 = &v32;
      LODWORD(v28) = 0;
      v29 = *(_QWORD *)(v26 + 48);
      if ( v29 )
      {
        v27 = *(const unsigned __int16 **)(v26 + 48);
        v28 = -1LL;
        do
          ++v28;
        while ( *(_BYTE *)(v29 + v28) );
      }
      v79 = v27;
      v80 = v28 + 1;
      v30 = &Src;
      v81 = 0;
      LODWORD(v28) = 0;
      v31 = *(_QWORD *)(v26 + 56);
      if ( v31 )
      {
        v30 = *(const WCHAR **)(v26 + 56);
        v28 = -1LL;
        do
          ++v28;
        while ( *(_WORD *)(v31 + 2 * v28) );
      }
      v82 = v30;
      v83 = 2 * v28 + 2;
      v84 = 0;
      TlgWrite(v8, &unk_180162624, (LPCGUID)(v26 + 8), 0LL, 6u, &v74);
    }
  }
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StopActivity(this);
}
