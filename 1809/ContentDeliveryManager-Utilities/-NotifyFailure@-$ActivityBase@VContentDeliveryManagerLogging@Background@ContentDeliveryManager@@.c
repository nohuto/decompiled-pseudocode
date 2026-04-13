/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800402F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18000245C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  BOOL v4; // ebx
  const struct _TlgProvider_t *v5; // rax
  const struct _TlgProvider_t *v6; // rsi
  const unsigned __int16 *v7; // r10
  const unsigned __int16 *v8; // rdx
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
  const unsigned __int16 *v24; // r10
  const unsigned __int16 *v25; // rdx
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
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v56; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+8Ch] [rbp-74h]
  int *v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v61; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+A8h] [rbp-58h]
  int v63; // [rsp+ACh] [rbp-54h]
  int *v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  const WCHAR *v66; // [rsp+C0h] [rbp-40h]
  int v67; // [rsp+C8h] [rbp-38h]
  int v68; // [rsp+CCh] [rbp-34h]
  int *v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v71; // [rsp+E0h] [rbp-20h]
  int v72; // [rsp+E8h] [rbp-18h]
  int v73; // [rsp+ECh] [rbp-14h]
  int *v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v76; // [rsp+100h] [rbp+0h]
  int v77; // [rsp+108h] [rbp+8h]
  int v78; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v79; // [rsp+110h] [rbp+10h]
  int v80; // [rsp+118h] [rbp+18h]
  int v81; // [rsp+11Ch] [rbp+1Ch]
  int *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v84; // [rsp+130h] [rbp+30h]
  int v85; // [rsp+138h] [rbp+38h]
  int v86; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v87; // [rsp+140h] [rbp+40h]
  int v88; // [rsp+148h] [rbp+48h]
  int v89; // [rsp+14Ch] [rbp+4Ch]
  int *v90; // [rsp+150h] [rbp+50h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  PSRWLOCK *p_SRWLock; // [rsp+160h] [rbp+60h]
  __int64 v93; // [rsp+168h] [rbp+68h]
  const unsigned __int16 *v94; // [rsp+170h] [rbp+70h]
  int v95; // [rsp+178h] [rbp+78h]
  int v96; // [rsp+17Ch] [rbp+7Ch]

  v4 = (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) == 0;
  v5 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v6 = v5;
  if ( v4 )
  {
    if ( *(_DWORD *)v5 > 5u
      && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v7 = &word_1800F8406;
      v8 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v46 = a2[1];
      v54 = &v46;
      LODWORD(v9) = 0;
      v55 = 4LL;
      v10 = &word_1800F8406;
      if ( v8 )
      {
        v10 = v8;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v8 + v9) );
      }
      v11 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v57 = v9 + 1;
      v59 = a2 + 14;
      LODWORD(v9) = 0;
      v56 = v10;
      v12 = &word_1800F8406;
      v58 = 0;
      v60 = 4LL;
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
      v61 = v12;
      v62 = v9 + 1;
      v15 = &Src;
      v47 = *a2;
      v64 = &v47;
      LODWORD(v9) = 0;
      v63 = 0;
      v65 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v9 = -1LL;
        do
          ++v9;
        while ( v13[v9] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v67 = 2 * v9 + 2;
      v48 = a2[6];
      v69 = &v48;
      LODWORD(v9) = 0;
      v66 = v15;
      v17 = &word_1800F8406;
      v68 = 0;
      v70 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v16 + v9) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v72 = v9 + 1;
      v49 = a2[18];
      v74 = &v49;
      LODWORD(v9) = 0;
      v71 = v17;
      v19 = &word_1800F8406;
      v73 = 0;
      v75 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v18 + v9) );
      }
      v20 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v77 = v9 + 1;
      LODWORD(v9) = 0;
      v76 = v19;
      v21 = &Src;
      v78 = 0;
      if ( v20 )
      {
        v21 = v20;
        v9 = -1LL;
        do
          ++v9;
        while ( v20[v9] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v80 = 2 * v9 + 2;
      v50 = a2[24];
      v82 = &v50;
      LODWORD(v9) = 0;
      v79 = v21;
      v81 = 0;
      v83 = 4LL;
      if ( v22 )
      {
        v7 = v22;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v22 + v9) );
      }
      v23 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v85 = v9 + 1;
      LODWORD(v9) = 0;
      v84 = v7;
      v86 = 0;
      if ( v23 )
      {
        v14 = v23;
        v9 = -1LL;
        do
          ++v9;
        while ( v23[v9] );
      }
      v87 = v14;
      v88 = 2 * v9 + 2;
      v89 = 0;
      TlgWrite(v6, &unk_180162416, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else if ( *(_DWORD *)v5 > 5u
         && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
         && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
  {
    v24 = &word_1800F8406;
    v25 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v50 = a2[1];
    v54 = &v50;
    LODWORD(v26) = 0;
    v55 = 4LL;
    v27 = &word_1800F8406;
    if ( v25 )
    {
      v27 = v25;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v25 + v26) );
    }
    v28 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v57 = v26 + 1;
    v59 = a2 + 14;
    LODWORD(v26) = 0;
    v56 = v27;
    v29 = &word_1800F8406;
    v58 = 0;
    v60 = 4LL;
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
    v61 = v29;
    v62 = v26 + 1;
    v32 = &Src;
    v49 = *a2;
    v64 = &v49;
    LODWORD(v26) = 0;
    v63 = 0;
    v65 = 4LL;
    if ( v30 )
    {
      v32 = v30;
      v26 = -1LL;
      do
        ++v26;
      while ( v30[v26] );
    }
    v33 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v67 = 2 * v26 + 2;
    v48 = a2[6];
    v69 = &v48;
    LODWORD(v26) = 0;
    v66 = v32;
    v34 = &word_1800F8406;
    v68 = 0;
    v70 = 4LL;
    if ( v33 )
    {
      v34 = v33;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v33 + v26) );
    }
    v35 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v72 = v26 + 1;
    v47 = a2[18];
    v74 = &v47;
    LODWORD(v26) = 0;
    v71 = v34;
    v36 = &word_1800F8406;
    v73 = 0;
    v75 = 4LL;
    if ( v35 )
    {
      v36 = v35;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v35 + v26) );
    }
    v37 = (const WCHAR *)*((_QWORD *)a2 + 11);
    v77 = v26 + 1;
    LODWORD(v26) = 0;
    v76 = v36;
    v38 = &Src;
    v78 = 0;
    if ( v37 )
    {
      v38 = v37;
      v26 = -1LL;
      do
        ++v26;
      while ( v37[v26] );
    }
    v39 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v80 = 2 * v26 + 2;
    v46 = a2[24];
    v82 = &v46;
    LODWORD(v26) = 0;
    v79 = v38;
    v40 = &word_1800F8406;
    v81 = 0;
    v83 = 4LL;
    if ( v39 )
    {
      v40 = v39;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v39 + v26) );
    }
    v41 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v85 = v26 + 1;
    LODWORD(v26) = 0;
    v84 = v40;
    v86 = 0;
    if ( v41 )
    {
      v31 = v41;
      v26 = -1LL;
      do
        ++v26;
      while ( v41[v26] );
    }
    v42 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v88 = 2 * v26 + 2;
    v51 = a2[2];
    v90 = &v51;
    LODWORD(SRWLock) = a2[15];
    p_SRWLock = &SRWLock;
    LODWORD(v26) = 0;
    v87 = v31;
    v89 = 0;
    v91 = 4LL;
    v93 = 4LL;
    if ( v42 )
    {
      v24 = v42;
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v42 + v26) );
    }
    v94 = v24;
    v95 = v26 + 1;
    v96 = 0;
    TlgWrite(v6, &unk_180162762, (LPCGUID)(a1[6] + 8LL), 0LL, 0x13u, &pData);
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v43 = (_DWORD *)a1[6];
  v44 = a2[1];
  if ( v44 != v43[21] && (v44 != v43[19] || (int)v43[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v43 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
