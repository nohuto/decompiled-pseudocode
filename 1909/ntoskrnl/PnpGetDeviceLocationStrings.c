/*
 * XREFs of PnpGetDeviceLocationStrings @ 0x140715E70
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PiQueryRemovableDeviceOverride @ 0x140714594 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpQueryInterface @ 0x1407164D0 (PnpQueryInterface.c)
 */

__int64 __fastcall PnpGetDeviceLocationStrings(__int64 a1, char **a2, _DWORD *a3)
{
  __int64 v5; // rsi
  char *v6; // r14
  _QWORD *v7; // rcx
  unsigned int v8; // r15d
  _QWORD *v9; // rax
  PVOID *PoolWithTag; // rax
  PVOID *v11; // r13
  _DWORD *v12; // rax
  _DWORD *v13; // r12
  unsigned int v14; // r13d
  int v15; // ebx
  int Interface; // edi
  int v17; // r8d
  int v18; // r9d
  unsigned int v19; // edx
  _WORD *i; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  SIZE_T v24; // rbx
  PVOID v25; // rax
  _WORD *v26; // rax
  unsigned int v27; // r12d
  char v28; // si
  char v29; // dl
  char v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rsi
  PVOID *v33; // rbx
  SIZE_T v35; // rbx
  char *v36; // rax
  unsigned int v37; // r10d
  char *v38; // rbx
  unsigned int v39; // esi
  unsigned int v40; // edi
  unsigned int v41; // r15d
  unsigned int v42; // eax
  char *v43; // r14
  char v44; // r13
  char v45; // r9
  char v46; // r12
  unsigned int v47; // edx
  _WORD *v48; // rsi
  char v49; // dl
  char v50; // r8
  __int64 v51; // r8
  __int64 v52; // rcx
  char *v53; // r14
  _DWORD *v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // r11d
  int v58; // r10d
  unsigned int v59; // [rsp+38h] [rbp-69h]
  unsigned int v60; // [rsp+3Ch] [rbp-65h]
  PVOID *P; // [rsp+40h] [rbp-61h]
  char v62; // [rsp+48h] [rbp-59h]
  unsigned int v63; // [rsp+4Ch] [rbp-55h]
  unsigned int v64; // [rsp+50h] [rbp-51h]
  void *Src; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v66; // [rsp+60h] [rbp-41h]
  unsigned int v67; // [rsp+64h] [rbp-3Dh]
  char *v68; // [rsp+68h] [rbp-39h]
  _DWORD *v69; // [rsp+70h] [rbp-31h]
  int v70; // [rsp+78h] [rbp-29h]
  __int64 v71; // [rsp+80h] [rbp-21h]
  _QWORD v72[14]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v73; // [rsp+108h] [rbp+67h]
  char v74; // [rsp+108h] [rbp+67h]
  int v77; // [rsp+120h] [rbp+7Fh]

  v73 = a1;
  v5 = a1;
  memset(v72, 0, 0x28uLL);
  v62 = 0;
  v6 = 0LL;
  v63 = -1;
  v59 = -1;
  v68 = 0LL;
  if ( !v5 || !a2 || !a3 )
    return 3221225485LL;
  v7 = IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( (_QWORD *)v5 == v7 )
    return 3221225486LL;
  v8 = 0;
  v9 = (_QWORD *)v5;
  do
  {
    v9 = (_QWORD *)v9[2];
    ++v8;
  }
  while ( v9 != v7 );
  v67 = v8;
  v71 = v8;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * v8, 0x75737050u);
  P = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 8LL * v8);
  v12 = ExAllocatePoolWithTag(PagedPool, 4LL * v8, 0x75737050u);
  v69 = v12;
  v13 = v12;
  if ( !v12 )
  {
    Interface = -1073741670;
    goto LABEL_54;
  }
  memset(v12, 0, 4LL * v8);
  v14 = 0;
  v15 = 1;
  v77 = 1;
  if ( (PVOID)v5 == IopRootDeviceNode )
    goto LABEL_66;
  do
  {
    Interface = PnpQueryInterface(*(PDEVICE_OBJECT *)(v5 + 32), 0LL, v72);
    if ( Interface < 0 )
    {
      v6 = 0LL;
      goto LABEL_53;
    }
    if ( !v72[4] )
    {
      Interface = -1073741823;
      goto LABEL_43;
    }
    Src = 0LL;
    Interface = ((__int64 (__fastcall *)(_QWORD, void **))v72[4])(v72[1], &Src);
    if ( Interface < 0 )
      goto LABEL_111;
    if ( !Src )
      Interface = -1073741637;
    if ( Interface < 0 )
    {
LABEL_111:
      if ( Src )
      {
        ExFreePoolWithTag(Src, 0);
        Src = 0LL;
      }
      goto LABEL_43;
    }
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v13[v14] = 0;
    for ( i = Src; *i; i += v23 + 1 )
    {
      v13[v14] = ++v17;
      v21 = -1LL;
      do
        ++v21;
      while ( i[v21] );
      v18 += v21 + 1;
      v22 = -1LL;
      do
        ++v22;
      while ( i[v22] );
      if ( (unsigned int)v22 <= v19 )
        LODWORD(v22) = v19;
      v19 = v22;
      v23 = -1LL;
      do
        ++v23;
      while ( i[v23] );
    }
    LODWORD(v6) = v19 + (_DWORD)v6;
    v77 = v17 * v15;
    v24 = 2LL * (unsigned int)(v18 + 1);
    v25 = ExAllocatePoolWithTag(PagedPool, v24, 0x75737050u);
    P[v14] = v25;
    if ( !v25 )
    {
      Interface = -1073741670;
      goto LABEL_42;
    }
    memmove(v25, Src, v24);
    v26 = P[v14];
    if ( !*v26 )
      goto LABEL_41;
    v27 = v63;
    v28 = v62;
    do
    {
      v29 = 0;
      v30 = 0;
      while ( 1 )
      {
        if ( *v26 == 33 )
        {
          v29 = 1;
          goto LABEL_51;
        }
        if ( *v26 != 64 )
          break;
        v30 = 1;
LABEL_51:
        ++v26;
      }
      if ( v30 )
        v28 = 1;
      if ( v29 && v27 == -1 )
        v27 = v14;
      v31 = -1LL;
      do
        ++v31;
      while ( v26[v31] );
      v26 += v31 + 1;
    }
    while ( *v26 );
    v62 = v28;
    v5 = v73;
    v63 = v27;
    v13 = v69;
LABEL_41:
    ++v14;
LABEL_42:
    ExFreePoolWithTag(Src, 0);
    v8 = v67;
    v15 = v77;
    Src = 0LL;
LABEL_43:
    if ( v72[3] )
      ((void (__fastcall *)(_QWORD))v72[3])(v72[1]);
    if ( Interface < 0 )
    {
      v6 = v68;
      goto LABEL_53;
    }
    if ( Interface == 288 || v14 == v8 )
    {
      LODWORD(v6) = (_DWORD)v6 + 1;
      break;
    }
    v5 = *(_QWORD *)(v5 + 16);
    LODWORD(v6) = (_DWORD)v6 + 1;
    v73 = v5;
  }
  while ( (PVOID)v5 != IopRootDeviceNode );
LABEL_66:
  v70 = 0;
  Interface = 0;
  v35 = 2LL * (unsigned int)((_DWORD)v6 * v15 + 1);
  v36 = (char *)ExAllocatePoolWithTag(PagedPool, v35, 0x75737050u);
  v68 = v36;
  v6 = v36;
  if ( !v36 )
  {
    Interface = -1073741670;
    goto LABEL_53;
  }
  memset(v36, 0, v35);
  v37 = v14 - 1;
  v38 = v6;
  v60 = v14 - 1;
  v39 = 0;
  v64 = 0;
  if ( !v77 )
    goto LABEL_101;
  v40 = v77;
  while ( 2 )
  {
    v41 = v37;
    v74 = 0;
    v42 = v40;
    v43 = v38;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    while ( 2 )
    {
      v66 = v42;
      v47 = v39 / (v42 / v69[v41]) % v69[v41];
      v48 = P[v41];
      if ( v47 )
      {
        v55 = v47;
        do
        {
          v56 = -1LL;
          do
            ++v56;
          while ( v48[v56] );
          v48 += v56 + 1;
          --v55;
        }
        while ( v55 );
        v40 = v77;
      }
      v49 = 0;
      v50 = 0;
      while ( 2 )
      {
        if ( *v48 == 33 )
        {
          v49 = 1;
LABEL_86:
          ++v48;
          continue;
        }
        break;
      }
      if ( *v48 == 64 )
      {
        v50 = 1;
        goto LABEL_86;
      }
      if ( v41 == v37 )
      {
        v57 = -1;
        v74 = v49;
        v44 = v49;
        v45 = v49;
        v46 = v49;
        if ( v49 )
          v57 = v41;
        v59 = v57;
      }
      if ( v49 )
      {
        if ( !v62 && !v46 )
          goto LABEL_99;
        v59 = v41;
        v44 = 1;
        v46 = v45 != 0 ? v46 : 0;
      }
      else
      {
        v74 = 0;
      }
      if ( v50 )
      {
        v58 = -1;
        v74 = v49;
        v43 = v38;
        v44 = v49;
        v46 = v49;
        if ( v49 )
          v58 = v41;
        v59 = v58;
      }
      v51 = -1LL;
      do
        ++v51;
      while ( v48[v51] );
      memmove(v43, v48, 2 * v51);
      v52 = -1LL;
      do
        ++v52;
      while ( v48[v52] );
      v53 = &v43[2 * v52];
      if ( v41 )
      {
        v54 = v69;
        v45 = v74;
        v39 = v64;
        v37 = v60;
        *(_WORD *)v53 = 35;
        v43 = v53 + 2;
        v42 = v66 / v54[v41--];
        continue;
      }
      break;
    }
    if ( !v44 || v46 && v59 <= v63 )
    {
      *(_WORD *)v53 = 0;
      v38 = v53 + 2;
    }
    v37 = v60;
LABEL_99:
    v39 = v64 + 1;
    v64 = v39;
    if ( v39 < v40 )
      continue;
    break;
  }
  Interface = v70;
  v6 = v68;
  v13 = v69;
LABEL_101:
  *(_WORD *)v38 = 0;
  *a2 = v6;
  *a3 = (v38 - v6 + 2) >> 1;
LABEL_53:
  v11 = P;
LABEL_54:
  if ( v67 )
  {
    v32 = v71;
    v33 = v11;
    do
    {
      if ( *v33 )
        ExFreePoolWithTag(*v33, 0);
      ++v33;
      --v32;
    }
    while ( v32 );
  }
  ExFreePoolWithTag(v11, 0);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( Interface < 0 )
  {
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)Interface;
}
