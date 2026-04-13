/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800678C8
 * Callers:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180066E2C (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rax
  int v5; // ecx
  int *v6; // rbx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rsi
  const unsigned __int16 *v9; // rcx
  const unsigned __int16 *v10; // r10
  __int64 v11; // rax
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // rcx
  const unsigned __int16 *v14; // r8
  const WCHAR *v15; // rcx
  const WCHAR *v16; // r9
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
  const unsigned __int16 *v27; // r10
  __int64 v28; // rax
  __int64 v29; // rcx
  const WCHAR *v30; // r9
  __int64 v31; // rcx
  int v33; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+3Ch] [rbp-CCh] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+80h] [rbp-88h]
  int *v42; // [rsp+88h] [rbp-80h]
  __int64 v43; // [rsp+90h] [rbp-78h]
  const unsigned __int16 *v44; // [rsp+98h] [rbp-70h]
  int v45; // [rsp+A0h] [rbp-68h]
  int v46; // [rsp+A4h] [rbp-64h]
  int *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v49; // [rsp+B8h] [rbp-50h]
  int v50; // [rsp+C0h] [rbp-48h]
  int v51; // [rsp+C4h] [rbp-44h]
  int *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]
  const WCHAR *v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+E0h] [rbp-28h]
  int v56; // [rsp+E4h] [rbp-24h]
  __int64 *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  const unsigned __int16 *v59; // [rsp+F8h] [rbp-10h]
  int v60; // [rsp+100h] [rbp-8h]
  int v61; // [rsp+104h] [rbp-4h]
  int *v62; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v64; // [rsp+118h] [rbp+10h]
  int v65; // [rsp+120h] [rbp+18h]
  int v66; // [rsp+124h] [rbp+1Ch]
  const WCHAR *v67; // [rsp+128h] [rbp+20h]
  int v68; // [rsp+130h] [rbp+28h]
  int v69; // [rsp+134h] [rbp+2Ch]
  int *v70; // [rsp+138h] [rbp+30h]
  __int64 v71; // [rsp+140h] [rbp+38h]
  const unsigned __int16 *v72; // [rsp+148h] [rbp+40h]
  int v73; // [rsp+150h] [rbp+48h]
  int v74; // [rsp+154h] [rbp+4Ch]
  const WCHAR *v75; // [rsp+158h] [rbp+50h]
  int v76; // [rsp+160h] [rbp+58h]
  int v77; // [rsp+164h] [rbp+5Ch]
  EVENT_DATA_DESCRIPTOR v78; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v79; // [rsp+188h] [rbp+80h]
  __int64 v80; // [rsp+190h] [rbp+88h]
  int *v81; // [rsp+198h] [rbp+90h]
  __int64 v82; // [rsp+1A0h] [rbp+98h]
  int *v83; // [rsp+1A8h] [rbp+A0h]
  __int64 v84; // [rsp+1B0h] [rbp+A8h]
  const unsigned __int16 *v85; // [rsp+1B8h] [rbp+B0h]
  int v86; // [rsp+1C0h] [rbp+B8h]
  int v87; // [rsp+1C4h] [rbp+BCh]
  const WCHAR *v88; // [rsp+1C8h] [rbp+C0h]
  int v89; // [rsp+1D0h] [rbp+C8h]
  int v90; // [rsp+1D4h] [rbp+CCh]

  if ( a2 < 0 )
  {
    v4 = (int *)a1[6];
    v5 = v4[19];
    if ( v5 >= 0 || (v6 = v4 + 20, v5 != v4[21]) )
      v6 = 0LL;
    v7 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v8 = v7;
    if ( v6 )
    {
      if ( *(_DWORD *)v7 > 2u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v9 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
        v40 = &v38;
        v10 = &word_1800FD7D0;
        v35 = v6[1];
        v42 = &v35;
        LODWORD(v11) = 0;
        v38 = 0x1000000LL;
        v12 = &word_1800FD7D0;
        v41 = 8LL;
        v43 = 4LL;
        if ( v9 )
        {
          v12 = v9;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v9 + v11) );
        }
        v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
        v45 = v11 + 1;
        v47 = v6 + 14;
        LODWORD(v11) = 0;
        v44 = v12;
        v14 = &word_1800FD7D0;
        v46 = 0;
        v48 = 4LL;
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
        v49 = v14;
        v50 = v11 + 1;
        v17 = &Src;
        v36 = *v6;
        v52 = &v36;
        LODWORD(v11) = 0;
        v51 = 0;
        v53 = 4LL;
        if ( v15 )
        {
          v17 = v15;
          v11 = -1LL;
          do
            ++v11;
          while ( v15[v11] );
        }
        v18 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
        v55 = 2 * v11 + 2;
        LODWORD(v37) = v6[6];
        v57 = &v37;
        LODWORD(v11) = 0;
        v54 = v17;
        v19 = &word_1800FD7D0;
        v56 = 0;
        v58 = 4LL;
        if ( v18 )
        {
          v19 = v18;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v18 + v11) );
        }
        v20 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
        v60 = v11 + 1;
        v33 = v6[18];
        v62 = &v33;
        LODWORD(v11) = 0;
        v59 = v19;
        v21 = &word_1800FD7D0;
        v61 = 0;
        v63 = 4LL;
        if ( v20 )
        {
          v21 = v20;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v20 + v11) );
        }
        v22 = (const WCHAR *)*((_QWORD *)v6 + 11);
        v65 = v11 + 1;
        LODWORD(v11) = 0;
        v64 = v21;
        v23 = &Src;
        v66 = 0;
        if ( v22 )
        {
          v23 = v22;
          v11 = -1LL;
          do
            ++v11;
          while ( v22[v11] );
        }
        v24 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
        v68 = 2 * v11 + 2;
        v34 = v6[24];
        v70 = &v34;
        LODWORD(v11) = 0;
        v67 = v23;
        v69 = 0;
        v71 = 4LL;
        if ( v24 )
        {
          v10 = v24;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v24 + v11) );
        }
        v25 = (const WCHAR *)*((_QWORD *)v6 + 14);
        v73 = v11 + 1;
        LODWORD(v11) = 0;
        v72 = v10;
        v74 = 0;
        if ( v25 )
        {
          v16 = v25;
          v11 = -1LL;
          do
            ++v11;
          while ( v25[v11] );
        }
        v75 = v16;
        v76 = 2 * v11 + 2;
        v77 = 0;
        TlgWrite(v8, &unk_18016BA4D, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
      }
    }
    else if ( *(_DWORD *)v7 > 2u
           && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
           && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v38 = 0x1000000LL;
      v79 = &v38;
      v81 = &v34;
      v80 = 8LL;
      v34 = a2;
      v82 = 4LL;
      LODWORD(v28) = GetCurrentThreadId();
      v26 = a1[6];
      v27 = &word_1800FD7D0;
      v33 = v28;
      v84 = 4LL;
      v83 = &v33;
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
      v85 = v27;
      v86 = v28 + 1;
      v30 = &Src;
      v87 = 0;
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
      v88 = v30;
      v89 = 2 * v28 + 2;
      v90 = 0;
      TlgWrite(v8, &unk_18016C242, (LPCGUID)(v26 + 8), 0LL, 7u, &v78);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
