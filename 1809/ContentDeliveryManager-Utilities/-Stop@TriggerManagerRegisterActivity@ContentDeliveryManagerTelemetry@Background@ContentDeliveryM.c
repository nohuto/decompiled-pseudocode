/*
 * XREFs of ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x180060A34
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180063218 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180023C4C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *this,
        unsigned __int8 a2,
        const char *a3)
{
  int *v3; // rbx
  int v7; // eax
  int *v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // r11
  const unsigned __int16 *v11; // rdx
  const unsigned __int16 *v12; // r8
  __int64 v13; // rax
  const unsigned __int16 *v14; // rdx
  const unsigned __int16 *v15; // r8
  const WCHAR *v16; // rdx
  const WCHAR *v17; // r10
  const WCHAR *v18; // r8
  const unsigned __int16 *v19; // rdx
  const unsigned __int16 *v20; // r8
  const unsigned __int16 *v21; // rdx
  const unsigned __int16 *v22; // r8
  const WCHAR *v23; // rdx
  const WCHAR *v24; // r8
  const unsigned __int16 *v25; // rdx
  const unsigned __int16 *v26; // r8
  const WCHAR *v27; // rdx
  const unsigned __int16 *v28; // rdx
  const unsigned __int16 *v29; // r8
  bool v30; // zf
  const struct _TlgProvider_t *v31; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v33; // rcx
  __int64 **v34; // rbx
  __int64 *v35; // rcx
  __int64 v36; // rax
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v38; // [rsp+34h] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v48; // [rsp+90h] [rbp-70h]
  int v49; // [rsp+98h] [rbp-68h]
  int v50; // [rsp+9Ch] [rbp-64h]
  int *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  int *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  const WCHAR *v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+D8h] [rbp-28h]
  int v60; // [rsp+DCh] [rbp-24h]
  int *v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v63; // [rsp+F0h] [rbp-10h]
  int v64; // [rsp+F8h] [rbp-8h]
  int v65; // [rsp+FCh] [rbp-4h]
  int *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v68; // [rsp+110h] [rbp+10h]
  int v69; // [rsp+118h] [rbp+18h]
  int v70; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v71; // [rsp+120h] [rbp+20h]
  int v72; // [rsp+128h] [rbp+28h]
  int v73; // [rsp+12Ch] [rbp+2Ch]
  int *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v76; // [rsp+140h] [rbp+40h]
  int v77; // [rsp+148h] [rbp+48h]
  int v78; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v79; // [rsp+150h] [rbp+50h]
  int v80; // [rsp+158h] [rbp+58h]
  int v81; // [rsp+15Ch] [rbp+5Ch]
  int *v82; // [rsp+160h] [rbp+60h]
  __int64 v83; // [rsp+168h] [rbp+68h]
  DWORD *v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v86; // [rsp+180h] [rbp+80h]
  int v87; // [rsp+188h] [rbp+88h]
  int v88; // [rsp+18Ch] [rbp+8Ch]
  PSRWLOCK *p_SRWLock; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  const char *v91; // [rsp+1A0h] [rbp+A0h]
  int v92; // [rsp+1A8h] [rbp+A8h]
  int v93; // [rsp+1ACh] [rbp+ACh]
  EVENT_DATA_DESCRIPTOR v94; // [rsp+1B0h] [rbp+B0h] BYREF
  PSRWLOCK *v95; // [rsp+1D0h] [rbp+D0h]
  __int64 v96; // [rsp+1D8h] [rbp+D8h]
  DWORD *v97; // [rsp+1E0h] [rbp+E0h]
  __int64 v98; // [rsp+1E8h] [rbp+E8h]
  int *v99; // [rsp+1F0h] [rbp+F0h]
  __int64 v100; // [rsp+1F8h] [rbp+F8h]
  const char *v101; // [rsp+200h] [rbp+100h]
  int v102; // [rsp+208h] [rbp+108h]
  int v103; // [rsp+20Ch] [rbp+10Ch]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v9 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v8 )
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v10 > 5u )
    {
      v11 = (const unsigned __int16 *)*((_QWORD *)v8 + 6);
      v40 = v8[1];
      v12 = &word_1800F8406;
      v46 = &v40;
      v47 = 4LL;
      LODWORD(v13) = 0;
      if ( v11 )
      {
        v12 = v11;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v11 + v13) );
      }
      v14 = (const unsigned __int16 *)*((_QWORD *)v8 + 15);
      v49 = v13 + 1;
      v51 = v8 + 14;
      LODWORD(v13) = 0;
      v48 = v12;
      v15 = &word_1800F8406;
      v50 = 0;
      v52 = 4LL;
      if ( v14 )
      {
        v15 = v14;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v14 + v13) );
      }
      v16 = (const WCHAR *)*((_QWORD *)v8 + 2);
      v17 = &Src;
      v53 = v15;
      v54 = v13 + 1;
      v18 = &Src;
      v41 = *v8;
      v56 = &v41;
      LODWORD(v13) = 0;
      v55 = 0;
      v57 = 4LL;
      if ( v16 )
      {
        v18 = v16;
        v13 = -1LL;
        do
          ++v13;
        while ( v16[v13] );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v8 + 8);
      v59 = 2 * v13 + 2;
      v42 = v8[6];
      v61 = &v42;
      LODWORD(v13) = 0;
      v58 = v18;
      v20 = &word_1800F8406;
      v60 = 0;
      v62 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v19 + v13) );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v8 + 10);
      v64 = v13 + 1;
      v43 = v8[18];
      v66 = &v43;
      LODWORD(v13) = 0;
      v63 = v20;
      v22 = &word_1800F8406;
      v65 = 0;
      v67 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v21 + v13) );
      }
      v23 = (const WCHAR *)*((_QWORD *)v8 + 11);
      v69 = v13 + 1;
      LODWORD(v13) = 0;
      v68 = v22;
      v24 = &Src;
      v70 = 0;
      if ( v23 )
      {
        v24 = v23;
        v13 = -1LL;
        do
          ++v13;
        while ( v23[v13] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v8 + 13);
      v72 = 2 * v13 + 2;
      v44 = v8[24];
      v74 = &v44;
      LODWORD(v13) = 0;
      v71 = v24;
      v26 = &word_1800F8406;
      v73 = 0;
      v75 = 4LL;
      if ( v25 )
      {
        v26 = v25;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v25 + v13) );
      }
      v27 = (const WCHAR *)*((_QWORD *)v8 + 14);
      v77 = v13 + 1;
      LODWORD(v13) = 0;
      v76 = v26;
      v78 = 0;
      if ( v27 )
      {
        v17 = v27;
        v13 = -1LL;
        do
          ++v13;
        while ( v27[v13] );
      }
      v28 = (const unsigned __int16 *)*((_QWORD *)v8 + 5);
      v80 = 2 * v13 + 2;
      v29 = &word_1800F8406;
      v37 = v8[2];
      v82 = &v37;
      v38 = v8[15];
      v84 = &v38;
      LODWORD(v13) = 0;
      v79 = v17;
      v81 = 0;
      v83 = 4LL;
      v85 = 4LL;
      if ( v28 )
      {
        v29 = v28;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v28 + v13) );
      }
      v86 = v29;
      v87 = v13 + 1;
      LODWORD(SRWLock) = a2;
      p_SRWLock = &SRWLock;
      LODWORD(v13) = 0;
      v88 = 0;
      v90 = 4LL;
      v30 = a3 == 0LL;
      if ( a3 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( a3[v13] );
        v30 = a3 == 0LL;
      }
      if ( v30 )
        a3 = (const char *)&word_1800F8406;
      v93 = 0;
      v91 = a3;
      v92 = v13 + 1;
      TlgWrite(v10, &unk_180164920, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v31 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v31 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v95 = &SRWLock;
      v96 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v98 = 4LL;
      LODWORD(v33) = 0;
      v38 = CurrentThreadId;
      v97 = &v38;
      v37 = a2;
      v99 = &v37;
      v100 = 4LL;
      if ( a3 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( a3[v33] );
      }
      v103 = 0;
      v102 = v33 + 1;
      if ( !a3 )
        a3 = (const char *)&word_1800F8406;
      v101 = a3;
      TlgWrite(v31, &unk_180164779, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v94);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v34 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    v35 = *v34;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v36 = *v35;
      if ( !*v35 )
        break;
      if ( (__int64 **)v36 == v34 )
      {
        *v35 = *((_QWORD *)this + 3);
        break;
      }
      v35 = (__int64 *)(v36 + 16);
      *v34 = (__int64 *)(v36 + 16);
    }
    *v34 = 0LL;
  }
}
