/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002B7A8
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x1C0020CE0 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0013610 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     McTemplateK0phhhquuuuu @ 0x1C0029AF0 (McTemplateK0phhhquuuuu.c)
 *     WPP_RECORDER_SF_Ddddd @ 0x1C0029CF4 (WPP_RECORDER_SF_Ddddd.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003180C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  _DWORD *v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rax
  KIRQL v7; // al
  __int64 v8; // r13
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rsi
  int v14; // ebx
  void **v15; // r12
  int USBDErrorFromNTStatus; // eax
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  __int16 v19; // cx
  size_t v20; // r15
  int v21; // eax
  unsigned int v22; // r15d
  _DWORD *v23; // rbx
  unsigned __int8 *v24; // r8
  unsigned __int64 v25; // rsi
  __int64 v26; // r10
  _BYTE *v27; // rax
  unsigned __int16 v28; // r9
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  unsigned __int16 v32; // ax
  char v33; // cl
  __int64 v34; // rax
  unsigned int v35; // r8d
  unsigned int v36; // r9d
  char *v37; // rdx
  unsigned int v38; // ebx
  unsigned int *v39; // rdx
  unsigned int v40; // r10d
  unsigned int i; // r8d
  unsigned int v42; // edx
  _QWORD *v43; // r15
  _QWORD *v44; // rax
  char v45; // r12
  struct _MCGEN_TRACE_CONTEXT **v46; // r12
  unsigned int v47; // r9d
  unsigned int v48; // eax
  _QWORD *v49; // r8
  unsigned int v50; // ecx
  __int64 v51; // r11
  __int64 v52; // r10
  _QWORD *v53; // r13
  __int64 v54; // r13
  unsigned int v55; // r14d
  unsigned int v56; // eax
  void *v57; // rcx
  void *v58; // rcx
  void *v59; // rcx
  PVOID PoolWithTag; // rax
  PVOID v61; // rax
  PVOID v62; // rax
  void *v63; // rcx
  void *v64; // rcx
  void *v65; // rcx
  _QWORD *v66; // r9
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  unsigned int j; // r8d
  int v70; // ecx
  _QWORD *k; // rax
  unsigned int m; // r9d
  __int64 v73; // rax
  _QWORD *v74; // r8
  _QWORD *v75; // rdx
  _QWORD *v76; // rax
  int v78; // [rsp+28h] [rbp-E0h]
  __int64 v79; // [rsp+30h] [rbp-D8h]
  char v80; // [rsp+78h] [rbp-90h] BYREF
  char v81; // [rsp+79h] [rbp-8Fh]
  void *v82; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int8 v83; // [rsp+88h] [rbp-80h]
  unsigned int v84; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v85; // [rsp+90h] [rbp-78h]
  _QWORD *v86; // [rsp+98h] [rbp-70h]
  void **v87; // [rsp+A0h] [rbp-68h]
  _QWORD *v88; // [rsp+A8h] [rbp-60h]
  __int64 v89; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-50h]
  __int64 v91; // [rsp+C0h] [rbp-48h]
  _DWORD v92[14]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v93[5]; // [rsp+100h] [rbp-8h] BYREF

  memset(v93, 0, sizeof(v93));
  memset(v92, 0, sizeof(v92));
  v80 = 0;
  v82 = 0LL;
  v86 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  memset(v93, 0, sizeof(v93));
  v2 = *(_QWORD *)(a1 + 456);
  LOWORD(v93[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v93);
  v3 = v93[1];
  v4 = (_DWORD *)(v93[1] + 32LL);
  if ( *(_WORD *)(v93[1] + 2LL) == 1 )
  {
    v5 = v93[1] + 32LL;
    *(_DWORD *)(a1 + 148) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = v93[1] + 48LL;
    *(_DWORD *)(a1 + 148) = *v4;
    v6 = 0LL;
    if ( *v4 )
      v6 = *(_QWORD *)(v3 + 40);
  }
  *(_QWORD *)(a1 + 152) = v6;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(unsigned __int8 *)(v5 + 3);
  v11 = *(unsigned __int8 *)(v5 + 2);
  v91 = *(_QWORD *)(a1 + 48);
  v8 = v91;
  v12 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                             (int)v8 + 32,
                             (int)v8 + 32,
                             v11,
                             v10,
                             -1,
                             -1,
                             -1,
                             (__int64)&v80,
                             *(_QWORD *)(v9 + 1432));
  v13 = v12;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x22u,
        (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
    *(_DWORD *)(a1 + 1564) = -1073725440;
    goto LABEL_9;
  }
  v17 = *(_DWORD **)(a1 + 2448);
  if ( v17 )
  {
    v18 = 0;
    if ( *v17 )
    {
      while ( *((_BYTE *)v17 + 2 * v18 + 5) != v12[3] || *((_BYTE *)v17 + 2 * v18 + 4) != v12[2] )
      {
        if ( ++v18 >= *v17 )
          goto LABEL_22;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
    }
  }
LABEL_22:
  v19 = v12[4] + 1;
  *(_DWORD *)(v5 + 4) = 0;
  v15 = (void **)(v5 + 8);
  *(_QWORD *)(v5 + 8) = 0LL;
  v87 = (void **)(v5 + 8);
  *(_WORD *)v5 = 24 * v19;
  *(_DWORD *)(v5 + 16) = v12[4];
  memset(v92, 0, sizeof(v92));
  v92[6] = 1;
  v92[7] = 1;
  v92[0] = 56;
  v20 = 72LL * *(unsigned int *)(v5 + 16) + 40;
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          v92,
          (unsigned int)ExDefaultNonPagedPoolType,
          1681082453LL,
          v20,
          &v89,
          &v82);
  v14 = v21;
  if ( v21 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v79) = v21;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x23u,
        (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
        v79);
    }
    goto LABEL_169;
  }
  memset(v82, 0, v20);
  *(_QWORD *)v82 = v89;
  *((_QWORD *)v82 + 4) = v13;
  *((_DWORD *)v82 + 6) = v13[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v80 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v82 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v82 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v82;
  }
  v22 = 0;
  *(_BYTE *)(v5 + 4) = v13[5];
  *(_BYTE *)(v5 + 5) = v13[6];
  *(_BYTE *)(v5 + 6) = v13[7];
  v23 = v82;
  v24 = &v13[*v13];
  v25 = *(unsigned __int16 *)(v8 + 34) + v8 + 32;
  if ( !*(_DWORD *)(v5 + 16) )
  {
LABEL_76:
    v35 = 0;
    v36 = *((_DWORD *)v82 + 6);
    if ( v36 )
    {
      v37 = (char *)v82 + 72;
      while ( (*(_BYTE *)(*(_QWORD *)v37 + 2LL) & 0xF) != 0 )
      {
        ++v35;
        v37 += 72;
        if ( v35 >= v36 )
          goto LABEL_80;
      }
      goto LABEL_103;
    }
LABEL_80:
    v38 = *(_DWORD *)(a1 + 148);
    v39 = *(unsigned int **)(a1 + 152);
    v40 = 0;
    if ( v38 )
    {
      while ( 1 )
      {
        for ( i = 0; i < v36; ++i )
        {
          if ( *(unsigned __int8 *)(*((_QWORD *)v82 + 9 * i + 9) + 2LL) == *((_WORD *)v39 + 2) )
            break;
        }
        if ( i == v36 )
          break;
        ++v40;
        v39 = (unsigned int *)((char *)v39 + *v39);
        if ( v40 >= v38 )
          goto LABEL_86;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v79) = *((unsigned __int16 *)v39 + 2);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x24u,
          (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
          v79);
      }
LABEL_103:
      *(_DWORD *)(a1 + 1564) = -1072693239;
LABEL_9:
      v14 = -1073741823;
      v15 = (void **)(v5 + 8);
      goto LABEL_10;
    }
LABEL_86:
    v42 = 0;
    v43 = (_QWORD *)(v8 + 16);
    *(_QWORD *)(a1 + 72) = 0LL;
    v44 = *(_QWORD **)(v8 + 16);
    v45 = 0;
    v81 = 0;
    while ( 1 )
    {
      v53 = v44 - 1;
      if ( v43 == v44 )
        break;
      v90 = v53[4];
      v83 = *(_BYTE *)(v90 + 2);
      if ( v83 == *(_BYTE *)(v5 + 2) )
      {
        v86 = v44 - 1;
        v45 = 1;
        v81 = 1;
      }
      else
      {
        v14 = 0;
        v46 = (struct _MCGEN_TRACE_CONTEXT **)v82;
        v47 = 0;
        v84 = *((_DWORD *)v53 + 6);
        if ( v84 )
        {
          v48 = *((_DWORD *)v82 + 6);
          v49 = v53;
          v50 = v84;
          v85 = v48;
          v88 = v53;
          while ( !v48 )
          {
LABEL_115:
            v49 += 9;
            ++v47;
            v42 = 0;
            v88 = v49;
            if ( v47 >= v50 )
              goto LABEL_122;
          }
          v51 = v49[9];
          v80 = *(_BYTE *)(v51 + 2);
          while ( 1 )
          {
            v52 = *((_QWORD *)v82 + 9 * v42 + 9);
            if ( v80 == *(_BYTE *)(v52 + 2) && *(_WORD *)(v51 + 4) && *(_WORD *)(v52 + 4) )
              break;
            v48 = v85;
            if ( ++v42 >= v85 )
            {
              v50 = v84;
              goto LABEL_115;
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Ddddd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              *(unsigned __int8 *)(*((_QWORD *)v82 + 4) + 2LL),
              *(unsigned __int8 *)(v90 + 3),
              v83,
              v78);
          if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
          {
            LOWORD(v78) = *(_WORD *)(a1 + 1996);
            McTemplateK0phhhquuuuu(v46[4], v53[4], (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
          }
          v14 = -1073741811;
          v42 = 0;
        }
LABEL_122:
        if ( v14 < 0 )
          goto LABEL_168;
        v45 = v81;
      }
      v44 = (_QWORD *)v53[1];
    }
    v14 = 0;
    v54 = v91;
    v55 = *(_DWORD *)(v91 + 8) + *((_DWORD *)v82 + 6);
    v56 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v56 )
    {
      if ( v55 <= v56 )
      {
LABEL_149:
        v66 = v86;
        if ( v45 )
          v55 -= *((_DWORD *)v86 + 6);
        *(_DWORD *)(a1 + 144) = 0;
        *(_DWORD *)(a1 + 128) = 0;
        if ( v45 )
        {
          v67 = v66[1];
          if ( *(_QWORD **)(v67 + 8) != v66 + 1 )
            goto LABEL_166;
          v68 = (_QWORD *)v66[2];
          if ( (_QWORD *)*v68 != v66 + 1 )
            goto LABEL_166;
          *v68 = v67;
          *(_QWORD *)(v67 + 8) = v68;
          *(_QWORD *)(a1 + 72) = v66;
          for ( j = 0; j < *((_DWORD *)v66 + 6); ++j )
          {
            v70 = v66[9 * j + 6];
            if ( v70 == 4 )
            {
              LODWORD(v66[9 * j + 6]) = 5;
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = v66[9 * j + 5];
            }
            else if ( v70 == 6 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v66[9 * j + 5];
            }
          }
        }
        for ( k = (_QWORD *)*v43; ; k = (_QWORD *)v74[1] )
        {
          v74 = k - 1;
          if ( v43 == k )
            break;
          for ( m = 0; m < *((_DWORD *)v74 + 6); ++*(_DWORD *)(a1 + 144) )
          {
            v73 = m++;
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = v74[9 * v73 + 5];
          }
        }
        v75 = (_QWORD *)v43[1];
        v76 = (char *)v82 + 8;
        if ( (_QWORD *)*v75 != v43 )
LABEL_166:
          __fastfail(3u);
        *((_QWORD *)v82 + 2) = v75;
        *v76 = v43;
        *v75 = v76;
        v43[1] = v76;
        *(_QWORD *)(a1 + 80) = v82;
        *(_DWORD *)(v54 + 8) = v55;
LABEL_168:
        v15 = v87;
LABEL_169:
        if ( v14 < 0 )
          goto LABEL_10;
        *v15 = v82;
        return ((v14 >> 31) & 0xFFFFFFF4) + 4077;
      }
      v57 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v57 )
      {
        ExFreePoolWithTag(v57, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v58 = *(void **)(a1 + 136);
      if ( v58 )
      {
        ExFreePoolWithTag(v58, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v59 = *(void **)(a1 + 120);
      if ( v59 )
      {
        ExFreePoolWithTag(v59, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !*(_DWORD *)(a1 + 96) && v55 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v55, 0x64334855u);
      *(_QWORD *)(a1 + 104) = PoolWithTag;
      if ( PoolWithTag )
      {
        v61 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v55, 0x64334855u);
        *(_QWORD *)(a1 + 136) = v61;
        if ( v61 )
        {
          v62 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v55, 0x64334855u);
          *(_QWORD *)(a1 + 120) = v62;
          if ( v62 )
          {
            *(_DWORD *)(a1 + 96) = v55;
            v14 = 0;
            goto LABEL_149;
          }
        }
      }
      v63 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v63 )
      {
        ExFreePoolWithTag(v63, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v64 = *(void **)(a1 + 136);
      if ( v64 )
      {
        ExFreePoolWithTag(v64, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v65 = *(void **)(a1 + 120);
      if ( v65 )
      {
        ExFreePoolWithTag(v65, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      v14 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v79) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
          v79);
      }
    }
    if ( v14 < 0 )
      goto LABEL_168;
    goto LABEL_149;
  }
LABEL_28:
  if ( (unsigned __int64)v24 >= v25 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_100;
    v28 = 22;
    goto LABEL_99;
  }
  v26 = 9LL * v22;
  v23[2 * v26 + 16] = *(_DWORD *)(v5 + 24LL * v22 + 44);
  v23[2 * v26 + 12] = 1;
  v27 = v24 + 1;
  if ( (unsigned __int64)(v24 + 1) >= v25 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = 23;
      goto LABEL_99;
    }
    goto LABEL_100;
  }
  do
  {
    if ( *v27 == 5 )
    {
      if ( (unsigned __int64)(v24 + 7) > v25 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v28 = 28;
        goto LABEL_99;
      }
      v29 = *(_DWORD *)(v5 + 24LL * v22 + 44);
      v30 = 1;
      if ( (v29 & 1) != 0 )
      {
        *((_WORD *)v24 + 2) = *(_WORD *)(v5 + 24LL * v22 + 24);
        v30 = 1;
        v29 = *(_DWORD *)(v5 + 24LL * v22 + 44);
      }
      v31 = v29 & 0xF0;
      if ( v31 == 16 )
        goto LABEL_43;
      if ( v31 != 32 )
      {
        v30 = 3;
        if ( v31 != 48 )
          v30 = 0;
LABEL_43:
        v23[18 * v22 + 26] = v30;
        goto LABEL_44;
      }
      v23[18 * v22 + 26] = 2;
LABEL_44:
      *(_QWORD *)&v23[18 * v22 + 18] = v24;
      v23[18 * v22 + 20] = v25 - (_DWORD)v24;
      v32 = *((_WORD *)v24 + 2);
      if ( *(_WORD *)(a1 + 1990) < 0x250u )
        v32 = (v32 & 0x7FF) * (((v32 >> 11) & 3) + 1);
      *(_WORD *)(v5 + 24LL * v22 + 24) = v32;
      v33 = 6;
      if ( v24[6] < 6u )
        v33 = v24[6];
      *(_BYTE *)(v5 + 24LL * v22 + 27) = v33;
      *(_BYTE *)(v5 + 24LL * v22 + 26) = v24[2];
      if ( (v24[3] & 3) != 0 )
      {
        switch ( v24[3] & 3 )
        {
          case 1:
            *(_DWORD *)(v5 + 24LL * v22 + 28) = 1;
            break;
          case 2:
            *(_DWORD *)(v5 + 24LL * v22 + 28) = 2;
            break;
          case 3:
            *(_DWORD *)(v5 + 24LL * v22 + 28) = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)(v5 + 24LL * v22 + 28) = 0;
      }
      if ( !*(_WORD *)(v5 + 24LL * v22 + 24) )
        _InterlockedOr(&v23[18 * v22 + 13], 1u);
      if ( !*v24 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_100;
        v28 = 29;
        goto LABEL_99;
      }
      v24 += *v24;
      if ( (unsigned __int64)v24 < v25 && (unsigned __int64)(v24 + 1) < v25 && v24[1] == 48 )
      {
        if ( *v24 )
        {
          if ( (unsigned __int64)(v24 + 6) <= v25 )
          {
            v34 = *(_QWORD *)&v23[18 * v22 + 18];
            *(_QWORD *)&v23[18 * v22 + 22] = v24;
            if ( (*(_BYTE *)(v34 + 3) & 3) == 1 )
            {
              if ( (v23[18 * v22 + 13] & 1) == 0 )
                *(_WORD *)(v5 + 24LL * v22 + 24) = *((_WORD *)v24 + 2);
              if ( (v24[3] & 0x80u) != 0 )
              {
                v24 += *v24;
                if ( (unsigned __int64)v24 < v25
                  && (unsigned __int64)(v24 + 1) < v25
                  && v24[1] == 49
                  && *v24
                  && (unsigned __int64)(v24 + 8) <= v25 )
                {
                  *(_QWORD *)&v23[18 * v22 + 24] = v24;
                }
              }
            }
          }
        }
      }
      if ( ++v22 >= *(_DWORD *)(v5 + 16) )
        goto LABEL_76;
      goto LABEL_28;
    }
    if ( !*v24 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_100;
      v28 = 24;
      goto LABEL_99;
    }
    v24 += *v24;
    if ( (unsigned __int64)v24 >= v25 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_100;
      v28 = 25;
LABEL_99:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v28,
        (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
      goto LABEL_100;
    }
    v27 = v24 + 1;
  }
  while ( (unsigned __int64)(v24 + 1) < v25 );
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = 26;
    goto LABEL_99;
  }
LABEL_100:
  v14 = -1073741823;
  *(_DWORD *)(a1 + 1564) = -1073725440;
LABEL_10:
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *v15 = (void *)-1LL;
  if ( v82 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(_QWORD *)v82);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 1560) = v14;
  if ( !*(_DWORD *)(a1 + 1564) )
  {
    if ( v14 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v14);
    *(_DWORD *)(a1 + 1564) = USBDErrorFromNTStatus;
  }
  return ((v14 >> 31) & 0xFFFFFFF4) + 4077;
}
