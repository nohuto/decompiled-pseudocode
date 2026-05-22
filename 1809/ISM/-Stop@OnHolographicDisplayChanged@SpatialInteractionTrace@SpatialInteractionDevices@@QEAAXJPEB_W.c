/*
 * XREFs of ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800AB66C
 * Callers:
 *     _lambda_df3ea2b2c6b3ab40825ce20637938084_::operator() @ 0x1800B0F3C (_lambda_df3ea2b2c6b3ab40825ce20637938084_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B4284 (-IgnoreCurrentThread@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::Stop(
        SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *this,
        int a2,
        const wchar_t *a3,
        bool a4,
        bool a5)
{
  int *v5; // rbx
  int v9; // eax
  int *v10; // rbx
  RTL_SRWLOCK *v11; // rcx
  const struct _TlgProvider_t *v12; // r11
  const unsigned __int16 *v13; // r9
  const unsigned __int16 *v14; // rdx
  __int64 v15; // rax
  const unsigned __int16 *v16; // r8
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // r8
  const WCHAR *v19; // rdx
  const WCHAR *v20; // r8
  const unsigned __int16 *v21; // rdx
  const unsigned __int16 *v22; // r8
  const unsigned __int16 *v23; // rdx
  const unsigned __int16 *v24; // r8
  const WCHAR *v25; // rdx
  const WCHAR *v26; // r8
  const unsigned __int16 *v27; // rdx
  const unsigned __int16 *v28; // r8
  const WCHAR *v29; // rdx
  const WCHAR *v30; // r8
  const unsigned __int16 *v31; // rdx
  bool v32; // zf
  const struct _TlgProvider_t *v33; // rbx
  int v34; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v36; // rcx
  bool v37; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v38[3]; // [rsp+39h] [rbp-CFh] BYREF
  DWORD v39; // [rsp+3Ch] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+4Ch] [rbp-BCh] BYREF
  int v43; // [rsp+50h] [rbp-B8h] BYREF
  int v44; // [rsp+54h] [rbp-B4h] BYREF
  int v45; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v47; // [rsp+88h] [rbp-80h]
  __int64 v48; // [rsp+90h] [rbp-78h]
  const unsigned __int16 *v49; // [rsp+98h] [rbp-70h]
  int v50; // [rsp+A0h] [rbp-68h]
  int v51; // [rsp+A4h] [rbp-64h]
  int *v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v54; // [rsp+B8h] [rbp-50h]
  int v55; // [rsp+C0h] [rbp-48h]
  int v56; // [rsp+C4h] [rbp-44h]
  int *v57; // [rsp+C8h] [rbp-40h]
  __int64 v58; // [rsp+D0h] [rbp-38h]
  const WCHAR *v59; // [rsp+D8h] [rbp-30h]
  int v60; // [rsp+E0h] [rbp-28h]
  int v61; // [rsp+E4h] [rbp-24h]
  int *v62; // [rsp+E8h] [rbp-20h]
  __int64 v63; // [rsp+F0h] [rbp-18h]
  const unsigned __int16 *v64; // [rsp+F8h] [rbp-10h]
  int v65; // [rsp+100h] [rbp-8h]
  int v66; // [rsp+104h] [rbp-4h]
  int *v67; // [rsp+108h] [rbp+0h]
  __int64 v68; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v69; // [rsp+118h] [rbp+10h]
  int v70; // [rsp+120h] [rbp+18h]
  int v71; // [rsp+124h] [rbp+1Ch]
  const WCHAR *v72; // [rsp+128h] [rbp+20h]
  int v73; // [rsp+130h] [rbp+28h]
  int v74; // [rsp+134h] [rbp+2Ch]
  int *v75; // [rsp+138h] [rbp+30h]
  __int64 v76; // [rsp+140h] [rbp+38h]
  const unsigned __int16 *v77; // [rsp+148h] [rbp+40h]
  int v78; // [rsp+150h] [rbp+48h]
  int v79; // [rsp+154h] [rbp+4Ch]
  const WCHAR *v80; // [rsp+158h] [rbp+50h]
  int v81; // [rsp+160h] [rbp+58h]
  int v82; // [rsp+164h] [rbp+5Ch]
  DWORD *v83; // [rsp+168h] [rbp+60h]
  __int64 v84; // [rsp+170h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+178h] [rbp+70h]
  __int64 v86; // [rsp+180h] [rbp+78h]
  const unsigned __int16 *v87; // [rsp+188h] [rbp+80h]
  int v88; // [rsp+190h] [rbp+88h]
  int v89; // [rsp+194h] [rbp+8Ch]
  const wchar_t *v90; // [rsp+198h] [rbp+90h]
  int v91; // [rsp+1A0h] [rbp+98h]
  int v92; // [rsp+1A4h] [rbp+9Ch]
  bool *v93; // [rsp+1A8h] [rbp+A0h]
  __int64 v94; // [rsp+1B0h] [rbp+A8h]
  _BYTE *v95; // [rsp+1B8h] [rbp+B0h]
  __int64 v96; // [rsp+1C0h] [rbp+B8h]
  int *v97; // [rsp+1C8h] [rbp+C0h]
  __int64 v98; // [rsp+1D0h] [rbp+C8h]
  EVENT_DATA_DESCRIPTOR v99; // [rsp+1D8h] [rbp+D0h] BYREF
  PSRWLOCK *v100; // [rsp+1F8h] [rbp+F0h]
  __int64 v101; // [rsp+200h] [rbp+F8h]
  DWORD *v102; // [rsp+208h] [rbp+100h]
  __int64 v103; // [rsp+210h] [rbp+108h]
  const wchar_t *v104; // [rsp+218h] [rbp+110h]
  int v105; // [rsp+220h] [rbp+118h]
  int v106; // [rsp+224h] [rbp+11Ch]
  _BYTE *v107; // [rsp+228h] [rbp+120h]
  __int64 v108; // [rsp+230h] [rbp+128h]
  bool *v109; // [rsp+238h] [rbp+130h]
  __int64 v110; // [rsp+240h] [rbp+138h]
  int *v111; // [rsp+248h] [rbp+140h]
  __int64 v112; // [rsp+250h] [rbp+148h]
  int v113; // [rsp+2A0h] [rbp+198h] BYREF

  v113 = a2;
  v5 = (int *)*((_QWORD *)this + 6);
  v9 = v5[19];
  if ( v9 < 0 && v9 == v5[21] )
    v10 = v5 + 20;
  else
    v10 = 0LL;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v11 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v10 )
  {
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( *(_DWORD *)v12 > 4u )
    {
      v13 = &word_18014A10A;
      v14 = (const unsigned __int16 *)*((_QWORD *)v10 + 6);
      v41 = v10[1];
      v47 = &v41;
      LODWORD(v15) = 0;
      v48 = 4LL;
      v16 = &word_18014A10A;
      if ( v14 )
      {
        v16 = v14;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v14 + v15) );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v10 + 15);
      v50 = v15 + 1;
      v52 = v10 + 14;
      LODWORD(v15) = 0;
      v49 = v16;
      v18 = &word_18014A10A;
      v51 = 0;
      v53 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v17 + v15) );
      }
      v19 = (const WCHAR *)*((_QWORD *)v10 + 2);
      v54 = v18;
      v55 = v15 + 1;
      v20 = &sourceString;
      v42 = *v10;
      v57 = &v42;
      LODWORD(v15) = 0;
      v56 = 0;
      v58 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v15 = -1LL;
        do
          ++v15;
        while ( v19[v15] );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v10 + 8);
      v60 = 2 * v15 + 2;
      v43 = v10[6];
      v62 = &v43;
      LODWORD(v15) = 0;
      v59 = v20;
      v22 = &word_18014A10A;
      v61 = 0;
      v63 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v21 + v15) );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v10 + 10);
      v65 = v15 + 1;
      v44 = v10[18];
      v67 = &v44;
      LODWORD(v15) = 0;
      v64 = v22;
      v24 = &word_18014A10A;
      v66 = 0;
      v68 = 4LL;
      if ( v23 )
      {
        v24 = v23;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v23 + v15) );
      }
      v25 = (const WCHAR *)*((_QWORD *)v10 + 11);
      v70 = v15 + 1;
      LODWORD(v15) = 0;
      v69 = v24;
      v26 = &sourceString;
      v71 = 0;
      if ( v25 )
      {
        v26 = v25;
        v15 = -1LL;
        do
          ++v15;
        while ( v25[v15] );
      }
      v27 = (const unsigned __int16 *)*((_QWORD *)v10 + 13);
      v73 = 2 * v15 + 2;
      v45 = v10[24];
      v75 = &v45;
      LODWORD(v15) = 0;
      v72 = v26;
      v28 = &word_18014A10A;
      v74 = 0;
      v76 = 4LL;
      if ( v27 )
      {
        v28 = v27;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v27 + v15) );
      }
      v29 = (const WCHAR *)*((_QWORD *)v10 + 14);
      v78 = v15 + 1;
      LODWORD(v15) = 0;
      v77 = v28;
      v30 = &sourceString;
      v79 = 0;
      if ( v29 )
      {
        v30 = v29;
        v15 = -1LL;
        do
          ++v15;
        while ( v29[v15] );
      }
      v31 = (const unsigned __int16 *)*((_QWORD *)v10 + 5);
      v81 = 2 * v15 + 2;
      v39 = v10[2];
      v83 = &v39;
      LODWORD(SRWLock) = v10[15];
      p_SRWLock = &SRWLock;
      LODWORD(v15) = 0;
      v80 = v30;
      v82 = 0;
      v84 = 4LL;
      v86 = 4LL;
      if ( v31 )
      {
        v13 = v31;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v31 + v15) );
      }
      v87 = v13;
      v88 = v15 + 1;
      LODWORD(v15) = 0;
      v89 = 0;
      v32 = a3 == 0LL;
      if ( a3 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( a3[v15] );
        v32 = a3 == 0LL;
      }
      v92 = 0;
      v91 = 2 * v15 + 2;
      v37 = a4;
      v93 = &v37;
      if ( v32 )
        a3 = &sourceString;
      v38[0] = a5;
      v95 = v38;
      v97 = &v113;
      v90 = a3;
      v94 = 1LL;
      v96 = 1LL;
      v98 = 4LL;
      TlgWrite(v12, &unk_18016928A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else
  {
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    v33 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( *(_DWORD *)v33 > 4u )
    {
      v34 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v100 = &SRWLock;
      LODWORD(SRWLock) = v34;
      v101 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v103 = 4LL;
      LODWORD(v36) = 0;
      v39 = CurrentThreadId;
      v102 = &v39;
      if ( a3 )
      {
        v36 = -1LL;
        do
          ++v36;
        while ( a3[v36] );
      }
      v106 = 0;
      v105 = 2 * v36 + 2;
      v38[0] = a4;
      v107 = v38;
      v37 = a5;
      v108 = 1LL;
      v109 = &v37;
      if ( !a3 )
        a3 = &sourceString;
      v104 = a3;
      v111 = &v113;
      v110 = 1LL;
      v112 = 4LL;
      TlgWrite(v33, &unk_18016A038, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &v99);
    }
  }
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
