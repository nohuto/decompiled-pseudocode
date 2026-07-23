/*
 * XREFs of IoBuildPoDeviceNotifyList @ 0x14056DE10
 * Callers:
 *     PopBuildDeviceNotifyList @ 0x14056DD44 (PopBuildDeviceNotifyList.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x1400ACD80 (IoGetAttachedDeviceReference.c)
 *     PnpLockDeviceActionQueue @ 0x140135504 (PnpLockDeviceActionQueue.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1401367AC (IoGetLowerDeviceObjectWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopCheckDeviceFlags @ 0x14056E404 (IopCheckDeviceFlags.c)
 *     IopCaptureObjectName @ 0x14056E484 (IopCaptureObjectName.c)
 *     IopFreePoDeviceNotifyListHead @ 0x14056E5B0 (IopFreePoDeviceNotifyListHead.c)
 */

__int64 *__fastcall IoBuildPoDeviceNotifyList(char *a1, int a2)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  ULONG_PTR v8; // rbx
  ULONG_PTR i; // rax
  _QWORD *v10; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  ULONG_PTR *v16; // rcx
  ULONG_PTR j; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdi
  _QWORD *k; // rcx
  ULONG_PTR v24; // rdx
  char v25; // r10
  ULONG_PTR m; // rax
  ULONG_PTR v27; // rax
  ULONG_PTR v28; // rcx
  ULONG_PTR v29; // rcx
  ULONG_PTR v30; // rax
  ULONG_PTR v31; // rcx
  ULONG_PTR n; // rax
  ULONG_PTR v33; // rdi
  _QWORD *ii; // rax
  ULONG_PTR v35; // rax
  ULONG_PTR jj; // rax
  _DWORD *LowerDeviceObjectWithTag; // rbx
  _DWORD *v38; // rsi
  ULONG_PTR v39; // rax
  ULONG_PTR v40; // rdx
  char v41; // al
  ULONG_PTR v42; // rax
  char v43; // r10
  ULONG_PTR v44; // rax
  ULONG_PTR *v45; // r8
  __int64 v46; // rcx
  unsigned __int8 v47; // al
  ULONG_PTR i1; // rax
  ULONG_PTR i2; // rcx
  _QWORD *i3; // rcx
  ULONG_PTR v51; // rcx
  ULONG_PTR i4; // rax
  __int64 v53; // r8
  unsigned __int8 v54; // r9
  char **v55; // rcx
  char *v56; // r8
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  char *v59; // rax
  char **v60; // rcx
  ULONG_PTR v61; // rax
  __int64 *result; // rax
  int v63; // r9d
  int v64; // r9d
  __int64 v65; // r9
  char v66; // dl
  char v67; // bl
  ULONG_PTR kk; // rax
  ULONG_PTR v69; // rax
  ULONG_PTR v70; // rcx
  int v71; // r8d
  ULONG_PTR v72; // rax
  ULONG_PTR v73; // rax
  ULONG_PTR v74; // rcx
  ULONG_PTR mm; // rax
  _QWORD *nn; // r8
  __int64 v77; // r9
  int v78; // edx
  int v79; // r11d
  int v80; // edx
  ULONG_PTR v81; // rax
  _QWORD *v82; // [rsp+20h] [rbp-20h] BYREF
  _QWORD **v83; // [rsp+28h] [rbp-18h]
  __int64 v84; // [rsp+30h] [rbp-10h] BYREF
  char **v85; // [rsp+38h] [rbp-8h]

  v83 = &v82;
  v85 = (char **)&v84;
  v84 = (__int64)&v84;
  v3 = &v82;
  v82 = &v82;
  if ( (a2 & 1) == 0 || !PopDirectedDripsEnableV2 )
  {
    PnpLockDeviceActionQueue();
    v3 = v82;
  }
  memset(a1, 0, 0x180uLL);
  v5 = a1 + 48;
  *((_DWORD *)a1 + 94) = a2;
  v6 = 5LL;
  do
  {
    *(v5 - 2) = v5 - 3;
    *(v5 - 3) = v5 - 3;
    *v5 = v5 - 1;
    *(v5 - 1) = v5 - 1;
    v5[2] = v5 + 1;
    v5[1] = v5 + 1;
    v7 = v5 + 3;
    v5[4] = v5 + 3;
    v5 += 9;
    *v7 = v7;
    --v6;
  }
  while ( v6 );
  v8 = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)(i + 8) )
    v8 = i;
  if ( v8 == IopRootDeviceNode )
    goto LABEL_27;
  do
  {
    v10 = (_QWORD *)(v8 + 144);
    *(_DWORD *)(v8 + 232) = 0;
    *(_DWORD *)(v8 + 236) = 0;
    *(_DWORD *)(v8 + 240) = 0;
    *(_DWORD *)(v8 + 244) = 0;
    *(_BYTE *)(v8 + 200) = 0;
    *(_QWORD *)(v8 + 208) = *(_QWORD *)(v8 + 32);
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(v8 + 32));
    *(_QWORD *)(v8 + 192) = AttachedDeviceReference;
    v12 = IopCaptureObjectName(AttachedDeviceReference->DriverObject);
    v13 = *(_QWORD *)(v8 + 192);
    *(_QWORD *)(v8 + 224) = v12;
    v14 = IopCaptureObjectName(v13);
    v15 = *(void **)(v8 + 208);
    *(_QWORD *)(v8 + 216) = v14;
    ObfReferenceObject(v15);
    *(_BYTE *)(v8 + 200) = 0;
    if ( (unsigned __int8)IopCheckDeviceFlags(v8 + 144, 0x2000LL) )
      *(_BYTE *)(v8 + 200) |= 2u;
    v16 = (ULONG_PTR *)(v8 + 16);
    if ( *(_QWORD *)(v8 + 16) == IopRootDeviceNode && *(_DWORD *)(v8 + 448) && (*(_DWORD *)(v8 + 396) & 4) == 0 )
    {
      v18 = v83;
      if ( *v83 != &v82 )
LABEL_183:
        __fastfail(3u);
      *(_QWORD *)(v8 + 152) = v83;
      *v10 = &v82;
      *v18 = v10;
      v83 = (_QWORD **)(v8 + 144);
    }
    v8 = *(_QWORD *)v8;
    if ( v8 )
    {
      for ( j = *(_QWORD *)(v8 + 8); j; j = *(_QWORD *)(j + 8) )
        v8 = j;
    }
    else
    {
      v8 = *v16;
    }
  }
  while ( v8 != IopRootDeviceNode );
  while ( 1 )
  {
    v3 = v82;
LABEL_27:
    if ( v3 == &v82 )
      break;
    if ( (_QWORD **)v3[1] != &v82 )
      goto LABEL_183;
    v21 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_183;
    v82 = (_QWORD *)*v3;
    *(_QWORD *)(v21 + 8) = &v82;
    *((_BYTE *)v3 + 56) |= 1u;
    v22 = v3 - 18;
    v20 = v22;
    for ( k = (_QWORD *)v22[1]; k; k = (_QWORD *)k[1] )
      v20 = k;
    while ( v20 != v22 )
    {
      *((_BYTE *)v20 + 200) |= 1u;
      v19 = (_QWORD *)*v20;
      if ( *v20 )
      {
        do
        {
          v20 = v19;
          v19 = (_QWORD *)v19[1];
        }
        while ( v19 );
      }
      else
      {
        v20 = (_QWORD *)v20[2];
      }
    }
  }
  do
  {
    v24 = IopRootDeviceNode;
    v25 = 0;
    for ( m = *(_QWORD *)(IopRootDeviceNode + 8); m; m = *(_QWORD *)(m + 8) )
      v24 = m;
    while ( 1 )
    {
      v28 = IopRootDeviceNode;
      if ( v24 == IopRootDeviceNode )
        break;
      if ( (*(_BYTE *)(v24 + 200) & 2) != 0 )
      {
        v29 = *(_QWORD *)(v24 + 8);
        v30 = v24;
        while ( v29 )
        {
          v30 = v29;
          v29 = *(_QWORD *)(v29 + 8);
        }
        while ( v30 != v24 )
        {
          *(_BYTE *)(v30 + 200) |= 2u;
          v31 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 )
          {
            do
            {
              v30 = v31;
              v31 = *(_QWORD *)(v31 + 8);
            }
            while ( v31 );
          }
          else
          {
            v30 = *(_QWORD *)(v30 + 16);
          }
        }
      }
      v27 = *(_QWORD *)v24;
      if ( *(_QWORD *)v24 )
      {
        do
        {
          v24 = v27;
          v27 = *(_QWORD *)(v27 + 8);
        }
        while ( v27 );
      }
      else
      {
        v24 = *(_QWORD *)(v24 + 16);
      }
    }
    for ( n = *(_QWORD *)(IopRootDeviceNode + 8); n; n = *(_QWORD *)(n + 8) )
      v28 = n;
    v33 = IopRootDeviceNode;
    if ( v28 == IopRootDeviceNode )
      break;
    do
    {
      if ( (*(_BYTE *)(v28 + 200) & 2) != 0 )
      {
        for ( ii = *(_QWORD **)(v28 + 160); ii != (_QWORD *)(v28 + 160); ii = (_QWORD *)*ii )
        {
          v65 = *(ii - 1);
          v66 = *(_BYTE *)(v65 + 56);
          if ( (v66 & 2) == 0 )
          {
            v25 = 1;
            *(_BYTE *)(v65 + 56) = v66 | 2;
          }
        }
      }
      v35 = *(_QWORD *)v28;
      if ( *(_QWORD *)v28 )
      {
        do
        {
          v28 = v35;
          v35 = *(_QWORD *)(v35 + 8);
        }
        while ( v35 );
      }
      else
      {
        v28 = *(_QWORD *)(v28 + 16);
      }
      v33 = IopRootDeviceNode;
    }
    while ( v28 != IopRootDeviceNode );
  }
  while ( v25 );
  for ( jj = *(_QWORD *)(v33 + 8); jj; jj = *(_QWORD *)(jj + 8) )
    v33 = jj;
  while ( 1 )
  {
    v40 = IopRootDeviceNode;
    if ( v33 == IopRootDeviceNode )
      break;
    v41 = *(_BYTE *)(v33 + 200);
    if ( (v41 & 2) != 0 )
    {
      v38 = *(_DWORD **)(v33 + 192);
      *(_BYTE *)(v33 + 200) = v41 + 1;
      ObfReferenceObjectWithTag(v38, 0x70506F50u);
      if ( v38 )
      {
        while ( v38[18] != 7 )
        {
          LowerDeviceObjectWithTag = IoGetLowerDeviceObjectWithTag((__int64)v38, 0x70506F50u);
          ObfDereferenceObjectWithTag(v38, 0x70506F50u);
          v38 = LowerDeviceObjectWithTag;
          if ( !LowerDeviceObjectWithTag )
            goto LABEL_69;
        }
        ObfDereferenceObjectWithTag(v38, 0x70506F50u);
        if ( (unsigned __int8)IopCheckDeviceFlags(v33 + 144, 256LL) )
          *(_BYTE *)(v33 + 200) = 2;
      }
    }
LABEL_69:
    v39 = *(_QWORD *)v33;
    if ( *(_QWORD *)v33 )
    {
      do
      {
        v33 = v39;
        v39 = *(_QWORD *)(v39 + 8);
      }
      while ( v39 );
    }
    else
    {
      v33 = *(_QWORD *)(v33 + 16);
    }
  }
  if ( !PopDirectedDripsEnableV2 )
  {
    do
    {
      v67 = 0;
      if ( (*((_DWORD *)a1 + 94) & 1) == 0 )
        break;
      for ( kk = *(_QWORD *)(v40 + 8); kk; kk = *(_QWORD *)(kk + 8) )
        v40 = kk;
      while ( 1 )
      {
        v74 = IopRootDeviceNode;
        if ( v40 == IopRootDeviceNode )
          break;
        if ( (*(_DWORD *)(v40 + 704) & 0x6000) != 0 || (*(_DWORD *)(v40 + 296) & 0x100) != 0 )
        {
          v69 = *(_QWORD *)(v40 + 8);
          v70 = v40;
          while ( v69 )
          {
            v70 = v69;
            v69 = *(_QWORD *)(v69 + 8);
          }
          while ( v70 != v40 )
          {
            v71 = *(_DWORD *)(v70 + 704) | 0x4000;
            *(_DWORD *)(v70 + 704) = v71;
            if ( (*(_DWORD *)(v40 + 704) & 0x8000) != 0 )
            {
              v71 |= 0x8000u;
              *(_DWORD *)(v70 + 704) = v71;
            }
            if ( (*(_DWORD *)(v70 + 296) & 0x40) == 0 )
              *(_DWORD *)(v70 + 704) = v71 | 0x8000;
            v72 = *(_QWORD *)v70;
            if ( *(_QWORD *)v70 )
            {
              do
              {
                v70 = v72;
                v72 = *(_QWORD *)(v72 + 8);
              }
              while ( v72 );
            }
            else
            {
              v70 = *(_QWORD *)(v70 + 16);
            }
          }
        }
        v73 = *(_QWORD *)v40;
        if ( *(_QWORD *)v40 )
        {
          do
          {
            v40 = v73;
            v73 = *(_QWORD *)(v73 + 8);
          }
          while ( v73 );
        }
        else
        {
          v40 = *(_QWORD *)(v40 + 16);
        }
      }
      for ( mm = *(_QWORD *)(IopRootDeviceNode + 8); mm; mm = *(_QWORD *)(mm + 8) )
        v74 = mm;
      v40 = IopRootDeviceNode;
      if ( v74 == IopRootDeviceNode )
        break;
      do
      {
        if ( (*(_DWORD *)(v74 + 704) & 0x6000) != 0 || (*(_DWORD *)(v74 + 296) & 0x100) != 0 )
        {
          for ( nn = *(_QWORD **)(v74 + 160); nn != (_QWORD *)(v74 + 160); nn = (_QWORD *)*nn )
          {
            v77 = *(nn - 1);
            v78 = *(_DWORD *)(v77 + 560);
            if ( (v78 & 0x6000) == 0 )
            {
              v79 = *(_DWORD *)(v77 + 152);
              if ( (v79 & 0x100) == 0 )
              {
                v80 = v78 | 0x4000;
                *(_DWORD *)(v77 + 560) = v80;
                if ( (*(_DWORD *)(v74 + 704) & 0x8000) != 0 )
                {
                  v80 |= 0x8000u;
                  *(_DWORD *)(v77 + 560) = v80;
                }
                if ( (v79 & 0x40) == 0 )
                  *(_DWORD *)(v77 + 560) = v80 | 0x8000;
                v67 = 1;
              }
            }
          }
        }
        v81 = *(_QWORD *)v74;
        if ( *(_QWORD *)v74 )
        {
          do
          {
            v74 = v81;
            v81 = *(_QWORD *)(v81 + 8);
          }
          while ( v81 );
        }
        else
        {
          v74 = *(_QWORD *)(v74 + 16);
        }
        v40 = IopRootDeviceNode;
      }
      while ( v74 != IopRootDeviceNode );
    }
    while ( v67 );
  }
  do
  {
    v42 = *(_QWORD *)(v40 + 8);
    v43 = 0;
    while ( v42 )
    {
      v40 = v42;
      v42 = *(_QWORD *)(v42 + 8);
    }
    while ( 1 )
    {
      v44 = IopRootDeviceNode;
      if ( v40 == IopRootDeviceNode )
        break;
      v45 = (ULONG_PTR *)(v40 + 16);
      v46 = *(_QWORD *)(v40 + 16);
      if ( v46 != IopRootDeviceNode )
      {
        v47 = *(_BYTE *)(v40 + 200);
        if ( *(_BYTE *)(v46 + 200) > v47 )
          *(_BYTE *)(v46 + 200) = v47;
      }
      v40 = *(_QWORD *)v40;
      if ( v40 )
      {
        for ( i1 = *(_QWORD *)(v40 + 8); i1; i1 = *(_QWORD *)(i1 + 8) )
          v40 = i1;
      }
      else
      {
        v40 = *v45;
      }
    }
    for ( i2 = *(_QWORD *)(IopRootDeviceNode + 8); i2; i2 = *(_QWORD *)(i2 + 8) )
      v44 = i2;
    v40 = IopRootDeviceNode;
    if ( v44 == IopRootDeviceNode )
      break;
    do
    {
      for ( i3 = *(_QWORD **)(v44 + 176); i3 != (_QWORD *)(v44 + 176); i3 = (_QWORD *)*i3 )
      {
        v53 = i3[5];
        v54 = *(_BYTE *)(v44 + 200);
        if ( *(_BYTE *)(v53 + 56) > v54 )
        {
          v43 = 1;
          *(_BYTE *)(v53 + 56) = v54;
        }
      }
      v51 = *(_QWORD *)v44;
      if ( *(_QWORD *)v44 )
      {
        do
        {
          v44 = v51;
          v51 = *(_QWORD *)(v51 + 8);
        }
        while ( v51 );
      }
      else
      {
        v44 = *(_QWORD *)(v44 + 16);
      }
      v40 = IopRootDeviceNode;
    }
    while ( v44 != IopRootDeviceNode );
  }
  while ( v43 );
  for ( i4 = *(_QWORD *)(v40 + 8); i4; i4 = *(_QWORD *)(i4 + 8) )
    v40 = i4;
  if ( v40 != IopRootDeviceNode )
  {
    v55 = v85;
    do
    {
      v56 = (char *)(v40 + 144);
      if ( (*((_DWORD *)a1 + 94) & 1) == 0
        || (*(_DWORD *)(v40 + 704) & 0x6000) != 0
        || (*(_DWORD *)(v40 + 296) & 0x100) != 0 )
      {
        ++*(_DWORD *)&a1[72 * *(unsigned __int8 *)(v40 + 200) + 16];
        if ( *(_QWORD *)(v40 + 16) != IopRootDeviceNode )
        {
          ++*(_DWORD *)(v40 + 240);
          ++*(_DWORD *)(*(_QWORD *)(v40 + 16) + 232LL);
        }
        v57 = *(_QWORD **)(v40 + 176);
        if ( v57 != (_QWORD *)(v40 + 176) )
        {
          v63 = *(_DWORD *)(v40 + 240);
          do
          {
            *(_DWORD *)(v40 + 240) = ++v63;
            v57 = (_QWORD *)*v57;
          }
          while ( v57 != (_QWORD *)(v40 + 176) );
        }
        v58 = *(_QWORD **)(v40 + 160);
        if ( v58 != (_QWORD *)(v40 + 160) )
        {
          v64 = *(_DWORD *)(v40 + 232);
          do
          {
            *(_DWORD *)(v40 + 232) = ++v64;
            v58 = (_QWORD *)*v58;
          }
          while ( v58 != (_QWORD *)(v40 + 160) );
        }
        v59 = &a1[64 * *(unsigned __int8 *)(v40 + 200) + 24 + 8 * *(unsigned __int8 *)(v40 + 200)];
        v60 = (char **)*((_QWORD *)v59 + 1);
        if ( *v60 != v59 )
          goto LABEL_183;
        *(_QWORD *)v56 = v59;
        *(_QWORD *)(v40 + 152) = v60;
        *v60 = v56;
        *((_QWORD *)v59 + 1) = v56;
        v55 = v85;
      }
      else
      {
        if ( *v55 != (char *)&v84 )
          goto LABEL_183;
        *(_QWORD *)(v40 + 152) = v55;
        *(_QWORD *)v56 = &v84;
        *v55 = v56;
        v55 = (char **)(v40 + 144);
        v85 = (char **)(v40 + 144);
      }
      v61 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 )
      {
        do
        {
          v40 = v61;
          v61 = *(_QWORD *)(v61 + 8);
        }
        while ( v61 );
      }
      else
      {
        v40 = *(_QWORD *)(v40 + 16);
      }
    }
    while ( v40 != IopRootDeviceNode );
  }
  IopFreePoDeviceNotifyListHead(&v84);
  result = &IopWarmEjectPdo;
  *((_QWORD *)a1 + 1) = &IopWarmEjectPdo;
  *a1 = 1;
  return result;
}
