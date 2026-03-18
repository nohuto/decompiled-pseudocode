/*
 * XREFs of ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C026B4F8
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1C0274E60 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiBrightnessHandleIoctls(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6,
        char *a7,
        unsigned __int64 *a8)
{
  __int64 (__fastcall **v8)(struct _DEVICE_OBJECT *, __int64, int *); // rbx
  unsigned int v9; // edi
  struct _DEVICE_OBJECT *v11; // r13
  __int64 v13; // r8
  unsigned int v14; // esi
  int v15; // r8d
  __int64 v16; // r8
  int v17; // r8d
  __int64 v18; // rcx
  char *v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  _WORD *v28; // r14
  __int64 v29; // rax
  char *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  ULONG TimeIncrement; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 (__fastcall *v40)(struct _DEVICE_OBJECT *, __int64, int *); // rax
  unsigned int v41; // r14d
  __int64 v42; // rdx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  char *v46; // rax
  __int64 v47; // rcx
  char *v48; // rsi
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // eax
  int v61; // esi
  char *PoolWithTag; // rsi
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // esi
  int v71; // eax
  int v72; // eax
  int v73; // [rsp+30h] [rbp-89h] BYREF
  int v74; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v75; // [rsp+38h] [rbp-81h]
  __int64 v76; // [rsp+40h] [rbp-79h] BYREF
  __int64 v77; // [rsp+48h] [rbp-71h]
  _QWORD v78[12]; // [rsp+50h] [rbp-69h] BYREF

  v8 = *(__int64 (__fastcall ***)(struct _DEVICE_OBJECT *, __int64, int *))(a1 + 64);
  v9 = 0;
  v11 = (struct _DEVICE_OBJECT *)a1;
  v75 = a2;
  *a8 = 0LL;
  if ( *((_BYTE *)v8 + 1161) )
    return 3221226166LL;
  v13 = (unsigned int)(a3 - 2296832);
  if ( !(_DWORD)v13 )
  {
    if ( a6 < 8 )
    {
      LODWORD(v20) = -1073741789;
      return (unsigned int)v20;
    }
    a1 = 0LL;
    *(_QWORD *)a7 = 0LL;
    *a8 = 8LL;
    v73 = 0;
    if ( *((_WORD *)v8 + 2212) )
    {
      *(_DWORD *)a7 = 3;
      v71 = v8[559](v11, a2, &v73);
      v20 = v71;
      if ( v71 >= 0 )
      {
        *((_DWORD *)a7 + 1) ^= ((unsigned __int8)v73 ^ (unsigned __int8)(a7[4] ^ (v73 ^ *((_DWORD *)a7 + 1)) & 1)) & 2 ^ ((unsigned __int8)v73 ^ (unsigned __int8)*((_DWORD *)a7 + 1)) & 1 ^ ((unsigned __int8)v73 ^ ((unsigned __int8)v73 ^ (unsigned __int8)(a7[4] ^ (v73 ^ *((_DWORD *)a7 + 1)) & 1)) & 2 ^ (unsigned __int8)(a7[4] ^ (v73 ^ *((_DWORD *)a7 + 1)) & 1)) & 4;
        return (unsigned int)v20;
      }
    }
    else
    {
      if ( !*((_WORD *)v8 + 2248) )
      {
        if ( *((_WORD *)v8 + 2292) )
        {
          *(_DWORD *)a7 = 1;
          LODWORD(v20) = 0;
          return (unsigned int)v20;
        }
        goto LABEL_98;
      }
      *(_DWORD *)a7 = 2;
      v72 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, int *))v8[569])(v11, &v73);
      v20 = v72;
      if ( v72 >= 0 )
      {
        *((_DWORD *)a7 + 1) ^= ((unsigned __int8)v73 ^ (unsigned __int8)*((_DWORD *)a7 + 1)) & 1 ^ (v73 ^ *((_DWORD *)a7 + 1) ^ ((unsigned __int8)v73 ^ (unsigned __int8)*((_DWORD *)a7 + 1)) & 1) & 2;
        return (unsigned int)v20;
      }
    }
    goto LABEL_34;
  }
  v14 = 4;
  v15 = v13 - 4;
  if ( !v15 )
  {
    if ( a6 < 0xD0 )
      goto LABEL_63;
    *a8 = 208LL;
    memset(a7, 0, 0xD0uLL);
    if ( *((_WORD *)v8 + 2212) )
    {
      *(_DWORD *)a7 = 3;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xCCuLL, 0x74727044u);
      if ( !PoolWithTag )
        goto LABEL_13;
      v63 = v8[560](v11, v75, (int *)PoolWithTag);
      v20 = v63;
      if ( v63 < 0 )
      {
        v69 = WdLogNewEntry5_WdWarning(v65, v64, v66);
        *(_QWORD *)(v69 + 24) = v20;
        WdLogEvent5_WdWarning(v69);
      }
      else
      {
        *((_DWORD *)a7 + 1) = *(_DWORD *)PoolWithTag;
        *((_DWORD *)a7 + 2) = *((_DWORD *)PoolWithTag + 1);
        *((_DWORD *)a7 + 3) = *((_DWORD *)PoolWithTag + 2);
        if ( *((_DWORD *)PoolWithTag + 1) )
        {
          do
          {
            v67 = v9++;
            v68 = 3 * v67;
            *(_DWORD *)&a7[4 * v68 + 16] = *(_DWORD *)&PoolWithTag[12 * v67 + 12];
            *(_DWORD *)&a7[4 * v68 + 20] = *(_DWORD *)&PoolWithTag[12 * v67 + 16];
            *(_DWORD *)&a7[4 * v68 + 24] = *(_DWORD *)&PoolWithTag[12 * v67 + 20];
          }
          while ( v9 < *((_DWORD *)PoolWithTag + 1) );
        }
      }
      v30 = PoolWithTag;
LABEL_82:
      ExFreePoolWithTag(v30, 0x74727044u);
      return (unsigned int)v20;
    }
    if ( *((_WORD *)v8 + 2248) )
    {
      v70 = 2;
    }
    else
    {
      if ( !*((_WORD *)v8 + 2292) )
        goto LABEL_98;
      v70 = 1;
    }
    *(_DWORD *)a7 = v70;
    v32 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64, char *, char *))v8[577])(
            v11,
            103LL,
            a7 + 4,
            a7 + 5);
    goto LABEL_33;
  }
  v16 = (unsigned int)(v15 - 4);
  if ( !(_DWORD)v16 )
  {
    if ( a6 < 0xC )
      goto LABEL_63;
    *a8 = 12LL;
    *(_QWORD *)a7 = 0LL;
    *((_DWORD *)a7 + 2) = 0;
    if ( *((_WORD *)v8 + 2212) )
    {
      v76 = 0LL;
      *(_DWORD *)a7 = 3;
      v60 = v8[558]((struct _DEVICE_OBJECT *)a1, a2, (int *)&v76);
      v20 = v60;
      if ( v60 >= 0 )
      {
        *(_QWORD *)(a7 + 4) = v76;
        return (unsigned int)v20;
      }
LABEL_34:
      v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v36 + 24) = v20;
LABEL_99:
      WdLogEvent5_WdWarning(v36);
      return (unsigned int)v20;
    }
    if ( *((_WORD *)v8 + 2248) )
    {
      v61 = 2;
    }
    else
    {
      if ( !*((_WORD *)v8 + 2292) )
      {
        LODWORD(v20) = -1073741637;
        v36 = WdLogNewEntry5_WdWarning(a1, a2, v16);
        *(_QWORD *)(v36 + 24) = *(int *)a7;
        goto LABEL_99;
      }
      v61 = 1;
    }
    *(_DWORD *)a7 = v61;
    v32 = ((__int64 (__fastcall *)(unsigned __int64, char *))v8[579])(a1, a7 + 4);
LABEL_33:
    v20 = v32;
    if ( v32 >= 0 )
      return (unsigned int)v20;
    goto LABEL_34;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    memset(v78, 0, sizeof(v78));
    v78[0] = 0x6000000028LL;
    memset(&v78[1], 0, 36);
    v77 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    LODWORD(v78[8]) = 1;
    v78[6] = v77 * TimeIncrement;
    v40 = v8[474];
    if ( v40 )
      v78[7] = *(_QWORD *)((char *)v40 + 276);
    v41 = v75;
    v42 = 32LL;
    HIDWORD(v78[8]) = v75;
    if ( a4 < 0x20 )
    {
      LODWORD(v20) = -1073741306;
LABEL_44:
      HIDWORD(v78[10]) = v20;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v78);
      return (unsigned int)v20;
    }
    v43 = *(_DWORD *)a5;
    LODWORD(v78[9]) = v43;
    if ( v43 > 0 )
    {
      if ( v43 <= 2 )
      {
        LODWORD(v78[11]) |= 1u;
        v38 = a5[4];
        *(_QWORD *)((char *)&v78[9] + 4) = v38;
        if ( *((_WORD *)v8 + 2292) )
        {
          LOBYTE(v42) = v38;
          v56 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, __int64))v8[578])(v11, v42);
          v20 = v56;
          if ( v56 >= 0 )
            goto LABEL_44;
          v55 = WdLogNewEntry5_WdWarning(v58, v57, v59);
          *(_QWORD *)(v55 + 24) = v20;
LABEL_61:
          WdLogEvent5_WdWarning(v55);
          goto LABEL_44;
        }
LABEL_56:
        LODWORD(v20) = -1073741637;
        v55 = WdLogNewEntry5_WdWarning(v38, 32LL, v39);
        *(_QWORD *)(v55 + 24) = -1073741637LL;
        goto LABEL_61;
      }
      if ( v43 == 3 )
      {
        if ( *((_WORD *)v8 + 2212) )
        {
          HIDWORD(v78[9]) = *((_DWORD *)a5 + 1);
          v44 = LODWORD(v78[11]) | 1;
          LODWORD(v78[10]) = *((_DWORD *)a5 + 2);
          v45 = *((_DWORD *)a5 + 3);
          LODWORD(v78[11]) |= 1u;
          if ( (v45 & 7) != 0 )
            LODWORD(v78[11]) = v44 & 0xFFFFFFFE;
          v46 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74727044u);
          v48 = v46;
          if ( v46 )
          {
            *(_DWORD *)v46 = *((_DWORD *)a5 + 1);
            *((_DWORD *)v46 + 1) = *((_DWORD *)a5 + 2);
            *((_DWORD *)v46 + 2) = 24;
            *(_OWORD *)(v46 + 12) = *(_OWORD *)(a5 + 12);
            *((_DWORD *)v46 + 7) = *((_DWORD *)a5 + 7);
            v50 = v8[557](v11, v41, (int *)v46);
            v20 = v50;
            if ( v50 < 0 )
            {
              v54 = WdLogNewEntry5_WdWarning(v52, v51, v53);
              *(_QWORD *)(v54 + 24) = v20;
              WdLogEvent5_WdWarning(v54);
            }
            ExFreePoolWithTag(v48, 0x74727044u);
          }
          else
          {
            LODWORD(v20) = -1073741801;
            v49 = WdLogNewEntry5_WdLowResource(v47);
            *(_QWORD *)(v49 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v49);
          }
          goto LABEL_44;
        }
        goto LABEL_56;
      }
    }
    LODWORD(v78[11]) |= 1u;
    LODWORD(v20) = -1073741637;
    *(_QWORD *)((char *)&v78[9] + 4) = 0LL;
    v55 = WdLogNewEntry5_WdWarning(v38, 32LL, v39);
    *(_QWORD *)(v55 + 24) = *(int *)a5;
    goto LABEL_61;
  }
  v13 = (unsigned int)(v17 - 4);
  if ( !(_DWORD)v13 )
  {
    if ( a4 < 4 )
      goto LABEL_63;
    v74 = 0;
    if ( !*((_WORD *)v8 + 2248) )
      goto LABEL_98;
    v74 = *(_DWORD *)a5 & 1;
    v32 = ((__int64 (__fastcall *)(unsigned __int64, int *))v8[570])(a1, &v74);
    goto LABEL_33;
  }
  v13 = (unsigned int)(v13 - 4);
  if ( !(_DWORD)v13 )
  {
    if ( a4 < 4 )
      goto LABEL_63;
    a1 = *(unsigned int *)a5;
    if ( (_DWORD)a1 )
    {
      a1 = (unsigned int)(a1 - 1);
      if ( (_DWORD)a1 )
      {
        a1 = (unsigned int)(a1 - 1);
        if ( (_DWORD)a1 )
        {
          a1 = (unsigned int)(a1 - 1);
          if ( (_DWORD)a1 )
          {
            if ( (_DWORD)a1 != 1 )
            {
              v31 = WdLogNewEntry5_WdWarning(a1, a2, v13);
              *(_QWORD *)(v31 + 24) = *(int *)a5;
              WdLogEvent5_WdWarning(v31);
              LODWORD(v20) = -1073741637;
              return (unsigned int)v20;
            }
          }
          else
          {
            v14 = 3;
          }
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
    }
    else
    {
      v14 = 0;
    }
    if ( *((_WORD *)v8 + 2212) )
    {
      v32 = v8[561](v11, a2, (int *)v14);
    }
    else
    {
      if ( !*((_WORD *)v8 + 2248) )
        goto LABEL_98;
      v32 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD))v8[571])(v11, v14);
    }
    goto LABEL_33;
  }
  if ( (_DWORD)v13 != 4 )
  {
LABEL_98:
    LODWORD(v20) = -1073741637;
    v36 = WdLogNewEntry5_WdWarning(a1, a2, v13);
    *(_QWORD *)(v36 + 24) = -1073741637LL;
    goto LABEL_99;
  }
  if ( a6 < 0x604 )
  {
LABEL_63:
    LODWORD(v20) = -1073741306;
    return (unsigned int)v20;
  }
  *a8 = 1540LL;
  memset(a7, 0, 0x604uLL);
  if ( !*((_WORD *)v8 + 2248) )
    goto LABEL_98;
  v19 = (char *)ExAllocatePoolWithTag(PagedPool, 0x604uLL, 0x74727044u);
  if ( v19 )
  {
    v22 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, char *))v8[572])(v11, v19);
    v20 = v22;
    if ( v22 < 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v29 + 24) = v20;
      WdLogEvent5_WdWarning(v29);
    }
    else
    {
      v26 = 256LL;
      *(_WORD *)a7 = *(_WORD *)v19;
      *((_WORD *)a7 + 1) = *((_WORD *)v19 + 1);
      v27 = v19 - a7;
      v28 = a7 + 516;
      do
      {
        *(v28 - 256) = *(_WORD *)((char *)v28 + v27 - 512);
        *v28 = *(_WORD *)((char *)v28 + v27);
        v28[256] = *(_WORD *)((char *)v28 + v27 + 512);
        ++v28;
        --v26;
      }
      while ( v26 );
    }
    v30 = v19;
    goto LABEL_82;
  }
LABEL_13:
  LODWORD(v20) = -1073741801;
  v21 = WdLogNewEntry5_WdLowResource(v18);
  *(_QWORD *)(v21 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v21);
  return (unsigned int)v20;
}
