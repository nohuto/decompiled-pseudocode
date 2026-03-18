/*
 * XREFs of IoBuildPoDeviceNotifyList @ 0x14059BEEC
 * Callers:
 *     PopBuildDeviceNotifyList @ 0x14059BDF4 (PopBuildDeviceNotifyList.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x14000E480 (IoGetAttachedDeviceReference.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140139CDC (IoGetLowerDeviceObjectWithTag.c)
 *     PnpLockDeviceActionQueue @ 0x14015965C (PnpLockDeviceActionQueue.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopCheckDeviceFlags @ 0x14059C4EC (IopCheckDeviceFlags.c)
 *     IopCaptureObjectName @ 0x14059C56C (IopCaptureObjectName.c)
 *     IopFreePoDeviceNotifyListHead @ 0x14059C688 (IopFreePoDeviceNotifyListHead.c)
 */

__int64 *__fastcall IoBuildPoDeviceNotifyList(char *a1, int a2)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *i; // rax
  _QWORD *v10; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  _QWORD **v16; // rcx
  _QWORD *j; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdi
  _QWORD *k; // rcx
  _QWORD *v24; // rdx
  char v25; // r10
  _QWORD *m; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  _QWORD *n; // rax
  _QWORD *v33; // rdi
  _QWORD *ii; // rax
  _QWORD *v35; // rax
  _QWORD *jj; // rax
  _DWORD *LowerDeviceObjectWithTag; // rbx
  _DWORD *v38; // rsi
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  char v41; // al
  _QWORD *v42; // rax
  char v43; // r10
  _QWORD *v44; // rax
  _QWORD **v45; // r8
  _BYTE *v46; // rcx
  unsigned __int8 v47; // al
  _QWORD *kk; // rax
  _QWORD *mm; // rcx
  _QWORD *nn; // rcx
  _QWORD *v51; // rcx
  _QWORD *i1; // rax
  __int64 v53; // r8
  unsigned __int8 v54; // r9
  char **v55; // rcx
  char *v56; // r8
  _DWORD *v57; // rcx
  _QWORD *i2; // r9
  _QWORD *i3; // r9
  char *v60; // rax
  char **v61; // rcx
  _QWORD *v62; // rax
  __int64 *result; // rax
  __int64 v64; // r9
  char v65; // dl
  _QWORD *v66; // [rsp+20h] [rbp-20h] BYREF
  _QWORD **v67; // [rsp+28h] [rbp-18h]
  __int64 v68; // [rsp+30h] [rbp-10h] BYREF
  char **v69; // [rsp+38h] [rbp-8h]

  v67 = &v66;
  v69 = (char **)&v68;
  v68 = (__int64)&v68;
  v3 = &v66;
  v66 = &v66;
  if ( (a2 & 1) == 0 )
  {
    PnpLockDeviceActionQueue();
    v3 = v66;
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
  for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
    v8 = i;
  if ( v8 == IopRootDeviceNode )
    goto LABEL_27;
  do
  {
    v10 = v8 + 18;
    *((_DWORD *)v8 + 58) = 0;
    *((_DWORD *)v8 + 59) = 0;
    *((_DWORD *)v8 + 60) = 0;
    *((_DWORD *)v8 + 61) = 0;
    *((_BYTE *)v8 + 200) = 0;
    v8[26] = v8[4];
    AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v8[4]);
    v8[24] = AttachedDeviceReference;
    v12 = IopCaptureObjectName(AttachedDeviceReference->DriverObject);
    v13 = v8[24];
    v8[28] = v12;
    v14 = IopCaptureObjectName(v13);
    v15 = (void *)v8[26];
    v8[27] = v14;
    ObfReferenceObject(v15);
    *((_BYTE *)v8 + 200) = 0;
    if ( (unsigned __int8)IopCheckDeviceFlags(v8 + 18, 0x2000LL) )
      *((_BYTE *)v8 + 200) |= 2u;
    v16 = (_QWORD **)(v8 + 2);
    if ( (PVOID)v8[2] == IopRootDeviceNode && *((_DWORD *)v8 + 112) && (*((_DWORD *)v8 + 99) & 4) == 0 )
    {
      v18 = v67;
      if ( *v67 != &v66 )
LABEL_143:
        __fastfail(3u);
      v8[19] = v67;
      *v10 = &v66;
      *v18 = v10;
      v67 = (_QWORD **)(v8 + 18);
    }
    v8 = (_QWORD *)*v8;
    if ( v8 )
    {
      for ( j = (_QWORD *)v8[1]; j; j = (_QWORD *)j[1] )
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
    v3 = v66;
LABEL_27:
    if ( v3 == &v66 )
      break;
    if ( (_QWORD **)v3[1] != &v66 )
      goto LABEL_143;
    v21 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_143;
    v66 = (_QWORD *)*v3;
    *(_QWORD *)(v21 + 8) = &v66;
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
    for ( m = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); m; m = (_QWORD *)m[1] )
      v24 = m;
    while ( 1 )
    {
      v28 = IopRootDeviceNode;
      if ( v24 == IopRootDeviceNode )
        break;
      if ( (v24[25] & 2) != 0 )
      {
        v29 = (_QWORD *)v24[1];
        v30 = v24;
        while ( v29 )
        {
          v30 = v29;
          v29 = (_QWORD *)v29[1];
        }
        while ( v30 != v24 )
        {
          *((_BYTE *)v30 + 200) |= 2u;
          v31 = (_QWORD *)*v30;
          if ( *v30 )
          {
            do
            {
              v30 = v31;
              v31 = (_QWORD *)v31[1];
            }
            while ( v31 );
          }
          else
          {
            v30 = (_QWORD *)v30[2];
          }
        }
      }
      v27 = (_QWORD *)*v24;
      if ( *v24 )
      {
        do
        {
          v24 = v27;
          v27 = (_QWORD *)v27[1];
        }
        while ( v27 );
      }
      else
      {
        v24 = (_QWORD *)v24[2];
      }
    }
    for ( n = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); n; n = (_QWORD *)n[1] )
      v28 = n;
    v33 = IopRootDeviceNode;
    if ( v28 == IopRootDeviceNode )
      break;
    do
    {
      if ( (v28[25] & 2) != 0 )
      {
        for ( ii = (_QWORD *)v28[20]; ii != v28 + 20; ii = (_QWORD *)*ii )
        {
          v64 = *(ii - 1);
          v65 = *(_BYTE *)(v64 + 56);
          if ( (v65 & 2) == 0 )
          {
            v25 = 1;
            *(_BYTE *)(v64 + 56) = v65 | 2;
          }
        }
      }
      v35 = (_QWORD *)*v28;
      if ( *v28 )
      {
        do
        {
          v28 = v35;
          v35 = (_QWORD *)v35[1];
        }
        while ( v35 );
      }
      else
      {
        v28 = (_QWORD *)v28[2];
      }
      v33 = IopRootDeviceNode;
    }
    while ( v28 != IopRootDeviceNode );
  }
  while ( v25 );
  for ( jj = (_QWORD *)v33[1]; jj; jj = (_QWORD *)jj[1] )
    v33 = jj;
  while ( 1 )
  {
    v40 = IopRootDeviceNode;
    if ( v33 == IopRootDeviceNode )
      break;
    v41 = *((_BYTE *)v33 + 200);
    if ( (v41 & 2) != 0 )
    {
      v38 = (_DWORD *)v33[24];
      *((_BYTE *)v33 + 200) = v41 + 1;
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
        if ( (unsigned __int8)IopCheckDeviceFlags(v33 + 18, 256LL) )
          *((_BYTE *)v33 + 200) = 2;
      }
    }
LABEL_69:
    v39 = (_QWORD *)*v33;
    if ( *v33 )
    {
      do
      {
        v33 = v39;
        v39 = (_QWORD *)v39[1];
      }
      while ( v39 );
    }
    else
    {
      v33 = (_QWORD *)v33[2];
    }
  }
  do
  {
    v42 = (_QWORD *)v40[1];
    v43 = 0;
    while ( v42 )
    {
      v40 = v42;
      v42 = (_QWORD *)v42[1];
    }
    while ( 1 )
    {
      v44 = IopRootDeviceNode;
      if ( v40 == IopRootDeviceNode )
        break;
      v45 = (_QWORD **)(v40 + 2);
      v46 = (_BYTE *)v40[2];
      if ( v46 != IopRootDeviceNode )
      {
        v47 = *((_BYTE *)v40 + 200);
        if ( v46[200] > v47 )
          v46[200] = v47;
      }
      v40 = (_QWORD *)*v40;
      if ( v40 )
      {
        for ( kk = (_QWORD *)v40[1]; kk; kk = (_QWORD *)kk[1] )
          v40 = kk;
      }
      else
      {
        v40 = *v45;
      }
    }
    for ( mm = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); mm; mm = (_QWORD *)mm[1] )
      v44 = mm;
    v40 = IopRootDeviceNode;
    if ( v44 == IopRootDeviceNode )
      break;
    do
    {
      for ( nn = (_QWORD *)v44[22]; nn != v44 + 22; nn = (_QWORD *)*nn )
      {
        v53 = nn[5];
        v54 = *((_BYTE *)v44 + 200);
        if ( *(_BYTE *)(v53 + 56) > v54 )
        {
          v43 = 1;
          *(_BYTE *)(v53 + 56) = v54;
        }
      }
      v51 = (_QWORD *)*v44;
      if ( *v44 )
      {
        do
        {
          v44 = v51;
          v51 = (_QWORD *)v51[1];
        }
        while ( v51 );
      }
      else
      {
        v44 = (_QWORD *)v44[2];
      }
      v40 = IopRootDeviceNode;
    }
    while ( v44 != IopRootDeviceNode );
  }
  while ( v43 );
  for ( i1 = (_QWORD *)v40[1]; i1; i1 = (_QWORD *)i1[1] )
    v40 = i1;
  if ( v40 != IopRootDeviceNode )
  {
    v55 = v69;
    do
    {
      v56 = (char *)(v40 + 18);
      if ( (*((_DWORD *)a1 + 94) & 1) == 0 || (v40[37] & 0x100) != 0 )
      {
        ++*(_DWORD *)&a1[72 * *((unsigned __int8 *)v40 + 200) + 16];
        v57 = (_DWORD *)v40[2];
        if ( v57 != IopRootDeviceNode && ((*((_DWORD *)a1 + 94) & 1) == 0 || (v57[74] & 0x100) != 0) )
        {
          ++*((_DWORD *)v40 + 60);
          ++*(_DWORD *)(v40[2] + 232LL);
        }
        for ( i2 = (_QWORD *)v40[22]; i2 != v40 + 22; i2 = (_QWORD *)*i2 )
        {
          if ( (*((_DWORD *)a1 + 94) & 1) == 0 || (*(_DWORD *)(i2[5] + 152LL) & 0x100) != 0 )
            ++*((_DWORD *)v40 + 60);
        }
        for ( i3 = (_QWORD *)v40[20]; i3 != v40 + 20; i3 = (_QWORD *)*i3 )
        {
          if ( (*((_DWORD *)a1 + 94) & 1) == 0 || (*(_DWORD *)(*(i3 - 1) + 152LL) & 0x100) != 0 )
            ++*((_DWORD *)v40 + 58);
        }
        v60 = &a1[64 * *((unsigned __int8 *)v40 + 200) + 24 + 8 * *((unsigned __int8 *)v40 + 200)];
        v61 = (char **)*((_QWORD *)v60 + 1);
        if ( *v61 != v60 )
          goto LABEL_143;
        *(_QWORD *)v56 = v60;
        v40[19] = v61;
        *v61 = v56;
        *((_QWORD *)v60 + 1) = v56;
        v55 = v69;
      }
      else
      {
        if ( *v55 != (char *)&v68 )
          goto LABEL_143;
        v40[19] = v55;
        *(_QWORD *)v56 = &v68;
        *v55 = v56;
        v55 = (char **)(v40 + 18);
        v69 = (char **)(v40 + 18);
      }
      v62 = (_QWORD *)*v40;
      if ( *v40 )
      {
        do
        {
          v40 = v62;
          v62 = (_QWORD *)v62[1];
        }
        while ( v62 );
      }
      else
      {
        v40 = (_QWORD *)v40[2];
      }
    }
    while ( v40 != IopRootDeviceNode );
  }
  IopFreePoDeviceNotifyListHead(&v68);
  result = &IopWarmEjectPdo;
  *((_QWORD *)a1 + 1) = &IopWarmEjectPdo;
  *a1 = 1;
  return result;
}
