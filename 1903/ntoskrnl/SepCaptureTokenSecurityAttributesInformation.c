/*
 * XREFs of SepCaptureTokenSecurityAttributesInformation @ 0x1406D12D4
 * Callers:
 *     NtCreateTokenEx @ 0x14061B850 (NtCreateTokenEx.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1406D115C (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x140653DF0 (RtlCompareUnicodeString.c)
 *     SepCaptureUnicodeStringArray @ 0x1406543B0 (SepCaptureUnicodeStringArray.c)
 *     SepCaptureInt64Array @ 0x1406D18C4 (SepCaptureInt64Array.c)
 *     SepCaptureFqbnArray @ 0x1408DE5C8 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1408DE808 (SepCaptureOctetStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        unsigned __int64 a1,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        unsigned int **a6)
{
  unsigned __int16 *v7; // rsi
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
  __int64 v21; // r15
  unsigned int v22; // edx
  unsigned __int16 v23; // ax
  int v24; // eax
  __int64 v26; // rax
  unsigned int v27; // r14d
  unsigned __int64 v28; // rcx
  unsigned int v29; // r15d
  unsigned int v30; // r13d
  unsigned int v31; // r15d
  unsigned int v32; // r14d
  char v33; // [rsp+20h] [rbp-98h]
  int v34; // [rsp+28h] [rbp-90h]
  PVOID P; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-80h]
  unsigned int v37; // [rsp+3Ch] [rbp-7Ch]
  __int64 v38; // [rsp+40h] [rbp-78h]
  PVOID v39; // [rsp+48h] [rbp-70h]
  int v40; // [rsp+50h] [rbp-68h]
  int v41; // [rsp+54h] [rbp-64h]
  PVOID v42; // [rsp+58h] [rbp-60h]
  unsigned int *v43; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v44; // [rsp+68h] [rbp-50h]
  unsigned __int64 v45; // [rsp+70h] [rbp-48h]
  __int64 v46; // [rsp+78h] [rbp-40h]
  int v50; // [rsp+D8h] [rbp+20h]

  v7 = 0LL;
  v44 = 0LL;
  v36 = 0;
  v40 = 0;
  v33 = 0;
  v8 = 0;
  v9 = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  v37 = 0;
  v41 = 0;
  P = 0LL;
  if ( !a4 )
    return 3221225659LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74416553u);
  v43 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( !a2 || !a3 || *a2 == 1 )
    v33 = 1;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  if ( a4 != 1 )
    goto LABEL_76;
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
  v45 = v12;
  v13 = 0xFFFFFFFFLL;
  if ( v12 <= 0xFFFFFFFF )
    v13 = (unsigned int)v12;
  v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v12 > 0xFFFFFFFF )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v8;
  }
  v7 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x74416553u);
  v44 = v7;
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
    v39 = 0LL;
    v42 = 0LL;
    if ( i >= PoolWithTag[1] )
      break;
    v38 = 5LL * i;
    v16 = v7[20 * i];
    if ( !v16 )
    {
      v8 = -1073741811;
      v9 = 0LL;
      v39 = 0LL;
      v42 = 0LL;
      goto LABEL_69;
    }
    v9 = ExAllocatePoolWithTag(PagedPool, v16, 0x74416553u);
    v39 = v9;
    v42 = v9;
    if ( !v9 )
    {
      v8 = -1073741670;
      goto LABEL_69;
    }
    v17 = v7[4 * v38];
    if ( v17 )
    {
      v18 = *(_QWORD *)&v7[4 * v38 + 4];
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v18 + v17;
      if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v17 = v7[4 * v38];
      }
    }
    memmove(v9, *(const void **)&v7[4 * v38 + 4], v17);
    *(_QWORD *)&v7[4 * v38 + 4] = v9;
    v40 = ++v36;
    v42 = 0LL;
  }
  if ( v8 < 0 )
    goto LABEL_69;
  v20 = 0;
  v34 = 0;
  while ( v20 < PoolWithTag[1] )
  {
    v21 = 5LL * v20;
    v22 = *(_DWORD *)&v7[20 * v20 + 12];
    if ( v22 )
    {
      v23 = v7[20 * v20 + 8];
      if ( !v23 )
        goto LABEL_68;
      if ( v23 <= 2u )
        goto LABEL_41;
      switch ( v23 )
      {
        case 3u:
          v24 = SepCaptureUnicodeStringArray(*(_QWORD *)&v7[20 * v20 + 16], v22, 1u, &P);
          goto LABEL_42;
        case 4u:
          v24 = SepCaptureFqbnArray(*(void **)&v7[20 * v20 + 16]);
LABEL_42:
          v8 = v24;
          if ( v24 >= 0 )
            *(_QWORD *)&v7[4 * v21 + 16] = P;
          v20 = v34;
          break;
        case 5u:
          goto LABEL_66;
        case 6u:
LABEL_41:
          v24 = SepCaptureInt64Array(*(void **)&v7[20 * v20 + 16]);
          goto LABEL_42;
        case 0x10u:
LABEL_66:
          v24 = SepCaptureOctetStringArray(*(void **)&v7[20 * v20 + 16]);
          goto LABEL_42;
        default:
LABEL_68:
          v8 = -1073741637;
          break;
      }
      if ( v8 < 0 )
        goto LABEL_69;
      v41 = ++v37;
      P = 0LL;
      goto LABEL_34;
    }
    if ( !a5 )
    {
      v8 = -1073741811;
      goto LABEL_69;
    }
    *(_QWORD *)&v7[20 * v20 + 16] = 0LL;
LABEL_34:
    v34 = ++v20;
  }
  *((_QWORD *)PoolWithTag + 1) = v7;
  if ( !v33 && a3 != PoolWithTag[1] )
    v8 = -1073741811;
LABEL_69:
  if ( v8 < 0 )
    goto LABEL_91;
  v26 = 0LL;
  v27 = PoolWithTag[1];
  while ( 1 )
  {
    v50 = v26;
    if ( (unsigned int)v26 >= v27 )
      break;
    if ( v33 || ((a2[v26] - 2) & 0xFFFFFFFD) == 0 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        LODWORD(v38) = v28;
        if ( (unsigned int)v28 >= 4 )
          break;
        v45 = v28;
        v46 = (unsigned int)v26;
        if ( !RtlCompareUnicodeString(
                (PCUNICODE_STRING)&v7[20 * (unsigned int)v26],
                (PCUNICODE_STRING)&SepValidAttributesTypes[3 * v28],
                1u) )
        {
          if ( v7[20 * v46 + 8] != LODWORD(SepValidAttributesTypes[3 * v45 + 2]) )
            v8 = -1073741811;
          if ( *(_DWORD *)&v7[20 * v46 + 12] < HIDWORD(SepValidAttributesTypes[3 * v45 + 2]) )
            v8 = -1073741811;
          LODWORD(v26) = v50;
          break;
        }
        v28 = (unsigned int)(v38 + 1);
        LODWORD(v26) = v50;
      }
    }
    v26 = (unsigned int)(v26 + 1);
  }
  PoolWithTag = v43;
  v9 = v39;
LABEL_76:
  if ( v8 < 0 )
  {
LABEL_91:
    if ( v7 )
    {
      v29 = 0;
      v30 = v36;
      while ( v29 < v30 )
        ExFreePoolWithTag(*(PVOID *)&v7[20 * v29++ + 4], 0);
      v31 = 0;
      v9 = v39;
      v32 = v37;
      while ( v31 < v32 )
        ExFreePoolWithTag(*(PVOID *)&v7[20 * v31++ + 16], 0);
      ExFreePoolWithTag(v7, 0);
      PoolWithTag = v43;
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
