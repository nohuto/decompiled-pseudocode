/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002AB44
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x1C001C3E0 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0013610 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C0029E28 (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003180C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int16 *v4; // r13
  KIRQL v5; // al
  __int64 *v6; // r12
  size_t v7; // r14
  int v8; // ebx
  unsigned __int8 *v9; // r8
  _QWORD *v10; // r15
  __int64 v11; // rdx
  _QWORD *v12; // r10
  unsigned __int16 *v13; // rbx
  unsigned __int8 *v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rax
  int v18; // r8d
  unsigned __int16 *v19; // r13
  int v20; // r9d
  unsigned __int8 *v21; // rax
  unsigned __int8 *v22; // r14
  _DWORD *v23; // rcx
  unsigned int v24; // edx
  int v25; // r12d
  __int64 v26; // rax
  size_t v27; // r12
  _QWORD *v28; // r12
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _DWORD *v32; // rbx
  __int64 v33; // r9
  unsigned int v34; // r14d
  unsigned __int64 v35; // r9
  __int64 v36; // r11
  _BYTE *v37; // rax
  unsigned __int16 v38; // r9
  int v39; // ecx
  int v40; // ecx
  int v41; // eax
  unsigned __int16 v42; // ax
  char v43; // cl
  __int64 v44; // rax
  int USBDErrorFromNTStatus; // eax
  unsigned __int8 *i; // rax
  unsigned int v47; // ebx
  unsigned int v48; // r10d
  __int64 v49; // r9
  unsigned __int16 v50; // r10
  unsigned __int8 *k; // rax
  unsigned __int8 *v52; // rbx
  unsigned int v53; // r13d
  unsigned int v54; // r14d
  char *v55; // r11
  __int64 v56; // rcx
  __int16 *v57; // r9
  __int64 v58; // r14
  unsigned int v59; // eax
  void *v60; // rcx
  void *v61; // rcx
  void *v62; // rcx
  PVOID PoolWithTag; // rax
  PVOID v64; // rax
  PVOID v65; // rax
  void *v66; // rcx
  void *v67; // rcx
  void *v68; // rcx
  __int64 v69; // rcx
  _QWORD *v70; // rcx
  unsigned int j; // r9d
  int v72; // ecx
  __int64 v73; // rcx
  _QWORD *v74; // r14
  _QWORD **v75; // rdi
  _QWORD *v76; // rax
  _QWORD *v77; // rcx
  int v79; // [rsp+28h] [rbp-E0h]
  __int64 v80; // [rsp+30h] [rbp-D8h]
  char v81; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v82; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v83; // [rsp+60h] [rbp-A8h] BYREF
  int v84; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v85; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v86; // [rsp+70h] [rbp-98h]
  unsigned __int16 *v87; // [rsp+78h] [rbp-90h]
  _QWORD *v88; // [rsp+80h] [rbp-88h]
  _QWORD *v89; // [rsp+88h] [rbp-80h]
  __int64 v90; // [rsp+90h] [rbp-78h]
  __int64 v91; // [rsp+98h] [rbp-70h] BYREF
  __int64 v92; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int16 *v93; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v94; // [rsp+B0h] [rbp-58h]
  _DWORD v95[14]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v96[5]; // [rsp+F0h] [rbp-18h] BYREF

  memset(v95, 0, sizeof(v95));
  v2 = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  memset(v96, 0, sizeof(v96));
  v3 = *(_QWORD *)(a1 + 456);
  LOWORD(v96[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v96);
  v4 = (unsigned __int16 *)v96[1];
  v90 = v96[1];
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  v6 = (__int64 *)(a1 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
  memset(v95, 0, sizeof(v95));
  v95[6] = 1;
  v95[7] = 1;
  v95[0] = 56;
  v7 = *(unsigned __int16 *)(*((_QWORD *)v4 + 3) + 2LL);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v95,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL,
         v7 + 39,
         &v91,
         a1 + 48);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v80) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Fu,
        (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
        v80);
    }
    goto LABEL_85;
  }
  v10 = (_QWORD *)*v6;
  v89 = v10;
  *v10 = v91;
  memmove((void *)(*v6 + 32), *((const void **)v4 + 3), v7);
  LODWORD(v86) = 0;
  v10[3] = v10 + 2;
  LODWORD(v12) = (_DWORD)v10 + 32;
  v10[2] = v10 + 2;
  v13 = v4 + 20;
  v14 = (unsigned __int8 *)(v4 + 21);
  v15 = (unsigned __int64)v4 + *v4;
  v88 = v10 + 4;
  v94 = v15;
  v16 = 0;
  if ( (unsigned __int64)(v4 + 21) < v15 )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *v14;
      v19 = v13;
      v20 = *((unsigned __int8 *)v13 + 3);
      v81 = 0;
      v21 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                                 (_DWORD)v12,
                                 (_DWORD)v12,
                                 v18,
                                 v20,
                                 -1,
                                 -1,
                                 -1,
                                 (__int64)&v81,
                                 *(_QWORD *)(v17 + 1432));
      v22 = v21;
      if ( !v21 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_90;
        v38 = 32;
        goto LABEL_89;
      }
      v23 = *(_DWORD **)(a1 + 2448);
      if ( v23 )
      {
        v24 = 0;
        if ( *v23 )
        {
          while ( *((_BYTE *)v23 + 2 * v24 + 5) != v21[3] || *((_BYTE *)v23 + 2 * v24 + 4) != v21[2] )
          {
            if ( ++v24 >= *v23 )
              goto LABEL_13;
          }
          _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
        }
      }
LABEL_13:
      *((_DWORD *)v13 + 4) = v21[4];
      v25 = v21[4] + v16;
      v87 = v13 + 8;
      v26 = *v13;
      LODWORD(v86) = v25;
      v93 = (unsigned __int16 *)((char *)v13 + v26);
      memset(v95, 0, sizeof(v95));
      v95[6] = 1;
      v95[7] = 1;
      v95[0] = 56;
      v27 = 72LL * *((unsigned int *)v13 + 4) + 40;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             v95,
             (unsigned int)ExDefaultNonPagedPoolType,
             1681082453LL,
             v27,
             &v92,
             &v83);
      if ( v8 < 0 )
        break;
      *((_QWORD *)v19 + 1) = v83;
      memset(v83, 0, v27);
      *(_QWORD *)v83 = v92;
      *((_QWORD *)v83 + 4) = v22;
      *((_DWORD *)v83 + 6) = v22[4];
      if ( v81 == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v83 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v83 + 7, 2u);
      }
      v28 = v89 + 2;
      v29 = (char *)v83 + 8;
      v30 = (_QWORD *)v89[3];
      if ( (_QWORD *)*v30 != v89 + 2 )
LABEL_164:
        __fastfail(3u);
      v11 = (__int64)v87;
      v12 = v88;
      *((_QWORD *)v83 + 2) = v30;
      *v29 = v28;
      *v30 = v29;
      v28[1] = v29;
      *((_BYTE *)v19 + 4) = v22[5];
      *((_BYTE *)v19 + 5) = v22[6];
      *((_BYTE *)v19 + 6) = v22[7];
      v31 = *v22;
      v32 = v83;
      v9 = &v22[v31];
      v33 = *(unsigned __int16 *)(*(_QWORD *)(v90 + 24) + 2LL) - v31 - (_QWORD)v22;
      v34 = 0;
      v35 = (unsigned __int64)&v9[v33 + (_QWORD)v12];
      if ( *(_DWORD *)v11 )
      {
        do
        {
          if ( (unsigned __int64)v9 >= v35 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_90;
            v38 = 22;
            goto LABEL_89;
          }
          v36 = 9LL * v34;
          v32[2 * v36 + 16] = *(_DWORD *)&v19[12 * v34 + 22];
          v37 = v9 + 1;
          v32[2 * v36 + 12] = 1;
          if ( (unsigned __int64)(v9 + 1) >= v35 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_90;
            v38 = 23;
LABEL_89:
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              2u,
              5u,
              v38,
              (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
            goto LABEL_90;
          }
          while ( *v37 != 5 )
          {
            if ( !*v9 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_90;
              v38 = 24;
              goto LABEL_89;
            }
            v9 += *v9;
            if ( (unsigned __int64)v9 >= v35 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_90;
              v38 = 25;
              goto LABEL_89;
            }
            v37 = v9 + 1;
            if ( (unsigned __int64)(v9 + 1) >= v35 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_90;
              v38 = 26;
              goto LABEL_89;
            }
          }
          if ( (unsigned __int64)(v9 + 7) > v35 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_90;
            v38 = 28;
            goto LABEL_89;
          }
          v39 = *(_DWORD *)&v19[12 * v34 + 22];
          if ( (v39 & 1) != 0 )
          {
            *((_WORD *)v9 + 2) = v19[12 * v34 + 12];
            v39 = *(_DWORD *)&v19[12 * v34 + 22];
          }
          v40 = v39 & 0xF0;
          if ( v40 == 16 )
          {
            v32[18 * v34 + 26] = 1;
          }
          else if ( v40 == 32 )
          {
            v32[18 * v34 + 26] = 2;
          }
          else
          {
            v41 = 3;
            if ( v40 != 48 )
              v41 = 0;
            v32[18 * v34 + 26] = v41;
          }
          *(_QWORD *)&v32[18 * v34 + 18] = v9;
          v32[18 * v34 + 20] = v35 - (_DWORD)v9;
          v42 = *((_WORD *)v9 + 2);
          if ( *(_WORD *)(a1 + 1990) < 0x250u )
          {
            v11 = (__int64)v87;
            v42 = (v42 & 0x7FF) * (((v42 >> 11) & 3) + 1);
          }
          v19[12 * v34 + 12] = v42;
          v43 = 6;
          if ( v9[6] < 6u )
            v43 = v9[6];
          HIBYTE(v19[12 * v34 + 13]) = v43;
          LOBYTE(v19[12 * v34 + 13]) = v9[2];
          if ( (v9[3] & 3) != 0 )
          {
            switch ( v9[3] & 3 )
            {
              case 1:
                *(_DWORD *)&v19[12 * v34 + 14] = 1;
                break;
              case 2:
                *(_DWORD *)&v19[12 * v34 + 14] = 2;
                break;
              case 3:
                *(_DWORD *)&v19[12 * v34 + 14] = 3;
                break;
            }
          }
          else
          {
            *(_DWORD *)&v19[12 * v34 + 14] = 0;
          }
          if ( !v19[12 * v34 + 12] )
            _InterlockedOr(&v32[18 * v34 + 13], 1u);
          if ( !*v9 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_90;
            v38 = 29;
            goto LABEL_89;
          }
          v9 += *v9;
          if ( (unsigned __int64)v9 < v35 && (unsigned __int64)(v9 + 1) < v35 && v9[1] == 48 )
          {
            if ( *v9 )
            {
              if ( (unsigned __int64)(v9 + 6) <= v35 )
              {
                v44 = *(_QWORD *)&v32[18 * v34 + 18];
                *(_QWORD *)&v32[18 * v34 + 22] = v9;
                if ( (*(_BYTE *)(v44 + 3) & 3) == 1 )
                {
                  if ( (v32[18 * v34 + 13] & 1) == 0 )
                    v19[12 * v34 + 12] = *((_WORD *)v9 + 2);
                  if ( (v9[3] & 0x80u) != 0 )
                  {
                    v9 += *v9;
                    if ( (unsigned __int64)v9 < v35
                      && (unsigned __int64)(v9 + 1) < v35
                      && v9[1] == 49
                      && *v9
                      && (unsigned __int64)(v9 + 8) <= v35 )
                    {
                      *(_QWORD *)&v32[18 * v34 + 24] = v9;
                    }
                  }
                }
              }
            }
          }
          ++v34;
        }
        while ( v34 < *(_DWORD *)v11 );
        LODWORD(v12) = (_DWORD)v88;
      }
      v13 = v93;
      v14 = (unsigned __int8 *)(v93 + 1);
      if ( (unsigned __int64)(v93 + 1) >= v94 )
        goto LABEL_94;
      v16 = v86;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v80) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x21u,
        (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
        v80);
    }
    v6 = (__int64 *)(a1 + 48);
LABEL_85:
    if ( v8 < 0 )
      goto LABEL_91;
    v2 = *v6;
    goto LABEL_163;
  }
LABEL_94:
  v6 = (__int64 *)(a1 + 48);
  v9 = *(unsigned __int8 **)(a1 + 48);
  if ( v9 )
  {
    for ( i = (unsigned __int8 *)*((_QWORD *)v9 + 2); ; i = *(unsigned __int8 **)i )
    {
      v11 = (__int64)(i - 8);
      if ( v9 + 16 == i )
        break;
      v47 = *(_DWORD *)(v11 + 24);
      v48 = 0;
      if ( v47 )
      {
        v49 = v11 + 72;
        while ( (*(_BYTE *)(*(_QWORD *)v49 + 2LL) & 0xF) != 0 )
        {
          ++v48;
          v49 += 72LL;
          if ( v48 >= v47 )
            goto LABEL_101;
        }
        v8 = -1073741823;
        *(_DWORD *)(a1 + 1564) = -1072693239;
        goto LABEL_91;
      }
LABEL_101:
      ;
    }
  }
  LOWORD(v84) = 0;
  v50 = 0;
  v85 = 0;
  v82 = 0;
  if ( !v9 )
  {
LABEL_121:
    v8 = 0;
    v58 = (unsigned int)v86;
    *((_DWORD *)v89 + 2) = v86;
    v59 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v59 )
    {
      if ( (unsigned int)v58 <= v59 )
      {
LABEL_144:
        v69 = *(_QWORD *)(a1 + 56);
        if ( v69 )
        {
          v70 = (_QWORD *)(v69 + 16);
          *(_DWORD *)(a1 + 144) = 0;
          *(_DWORD *)(a1 + 128) = 0;
          v9 = (unsigned __int8 *)(*v70 - 8LL);
          if ( v70 != (_QWORD *)*v70 )
          {
            do
            {
              for ( j = 0; j < *((_DWORD *)v9 + 6); ++j )
              {
                v72 = *(_DWORD *)&v9[72 * j + 48];
                if ( v72 == 4 )
                {
                  *(_DWORD *)&v9[72 * j + 48] = 5;
                  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)&v9[72 * j + 40];
                }
                else if ( v72 == 6 )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)&v9[72 * j + 40];
                }
              }
              v73 = *((_QWORD *)v9 + 1);
              v9 = (unsigned __int8 *)(v73 - 8);
            }
            while ( *(_QWORD *)(a1 + 56) + 16LL != v73 );
          }
        }
        goto LABEL_85;
      }
      v60 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v60 )
      {
        ExFreePoolWithTag(v60, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v61 = *(void **)(a1 + 136);
      if ( v61 )
      {
        ExFreePoolWithTag(v61, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v62 = *(void **)(a1 + 120);
      if ( v62 )
      {
        ExFreePoolWithTag(v62, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !*(_DWORD *)(a1 + 96) && (_DWORD)v58 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v58, 0x64334855u);
      *(_QWORD *)(a1 + 104) = PoolWithTag;
      if ( PoolWithTag )
      {
        v64 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v58, 0x64334855u);
        *(_QWORD *)(a1 + 136) = v64;
        if ( v64 )
        {
          v65 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v58, 0x64334855u);
          *(_QWORD *)(a1 + 120) = v65;
          if ( v65 )
          {
            *(_DWORD *)(a1 + 96) = v58;
            v8 = 0;
            goto LABEL_144;
          }
        }
      }
      v66 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v66 )
      {
        ExFreePoolWithTag(v66, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v67 = *(void **)(a1 + 136);
      if ( v67 )
      {
        ExFreePoolWithTag(v67, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v68 = *(void **)(a1 + 120);
      if ( v68 )
      {
        ExFreePoolWithTag(v68, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      v8 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v80) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
          v80);
      }
    }
    if ( v8 < 0 )
      goto LABEL_91;
    goto LABEL_144;
  }
  for ( k = (unsigned __int8 *)*((_QWORD *)v9 + 2); ; k = *(unsigned __int8 **)k )
  {
    v52 = k - 8;
    if ( v9 + 16 == k )
    {
      v6 = (__int64 *)(a1 + 48);
      goto LABEL_121;
    }
    v53 = *((_DWORD *)v52 + 6);
    v54 = 0;
    if ( v53 )
      break;
LABEL_117:
    ;
  }
  v55 = (char *)(v52 + 52);
  while ( 1 )
  {
    v56 = *(_QWORD *)(v55 + 20);
    if ( (*(_DWORD *)v55 & 1) == 0 )
      break;
LABEL_116:
    ++v54;
    v55 += 72;
    if ( v54 >= v53 )
      goto LABEL_117;
  }
  LOBYTE(v11) = *(_BYTE *)(v56 + 2);
  if ( (*(_BYTE *)(v56 + 3) & 3) != 0 )
  {
    v57 = (__int16 *)&v84;
    if ( (v11 & 0x80u) == 0LL )
      v57 = &v85;
  }
  else
  {
    v57 = (__int16 *)&v82;
  }
  if ( ((v50 >> (v11 & 0xF)) & 1) == 0 && (((unsigned __int16)*v57 >> (v11 & 0xF)) & 1) == 0 )
  {
    *v57 |= 1 << (v11 & 0xF);
    v50 = v82;
    goto LABEL_116;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL), v11, (__int64)v9, (__int64)v57, v79);
LABEL_90:
  v8 = -1073741823;
  *(_DWORD *)(a1 + 1564) = -1073737984;
LABEL_91:
  *(_DWORD *)(a1 + 1560) = v8;
  if ( !*(_DWORD *)(a1 + 1564) )
  {
    if ( v8 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v8);
    *(_DWORD *)(a1 + 1564) = USBDErrorFromNTStatus;
  }
  v74 = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
  if ( v74 )
  {
    v75 = (_QWORD **)(v74 + 2);
    while ( 1 )
    {
      v77 = *v75;
      if ( *v75 == v75 )
        break;
      if ( (_QWORD **)v77[1] != v75 )
        goto LABEL_164;
      v76 = (_QWORD *)*v77;
      if ( *(_QWORD **)(*v77 + 8LL) != v77 )
        goto LABEL_164;
      *v75 = v76;
      v76[1] = v75;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(v77 - 1));
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int8 *))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      *v74,
      v9);
  }
LABEL_163:
  *(_QWORD *)(v90 + 32) = v2;
  return ((v8 >> 31) & 0xFFFFFFF4) + 4077;
}
