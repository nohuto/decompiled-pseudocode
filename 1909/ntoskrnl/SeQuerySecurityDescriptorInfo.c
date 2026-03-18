/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x140661F50
 * Callers:
 *     ObQuerySecurityDescriptorInfo @ 0x1405C5F80 (ObQuerySecurityDescriptorInfo.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140623750 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     CmpQueryKeySecurity @ 0x140662610 (CmpQueryKeySecurity.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     RtlpFilterSacl @ 0x140661D4C (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  PULONG v4; // r10
  _QWORD *v5; // r8
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  unsigned int *v10; // rax
  __int16 v11; // cx
  __int64 v12; // rdx
  unsigned __int8 *v13; // rsi
  __int64 v14; // rdx
  unsigned __int8 *v15; // r14
  __int64 v16; // rdx
  unsigned __int16 *v17; // rdi
  __int64 *v18; // r11
  unsigned __int64 v19; // rcx
  unsigned int v20; // ebx
  DWORD v21; // r9d
  DWORD v22; // eax
  DWORD v23; // edx
  int v24; // eax
  unsigned int v25; // r9d
  __int16 v26; // dx
  char *v27; // rbx
  DWORD v28; // eax
  PSECURITY_INFORMATION v29; // r15
  int v30; // esi
  char v31; // si
  __int64 v32; // rcx
  unsigned int v34; // [rsp+24h] [rbp-94h] BYREF
  size_t Size; // [rsp+28h] [rbp-90h]
  unsigned __int64 v36; // [rsp+30h] [rbp-88h]
  __int64 *v37; // [rsp+38h] [rbp-80h]
  char *v38; // [rsp+40h] [rbp-78h]
  ULONG v39; // [rsp+48h] [rbp-70h]
  __int128 v40; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v41; // [rsp+60h] [rbp-58h]
  __int64 *v42; // [rsp+68h] [rbp-50h]
  unsigned __int16 *v43; // [rsp+70h] [rbp-48h]

  v4 = Length;
  v5 = SecurityDescriptor;
  v7 = 0;
  LODWORD(Size) = 0;
  v8 = 0;
  v34 = 0;
  v9 = *v4;
  v39 = *v4;
  v10 = (unsigned int *)*ObjectsSecurityDescriptor;
  if ( !*ObjectsSecurityDescriptor )
  {
    *v4 = 20;
    if ( v9 < 0x14 )
      return -1073741789;
    *(_QWORD *)SecurityDescriptor = 0LL;
    *((_QWORD *)SecurityDescriptor + 1) = 0LL;
    *((_DWORD *)SecurityDescriptor + 4) = 0;
    *(_BYTE *)SecurityDescriptor = 1;
    *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
    return 0;
  }
  v40 = *(_OWORD *)v10;
  LODWORD(v41) = v10[4];
  v11 = *((_WORD *)v10 + 1);
  if ( v11 >= 0 )
  {
    v13 = (unsigned __int8 *)*((_QWORD *)v10 + 1);
  }
  else
  {
    v12 = v10[1];
    if ( (_DWORD)v12 )
      v13 = (unsigned __int8 *)v10 + v12;
    else
      v13 = 0LL;
  }
  *((_QWORD *)&v40 + 1) = v13;
  if ( v11 >= 0 )
  {
    v15 = (unsigned __int8 *)*((_QWORD *)v10 + 2);
  }
  else
  {
    v14 = v10[2];
    if ( (_DWORD)v14 )
      v15 = (unsigned __int8 *)v10 + v14;
    else
      v15 = 0LL;
  }
  v41 = v15;
  if ( (v11 & 4) != 0 )
  {
    if ( v11 >= 0 )
    {
      v17 = (unsigned __int16 *)*((_QWORD *)v10 + 4);
    }
    else
    {
      v16 = v10[4];
      if ( (_DWORD)v16 )
        v17 = (unsigned __int16 *)((char *)v10 + v16);
      else
        v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v43 = v17;
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 >= 0 )
    {
      v18 = (__int64 *)*((_QWORD *)v10 + 3);
    }
    else
    {
      v32 = v10[3];
      if ( !(_DWORD)v32 )
      {
        v18 = 0LL;
        v37 = 0LL;
        goto LABEL_14;
      }
      v18 = (__int64 *)((char *)v10 + v32);
    }
    v37 = v18;
  }
  else
  {
    v18 = 0LL;
    v37 = 0LL;
  }
LABEL_14:
  v42 = v18;
  v19 = (unsigned __int64)v40 >> 16;
  LOWORD(v19) = WORD1(v40) & 0x7FFF;
  v36 = v19;
  WORD1(v40) &= ~0x8000u;
  v20 = 20;
  v21 = *SecurityInformation;
  v22 = *SecurityInformation & 0x80;
  v23 = *SecurityInformation & 0x100;
  if ( (*SecurityInformation & 0x10000) != 0 )
  {
    v21 |= 0x1FFu;
    *SecurityInformation = v21;
    if ( !v22 )
    {
      v21 &= ~0x80u;
      *SecurityInformation = v21;
    }
    if ( !v23 )
    {
      v21 &= ~0x100u;
      *SecurityInformation = v21;
    }
  }
  if ( (v21 & 1) != 0 && v13 )
  {
    v24 = v13[1];
    v7 = 4 * v24 + 8;
    v20 = ((4 * v24 + 11) & 0xFFFFFFFC) + 20;
  }
  if ( (v21 & 2) != 0 && v15 )
  {
    LODWORD(Size) = 4 * v15[1] + 8;
    v20 += (Size + 3) & 0xFFFFFFFC;
  }
  if ( (v21 & 4) != 0 && (BYTE2(v40) & 4) != 0 && v17 )
  {
    v8 = (v17[1] + 3) & 0xFFFFFFFC;
    v20 += v8;
  }
  v25 = v21 & 0x1F8;
  if ( v25 && (BYTE2(v40) & 0x10) != 0 && v18 )
  {
    RtlpFilterSacl(v18, 0LL, &v34, v25);
    v20 += v34;
    LOWORD(v19) = v36;
    v5 = SecurityDescriptor;
    v4 = Length;
  }
  *v4 = v20;
  if ( v20 > v39 )
    return -1073741789;
  *v5 = 0LL;
  v5[1] = 0LL;
  *((_DWORD *)v5 + 4) = 0;
  *(_BYTE *)v5 = 1;
  v26 = *((_WORD *)v5 + 1) | 0x8000;
  *((_WORD *)v5 + 1) = v26;
  v27 = (char *)(((unsigned __int64)v5 + 23) & 0xFFFFFFFFFFFFFFFCuLL);
  v38 = v27;
  v28 = *SecurityInformation;
  if ( (*SecurityInformation & 1) != 0 && v13 )
  {
    memmove(v27, v13, v7);
    v5 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v27 - (_DWORD)SecurityDescriptor;
    LOWORD(v19) = v36;
    *((_WORD *)SecurityDescriptor + 1) |= v36 & 1;
    v26 = *((_WORD *)SecurityDescriptor + 1);
    v27 += (v7 + 3) & 0xFFFFFFFC;
    v38 = v27;
    v29 = SecurityInformation;
    v28 = *SecurityInformation;
  }
  else
  {
    v29 = SecurityInformation;
  }
  if ( (v28 & 2) != 0 && v15 )
  {
    v30 = Size;
    memmove(v27, v15, (unsigned int)Size);
    v5 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 2) = (_DWORD)v27 - (_DWORD)SecurityDescriptor;
    LOWORD(v19) = v36;
    *((_WORD *)SecurityDescriptor + 1) |= v36 & 2;
    v26 = *((_WORD *)SecurityDescriptor + 1);
    v27 += (v30 + 3) & 0xFFFFFFFC;
    v38 = v27;
    v28 = *v29;
  }
  if ( (v28 & 4) != 0 )
  {
    *((_WORD *)v5 + 1) = v26 | v19 & 0x140C;
    v31 = BYTE2(v40);
    if ( (BYTE2(v40) & 4) != 0 && v17 )
    {
      memmove(v27, v17, v17[1]);
      v5 = SecurityDescriptor;
      *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v27 - (_DWORD)SecurityDescriptor;
      v27 += v8;
      v38 = v27;
    }
  }
  else
  {
    v31 = BYTE2(v40);
  }
  if ( (*v29 & 0x1F8) != 0 )
  {
    *((_WORD *)v5 + 1) |= v36 & 0x2830;
    if ( (v31 & 0x10) != 0 )
    {
      if ( v37 )
      {
        RtlpFilterSacl(v37, (__int64)v27, &v34, *v29 & 0x1F8);
        *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v27 - (_DWORD)SecurityDescriptor;
        v38 = &v27[v34];
      }
    }
  }
  return 0;
}
