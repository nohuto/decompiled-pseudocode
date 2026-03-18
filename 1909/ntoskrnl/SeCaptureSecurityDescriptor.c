/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x1405DD2F0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F5310 (ObpCaptureObjectCreateInformation.c)
 *     NtSetSecurityObject @ 0x140621290 (NtSetSecurityObject.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140621AFC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtCreateWnfStateName @ 0x140658540 (NtCreateWnfStateName.c)
 *     AlpcpConnectPort @ 0x14065A080 (AlpcpConnectPort.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140701F68 (PipGetRegistrySecurityWithFallback.c)
 *     NtOpenObjectAuditAlarm @ 0x140714AA0 (NtOpenObjectAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D7AC (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlValidAcl @ 0x1405DDC30 (RtlValidAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, POOL_TYPE a3, char a4, _QWORD *a5)
{
  unsigned int v8; // r10d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  char v11; // r8
  __int16 v12; // cx
  unsigned __int64 v13; // rdx
  _BYTE *v14; // r9
  _BYTE *v15; // rdx
  unsigned __int16 *v16; // r13
  unsigned __int16 *v17; // rsi
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  unsigned int v21; // r12d
  unsigned int v22; // r11d
  unsigned int v23; // edi
  char v24; // r10
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edi
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // r11d
  SIZE_T v33; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v35; // rdi
  ACL *v36; // rbx
  char v37; // r13
  unsigned __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rax
  size_t Size; // [rsp+20h] [rbp-D8h]
  unsigned int v43; // [rsp+28h] [rbp-D0h]
  int v44; // [rsp+30h] [rbp-C8h]
  int v45; // [rsp+34h] [rbp-C4h]
  char v46; // [rsp+38h] [rbp-C0h]
  size_t v47; // [rsp+3Ch] [rbp-BCh]
  void *v48; // [rsp+50h] [rbp-A8h]
  void *v49; // [rsp+58h] [rbp-A0h]
  __int16 v50; // [rsp+60h] [rbp-98h]
  _BYTE v51[40]; // [rsp+68h] [rbp-90h] BYREF
  unsigned int v52; // [rsp+90h] [rbp-68h]
  unsigned int v53; // [rsp+94h] [rbp-64h]
  _OWORD v54[6]; // [rsp+98h] [rbp-60h] BYREF
  __int16 v55; // [rsp+100h] [rbp+8h]

  memset(v51, 0, sizeof(v51));
  memset(v54, 0, 0x28uLL);
  LOBYTE(v44) = 0;
  v46 = 0;
  v43 = 0;
  LOBYTE(v45) = 0;
  Size = 0LL;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v54[0] = *(_OWORD *)a1;
    v8 = *(_DWORD *)(a1 + 16);
    LODWORD(v54[1]) = v8;
    v9 = *(_QWORD *)&v54[0];
    if ( (SWORD1(v54[0]) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    LOBYTE(v44) = 0;
    LOBYTE(v45) = 0;
    Size = 0LL;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    v54[0] = *(_OWORD *)a1;
    v8 = *(_DWORD *)(a1 + 16);
    LODWORD(v54[1]) = v8;
    v9 = *(_QWORD *)&v54[0];
  }
  if ( LOBYTE(v54[0]) != 1 )
    return 3221225560LL;
  v51[0] = 1;
  v51[1] = BYTE1(v9);
  v10 = v9 >> 16;
  v11 = BYTE2(v9);
  *(_WORD *)&v51[2] = WORD1(v9) & 0x7FFF;
  v12 = WORD1(v9) & 0x8000;
  if ( (v9 & 0x80000000) != 0 )
  {
    v13 = HIDWORD(v9);
    if ( (_DWORD)v13 )
      v14 = (_BYTE *)(a1 + v13);
    else
      v14 = 0LL;
  }
  else
  {
    v14 = *(_BYTE **)(a1 + 8);
  }
  v49 = v14;
  *(_QWORD *)&v51[8] = v14;
  if ( v12 )
  {
    if ( DWORD2(v54[0]) )
      v15 = (_BYTE *)(a1 + DWORD2(v54[0]));
    else
      v15 = 0LL;
  }
  else
  {
    v15 = *(_BYTE **)(a1 + 16);
  }
  v48 = v15;
  *(_QWORD *)&v51[16] = v15;
  if ( (v10 & 0x10) != 0 )
  {
    if ( v12 )
    {
      if ( HIDWORD(v54[0]) )
        v16 = (unsigned __int16 *)(a1 + HIDWORD(*((_QWORD *)&v54[0] + 1)));
      else
        v16 = 0LL;
    }
    else
    {
      v16 = *(unsigned __int16 **)(a1 + 24);
    }
  }
  else
  {
    v16 = 0LL;
  }
  *(_QWORD *)&v51[24] = v16;
  if ( (v10 & 4) != 0 )
  {
    if ( v12 )
    {
      if ( v8 )
        v17 = (unsigned __int16 *)(a1 + v8);
      else
        v17 = 0LL;
    }
    else
    {
      v17 = *(unsigned __int16 **)(a1 + 32);
    }
  }
  else
  {
    v17 = 0LL;
  }
  *(_QWORD *)&v51[32] = v17;
  v18 = 0;
  v47 = 0LL;
  v19 = 0;
  v20 = 0;
  v52 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v53 = 0;
  v55 = v11 & 0x10;
  if ( (v11 & 0x10) != 0 && v16 )
  {
    v24 = a2;
    if ( a2 )
    {
      v39 = (unsigned __int64)(v16 + 1);
      if ( v39 >= 0x7FFFFFFF0000LL )
        v39 = 0x7FFFFFFF0000LL;
      v40 = *(unsigned __int16 *)v39;
      v18 = *(unsigned __int16 *)v39;
      LODWORD(v47) = v18;
      if ( *(_WORD *)v39 )
      {
        if ( (v51[24] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = *(unsigned __int16 **)&v51[24];
        if ( (unsigned __int64)(v40 + *(_QWORD *)&v51[24]) > 0x7FFFFFFF0000LL
          || (unsigned __int64)(v40 + *(_QWORD *)&v51[24]) < *(_QWORD *)&v51[24] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v16 = *(unsigned __int16 **)&v51[24];
      }
      v17 = *(unsigned __int16 **)&v51[32];
      v15 = *(_BYTE **)&v51[16];
      v48 = *(void **)&v51[16];
      v14 = *(_BYTE **)&v51[8];
      v49 = *(void **)&v51[8];
      v11 = v51[2];
      LOBYTE(v44) = 0;
      LOBYTE(v45) = 0;
      Size = 0LL;
      v19 = 0;
    }
    else
    {
      v18 = v16[1];
      LODWORD(v47) = v18;
    }
    v20 = (v18 + 3) & 0xFFFFFFFC;
    v52 = v20;
    if ( v20 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v16 = 0LL;
    *(_QWORD *)&v51[24] = 0LL;
    v24 = a2;
  }
  v50 = v11 & 4;
  if ( (v11 & 4) != 0 && v17 )
  {
    if ( v24 )
    {
      v25 = (unsigned __int64)(v17 + 1);
      if ( v25 >= 0x7FFFFFFF0000LL )
        v25 = 0x7FFFFFFF0000LL;
      v26 = *(unsigned __int16 *)v25;
      v19 = *(unsigned __int16 *)v25;
      HIDWORD(v47) = v19;
      if ( *(_WORD *)v25 )
      {
        if ( (v51[32] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = *(unsigned __int16 **)&v51[32];
        if ( (unsigned __int64)(*(_QWORD *)&v51[32] + v26) > 0x7FFFFFFF0000LL
          || (unsigned __int64)(*(_QWORD *)&v51[32] + v26) < *(_QWORD *)&v51[32] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v17 = *(unsigned __int16 **)&v51[32];
      }
      v16 = *(unsigned __int16 **)&v51[24];
      v15 = *(_BYTE **)&v51[16];
      v48 = *(void **)&v51[16];
      v14 = *(_BYTE **)&v51[8];
      v49 = *(void **)&v51[8];
      LOBYTE(v44) = 0;
      LOBYTE(v45) = 0;
      Size = 0LL;
      v18 = v47;
    }
    else
    {
      v19 = v17[1];
      HIDWORD(v47) = v19;
    }
    v21 = (v19 + 3) & 0xFFFFFFFC;
    if ( v21 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v17 = 0LL;
    *(_QWORD *)&v51[32] = 0LL;
  }
  if ( v14 )
  {
    if ( v24 )
    {
      v27 = (__int64)(v14 + 1);
      if ( (unsigned __int64)(v14 + 1) >= 0x7FFFFFFF0000LL )
        v27 = 0x7FFFFFFF0000LL;
      v44 = *(unsigned __int8 *)v27;
      v46 = *(_BYTE *)v27;
      v28 = 4 * v44 + 8;
      HIDWORD(Size) = v28;
      v43 = v28;
      if ( 4 * v44 == -8 )
      {
        v49 = *(void **)&v51[8];
      }
      else
      {
        if ( (v51[8] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v49 = *(void **)&v51[8];
        v29 = *(_QWORD *)&v51[8] + v28;
        if ( v29 > 0x7FFFFFFF0000LL || v29 < *(_QWORD *)&v51[8] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v17 = *(unsigned __int16 **)&v51[32];
      v16 = *(unsigned __int16 **)&v51[24];
      v15 = *(_BYTE **)&v51[16];
      v48 = *(void **)&v51[16];
      LOBYTE(v45) = 0;
      LODWORD(Size) = 0;
      v18 = v47;
      v19 = HIDWORD(v47);
    }
    else
    {
      LOBYTE(v44) = v14[1];
      v46 = v44;
      v28 = 4 * (unsigned __int8)v44 + 8;
      v43 = v28;
      HIDWORD(Size) = v28;
    }
    v23 = (v28 + 3) & 0xFFFFFFFC;
    v53 = v23;
  }
  if ( v15 )
  {
    if ( v24 )
    {
      v30 = (__int64)(v15 + 1);
      if ( (unsigned __int64)(v15 + 1) >= 0x7FFFFFFF0000LL )
        v30 = 0x7FFFFFFF0000LL;
      v45 = *(unsigned __int8 *)v30;
      LODWORD(Size) = 4 * v45 + 8;
      if ( 4 * v45 == -8 )
      {
        v48 = *(void **)&v51[16];
      }
      else
      {
        if ( (v51[16] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v48 = *(void **)&v51[16];
        v31 = *(_QWORD *)&v51[16] + (unsigned int)(4 * v45 + 8);
        if ( v31 > 0x7FFFFFFF0000LL || v31 < *(_QWORD *)&v51[16] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v17 = *(unsigned __int16 **)&v51[32];
      v16 = *(unsigned __int16 **)&v51[24];
      v49 = *(void **)&v51[8];
      LOBYTE(v44) = v46;
      HIDWORD(Size) = v43;
      v18 = v47;
      v19 = HIDWORD(v47);
      v32 = 4 * v45 + 8;
    }
    else
    {
      LOBYTE(v45) = v15[1];
      v32 = 4 * (unsigned __int8)v45 + 8;
      LODWORD(Size) = v32;
    }
    v22 = (v32 + 3) & 0xFFFFFFFC;
  }
  v33 = v20 + 20 + v21 + v23 + v22;
  PoolWithTag = ExAllocatePoolWithTag(a3, v33, 0x63536553u);
  v35 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v33);
  *(_OWORD *)v35 = *(_OWORD *)v51;
  v35[4] = *(_DWORD *)&v51[16];
  v36 = (ACL *)(v35 + 5);
  *((_WORD *)v35 + 1) |= 0x8000u;
  if ( v55 && v16 )
  {
    memmove(v35 + 5, v16, v18);
    v37 = a2;
    if ( a2 && (v18 < 8 || v18 != *((unsigned __int16 *)v35 + 11) || !RtlValidAcl((PACL)(v35 + 5))) )
      goto LABEL_130;
    v35[3] = 20;
    v41 = v52;
    *((_WORD *)v35 + 11) = v52;
    v36 = (ACL *)((char *)v36 + v41);
  }
  else
  {
    v35[3] = 0;
    v37 = a2;
  }
  if ( v50 && v17 )
  {
    memmove(v36, v17, v19);
    if ( !v37 || v19 >= 8 && v19 == v36->AclSize && RtlValidAcl(v36) )
    {
      v35[4] = (_DWORD)v36 - (_DWORD)v35;
      v36->AclSize = v21;
      v36 = (ACL *)((char *)v36 + v21);
      goto LABEL_86;
    }
LABEL_130:
    ExFreePoolWithTag(v35, 0);
    return 3221225591LL;
  }
  v35[4] = 0;
LABEL_86:
  if ( !v49 )
  {
    v35[1] = 0;
    goto LABEL_92;
  }
  memmove(v36, v49, HIDWORD(Size));
  v36->Sbz1 = v44;
  if ( !v37 || (unsigned __int64)v36 > 0x7FFFFFFF0000LL && (v36->AclRevision & 0xF) == 1 && (unsigned __int8)v44 <= 0xFu )
  {
    v35[1] = (_DWORD)v36 - (_DWORD)v35;
    v36 = (ACL *)((char *)v36 + v53);
LABEL_92:
    if ( !v48 )
    {
      v35[2] = 0;
      goto LABEL_98;
    }
    memmove(v36, v48, (unsigned int)Size);
    v36->Sbz1 = v45;
    if ( !v37
      || (unsigned __int64)v36 > 0x7FFFFFFF0000LL && (v36->AclRevision & 0xF) == 1 && (unsigned __int8)v45 <= 0xFu )
    {
      v35[2] = (_DWORD)v36 - (_DWORD)v35;
LABEL_98:
      *a5 = v35;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v35, 0);
  return 3221225592LL;
}
