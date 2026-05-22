/*
 * XREFs of ?StopActivity@OnHandSpatialObjectRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800BD1A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B4284 (-IgnoreCurrentThread@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::OnHandSpatialObjectRemoved::StopActivity(
        SpatialInteractionDevices::SpatialInteractionTrace::OnHandSpatialObjectRemoved *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // r10
  const unsigned __int16 *v7; // r8
  const unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // rcx
  const unsigned __int16 *v12; // rdx
  const WCHAR *v13; // rcx
  const WCHAR *v14; // r9
  const WCHAR *v15; // rdx
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // rdx
  const WCHAR *v20; // rcx
  const WCHAR *v21; // rdx
  const unsigned __int16 *v22; // rcx
  const unsigned __int16 *v23; // rdx
  const WCHAR *v24; // rcx
  const unsigned __int16 *v25; // rcx
  const struct _TlgProvider_t *v26; // rbx
  int v27; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v29; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+9Ch] [rbp-64h]
  int *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  int *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  const WCHAR *v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+DCh] [rbp-24h]
  int *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v54; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+F8h] [rbp-8h]
  int v56; // [rsp+FCh] [rbp-4h]
  int *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v59; // [rsp+110h] [rbp+10h]
  int v60; // [rsp+118h] [rbp+18h]
  int v61; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v62; // [rsp+120h] [rbp+20h]
  int v63; // [rsp+128h] [rbp+28h]
  int v64; // [rsp+12Ch] [rbp+2Ch]
  int *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v67; // [rsp+140h] [rbp+40h]
  int v68; // [rsp+148h] [rbp+48h]
  int v69; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v70; // [rsp+150h] [rbp+50h]
  int v71; // [rsp+158h] [rbp+58h]
  int v72; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v77; // [rsp+180h] [rbp+80h]
  int v78; // [rsp+188h] [rbp+88h]
  int v79; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v80; // [rsp+190h] [rbp+90h] BYREF
  PSRWLOCK *v81; // [rsp+1B0h] [rbp+B0h]
  __int64 v82; // [rsp+1B8h] [rbp+B8h]
  DWORD *v83; // [rsp+1C0h] [rbp+C0h]
  __int64 v84; // [rsp+1C8h] [rbp+C8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( *(_DWORD *)v6 > 4u )
    {
      v7 = &word_18014A10A;
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v31 = v4[1];
      v37 = &v31;
      LODWORD(v9) = 0;
      v38 = 4LL;
      v10 = &word_18014A10A;
      if ( v8 )
      {
        v10 = v8;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v8 + v9) );
      }
      v11 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v40 = v9 + 1;
      v42 = v4 + 14;
      LODWORD(v9) = 0;
      v39 = v10;
      v12 = &word_18014A10A;
      v41 = 0;
      v43 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v11 + v9) );
      }
      v13 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v14 = &sourceString;
      v44 = v12;
      v45 = v9 + 1;
      v15 = &sourceString;
      v32 = *v4;
      v47 = &v32;
      LODWORD(v9) = 0;
      v46 = 0;
      v48 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v9 = -1LL;
        do
          ++v9;
        while ( v13[v9] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v50 = 2 * v9 + 2;
      v33 = v4[6];
      v52 = &v33;
      LODWORD(v9) = 0;
      v49 = v15;
      v17 = &word_18014A10A;
      v51 = 0;
      v53 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v16 + v9) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v55 = v9 + 1;
      v34 = v4[18];
      v57 = &v34;
      LODWORD(v9) = 0;
      v54 = v17;
      v19 = &word_18014A10A;
      v56 = 0;
      v58 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v18 + v9) );
      }
      v20 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v60 = v9 + 1;
      LODWORD(v9) = 0;
      v59 = v19;
      v21 = &sourceString;
      v61 = 0;
      if ( v20 )
      {
        v21 = v20;
        v9 = -1LL;
        do
          ++v9;
        while ( v20[v9] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v63 = 2 * v9 + 2;
      v35 = v4[24];
      v65 = &v35;
      LODWORD(v9) = 0;
      v62 = v21;
      v23 = &word_18014A10A;
      v64 = 0;
      v66 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v22 + v9) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v68 = v9 + 1;
      LODWORD(v9) = 0;
      v67 = v23;
      v69 = 0;
      if ( v24 )
      {
        v14 = v24;
        v9 = -1LL;
        do
          ++v9;
        while ( v24[v9] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v71 = 2 * v9 + 2;
      v29 = v4[2];
      v73 = &v29;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v9) = 0;
      v70 = v14;
      v72 = 0;
      v74 = 4LL;
      v76 = 4LL;
      if ( v25 )
      {
        v7 = v25;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v25 + v9) );
      }
      v77 = v7;
      v78 = v9 + 1;
      v79 = 0;
      TlgWrite(v6, &unk_18016A9B3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v26 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( *(_DWORD *)v26 > 4u )
    {
      v27 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v81 = &SRWLock;
      LODWORD(SRWLock) = v27;
      v82 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v84 = 4LL;
      v29 = CurrentThreadId;
      v83 = &v29;
      TlgWrite(v26, &unk_18016AAE8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v80);
    }
  }
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
