/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x140325DDC
 * Callers:
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     AdtpIsSDValidSelfRelative @ 0x1401B7BA8 (AdtpIsSDValidSelfRelative.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140326D3C (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326DC8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405CB090 (RtlLengthSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x1406D1E00 (AdtpEtwBuildDashString.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        void *a8,
        char *a9)
{
  int v9; // r10d
  void *v10; // r14
  void *v11; // rbx
  int v13; // esi
  PSECURITY_DESCRIPTOR v14; // r8
  unsigned int v15; // r15d
  unsigned int v16; // edi
  char v17; // r13
  _DWORD *v18; // rcx
  int v19; // ecx
  int v20; // eax
  ULONG v21; // eax
  int IsSDValidSelfRelative; // eax
  char v23; // dl
  unsigned int *v24; // r14
  unsigned int v25; // r13d
  unsigned int v26; // ecx
  unsigned __int8 v27; // dl
  unsigned int v28; // eax
  _DWORD *v29; // r8
  unsigned __int16 *v30; // rbx
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  __int64 v34; // r9
  int *v35; // r13
  int v36; // r14d
  __int64 v37; // rbx
  int v38; // eax
  unsigned int v39; // edi
  __int64 v40; // rax
  _WORD *v41; // r14
  char v42; // al
  _WORD *PoolWithTag; // rax
  unsigned int v44; // r13d
  unsigned __int64 v45; // rax
  unsigned __int16 *v46; // r15
  const void *v47; // rdx
  int v48; // ebx
  PVOID *v49; // rbx
  __int64 v50; // rdi
  int v52; // [rsp+28h] [rbp-D8h]
  int v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+48h] [rbp-B8h]
  int v55; // [rsp+50h] [rbp-B0h]
  char v57; // [rsp+61h] [rbp-9Fh]
  bool v58; // [rsp+62h] [rbp-9Eh] BYREF
  char v59; // [rsp+63h] [rbp-9Dh]
  _BYTE v60[4]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v61; // [rsp+68h] [rbp-98h]
  unsigned int v62; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v63; // [rsp+70h] [rbp-90h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h]
  _DWORD *v67; // [rsp+90h] [rbp-70h]
  _DWORD *v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-58h]
  void *v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-40h]
  void *v74; // [rsp+C8h] [rbp-38h]
  char *v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  _DWORD *v77; // [rsp+E0h] [rbp-20h]
  char *v78; // [rsp+E8h] [rbp-18h]
  _OWORD v79[32]; // [rsp+F0h] [rbp-10h] BYREF

  v9 = 0;
  v10 = 0LL;
  v66 = a1;
  v11 = 0LL;
  v78 = a9;
  v13 = 0;
  v14 = a8;
  v15 = 0;
  v76 = a7;
  v16 = 0;
  v17 = 1;
  v67 = a3;
  v65 = a2;
  v77 = a8;
  v62 = 0;
  v60[0] = 0;
  v57 = 0;
  v59 = 0;
  v58 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( !*a3 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6, a2, v14);
    goto LABEL_72;
  }
  v14 = a3 + 36;
  LODWORD(a2) = 0;
  SecurityDescriptor = a3 + 36;
  v68 = a3 + 1;
  v18 = a3 + 1;
  v63 = (unsigned __int64)(a3 + 1);
  v61 = 0;
  do
  {
    v19 = *v18 & 0xFF0000;
    if ( !v19 )
      goto LABEL_20;
    if ( ((v19 - 0x10000) & 0xFFFEFFFF) == 0 )
    {
LABEL_18:
      v17 = 0;
      IsSDValidSelfRelative = AdtpIsSDValidSelfRelative(v14, 0LL);
      v9 = 0;
      if ( IsSDValidSelfRelative < 0 )
      {
LABEL_13:
        v13 = -1073741811;
        goto LABEL_72;
      }
      goto LABEL_19;
    }
    if ( ((v19 - 196608) & 0xFFFEFFFF) != 0 )
    {
      if ( v19 == 327680 )
        goto LABEL_18;
      if ( v19 != 393216 )
      {
        v17 = 0;
        goto LABEL_20;
      }
    }
    v17 = 0;
    v20 = AdtpIsSDValidSelfRelative(v14, &v58);
    v9 = 0;
    v13 = v20;
    if ( v20 >= 0 )
    {
      if ( !v58 )
        goto LABEL_13;
LABEL_15:
      v21 = RtlLengthSecurityDescriptor(SecurityDescriptor);
      v75 = (char *)SecurityDescriptor + v21;
      v13 = AdtpIsSDValidSelfRelative(v75, 0LL);
      v9 = 0;
      goto LABEL_16;
    }
    if ( v20 == -1073741736 )
      goto LABEL_15;
LABEL_16:
    if ( v13 < 0 )
      goto LABEL_13;
    v59 = 1;
LABEL_19:
    LODWORD(a2) = v61;
    v14 = SecurityDescriptor;
    v57 = 1;
LABEL_20:
    a2 = (unsigned int)(a2 + 1);
    v18 = (_DWORD *)(v63 + 4);
    v61 = a2;
    v63 += 4LL;
  }
  while ( (unsigned int)a2 < 0x20 );
  if ( v17 == 1 )
    goto LABEL_2;
  memset(v79, 0, sizeof(v79));
  if ( v57 == 1 )
    AdtpBuildContextFromSecurityDescriptor(SecurityDescriptor, &v69);
  if ( v59 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v75, &v72);
  v23 = a4;
  v24 = (unsigned int *)&AdtpStandardAccessTypes;
  v9 = 0;
  v25 = 0;
  while ( 2 )
  {
    v26 = *v24;
    if ( v23 == 1 )
    {
      v27 = 0;
      v28 = *v24;
      while ( 1 )
      {
        v28 >>= 1;
        if ( !v28 )
          break;
        ++v27;
      }
      v29 = v67;
      if ( (int)v67[v27 + 1] < 0 )
      {
        v30 = (unsigned __int16 *)&v79[v15];
        v31 = AdtpBuildStagingReasonAuditStringInternal(
                v66,
                v65,
                (unsigned int)&v69,
                (unsigned int)&v72,
                v26,
                v52,
                (__int64)v68,
                (__int64)v30);
        goto LABEL_35;
      }
      goto LABEL_37;
    }
    v29 = v67;
    v32 = *v67 & v26;
    if ( v32 )
    {
      v30 = (unsigned __int16 *)&v79[v15];
      v31 = AdtpBuildAccessReasonAuditStringInternal(
              v66,
              v65,
              (unsigned int)&v69,
              (unsigned int)&v72,
              v32,
              v52,
              (__int64)v68,
              (__int64)v30,
              v53,
              v54,
              v55,
              (__int64)v60);
LABEL_35:
      v9 = 0;
      v13 = v31;
      if ( v31 < 0 )
        goto LABEL_66;
      v29 = v67;
      v16 += *v30;
      v62 = ++v15;
LABEL_37:
      v23 = a4;
    }
    ++v25;
    ++v24;
    if ( v25 < 7 )
      continue;
    break;
  }
  if ( *(_WORD *)v29 )
  {
    v33 = 0;
    v34 = (__int64)(v29 + 1);
    v61 = 0;
    v35 = v29 + 1;
    v36 = 1;
    while ( v23 == 1 )
    {
      if ( *v35 < 0 )
      {
        v37 = v15;
        v38 = AdtpBuildStagingReasonAuditStringInternal(
                v66,
                v65,
                (unsigned int)&v69,
                (unsigned int)&v72,
                v36,
                v52,
                v34,
                (__int64)&v79[v15]);
        goto LABEL_46;
      }
LABEL_49:
      ++v33;
      ++v35;
      v36 *= 2;
      v61 = v33;
      if ( v33 >= 0x10 )
        goto LABEL_50;
    }
    if ( (*v29 & v36) != 0 )
    {
      v37 = v15;
      v38 = AdtpBuildAccessReasonAuditStringInternal(
              v66,
              v65,
              (unsigned int)&v69,
              (unsigned int)&v72,
              *v29 & (unsigned int)v36,
              v52,
              v34,
              (__int64)&v79[v15],
              v53,
              v54,
              v55,
              (__int64)v60);
LABEL_46:
      v9 = 0;
      v13 = v38;
      if ( v38 < 0 )
        goto LABEL_66;
      v29 = v67;
      v34 = (__int64)v68;
      v16 += LOWORD(v79[v37]);
      v33 = v61;
      v62 = ++v15;
    }
    v23 = a4;
    goto LABEL_49;
  }
LABEL_50:
  v39 = (v16 >> 1) + 1;
  if ( v76 )
  {
    if ( v77 )
    {
      v40 = (unsigned int)*v77;
      if ( (unsigned int)v40 + v39 < 0x400 )
      {
        v41 = (_WORD *)(v76 + 2 * v40);
        *v77 = v40 + v39;
        v42 = 0;
        goto LABEL_57;
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v39, 0x6B416553u);
  v9 = 0;
  v41 = PoolWithTag;
  if ( PoolWithTag )
  {
    v42 = 1;
LABEL_57:
    v44 = 0;
    *v78 = v42;
    if ( v15 )
    {
      v45 = v62;
      v46 = (unsigned __int16 *)v79;
      v63 = v62;
      do
      {
        v47 = (const void *)*((_QWORD *)v46 + 1);
        if ( v47 )
        {
          v48 = *v46;
          memmove((char *)v41 + v44, v47, *v46);
          v45 = v63;
          v44 += v48;
          v9 = 0;
        }
        v46 += 8;
        v63 = --v45;
      }
      while ( v45 );
      v15 = v62;
    }
    v41[v39 - 1] = 0;
    if ( a6 )
    {
      *a6 = v41;
      a6[1] = 2 * v39;
    }
    else
    {
      MEMORY[8] = v41;
      MEMORY[2] = 2 * v39;
      MEMORY[0] = 2 * v39 - 2;
    }
  }
  else
  {
    v13 = -1073741801;
  }
LABEL_66:
  if ( v15 )
  {
    v49 = (PVOID *)v79 + 1;
    v50 = v15;
    do
    {
      if ( *v49 )
      {
        ExFreePoolWithTag(*v49, 0);
        v9 = 0;
      }
      v49 += 2;
      --v50;
    }
    while ( v50 );
  }
  v11 = v74;
  v10 = v71;
LABEL_72:
  if ( (_DWORD)v70 != v9 && v10 )
  {
    ExFreePoolWithTag(v10, 0);
    v9 = 0;
  }
  if ( (_DWORD)v73 != v9 && v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v13;
}
