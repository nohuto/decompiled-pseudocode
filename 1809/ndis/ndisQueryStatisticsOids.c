/*
 * XREFs of ndisQueryStatisticsOids @ 0x1C00B46E4
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisCheckForHangSupported @ 0x1C001549C (ndisCheckForHangSupported.c)
 *     ndisVerifierInitialization @ 0x1C001E69C (ndisVerifierInitialization.c)
 *     ndisIsSatisfiedByOidGenStatistics @ 0x1C0025CF4 (ndisIsSatisfiedByOidGenStatistics.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisValidOid @ 0x1C00CFA68 (ndisValidOid.c)
 *     ndisQueryDeviceOid @ 0x1C00D1060 (ndisQueryDeviceOid.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        SIZE_T NumberOfBytes,
        _DWORD *a7,
        char a8,
        _BYTE *a9)
{
  __int64 v9; // rax
  int v12; // esi
  _DWORD *PoolWithTag; // r12
  unsigned int v14; // edi
  unsigned int v15; // r13d
  void *v16; // rcx
  __int64 *v17; // r9
  __int64 v18; // rbx
  unsigned int v19; // r14d
  __int64 *p_Src; // rsi
  unsigned int v21; // r11d
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  int v24; // eax
  unsigned int v25; // r9d
  _DWORD *v26; // r10
  _BYTE *v27; // rax
  int v29; // ecx
  char valid; // al
  __int64 v31; // r10
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v33; // rsi
  unsigned int DeviceOid; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rbx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  unsigned __int8 v41; // r8
  int v42; // edx
  unsigned __int8 v43; // r8
  unsigned __int8 v44; // r10
  int v45; // eax
  int v46; // ecx
  unsigned int v47; // r8d
  __int64 v48; // rax
  int v49; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v50; // [rsp+34h] [rbp-CCh]
  char v51; // [rsp+38h] [rbp-C8h]
  int v52; // [rsp+3Ch] [rbp-C4h]
  int v53; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v54; // [rsp+48h] [rbp-B8h]
  int v55; // [rsp+50h] [rbp-B0h]
  _BYTE *v56; // [rsp+58h] [rbp-A8h]
  __int64 i; // [rsp+60h] [rbp-A0h]
  int Src; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v59; // [rsp+6Ch] [rbp-94h]
  __int64 v60; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  _DWORD *v64; // [rsp+90h] [rbp-70h]
  _BYTE v65[160]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v66[64]; // [rsp+140h] [rbp+40h] BYREF

  v9 = (__int64)a5;
  v62 = a2;
  v12 = 0;
  v52 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  v49 = 0;
  v51 = 0;
  v59 = a4;
  v63 = a3;
  v54 = a5;
  v50 = NumberOfBytes;
  v64 = a7;
  v56 = a9;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_q(0x1Eu, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1);
    v9 = (__int64)v54;
  }
  *a7 = 0;
  v14 = 0;
  if ( a8 )
  {
    v15 = 12;
    v16 = (void *)v9;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6D61444Eu);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v15 = 8;
    v16 = PoolWithTag;
  }
  memset(v16, 0, (unsigned int)NumberOfBytes);
  LODWORD(v17) = 0;
  v55 = 0;
  if ( !a4 )
  {
    v27 = v56;
    goto LABEL_26;
  }
  v18 = 0LL;
  for ( i = 0LL; ; v18 = i )
  {
    v19 = 0;
    p_Src = 0LL;
    memset(v66, 0, 0xF8uLL);
    v21 = v50;
    if ( v50 < v15 + 4 )
      break;
    v22 = *(_DWORD *)(v63 + 4 * v18);
    v23 = v22 & 0x7FFFFFFF;
    if ( (v22 & 0xFF000000) != 0x80000000 )
      v23 = v22;
    if ( v23 == 66050
      || v23 - 131603 <= 5 && (v29 = 55, _bittest(&v29, v23 - 131603))
      || v23 == 0xFFFFFF
      || v23 == 65796
      || v23 == -50265850 )
    {
      LODWORD(v17) = 0;
      v14 = 0;
      if ( v23 == 66050 )
      {
        v24 = *(_DWORD *)(a1 + 1832);
        p_Src = (__int64 *)&Src;
        if ( v24 == 14 )
          v24 = 0;
        Src = v24;
        goto LABEL_16;
      }
      if ( v23 == 65796 )
      {
        p_Src = (__int64 *)(a1 + 464);
        goto LABEL_16;
      }
      if ( v23 == 131603 )
      {
        p_Src = (__int64 *)(a1 + 1624);
        goto LABEL_16;
      }
      if ( v23 == 131604 )
      {
        v46 = *(unsigned __int16 *)(a1 + 1786);
        v45 = *(unsigned __int16 *)(a1 + 1784);
      }
      else
      {
        if ( v23 != 131605 )
        {
          if ( v23 == 131607 )
          {
            v38 = *(_DWORD *)(a1 + 120);
            v39 = *(_DWORD *)(a1 + 1880);
            v49 = v39;
            if ( (v38 & 0x10) != 0 )
            {
              v39 |= 0x1000000u;
              v49 = v39;
            }
            if ( (v38 & 0x20000) != 0 )
            {
              v39 |= 0x400u;
              v49 = v39;
            }
            if ( (v38 & 0x4000000) != 0 )
            {
              v39 |= 0x2000u;
              v49 = v39;
            }
            v40 = *(_DWORD *)(a1 + 124);
            if ( (v40 & 1) != 0 )
            {
              v39 |= 0x8000u;
              v49 = v39;
            }
            if ( (v40 & 0x1000) != 0 )
            {
              v39 |= 0x40000u;
              v49 = v39;
            }
            if ( (v40 & 0x2000) != 0 )
            {
              v39 |= 0x80000u;
              v49 = v39;
            }
            if ( (v40 & 0x200000) != 0 )
            {
              v39 |= 0x400000u;
              v49 = v39;
            }
            if ( (v40 & 0x400000) != 0 )
            {
              v39 |= 2u;
              v49 = v39;
            }
            if ( *(int *)(a1 + 3480) > 0 )
            {
              v39 |= 0x40000000u;
              v49 = v39;
            }
            v41 = *(_BYTE *)(a1 + 32);
            if ( v41 < 6u && *(_QWORD *)(*(_QWORD *)(a1 + 3792) + 296LL)
              || v41 >= 6u && *(_QWORD *)(*(_QWORD *)(a1 + 3792) + 200LL) )
            {
              v49 = v39 | 0x800000;
            }
            if ( ndisCheckForHangSupported(a1) )
            {
              v42 |= 0x80u;
              v49 = v42;
            }
            if ( v43 >= v44 && *(__int64 **)(*(_QWORD *)(a1 + 3792) + 216LL) != v17 )
              v49 = v42 | 8;
            p_Src = (__int64 *)&v49;
          }
          else
          {
            switch ( v23 )
            {
              case 0x20218u:
                memmove((char *)&WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink + 4, &v54[v15 / 4], 4uLL);
                p_Src = 0LL;
                ndisVerifierInitialization();
                if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
                  ndisVerifierLevel &= ~4u;
                v66[13] = 4;
                break;
              case 0xFFFFFFu:
                v60 = MEMORY[0xFFFFF78000000320];
                v37 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
                p_Src = &v60;
                v60 = v37 * KeQueryTimeIncrement() / 10000000;
                break;
              case 0xFD010106:
                p_Src = (__int64 *)(a1 + 1292);
                goto LABEL_16;
              default:
                goto LABEL_23;
            }
            v21 = v50;
            LODWORD(v17) = 0;
          }
LABEL_16:
          v19 = 4;
LABEL_17:
          if ( p_Src )
          {
            if ( v19 > v21 - v15 )
            {
              v14 = -1073676268;
LABEL_24:
              v27 = v56;
              goto LABEL_25;
            }
            memmove(&v54[v15 / 4], p_Src, v19);
          }
          goto LABEL_20;
        }
        v45 = *(unsigned __int16 *)(a1 + 1790);
        v46 = *(unsigned __int16 *)(a1 + 1788) << 16;
      }
      p_Src = (__int64 *)&v53;
      v53 = v45 + v46;
      goto LABEL_16;
    }
    valid = ndisValidOid(v62, v23);
    LODWORD(v17) = 0;
    if ( !valid )
      goto LABEL_23;
    if ( v23 == 16843010 )
    {
      if ( *(_DWORD *)(a1 + 464) == 3 )
        v23 = 67174658;
    }
    else if ( v23 == 16843009 )
    {
      v23 = 16843009;
      if ( *(_DWORD *)(a1 + 464) == 3 )
        v23 = 67174657;
    }
    if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
    {
      v14 = -1073676282;
      goto LABEL_58;
    }
    if ( a8 )
      PoolWithTag = &v54[v15 / 4];
    if ( *(_BYTE *)(a1 + 32) < 6u
      || (IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v23),
          (v33 = IsSatisfiedByOidGenStatistics) == 0)
      && v23 != 131334 )
    {
      DeviceOid = ndisQueryDeviceOid(v31, v66, v23, PoolWithTag, v21 - v15);
      v17 = 0LL;
      v14 = DeviceOid;
      v19 = 0;
      if ( !DeviceOid )
        v19 = v66[13];
      goto LABEL_55;
    }
    v19 = 152;
    if ( v51 == (_BYTE)v17 )
    {
      memset(v65, 0, 0x98uLL);
      v35 = ndisQueryDeviceOid(v62, v66, 131334LL, v65, 152);
      v21 = v50;
      v17 = 0LL;
      v14 = v35;
      if ( v35 )
        goto LABEL_71;
      v51 = 1;
    }
    v36 = v21 - v15;
    if ( v23 == 131334 )
    {
      if ( v36 >= 0x98 )
      {
        memmove(PoolWithTag, v65, 0x98uLL);
LABEL_72:
        v17 = 0LL;
LABEL_55:
        v21 = v50;
        goto LABEL_56;
      }
    }
    else if ( v36 >= 8 )
    {
      memmove(PoolWithTag, &v65[v33], 8uLL);
      v19 = 8;
      goto LABEL_72;
    }
    v14 = -1073676268;
LABEL_71:
    v19 = (unsigned int)v17;
LABEL_56:
    p_Src = v17;
    if ( a8 == (_BYTE)v17 )
      p_Src = (__int64 *)PoolWithTag;
LABEL_58:
    if ( v14 )
      goto LABEL_24;
    if ( v19 )
      goto LABEL_17;
LABEL_20:
    v25 = v19 + v15;
    v26 = v54;
    *v54 = *(_DWORD *)(v63 + 4 * i);
    v26[1] = v19;
    if ( a8 )
    {
      v47 = (v25 + 7) & 0xFFFFFFF8;
      v48 = v25;
      if ( v50 - v15 - 4 >= v47 )
      {
        v48 = v47;
        v25 = (v25 + 7) & 0xFFFFFFF8;
      }
      v50 -= v25;
      v52 += v48;
      v54 = (_DWORD *)((char *)v26 + v48);
      v26[2] = v48;
    }
    else
    {
      v50 -= v25;
      v52 += v25;
      v54 = (_DWORD *)((char *)v26 + v25);
    }
    LODWORD(v17) = 0;
LABEL_23:
    ++i;
    if ( ++v55 >= v59 )
      goto LABEL_24;
    PoolWithTag = P;
  }
  v27 = v56;
  LODWORD(v17) = 0;
  v14 = -1073676268;
  *v56 = 0;
LABEL_25:
  v12 = v52;
LABEL_26:
  *v64 = v12;
  if ( *v27 != (_BYTE)v17 && v14 == -1073741637 )
    v14 = (unsigned int)v17;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, v14);
  return v14;
}
