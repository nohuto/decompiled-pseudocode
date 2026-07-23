/*
 * XREFs of ObGetObjectInformation @ 0x140862EC0
 * Callers:
 *     ExpGetObjectInformation @ 0x1408CCBC0 (ExpGetObjectInformation.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14001622C (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x14013A8E0 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 *     ObpCreateTypeArray @ 0x140863548 (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x140863628 (ObpDestroyTypeArray.c)
 *     ObQueryTypeName @ 0x140863970 (ObQueryTypeName.c)
 */

__int64 __fastcall ObGetObjectInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r15
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v6; // r12
  unsigned __int16 *v8; // rbx
  unsigned int v9; // r14d
  unsigned int v10; // esi
  unsigned int *TypeArray; // rdi
  unsigned int v12; // edx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  unsigned int *v15; // r13
  __int64 v16; // r11
  char v17; // dl
  unsigned int i; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // rcx
  _DWORD *v23; // r8
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // r8d
  int *v28; // rax
  int v29; // ecx
  int v30; // edx
  __int64 *v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rax
  int v36; // edi
  unsigned int v37; // eax
  void *v38; // rbx
  unsigned __int16 *v39; // rdi
  __int16 v40; // ax
  __int16 v41; // di
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-B8h] BYREF
  int NumberOfBytes_4; // [rsp+34h] [rbp-B4h]
  char v44; // [rsp+38h] [rbp-B0h]
  unsigned int v45; // [rsp+3Ch] [rbp-ACh]
  int v46; // [rsp+40h] [rbp-A8h]
  unsigned int v47; // [rsp+44h] [rbp-A4h]
  const void **v48; // [rsp+48h] [rbp-A0h]
  unsigned int v49; // [rsp+50h] [rbp-98h]
  __int64 v50; // [rsp+58h] [rbp-90h]
  unsigned __int64 v51; // [rsp+60h] [rbp-88h]
  unsigned int *v52; // [rsp+68h] [rbp-80h]
  unsigned __int16 *v53; // [rsp+70h] [rbp-78h]
  _DWORD *v54; // [rsp+78h] [rbp-70h]
  unsigned int *v55; // [rsp+80h] [rbp-68h]
  __int64 v56; // [rsp+88h] [rbp-60h]
  char *v57; // [rsp+90h] [rbp-58h]
  __int64 v58; // [rsp+98h] [rbp-50h]
  __int64 v59; // [rsp+A0h] [rbp-48h]
  unsigned __int16 *v60; // [rsp+A8h] [rbp-40h]

  v4 = 0LL;
  v52 = 0LL;
  v51 = 536LL;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x218uLL, 0x7241624Fu);
  v6 = PoolWithTag;
  v53 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = PoolWithTag;
  v48 = (const void **)PoolWithTag;
  v9 = 0;
  v10 = 0;
  v50 = 0LL;
  TypeArray = (unsigned int *)ObpCreateTypeArray(ObpTypeObjectType);
  v55 = TypeArray;
  if ( !TypeArray )
  {
    ExFreePoolWithTag(v6, 0x7241624Fu);
    return 3221225473LL;
  }
  v12 = 0;
LABEL_6:
  v47 = v12;
  if ( v12 < *TypeArray )
  {
    v13 = *(_QWORD *)&TypeArray[2 * v12 + 2];
    if ( !v13 )
      goto LABEL_22;
    v14 = (_DWORD *)(v13 + 80);
    v54 = v14;
    if ( v14 == ObpTypeObjectType )
      goto LABEL_22;
    v15 = (unsigned int *)ObpCreateTypeArray(v14);
    v52 = v15;
    LODWORD(v16) = 0;
    if ( !v15 )
      goto LABEL_21;
    v17 = 1;
    v44 = 1;
    for ( i = 0; ; ++i )
    {
      v49 = i;
      if ( i >= *v15 )
      {
LABEL_20:
        ObpDestroyTypeArray(v15);
        v52 = 0LL;
        TypeArray = v55;
LABEL_21:
        v12 = v47;
LABEL_22:
        ++v12;
        goto LABEL_6;
      }
      v19 = *(_QWORD *)&v15[2 * i + 2];
      v56 = v19;
      if ( v19 )
        break;
LABEL_71:
      ;
    }
    v20 = v19 + 32;
    v21 = v19 + 80;
    v57 = (char *)(v19 + 80);
    if ( v17 )
    {
      v44 = v16;
      if ( v50 && v10 < a3 )
        *(_DWORD *)v50 = v10;
      v22 = a2 + v10;
      v50 = v22;
      v58 = v22;
      v10 += 48;
      v45 = v10;
      if ( v10 < 0x30 )
        goto LABEL_18;
      if ( v10 >= a3 )
        goto LABEL_24;
      *(_DWORD *)v22 = v16;
      v23 = v54;
      *(_DWORD *)(v22 + 4) = v54[11];
      *(_DWORD *)(v22 + 8) = v23[12];
      *(_DWORD *)(v22 + 12) = *((unsigned __int8 *)v23 + 40);
      *(_DWORD *)(v22 + 16) = v23[18];
      *(_OWORD *)(v22 + 20) = *(_OWORD *)(v23 + 19);
      *(_DWORD *)(v22 + 36) = v23[23];
      *(_DWORD *)(v22 + 40) = v23[25];
      *(_BYTE *)(v22 + 44) = (*((_BYTE *)v23 + 66) & 8) != 0;
      NumberOfBytes = v16;
      v24 = ObQueryTypeName(v21, v22 + 48, a3 - v10, &NumberOfBytes);
      v46 = v24;
      v25 = (NumberOfBytes + 7) & 0xFFFFFFF8;
      NumberOfBytes = v25;
      LODWORD(v16) = 0;
      if ( v24 < 0 )
      {
        v9 = v24;
        NumberOfBytes_4 = v24;
      }
      else
      {
        v26 = v50;
        *(_WORD *)(v50 + 50) = v25 - 16;
        *(_QWORD *)(v26 + 56) += a1 - a2;
        v25 = NumberOfBytes;
      }
      v10 += v25;
      v45 = v10;
      if ( v10 < v25 )
      {
LABEL_18:
        v9 = -1073741675;
LABEL_19:
        NumberOfBytes_4 = v9;
        goto LABEL_20;
      }
      v19 = v56;
      v27 = a3;
      v21 = v20 + 48;
    }
    else
    {
      v27 = a3;
      if ( v10 < a3 )
        *(_DWORD *)v4 = v10;
    }
    v4 = a2 + v10;
    v59 = v4;
    v10 += 64;
    v45 = v10;
    if ( v10 < 0x40 )
      goto LABEL_18;
    if ( v10 >= v27 )
    {
LABEL_24:
      v9 = -1073741820;
      goto LABEL_19;
    }
    *(_DWORD *)v4 = v16;
    *(_QWORD *)(v4 + 8) = v21;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(v19 + 16);
    *(_WORD *)(v4 + 24) = *(_WORD *)(v19 + 24);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)v20;
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v20 + 8);
    *(_WORD *)(v4 + 26) = *(unsigned __int8 *)(v20 + 27);
    *(_QWORD *)(v4 + 56) = *(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
    v28 = (int *)OBJECT_HEADER_TO_QUOTA_INFO(v20);
    v29 = v54[26];
    v30 = v54[27];
    if ( v28 )
    {
      v29 = *v28;
      v30 = v28[1];
    }
    *(_DWORD *)(v4 + 36) = v29;
    *(_DWORD *)(v4 + 40) = v30;
    v31 = (__int64 *)OBJECT_HEADER_TO_PROCESS_INFO(v20);
    if ( v31 )
    {
      v35 = *v31;
      if ( v35 )
        *(_QWORD *)(v4 + 48) = *(_QWORD *)(v35 + 736);
    }
    NumberOfBytes = v16;
    v36 = v16;
    v46 = v16;
    if ( *(_QWORD *)(v33 + 160) != v16 && (POBJECT_TYPE *)v33 == IoFileObjectType )
    {
      *(_OWORD *)v8 = *(_OWORD *)(v34 + 88);
      if ( *v8 && *((_QWORD *)v8 + 1) != v16 )
      {
        v37 = *v8 + 2;
        NumberOfBytes = v37;
        if ( v37 > 0x208 )
        {
          NumberOfBytes = 520;
          *v8 = 518;
          v37 = NumberOfBytes;
        }
        v38 = v8 + 8;
        memmove(v38, v48[1], v37 - 2LL);
        v48[1] = v38;
        v8 = (unsigned __int16 *)v48;
        *((_WORD *)v48 + 1) = NumberOfBytes;
        LODWORD(v16) = 0;
        *(_WORD *)(*((_QWORD *)v8 + 1) + 2LL * (*v8 >> 1)) = 0;
        NumberOfBytes += 16;
        v32 = a3;
      }
LABEL_53:
      if ( NumberOfBytes )
      {
        NumberOfBytes = (NumberOfBytes + 7) & 0xFFFFFFF8;
        v10 += NumberOfBytes;
        v45 = v10;
        if ( v10 < NumberOfBytes )
          goto LABEL_18;
        if ( v36 < 0 )
        {
          v10 += 16;
          v45 = v10;
          if ( v10 < 0x10 )
            goto LABEL_18;
          if ( v10 < v32 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
            v9 = v36;
            NumberOfBytes_4 = v36;
            goto LABEL_69;
          }
        }
        else
        {
          v40 = *v8;
          if ( *v8 && v10 < v32 )
          {
            v41 = v40 + 2;
            *(_WORD *)(v4 + 64) = v40;
            memmove((void *)(v4 + 80), v48[1], (unsigned __int16)(v40 + 2));
            *(_QWORD *)(v4 + 72) = a1 + v4 + 80 - a2;
            *(_WORD *)(v4 + 66) = v41;
LABEL_69:
            LODWORD(v16) = 0;
            goto LABEL_70;
          }
          if ( *v8 == (_WORD)v16 )
            goto LABEL_66;
        }
LABEL_67:
        v9 = -1073741820;
        NumberOfBytes_4 = -1073741820;
LABEL_70:
        v8 = (unsigned __int16 *)v48;
        i = v49;
        v17 = v44;
        goto LABEL_71;
      }
      v10 += 16;
      v45 = v10;
      if ( v10 < 0x10 )
        goto LABEL_18;
LABEL_66:
      if ( v10 < v32 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
        goto LABEL_69;
      }
      goto LABEL_67;
    }
    v36 = ObQueryNameStringMode((char *)v34, (__int64)v8, v51, &NumberOfBytes, v16);
    v46 = v36;
    if ( v36 == -1073741820 )
    {
      v32 = a3;
      if ( NumberOfBytes <= v51 || NumberOfBytes + v10 >= a3 )
        goto LABEL_52;
      v39 = v6;
      v6 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7241624Fu);
      v53 = v6;
      LODWORD(v16) = 0;
      if ( !v6 )
      {
        v6 = v39;
        v53 = v39;
        v36 = -1073741670;
        v46 = -1073741670;
        v32 = a3;
        goto LABEL_53;
      }
      ExFreePoolWithTag(v39, 0x7241624Fu);
      v51 = NumberOfBytes;
      v56 = NumberOfBytes;
      v8 = v6;
      v48 = (const void **)v6;
      v60 = v6;
      v36 = ObQueryNameStringMode(v57, (__int64)v6, NumberOfBytes, &NumberOfBytes, 0);
      v46 = v36;
    }
    v32 = a3;
LABEL_52:
    LODWORD(v16) = 0;
    goto LABEL_53;
  }
  if ( a4 )
    *a4 = v10;
  ObpDestroyTypeArray(TypeArray);
  ExFreePoolWithTag(v6, 0x7241624Fu);
  if ( !v50 )
    return (unsigned int)-1073741823;
  return v9;
}
