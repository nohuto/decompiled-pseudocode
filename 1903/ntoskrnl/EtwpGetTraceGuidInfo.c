/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x1406ECEDC
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4180 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, __int64 a2, int *a3, unsigned int *a4)
{
  size_t v4; // r14
  unsigned int v5; // ebx
  _DWORD *v6; // r13
  __int64 v10; // r12
  unsigned int v11; // edi
  __int64 v12; // rbp
  unsigned int i; // edx
  __int64 v14; // r15
  GUID *v15; // r8
  __int64 v16; // rcx
  _QWORD *GuidEntryByGuid; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v19; // rdx
  __int64 *v20; // r8
  _BYTE *v21; // r10
  char v22; // cl
  _DWORD *v23; // r11
  int v24; // r13d
  char *v25; // r9
  __int64 *v26; // r15
  unsigned int v27; // r12d
  __int64 v28; // r10
  __int64 v29; // r15
  int v30; // ecx
  int v31; // r15d
  __int64 v33; // rcx
  _OWORD *v34; // rdx
  unsigned int v35; // r9d
  unsigned int v36; // edi
  _DWORD *v37; // rcx
  _OWORD *v38; // rax
  int v39; // r8d
  __int64 v40; // rcx
  unsigned int v41; // edi
  char *v42; // rcx
  char *v43; // rdx
  int v44; // ecx
  __int64 v45; // rdx
  unsigned int v46; // [rsp+20h] [rbp-58h]
  int v47; // [rsp+90h] [rbp+18h]

  v4 = *a4;
  v5 = 0;
  v6 = a4;
  v47 = 0;
  v10 = 8LL;
  v11 = 8;
  if ( a1 == EtwpHostSiloState )
    v12 = 2147353472LL;
  else
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1104LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v14 = 2LL * i;
    v15 = (&EtwpUmglProviders)[2 * i];
    v16 = *(_QWORD *)&v15->Data1 - *(_QWORD *)a2;
    if ( *(_QWORD *)&v15->Data1 == *(_QWORD *)a2 )
      v16 = *(_QWORD *)v15->Data4 - *(_QWORD *)(a2 + 8);
    if ( !v16 )
    {
      memset(a3, 0, v4);
      v44 = 24;
      v45 = *((unsigned __int8 *)&(&EtwpUmglProviders)[v14] + 8);
      if ( *(_BYTE *)(v12 + 2 * v45) )
      {
        v44 = 56;
        if ( (unsigned int)v4 >= 0x38 )
        {
          a3[3] = 1;
          a3[6] = 1;
          *((_WORD *)a3 + 15) = *(unsigned __int8 *)(v12 + 2 * v45);
          *((_QWORD *)a3 + 5) = *(unsigned __int8 *)(v12 + 2 * v45 + 1);
LABEL_63:
          *a3 = 1;
          a3[5] = 1;
          a3[4] = 0;
          a3[2] = 0;
LABEL_65:
          *v6 = v44;
          return v5;
        }
      }
      else if ( (unsigned int)v4 >= 0x18 )
      {
        a3[3] = 0;
        goto LABEL_63;
      }
      v5 = -1073741789;
      goto LABEL_65;
    }
  }
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, 0);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, (unsigned int)*v6);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  v19 = GuidEntryByGuid + 7;
  v20 = (__int64 *)GuidEntryByGuid[7];
  GuidEntryByGuid[52] = KeGetCurrentThread();
  if ( v20 == GuidEntryByGuid + 7 )
    goto LABEL_27;
  while ( 2 )
  {
    ++v47;
    v21 = (char *)v20 + 98;
    v22 = 0;
    v46 = v11;
    v23 = (int *)((char *)a3 + v11);
    v11 += 16;
    v24 = 0;
    v25 = (char *)a3 + v11;
    v26 = v20;
    if ( (*((_BYTE *)v20 + 98) & 8) != 0 )
    {
      v22 = 1;
      if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
      {
        v11 += 32;
        v24 = 1;
        if ( v11 <= (unsigned int)v4 )
        {
          *(_DWORD *)v25 = 1;
          v25[4] = *((_BYTE *)GuidEntryByGuid + 90);
          *((_QWORD *)v25 + 2) = GuidEntryByGuid[10];
          *((_WORD *)v25 + 3) = *((_WORD *)GuidEntryByGuid + 44);
        }
      }
    }
    else if ( *((_BYTE *)v20 + 100) || *((_BYTE *)v20 + 101) )
    {
      v27 = 0;
      v28 = 16LL;
      do
      {
        if ( LODWORD(GuidEntryByGuid[v28]) )
        {
          if ( ((unsigned __int8)(1 << v27) & *((_BYTE *)v20 + 100)) != 0 )
          {
            ++v24;
            v11 += 32;
            if ( v11 <= (unsigned int)v4 )
            {
              *(_OWORD *)v25 = *(_OWORD *)&GuidEntryByGuid[v28];
              *((_OWORD *)v25 + 1) = *(_OWORD *)&GuidEntryByGuid[v28 + 2];
              v25 += 32;
            }
          }
        }
        v29 = v20[5];
        if ( v29 )
        {
          if ( *(_DWORD *)(v28 * 8 + v29) )
          {
            if ( ((unsigned __int8)(1 << v27) & *((_BYTE *)v20 + 101)) != 0 )
            {
              ++v24;
              v11 += 32;
              if ( v11 <= (unsigned int)v4 )
              {
                *(_OWORD *)v25 = *(_OWORD *)(v28 * 8 + v29);
                *((_OWORD *)v25 + 1) = *(_OWORD *)(v28 * 8 + v29 + 16);
                v25 += 32;
              }
            }
          }
        }
        ++v27;
        v28 += 4LL;
      }
      while ( v27 < 8 );
      v21 = (char *)v20 + 98;
      v19 = GuidEntryByGuid + 7;
      v10 = 8LL;
      v22 = 0;
      v26 = v20;
    }
    v20 = (__int64 *)*v20;
    if ( v11 > (unsigned int)v4 )
    {
LABEL_46:
      if ( v20 == v19 )
        goto LABEL_26;
      continue;
    }
    break;
  }
  if ( v22 == 1 )
    v23[3] = 1;
  if ( (*v21 & 2) != 0 )
    v30 = *(_DWORD *)(v26[10] + 744);
  else
    v30 = 0;
  v23[2] = v30;
  v23[1] = v24;
  if ( v20 != v19 )
  {
    *v23 = v11 - v46;
    goto LABEL_46;
  }
  *v23 = 0;
LABEL_26:
  v6 = a4;
LABEL_27:
  GuidEntryByGuid[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v31 = v47;
  if ( !v47 )
  {
    v33 = v11;
    v34 = GuidEntryByGuid + 16;
    v35 = v11;
    v36 = v11 + 16;
    v37 = (int *)((char *)a3 + v33);
    v31 = 2;
    v38 = (_OWORD *)((char *)a3 + v36);
    v39 = 0;
    do
    {
      if ( *(_DWORD *)v34 )
      {
        ++v39;
        v36 += 32;
        if ( v36 <= (unsigned int)v4 )
        {
          *v38 = *v34;
          v38[1] = v34[1];
          v38 += 2;
        }
      }
      v34 += 2;
      --v10;
    }
    while ( v10 );
    if ( v36 <= (unsigned int)v4 )
    {
      v37[2] = 0;
      v37[1] = v39;
      *v37 = v36 - v35;
      v37[3] = 2;
    }
    v40 = v36;
    v41 = v36 + 16;
    v42 = (char *)a3 + v40;
    v43 = (char *)a3 + v41;
    v11 = v41 + 32;
    if ( v11 <= (unsigned int)v4 )
    {
      *(_QWORD *)(v42 + 4) = 0LL;
      *(_DWORD *)v42 = 0;
      *((_DWORD *)v42 + 3) = 3;
      *(_DWORD *)v43 = *((_BYTE *)GuidEntryByGuid + 91) & 1;
      if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
      {
        *((_DWORD *)v42 + 1) = 1;
        v43[4] = *((_BYTE *)GuidEntryByGuid + 90);
        *((_QWORD *)v43 + 2) = GuidEntryByGuid[10];
        *((_WORD *)v43 + 3) = *((_WORD *)GuidEntryByGuid + 44);
      }
    }
  }
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  if ( v11 > (unsigned int)v4 )
    v5 = -1073741789;
  else
    *a3 = v31;
  *v6 = v11;
  return v5;
}
