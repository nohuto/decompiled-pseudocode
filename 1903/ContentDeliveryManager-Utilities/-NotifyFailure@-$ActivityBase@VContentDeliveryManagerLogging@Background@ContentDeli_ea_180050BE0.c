/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180050BE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18000237C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  BOOL v4; // ebx
  const struct _TlgProvider_t *v5; // rax
  const struct _TlgProvider_t *v6; // rsi
  const unsigned __int16 *v7; // rdx
  const unsigned __int16 *v8; // r10
  __int64 v9; // rax
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // rdx
  const unsigned __int16 *v12; // r8
  const WCHAR *v13; // rdx
  const WCHAR *v14; // r11
  const WCHAR *v15; // r8
  const unsigned __int16 *v16; // rdx
  const unsigned __int16 *v17; // r8
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // r8
  const WCHAR *v20; // rdx
  const WCHAR *v21; // r8
  const unsigned __int16 *v22; // rdx
  const WCHAR *v23; // rdx
  const unsigned __int16 *v24; // rdx
  const unsigned __int16 *v25; // r10
  __int64 v26; // rax
  const unsigned __int16 *v27; // r8
  const unsigned __int16 *v28; // rdx
  const unsigned __int16 *v29; // r8
  const WCHAR *v30; // rdx
  const WCHAR *v31; // r11
  const WCHAR *v32; // r8
  const unsigned __int16 *v33; // rdx
  const unsigned __int16 *v34; // r8
  const unsigned __int16 *v35; // rdx
  const unsigned __int16 *v36; // r8
  const WCHAR *v37; // rdx
  const WCHAR *v38; // r8
  const unsigned __int16 *v39; // rdx
  const unsigned __int16 *v40; // r8
  const WCHAR *v41; // rdx
  const unsigned __int16 *v42; // rdx
  _DWORD *v43; // rcx
  int v44; // eax
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h] BYREF
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  PSRWLOCK *v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  int *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+ACh] [rbp-54h]
  int *v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v64; // [rsp+C0h] [rbp-40h]
  int v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+CCh] [rbp-34h]
  int *v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  const WCHAR *v69; // [rsp+E0h] [rbp-20h]
  int v70; // [rsp+E8h] [rbp-18h]
  int v71; // [rsp+ECh] [rbp-14h]
  int *v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+10Ch] [rbp+Ch]
  int *v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v79; // [rsp+120h] [rbp+20h]
  int v80; // [rsp+128h] [rbp+28h]
  int v81; // [rsp+12Ch] [rbp+2Ch]
  const WCHAR *v82; // [rsp+130h] [rbp+30h]
  int v83; // [rsp+138h] [rbp+38h]
  int v84; // [rsp+13Ch] [rbp+3Ch]
  int *v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  const unsigned __int16 *v87; // [rsp+150h] [rbp+50h]
  int v88; // [rsp+158h] [rbp+58h]
  int v89; // [rsp+15Ch] [rbp+5Ch]
  const WCHAR *v90; // [rsp+160h] [rbp+60h]
  int v91; // [rsp+168h] [rbp+68h]
  int v92; // [rsp+16Ch] [rbp+6Ch]
  int *v93; // [rsp+170h] [rbp+70h]
  __int64 v94; // [rsp+178h] [rbp+78h]
  __int64 *v95; // [rsp+180h] [rbp+80h]
  __int64 v96; // [rsp+188h] [rbp+88h]
  const unsigned __int16 *v97; // [rsp+190h] [rbp+90h]
  int v98; // [rsp+198h] [rbp+98h]
  int v99; // [rsp+19Ch] [rbp+9Ch]

  v4 = (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) == 0;
  v5 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v6 = v5;
  if ( v4 )
  {
    if ( *(_DWORD *)v5 > 2u
      && (*((_QWORD *)v5 + 2) & 0x600000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x600000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v55 = (PSRWLOCK *)&v52;
      v8 = &word_1800FD1E0;
      v46 = a2[1];
      v57 = &v46;
      LODWORD(v9) = 0;
      v52 = 0x1000000LL;
      v10 = &word_1800FD1E0;
      v56 = 8LL;
      v58 = 4LL;
      if ( v7 )
      {
        v10 = v7;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v7 + v9) );
      }
      v11 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v60 = v9 + 1;
      v62 = a2 + 14;
      LODWORD(v9) = 0;
      v59 = v10;
      v12 = &word_1800FD1E0;
      v61 = 0;
      v63 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v11 + v9) );
      }
      v13 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v14 = &Src;
      v64 = v12;
      v65 = v9 + 1;
      v15 = &Src;
      v47 = *a2;
      v67 = &v47;
      LODWORD(v9) = 0;
      v66 = 0;
      v68 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v9 = -1LL;
        do
          ++v9;
        while ( v13[v9] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v70 = 2 * v9 + 2;
      v48 = a2[6];
      v72 = &v48;
      LODWORD(v9) = 0;
      v69 = v15;
      v17 = &word_1800FD1E0;
      v71 = 0;
      v73 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v16 + v9) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v75 = v9 + 1;
      v49 = a2[18];
      v77 = &v49;
      LODWORD(v9) = 0;
      v74 = v17;
      v19 = &word_1800FD1E0;
      v76 = 0;
      v78 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v18 + v9) );
      }
      v20 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v80 = v9 + 1;
      LODWORD(v9) = 0;
      v79 = v19;
      v21 = &Src;
      v81 = 0;
      if ( v20 )
      {
        v21 = v20;
        v9 = -1LL;
        do
          ++v9;
        while ( v20[v9] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v83 = 2 * v9 + 2;
      v50 = a2[24];
      v85 = &v50;
      LODWORD(v9) = 0;
      v82 = v21;
      v84 = 0;
      v86 = 4LL;
      if ( v22 )
      {
        v8 = v22;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v22 + v9) );
      }
      v23 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v88 = v9 + 1;
      LODWORD(v9) = 0;
      v87 = v8;
      v89 = 0;
      if ( v23 )
      {
        v14 = v23;
        v9 = -1LL;
        do
          ++v9;
        while ( v23[v9] );
      }
      v90 = v14;
      v91 = 2 * v9 + 2;
      v92 = 0;
      TlgWrite(v6, &unk_18016D2E1, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else if ( *(_DWORD *)v5 > 2u
         && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
         && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
  {
    v24 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v55 = SRWLock;
    v25 = &word_1800FD1E0;
    v50 = a2[1];
    v57 = &v50;
    LODWORD(v26) = 0;
    SRWLock[0] = (PSRWLOCK)0x1000000;
    v27 = &word_1800FD1E0;
    v56 = 8LL;
    v58 = 4LL;
    if ( v24 )
    {
      v27 = v24;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v24 + v26) );
    }
    v28 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v60 = v26 + 1;
    v62 = a2 + 14;
    LODWORD(v26) = 0;
    v59 = v27;
    v29 = &word_1800FD1E0;
    v61 = 0;
    v63 = 4LL;
    if ( v28 )
    {
      v29 = v28;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v28 + v26) );
    }
    v30 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v31 = &Src;
    v64 = v29;
    v65 = v26 + 1;
    v32 = &Src;
    v49 = *a2;
    v67 = &v49;
    LODWORD(v26) = 0;
    v66 = 0;
    v68 = 4LL;
    if ( v30 )
    {
      v32 = v30;
      v26 = -1LL;
      do
        ++v26;
      while ( v30[v26] );
    }
    v33 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v70 = 2 * v26 + 2;
    v48 = a2[6];
    v72 = &v48;
    LODWORD(v26) = 0;
    v69 = v32;
    v34 = &word_1800FD1E0;
    v71 = 0;
    v73 = 4LL;
    if ( v33 )
    {
      v34 = v33;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v33 + v26) );
    }
    v35 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v75 = v26 + 1;
    v47 = a2[18];
    v77 = &v47;
    LODWORD(v26) = 0;
    v74 = v34;
    v36 = &word_1800FD1E0;
    v76 = 0;
    v78 = 4LL;
    if ( v35 )
    {
      v36 = v35;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v35 + v26) );
    }
    v37 = (const WCHAR *)*((_QWORD *)a2 + 11);
    v80 = v26 + 1;
    LODWORD(v26) = 0;
    v79 = v36;
    v38 = &Src;
    v81 = 0;
    if ( v37 )
    {
      v38 = v37;
      v26 = -1LL;
      do
        ++v26;
      while ( v37[v26] );
    }
    v39 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v83 = 2 * v26 + 2;
    v46 = a2[24];
    v85 = &v46;
    LODWORD(v26) = 0;
    v82 = v38;
    v40 = &word_1800FD1E0;
    v84 = 0;
    v86 = 4LL;
    if ( v39 )
    {
      v40 = v39;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v39 + v26) );
    }
    v41 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v88 = v26 + 1;
    LODWORD(v26) = 0;
    v87 = v40;
    v89 = 0;
    if ( v41 )
    {
      v31 = v41;
      v26 = -1LL;
      do
        ++v26;
      while ( v41[v26] );
    }
    v42 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v91 = 2 * v26 + 2;
    v51 = a2[2];
    v93 = &v51;
    LODWORD(v52) = a2[15];
    v95 = &v52;
    LODWORD(v26) = 0;
    v90 = v31;
    v92 = 0;
    v94 = 4LL;
    v96 = 4LL;
    if ( v42 )
    {
      v25 = v42;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v42 + v26) );
    }
    v97 = v25;
    v98 = v26 + 1;
    v99 = 0;
    TlgWrite(v6, &unk_18016D126, (LPCGUID)(a1[6] + 8LL), 0LL, 0x14u, &pData);
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    SRWLock);
  v43 = (_DWORD *)a1[6];
  v44 = a2[1];
  if ( v44 != v43[21] && (v44 != v43[19] || (int)v43[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v43 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 1;
}
