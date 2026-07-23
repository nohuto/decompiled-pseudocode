/*
 * XREFs of SepCaptureTokenSecurityAttributesInformation @ 0x1405C07FC
 * Callers:
 *     NtCreateTokenEx @ 0x1405BD550 (NtCreateTokenEx.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405BFF50 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     SepCaptureUnicodeStringArray @ 0x140626B30 (SepCaptureUnicodeStringArray.c)
 *     SepCaptureInt64Array @ 0x1406C5174 (SepCaptureInt64Array.c)
 *     SepCaptureFqbnArray @ 0x1408A1060 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1408A12B8 (SepCaptureOctetStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        unsigned __int64 a1,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        unsigned int **a6)
{
  unsigned int *v7; // rsi
  signed int v8; // edi
  PVOID v9; // r13
  unsigned int *PoolWithTag; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned int i; // r15d
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // cx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rdx
  unsigned __int16 v24; // ax
  int v25; // eax
  __int64 v27; // rax
  unsigned int v28; // r14d
  unsigned __int64 v29; // rcx
  unsigned int v30; // r15d
  unsigned int v31; // r13d
  unsigned int v32; // r15d
  unsigned int v33; // r14d
  char v34; // [rsp+20h] [rbp-98h]
  int v35; // [rsp+28h] [rbp-90h]
  PVOID P; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-80h]
  unsigned int v38; // [rsp+3Ch] [rbp-7Ch]
  __int64 v39; // [rsp+40h] [rbp-78h]
  PVOID v40; // [rsp+48h] [rbp-70h]
  int v41; // [rsp+50h] [rbp-68h]
  int v42; // [rsp+54h] [rbp-64h]
  PVOID v43; // [rsp+58h] [rbp-60h]
  unsigned int *v44; // [rsp+60h] [rbp-58h]
  unsigned int *v45; // [rsp+68h] [rbp-50h]
  unsigned __int64 v46; // [rsp+70h] [rbp-48h]
  __int64 v47; // [rsp+78h] [rbp-40h]
  int v51; // [rsp+D8h] [rbp+20h]

  v7 = 0LL;
  v45 = 0LL;
  v37 = 0;
  v41 = 0;
  v34 = 0;
  v8 = 0;
  v9 = 0LL;
  v40 = 0LL;
  v43 = 0LL;
  v38 = 0;
  v42 = 0;
  P = 0LL;
  if ( !a4 )
    return 3221225659LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74416553u);
  v44 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( !a2 || !a3 || *a2 == 1 )
    v34 = 1;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  if ( a4 != 1 )
    goto LABEL_84;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  *(_WORD *)PoolWithTag = *(_WORD *)a1;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)(a1 + 2);
  v11 = *(unsigned int *)(a1 + 4);
  PoolWithTag[1] = v11;
  if ( !(_DWORD)v11 )
  {
    *a6 = PoolWithTag;
    return 0LL;
  }
  *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)(a1 + 8);
  v12 = 40 * v11;
  v46 = v12;
  v13 = 0xFFFFFFFFLL;
  if ( v12 <= 0xFFFFFFFF )
    v13 = (unsigned int)v12;
  v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v12 > 0xFFFFFFFF )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v8;
  }
  v7 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x74416553u);
  v45 = v7;
  if ( !v7 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  if ( (_DWORD)v13 )
  {
    v14 = *((_QWORD *)PoolWithTag + 1);
    if ( (v14 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v14 + v13 > 0x7FFFFFFF0000LL || v14 + v13 < v14 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(v7, *((const void **)PoolWithTag + 1), (unsigned int)v13);
  for ( i = 0; ; ++i )
  {
    v9 = 0LL;
    v40 = 0LL;
    v43 = 0LL;
    if ( i >= PoolWithTag[1] )
      break;
    v39 = 5LL * i;
    v16 = v7[10 * i];
    if ( !v16 )
    {
      v8 = -1073741811;
      v9 = 0LL;
      v40 = 0LL;
      v43 = 0LL;
      goto LABEL_69;
    }
    v9 = ExAllocatePoolWithTag(PagedPool, v16, 0x74416553u);
    v40 = v9;
    v43 = v9;
    if ( !v9 )
    {
      v8 = -1073741670;
      goto LABEL_69;
    }
    v17 = v7[2 * v39];
    if ( v17 )
    {
      v18 = *(_QWORD *)&v7[2 * v39 + 2];
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v18 + v17;
      if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v17 = v7[2 * v39];
      }
    }
    memmove(v9, *(const void **)&v7[2 * v39 + 2], v17);
    *(_QWORD *)&v7[2 * v39 + 2] = v9;
    v41 = ++v37;
    v43 = 0LL;
  }
  if ( v8 < 0 )
    goto LABEL_69;
  v20 = 0;
  v35 = 0;
  v21 = 4LL;
  while ( v20 < PoolWithTag[1] )
  {
    v22 = 5LL * v20;
    v23 = v7[10 * v20 + 6];
    if ( (_DWORD)v23 )
    {
      v24 = v7[10 * v20 + 4];
      if ( !v24 )
        goto LABEL_68;
      if ( v24 <= 2u )
        goto LABEL_34;
      switch ( v24 )
      {
        case 3u:
          LOBYTE(v21) = 1;
          v25 = SepCaptureUnicodeStringArray(*(_QWORD *)&v7[10 * v20 + 8], v23, v21, &P);
          goto LABEL_35;
        case 4u:
          v25 = SepCaptureFqbnArray(*(void **)&v7[10 * v20 + 8]);
LABEL_35:
          v8 = v25;
          if ( v25 >= 0 )
            *(_QWORD *)&v7[2 * v22 + 8] = P;
          v20 = v35;
          v21 = 4LL;
          break;
        case 5u:
          goto LABEL_66;
        case 6u:
LABEL_34:
          v25 = SepCaptureInt64Array(*(void **)&v7[10 * v20 + 8]);
          goto LABEL_35;
        case 0x10u:
LABEL_66:
          v25 = SepCaptureOctetStringArray(*(void **)&v7[10 * v20 + 8]);
          goto LABEL_35;
        default:
LABEL_68:
          v8 = -1073741637;
          break;
      }
      if ( v8 < 0 )
        goto LABEL_69;
      v42 = ++v38;
      P = 0LL;
      goto LABEL_40;
    }
    if ( !a5 )
    {
      v8 = -1073741811;
      goto LABEL_69;
    }
    *(_QWORD *)&v7[10 * v20 + 8] = 0LL;
LABEL_40:
    v35 = ++v20;
  }
  *((_QWORD *)PoolWithTag + 1) = v7;
  if ( !v34 && a3 != PoolWithTag[1] )
    v8 = -1073741811;
LABEL_69:
  if ( v8 < 0 )
    goto LABEL_91;
  v27 = 0LL;
  v28 = PoolWithTag[1];
  while ( 1 )
  {
    v51 = v27;
    if ( (unsigned int)v27 >= v28 )
      break;
    if ( v34 || ((a2[v27] - 2) & 0xFFFFFFFD) == 0 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        LODWORD(v39) = v29;
        if ( (unsigned int)v29 >= 4 )
          break;
        v46 = v29;
        v47 = (unsigned int)v27;
        if ( !RtlCompareUnicodeString(
                (PCUNICODE_STRING)&v7[10 * (unsigned int)v27],
                (PCUNICODE_STRING)&SepValidAttributesTypes[3 * v29],
                1u) )
        {
          if ( LOWORD(v7[10 * v47 + 4]) != LODWORD(SepValidAttributesTypes[3 * v46 + 2]) )
            v8 = -1073741811;
          if ( v7[10 * v47 + 6] < HIDWORD(SepValidAttributesTypes[3 * v46 + 2]) )
            v8 = -1073741811;
          LODWORD(v27) = v51;
          break;
        }
        v29 = (unsigned int)(v39 + 1);
        LODWORD(v27) = v51;
      }
    }
    v27 = (unsigned int)(v27 + 1);
  }
  PoolWithTag = v44;
  v9 = v40;
LABEL_84:
  if ( v8 < 0 )
  {
LABEL_91:
    if ( v7 )
    {
      v30 = 0;
      v31 = v37;
      while ( v30 < v31 )
        ExFreePoolWithTag(*(PVOID *)&v7[10 * v30++ + 2], 0);
      v32 = 0;
      v9 = v40;
      v33 = v38;
      while ( v32 < v33 )
        ExFreePoolWithTag(*(PVOID *)&v7[10 * v32++ + 8], 0);
      ExFreePoolWithTag(v7, 0);
      PoolWithTag = v44;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    *a6 = PoolWithTag;
  }
  return (unsigned int)v8;
}
