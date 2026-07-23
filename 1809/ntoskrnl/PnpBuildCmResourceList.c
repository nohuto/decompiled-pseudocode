/*
 * XREFs of PnpBuildCmResourceList @ 0x14072F9B0
 * Callers:
 *     PnpBuildCmResourceLists @ 0x14072F18C (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x14072F7B0 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 *     IopCreateRegistryKeyEx @ 0x14070A964 (IopCreateRegistryKeyEx.c)
 *     IopChildToRootTranslation @ 0x14072FE30 (IopChildToRootTranslation.c)
 *     IopParentToRawTranslation @ 0x14072FFDC (IopParentToRawTranslation.c)
 *     IopWriteResourceList @ 0x140730D98 (IopWriteResourceList.c)
 */

int __fastcall PnpBuildCmResourceList(__int64 a1, int a2)
{
  __int64 v2; // r12
  _DWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8
  PVOID PoolWithTag; // rax
  _DWORD *v11; // r15
  _DWORD *v12; // rax
  _DWORD *v13; // r13
  __int64 v14; // rcx
  _DWORD *v15; // r14
  int v16; // eax
  _DWORD *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  _WORD *v25; // rsi
  int v26; // edi
  __int16 v27; // ax
  char *v28; // rsi
  int v29; // eax
  HANDLE v30; // rsi
  char *v31; // rax
  int v32; // r14d
  __int64 v33; // rax
  int v34; // eax
  int v36; // [rsp+38h] [rbp-D0h]
  int v37; // [rsp+3Ch] [rbp-CCh]
  __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-C0h]
  _QWORD Destination[3]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-98h] BYREF
  PVOID P[3]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v44; // [rsp+98h] [rbp-70h] BYREF
  char v45; // [rsp+A8h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v4 = a1;
  Destination[1] = a1;
  LODWORD(v38) = a2;
  v5 = 0;
  v6 = **(_QWORD **)(v2 + 16);
  v39 = v6;
  LODWORD(v7) = *(_DWORD *)(v6 + 20);
  if ( !(_DWORD)v7 )
    goto LABEL_42;
  v8 = (__int64 *)(v6 + 24);
  v9 = (unsigned int)v7;
  do
  {
    v7 = *v8++;
    v5 += *(_DWORD *)(v7 + 276) + 1;
    --v9;
  }
  while ( v9 );
  if ( !v5 )
  {
LABEL_42:
    *(_DWORD *)(v4 + 56) = -1073741595;
    goto LABEL_43;
  }
  LODWORD(Destination[0]) = 20 * (v5 + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LODWORD(Destination[0]), 0x20207050u);
  Handle = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_37:
    LODWORD(v7) = -1073741670;
    *(_DWORD *)(v4 + 56) = -1073741670;
LABEL_43:
    *(_QWORD *)(v4 + 48) = 0LL;
    goto LABEL_21;
  }
  memset(PoolWithTag, 0, LODWORD(Destination[0]));
  v12 = ExAllocatePoolWithTag(PagedPool, LODWORD(Destination[0]), 0x20207050u);
  v13 = v12;
  if ( !v12 )
  {
    ExFreePoolWithTag(v11, 0);
    goto LABEL_37;
  }
  memset(v12, 0, LODWORD(Destination[0]));
  v14 = v39;
  v15 = v11 + 5;
  *v11 = 1;
  v11[1] = *(_DWORD *)v2;
  v11[2] = *(_DWORD *)(v2 + 4);
  v11[3] = 65537;
  v11[4] = v5;
  *v13 = 1;
  v13[1] = *(_DWORD *)v2;
  v16 = *(_DWORD *)(v2 + 4);
  v17 = v13 + 5;
  v13[2] = v16;
  v13[3] = 65537;
  v13[4] = v5;
  v7 = 0LL;
  v37 = 0;
  if ( !*(_DWORD *)(v14 + 20) )
  {
LABEL_19:
    if ( (_DWORD)v38 )
    {
      v28 = *(char **)v4;
      LODWORD(v7) = IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL);
      if ( (int)v7 >= 0 )
      {
        LODWORD(v42[0]) = 1572886;
        v42[1] = L"PnP Manager";
        LODWORD(P[0]) = 1441812;
        P[1] = L"PnpManager";
        v29 = ObQueryNameStringMode(v28, (__int64)&v44, 0x200u, &v38, 0);
        v30 = Handle;
        if ( v29 >= 0 )
        {
          WORD1(v44) = 496;
          v31 = &v45;
          if ( (_WORD)v44 )
            v31 = (char *)*((_QWORD *)&v44 + 1);
          *((_QWORD *)&v44 + 1) = v31;
          *(_OWORD *)&Destination[1] = v44;
          RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Raw");
          v32 = Destination[0];
          if ( (int)IopWriteResourceList(v30, v42, P, &Destination[1], v13, Destination[0]) >= 0 )
          {
            *(_OWORD *)&Destination[1] = v44;
            RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Translated");
            IopWriteResourceList(v30, v42, P, &Destination[1], v11, v32);
          }
        }
        LODWORD(v7) = ZwClose(v30);
      }
    }
    *(_QWORD *)(v4 + 48) = v11;
    v3 = v13;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)(v14 + 8 * v7 + 24);
    if ( !*(_BYTE *)(v18 + 8) )
    {
      *(_OWORD *)v17 = *(_OWORD *)(v18 + 136);
      v17[4] = *(_DWORD *)(v18 + 152);
      *(_OWORD *)v15 = *(_OWORD *)(v18 + 136);
      v34 = *(_DWORD *)(v18 + 152);
      goto LABEL_33;
    }
    v19 = *(_QWORD *)(v18 + 32);
    v42[0] = v19;
    if ( *(_DWORD *)(v19 + 128) == 2 )
    {
      v20 = *(_QWORD *)(v19 + 112);
    }
    else
    {
      v36 = IopParentToRawTranslation();
      if ( v36 < 0 )
        break;
      v20 = *(_QWORD *)(v18 + 112);
      v19 = v42[0];
    }
    *(_OWORD *)v17 = *(_OWORD *)v20;
    v17[4] = *(_DWORD *)(v20 + 16);
    if ( *(_DWORD *)(v19 + 128) == 2 )
    {
      v33 = *(_QWORD *)(v19 + 112);
      v14 = v39;
      *(_OWORD *)v15 = *(_OWORD *)v33;
      v34 = *(_DWORD *)(v33 + 16);
LABEL_33:
      v15[4] = v34;
      goto LABEL_17;
    }
    v21 = *(_QWORD *)(v18 + 72);
    if ( v21 )
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
    else
      LODWORD(v22) = 0;
    v36 = IopChildToRootTranslation(
            v22,
            *(_DWORD *)v18,
            *(_DWORD *)(v18 + 4),
            *(_DWORD *)(v18 + 80),
            v18 + 136,
            (__int64)P);
    if ( v36 < 0 )
      break;
    v23 = P[0];
    *(_OWORD *)v15 = *(_OWORD *)P[0];
    v15[4] = v23[4];
    ExFreePoolWithTag(v23, 0);
    v14 = v39;
LABEL_17:
    v24 = *(_DWORD *)(v18 + 276);
    v17 += 5;
    v15 += 5;
    if ( v24 )
    {
      v25 = (_WORD *)(*(_QWORD *)(v18 + 280) + 8LL);
      v26 = v24;
      do
      {
        *(_BYTE *)v17 = -127;
        *(_BYTE *)v15 = -127;
        *((_BYTE *)v17 + 1) = 1;
        *((_BYTE *)v15 + 1) = 1;
        v27 = *(v25 - 2);
        *((_WORD *)v17 + 1) = v27;
        *((_WORD *)v15 + 1) = v27;
        memmove(v17 + 1, v25, 0xCuLL);
        memmove(v15 + 1, v25, 0xCuLL);
        v25 += 16;
        v17 += 5;
        v15 += 5;
        --v26;
      }
      while ( v26 );
      v4 = Destination[1];
      v11 = Handle;
      v14 = v39;
    }
    v7 = (unsigned int)(v37 + 1);
    v37 = v7;
    if ( (unsigned int)v7 >= *(_DWORD *)(v14 + 20) )
      goto LABEL_19;
  }
  ExFreePoolWithTag(v11, 0);
  ExFreePoolWithTag(v13, 0);
  LODWORD(v7) = -1073741670;
  if ( v36 == -1073741267 )
    LODWORD(v7) = -1073741267;
  *(_DWORD *)(v4 + 56) = v7;
LABEL_21:
  *(_QWORD *)(v4 + 40) = v3;
  return v7;
}
