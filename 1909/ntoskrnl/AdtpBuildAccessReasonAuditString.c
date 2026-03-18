/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x140346EF0
 * Callers:
 *     AdtpPackageParameters @ 0x1401335A8 (AdtpPackageParameters.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140347DC8 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140347E54 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7F30 (RtlLengthSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x1406E2064 (AdtpEtwBuildDashString.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        char a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        _DWORD *a8,
        char *a9)
{
  char *v9; // rbx
  ULONG_PTR v10; // rsi
  _WORD *v11; // r12
  int v12; // r9d
  unsigned int v13; // r13d
  unsigned int v14; // edi
  char v15; // r14
  char v16; // cl
  unsigned int v17; // r14d
  _DWORD *v19; // rax
  int v20; // eax
  ULONG v21; // eax
  char v22; // dl
  unsigned int *v23; // rsi
  unsigned int v24; // r14d
  unsigned int v25; // ecx
  unsigned __int8 v26; // dl
  unsigned int v27; // eax
  unsigned __int16 *v28; // rbx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // r8
  unsigned int v32; // r12d
  int *v33; // r14
  int v34; // esi
  __int64 v35; // rbx
  int v36; // eax
  unsigned int v37; // edi
  __int64 v38; // rax
  _WORD *v39; // rsi
  char v40; // al
  _WORD *PoolWithTag; // rax
  unsigned int v42; // r12d
  __int64 v43; // rax
  unsigned __int16 *v44; // r14
  const void *v45; // rdx
  int v46; // ebx
  ULONG_PTR *v47; // rbx
  __int64 v48; // rdi
  int v49; // [rsp+28h] [rbp-D8h]
  int v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+50h] [rbp-B0h]
  unsigned int v54; // [rsp+64h] [rbp-9Ch]
  char v55; // [rsp+68h] [rbp-98h]
  _BYTE v56[7]; // [rsp+69h] [rbp-97h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h]
  _DWORD *v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  char *v60; // [rsp+88h] [rbp-78h] BYREF
  __int64 v61; // [rsp+90h] [rbp-70h]
  char *v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v65; // [rsp+B0h] [rbp-50h]
  _DWORD *v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  _DWORD *v68; // [rsp+C8h] [rbp-38h]
  char *v69; // [rsp+D0h] [rbp-30h]
  _OWORD v70[32]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v69 = a9;
  v11 = (_WORD *)a3;
  v12 = 0;
  v13 = 0;
  v67 = a7;
  v14 = 0;
  v15 = 0;
  v59 = a1;
  v16 = 1;
  v68 = a8;
  v66 = (_DWORD *)a3;
  v58 = a2;
  v54 = 0;
  v56[0] = 0;
  v55 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  if ( !*(_DWORD *)a3 )
    goto LABEL_2;
  v19 = (_DWORD *)(a3 + 4);
  a3 = 32LL;
  v57 = (__int64)v19;
  a2 = v19;
  do
  {
    v20 = *a2 & 0xFF0000;
    switch ( v20 )
    {
      case 0:
        goto LABEL_23;
      case 65536:
      case 131072:
LABEL_21:
        v15 = 1;
        break;
      case 196608:
      case 262144:
        goto LABEL_20;
      case 327680:
        goto LABEL_21;
      case 393216:
LABEL_20:
        v15 = 1;
        v55 = 1;
        break;
    }
    v16 = 0;
LABEL_23:
    ++a2;
    --a3;
  }
  while ( a3 );
  if ( v16 == 1 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6, a2, a3);
    v17 = 0;
    goto LABEL_5;
  }
  memset(v70, 0, sizeof(v70));
  if ( v15 == 1 )
  {
    AdtpBuildContextFromSecurityDescriptor(v11 + 72, &v60);
    v9 = v60;
  }
  if ( v55 == 1 )
  {
    v21 = RtlLengthSecurityDescriptor(v9);
    AdtpBuildContextFromSecurityDescriptor(&v9[v21], &v63);
  }
  v22 = a4;
  v23 = (unsigned int *)&AdtpStandardAccessTypes;
  v12 = 0;
  v24 = 0;
  while ( 2 )
  {
    v25 = *v23;
    if ( v22 == 1 )
    {
      v26 = 0;
      v27 = *v23;
      while ( 1 )
      {
        v27 >>= 1;
        if ( !v27 )
          break;
        ++v26;
      }
      if ( *(int *)&v11[2 * v26 + 2] < 0 )
      {
        v28 = (unsigned __int16 *)&v70[v13];
        v29 = AdtpBuildStagingReasonAuditStringInternal(
                v59,
                (_DWORD)v58,
                (unsigned int)&v60,
                (unsigned int)&v63,
                v25,
                v49,
                (__int64)(v11 + 2),
                (__int64)v28);
        goto LABEL_38;
      }
LABEL_40:
      v22 = a4;
LABEL_41:
      ++v24;
      ++v23;
      if ( v24 < 7 )
        continue;
      if ( *v11 )
      {
        v31 = v57;
        v32 = 0;
        v33 = (int *)v57;
        v34 = 1;
        while ( v22 == 1 )
        {
          if ( *v33 < 0 )
          {
            v35 = v13;
            v36 = AdtpBuildStagingReasonAuditStringInternal(
                    v59,
                    (_DWORD)v58,
                    (unsigned int)&v60,
                    (unsigned int)&v63,
                    v34,
                    v49,
                    v31,
                    (__int64)&v70[v13]);
            goto LABEL_49;
          }
LABEL_52:
          ++v32;
          ++v33;
          v34 *= 2;
          if ( v32 >= 0x10 )
            goto LABEL_53;
        }
        if ( (v34 & *v66) != 0 )
        {
          v35 = v13;
          v36 = AdtpBuildAccessReasonAuditStringInternal(
                  v59,
                  (_DWORD)v58,
                  (unsigned int)&v60,
                  (unsigned int)&v63,
                  (unsigned int)v34 & *v66,
                  v49,
                  v31,
                  (__int64)&v70[v13],
                  v50,
                  v51,
                  v52,
                  (__int64)v56);
LABEL_49:
          v12 = 0;
          v54 = v36;
          if ( v36 < 0 )
            goto LABEL_68;
          v31 = v57;
          v14 += LOWORD(v70[v35]);
          ++v13;
        }
        v22 = a4;
        goto LABEL_52;
      }
LABEL_53:
      v37 = (v14 >> 1) + 1;
      if ( v67 )
      {
        if ( v68 )
        {
          v38 = (unsigned int)*v68;
          if ( (unsigned int)v38 + v37 < 0x400 )
          {
            v39 = (_WORD *)(v67 + 2 * v38);
            *v68 = v38 + v37;
            v40 = 0;
            goto LABEL_60;
          }
        }
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v37, 0x6B416553u);
      v12 = 0;
      v39 = PoolWithTag;
      if ( PoolWithTag )
      {
        v40 = 1;
LABEL_60:
        v42 = 0;
        *v69 = v40;
        if ( v13 )
        {
          v43 = v13;
          v44 = (unsigned __int16 *)v70;
          v57 = v13;
          do
          {
            v45 = (const void *)*((_QWORD *)v44 + 1);
            if ( v45 )
            {
              v46 = *v44;
              memmove((char *)v39 + v42, v45, *v44);
              v43 = v57;
              v42 += v46;
              v12 = 0;
            }
            v44 += 8;
            v57 = --v43;
          }
          while ( v43 );
        }
        v17 = v54;
        v39[v37 - 1] = 0;
        if ( a6 )
        {
          *a6 = v39;
          a6[1] = 2 * v37;
        }
        else
        {
          MEMORY[8] = v39;
          MEMORY[2] = 2 * v37;
          MEMORY[0] = 2 * v37 - 2;
        }
      }
      else
      {
        v17 = -1073741801;
      }
    }
    else
    {
      v30 = *(_DWORD *)v11 & v25;
      if ( !v30 )
        goto LABEL_41;
      v28 = (unsigned __int16 *)&v70[v13];
      v29 = AdtpBuildAccessReasonAuditStringInternal(
              v59,
              (_DWORD)v58,
              (unsigned int)&v60,
              (unsigned int)&v63,
              v30,
              v49,
              (__int64)(v11 + 2),
              (__int64)v28,
              v50,
              v51,
              v52,
              (__int64)v56);
LABEL_38:
      v12 = 0;
      v54 = v29;
      if ( v29 >= 0 )
      {
        v14 += *v28;
        ++v13;
        goto LABEL_40;
      }
LABEL_68:
      v17 = v54;
    }
    break;
  }
  if ( v13 )
  {
    v47 = (ULONG_PTR *)v70 + 1;
    v48 = v13;
    do
    {
      if ( *v47 )
      {
        ExFreeHeapPool(*v47);
        v12 = 0;
      }
      v47 += 2;
      --v48;
    }
    while ( v48 );
  }
  v9 = v62;
  v10 = v65;
LABEL_5:
  if ( (_DWORD)v61 != v12 && v9 )
  {
    ExFreeHeapPool((ULONG_PTR)v9);
    v12 = 0;
  }
  if ( (_DWORD)v64 != v12 && v10 )
    ExFreeHeapPool(v10);
  return v17;
}
