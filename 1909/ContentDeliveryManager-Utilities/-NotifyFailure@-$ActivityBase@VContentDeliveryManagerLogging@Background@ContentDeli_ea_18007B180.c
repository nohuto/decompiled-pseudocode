/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007B180
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18000237C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // r10
  int v5; // ecx
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // rcx
  __int64 v8; // rax
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // rcx
  const unsigned __int16 *v11; // rdx
  const WCHAR *v12; // rcx
  const WCHAR *v13; // r9
  const WCHAR *v14; // rdx
  const unsigned __int16 *v15; // rcx
  const unsigned __int16 *v16; // rdx
  const unsigned __int16 *v17; // rcx
  const unsigned __int16 *v18; // rdx
  const WCHAR *v19; // rcx
  const WCHAR *v20; // rdx
  const unsigned __int16 *v21; // rcx
  const unsigned __int16 *v22; // rdx
  const WCHAR *v23; // rcx
  const unsigned __int16 *v24; // rcx
  _DWORD *v25; // rcx
  int v26; // eax
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  PSRWLOCK *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  int *v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  int *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  int *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  const WCHAR *v51; // [rsp+E0h] [rbp-20h]
  int v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+ECh] [rbp-14h]
  int *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v56; // [rsp+100h] [rbp+0h]
  int v57; // [rsp+108h] [rbp+8h]
  int v58; // [rsp+10Ch] [rbp+Ch]
  int *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v61; // [rsp+120h] [rbp+20h]
  int v62; // [rsp+128h] [rbp+28h]
  int v63; // [rsp+12Ch] [rbp+2Ch]
  const WCHAR *v64; // [rsp+130h] [rbp+30h]
  int v65; // [rsp+138h] [rbp+38h]
  int v66; // [rsp+13Ch] [rbp+3Ch]
  int *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  const unsigned __int16 *v69; // [rsp+150h] [rbp+50h]
  int v70; // [rsp+158h] [rbp+58h]
  int v71; // [rsp+15Ch] [rbp+5Ch]
  const WCHAR *v72; // [rsp+160h] [rbp+60h]
  int v73; // [rsp+168h] [rbp+68h]
  int v74; // [rsp+16Ch] [rbp+6Ch]
  int *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  int *v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  const unsigned __int16 *v79; // [rsp+190h] [rbp+90h]
  int v80; // [rsp+198h] [rbp+98h]
  int v81; // [rsp+19Ch] [rbp+9Ch]

  v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v4 > 2u )
  {
    v5 = a2[1];
    v37 = SRWLock;
    v6 = &word_1800FD7D0;
    v28 = v5;
    v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v39 = &v28;
    LODWORD(v8) = 0;
    SRWLock[0] = (PSRWLOCK)0x1000000;
    v9 = &word_1800FD7D0;
    v38 = 8LL;
    v40 = 4LL;
    if ( v7 )
    {
      v9 = v7;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v7 + v8) );
    }
    v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v42 = v8 + 1;
    v44 = a2 + 14;
    LODWORD(v8) = 0;
    v41 = v9;
    v11 = &word_1800FD7D0;
    v43 = 0;
    v45 = 4LL;
    if ( v10 )
    {
      v11 = v10;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v10 + v8) );
    }
    v12 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v13 = &Src;
    v46 = v11;
    v47 = v8 + 1;
    v14 = &Src;
    v29 = *a2;
    v49 = &v29;
    LODWORD(v8) = 0;
    v48 = 0;
    v50 = 4LL;
    if ( v12 )
    {
      v14 = v12;
      v8 = -1LL;
      do
        ++v8;
      while ( v12[v8] );
    }
    v15 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v52 = 2 * v8 + 2;
    v30 = a2[6];
    v54 = &v30;
    LODWORD(v8) = 0;
    v51 = v14;
    v16 = &word_1800FD7D0;
    v53 = 0;
    v55 = 4LL;
    if ( v15 )
    {
      v16 = v15;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v15 + v8) );
    }
    v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v57 = v8 + 1;
    v31 = a2[18];
    v59 = &v31;
    LODWORD(v8) = 0;
    v56 = v16;
    v18 = &word_1800FD7D0;
    v58 = 0;
    v60 = 4LL;
    if ( v17 )
    {
      v18 = v17;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v17 + v8) );
    }
    v19 = (const WCHAR *)*((_QWORD *)a2 + 11);
    v62 = v8 + 1;
    LODWORD(v8) = 0;
    v61 = v18;
    v20 = &Src;
    v63 = 0;
    if ( v19 )
    {
      v20 = v19;
      v8 = -1LL;
      do
        ++v8;
      while ( v19[v8] );
    }
    v21 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v65 = 2 * v8 + 2;
    v32 = a2[24];
    v67 = &v32;
    LODWORD(v8) = 0;
    v64 = v20;
    v22 = &word_1800FD7D0;
    v66 = 0;
    v68 = 4LL;
    if ( v21 )
    {
      v22 = v21;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v21 + v8) );
    }
    v23 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v70 = v8 + 1;
    LODWORD(v8) = 0;
    v69 = v22;
    v71 = 0;
    if ( v23 )
    {
      v13 = v23;
      v8 = -1LL;
      do
        ++v8;
      while ( v23[v8] );
    }
    v24 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v73 = 2 * v8 + 2;
    v33 = a2[2];
    v75 = &v33;
    v34 = a2[15];
    v77 = &v34;
    LODWORD(v8) = 0;
    v72 = v13;
    v74 = 0;
    v76 = 4LL;
    v78 = 4LL;
    if ( v24 )
    {
      v6 = v24;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v24 + v8) );
    }
    v79 = v6;
    v80 = v8 + 1;
    v81 = 0;
    TlgWrite(v4, &unk_18016BB64, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x14u, &pData);
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v25 = *(_DWORD **)(a1 + 48);
  v26 = a2[1];
  if ( v26 != v25[21] && (v26 != v25[19] || (int)v25[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v25 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 1;
}
