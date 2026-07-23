/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x140631CE0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     NtSetSecurityObject @ 0x1405BACF0 (NtSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BD394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405E3910 (ObpCaptureObjectCreateInformation.c)
 *     NtCreateWnfStateName @ 0x14060ED20 (NtCreateWnfStateName.c)
 *     AlpcpConnectPort @ 0x1406154A4 (AlpcpConnectPort.c)
 *     NtOpenObjectAuditAlarm @ 0x1406DA630 (NtOpenObjectAuditAlarm.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F15C4 (PipGetRegistrySecurityWithFallback.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F5D50 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepCheckAcl @ 0x1405BE9A0 (SepCheckAcl.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140632720 (RtlValidAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, POOL_TYPE a3, char a4, _QWORD *a5)
{
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  char v12; // r8
  __int16 v13; // cx
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rdx
  _BYTE *v16; // r9
  unsigned __int16 *v17; // r13
  unsigned __int16 *v18; // rsi
  unsigned int v19; // r12d
  unsigned int v20; // r14d
  unsigned int v21; // ebx
  unsigned int v22; // r15d
  char v23; // r10
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // r11d
  SIZE_T v33; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v35; // rdi
  ACL *v36; // rbx
  char v37; // r13
  int v38; // ecx
  int v39; // ebx
  unsigned __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // [rsp+20h] [rbp-D8h]
  int v45; // [rsp+28h] [rbp-D0h]
  int v46; // [rsp+30h] [rbp-C8h]
  size_t Size; // [rsp+34h] [rbp-C4h]
  void *v48; // [rsp+48h] [rbp-B0h]
  void *v49; // [rsp+50h] [rbp-A8h]
  __int16 v50; // [rsp+58h] [rbp-A0h]
  int v51; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v52; // [rsp+60h] [rbp-98h]
  _BYTE v53[40]; // [rsp+68h] [rbp-90h] BYREF
  unsigned int v54; // [rsp+90h] [rbp-68h]
  _OWORD v55[6]; // [rsp+98h] [rbp-60h] BYREF
  __int16 v56; // [rsp+100h] [rbp+8h]

  memset(v53, 0, sizeof(v53));
  memset(v55, 0, 0x28uLL);
  v8 = 0;
  LOBYTE(v51) = 0;
  v44 = 0LL;
  v45 = 0;
  LOBYTE(v46) = 0;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v55[0] = *(_OWORD *)a1;
    v9 = *(_DWORD *)(a1 + 16);
    LODWORD(v55[1]) = v9;
    v10 = *(_QWORD *)&v55[0];
    if ( (SWORD1(v55[0]) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v44 = 0LL;
    LOBYTE(v46) = 0;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    v55[0] = *(_OWORD *)a1;
    v9 = *(_DWORD *)(a1 + 16);
    LODWORD(v55[1]) = v9;
    v10 = *(_QWORD *)&v55[0];
  }
  if ( LOBYTE(v55[0]) != 1 )
    return 3221225560LL;
  v53[0] = 1;
  v53[1] = BYTE1(v10);
  v11 = v10 >> 16;
  v12 = BYTE2(v10);
  *(_WORD *)&v53[2] = WORD1(v10) & 0x7FFF;
  v13 = WORD1(v10) & 0x8000;
  if ( (v10 & 0x80000000) != 0 )
  {
    v14 = HIDWORD(v10);
    if ( (_DWORD)v14 )
      v15 = (_BYTE *)(a1 + v14);
    else
      v15 = 0LL;
  }
  else
  {
    v15 = *(_BYTE **)(a1 + 8);
  }
  v48 = v15;
  *(_QWORD *)&v53[8] = v15;
  if ( !v13 )
  {
    v16 = *(_BYTE **)(a1 + 16);
    goto LABEL_16;
  }
  if ( DWORD2(v55[0]) )
  {
    v16 = (_BYTE *)(a1 + DWORD2(v55[0]));
LABEL_16:
    v49 = v16;
    goto LABEL_17;
  }
  v16 = 0LL;
  v49 = 0LL;
LABEL_17:
  *(_QWORD *)&v53[16] = v16;
  if ( (v11 & 0x10) != 0 )
  {
    if ( v13 )
    {
      if ( HIDWORD(v55[0]) )
        v17 = (unsigned __int16 *)(a1 + HIDWORD(*((_QWORD *)&v55[0] + 1)));
      else
        v17 = 0LL;
    }
    else
    {
      v17 = *(unsigned __int16 **)(a1 + 24);
    }
  }
  else
  {
    v17 = 0LL;
  }
  *(_QWORD *)&v53[24] = v17;
  if ( (v11 & 4) != 0 )
  {
    if ( v13 )
    {
      if ( v9 )
        v18 = (unsigned __int16 *)(a1 + v9);
      else
        v18 = 0LL;
    }
    else
    {
      v18 = *(unsigned __int16 **)(a1 + 32);
    }
  }
  else
  {
    v18 = 0LL;
  }
  *(_QWORD *)&v53[32] = v18;
  v19 = 0;
  Size = 0LL;
  v20 = 0;
  v21 = 0;
  v54 = 0;
  v22 = 0;
  v52 = 0;
  v56 = v12 & 0x10;
  if ( (v12 & 0x10) != 0 && v17 )
  {
    v23 = a2;
    if ( a2 )
    {
      v41 = (unsigned __int64)(v17 + 1);
      if ( v41 >= 0x7FFFFFFF0000LL )
        v41 = 0x7FFFFFFF0000LL;
      v42 = *(unsigned __int16 *)v41;
      v19 = *(unsigned __int16 *)v41;
      LODWORD(Size) = v19;
      if ( *(_WORD *)v41 )
      {
        if ( (v53[24] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = *(unsigned __int16 **)&v53[24];
        if ( (unsigned __int64)(v42 + *(_QWORD *)&v53[24]) > 0x7FFFFFFF0000LL
          || (unsigned __int64)(v42 + *(_QWORD *)&v53[24]) < *(_QWORD *)&v53[24] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v17 = *(unsigned __int16 **)&v53[24];
      }
      v18 = *(unsigned __int16 **)&v53[32];
      v16 = *(_BYTE **)&v53[16];
      v49 = *(void **)&v53[16];
      v15 = *(_BYTE **)&v53[8];
      v48 = *(void **)&v53[8];
      v12 = v53[2];
      v44 = 0LL;
      LOBYTE(v46) = 0;
      v20 = 0;
    }
    else
    {
      v19 = v17[1];
      LODWORD(Size) = v19;
    }
    v21 = (v19 + 3) & 0xFFFFFFFC;
    v54 = v21;
    if ( v21 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v17 = 0LL;
    *(_QWORD *)&v53[24] = 0LL;
    v23 = a2;
  }
  v50 = v12 & 4;
  if ( (v12 & 4) != 0 && v18 )
  {
    if ( v23 )
    {
      v24 = (unsigned __int64)(v18 + 1);
      if ( v24 >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      v25 = *(unsigned __int16 *)v24;
      v20 = *(unsigned __int16 *)v24;
      HIDWORD(Size) = v20;
      if ( *(_WORD *)v24 )
      {
        if ( (v53[32] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = *(unsigned __int16 **)&v53[32];
        if ( (unsigned __int64)(*(_QWORD *)&v53[32] + v25) > 0x7FFFFFFF0000LL
          || (unsigned __int64)(*(_QWORD *)&v53[32] + v25) < *(_QWORD *)&v53[32] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v18 = *(unsigned __int16 **)&v53[32];
      }
      v17 = *(unsigned __int16 **)&v53[24];
      v16 = *(_BYTE **)&v53[16];
      v49 = *(void **)&v53[16];
      v15 = *(_BYTE **)&v53[8];
      v48 = *(void **)&v53[8];
      v44 = 0LL;
      LOBYTE(v46) = 0;
      v19 = Size;
    }
    else
    {
      v20 = v18[1];
      HIDWORD(Size) = v20;
    }
    v22 = (v20 + 3) & 0xFFFFFFFC;
    if ( v22 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v18 = 0LL;
    *(_QWORD *)&v53[32] = 0LL;
  }
  if ( v15 )
  {
    if ( v23 )
    {
      v26 = (unsigned __int64)(v15 + 1);
      if ( v26 >= 0x7FFFFFFF0000LL )
        v26 = 0x7FFFFFFF0000LL;
      v51 = *(unsigned __int8 *)v26;
      v27 = (unsigned int)(4 * v51 + 8);
      LODWORD(v44) = 4 * v51 + 8;
      v45 = v44;
      if ( 4 * v51 == -8 )
      {
        v48 = *(void **)&v53[8];
      }
      else
      {
        if ( (v53[8] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v48 = *(void **)&v53[8];
        v28 = *(_QWORD *)&v53[8] + v27;
        if ( v28 > 0x7FFFFFFF0000LL || v28 < *(_QWORD *)&v53[8] )
          MEMORY[0x7FFFFFFF0000] = 0;
        LODWORD(v27) = 4 * v51 + 8;
      }
      v18 = *(unsigned __int16 **)&v53[32];
      v17 = *(unsigned __int16 **)&v53[24];
      v16 = *(_BYTE **)&v53[16];
      v49 = *(void **)&v53[16];
      LOBYTE(v46) = 0;
      HIDWORD(v44) = 0;
      v19 = Size;
      v20 = HIDWORD(Size);
    }
    else
    {
      LOBYTE(v51) = v15[1];
      LODWORD(v27) = 4 * (unsigned __int8)v51 + 8;
      v45 = v27;
      LODWORD(v44) = v27;
    }
    v29 = (v27 + 3) & 0xFFFFFFFC;
    v52 = v29;
  }
  else
  {
    v29 = 0;
  }
  if ( v16 )
  {
    if ( v23 )
    {
      v30 = (__int64)(v16 + 1);
      if ( (unsigned __int64)(v16 + 1) >= 0x7FFFFFFF0000LL )
        v30 = 0x7FFFFFFF0000LL;
      v46 = *(unsigned __int8 *)v30;
      HIDWORD(v44) = 4 * v46 + 8;
      if ( 4 * v46 == -8 )
      {
        v49 = *(void **)&v53[16];
      }
      else
      {
        if ( (v53[16] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v49 = *(void **)&v53[16];
        v31 = *(_QWORD *)&v53[16] + (unsigned int)(4 * v46 + 8);
        if ( v31 > 0x7FFFFFFF0000LL || v31 < *(_QWORD *)&v53[16] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v18 = *(unsigned __int16 **)&v53[32];
      v17 = *(unsigned __int16 **)&v53[24];
      v48 = *(void **)&v53[8];
      LODWORD(v44) = v45;
      v19 = Size;
      v20 = HIDWORD(Size);
      v32 = 4 * v46 + 8;
    }
    else
    {
      LOBYTE(v46) = v16[1];
      v32 = 4 * (unsigned __int8)v46 + 8;
      HIDWORD(v44) = v32;
    }
    v8 = (v32 + 3) & 0xFFFFFFFC;
  }
  v33 = v21 + 20 + v22 + v29 + v8;
  PoolWithTag = ExAllocatePoolWithTag(a3, v33, 0x63536553u);
  v35 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v33);
  *(_OWORD *)v35 = *(_OWORD *)v53;
  v35[4] = *(_DWORD *)&v53[16];
  v36 = (ACL *)(v35 + 5);
  *((_WORD *)v35 + 1) |= 0x8000u;
  if ( v56 && v17 )
  {
    memmove(v35 + 5, v17, v19);
    v37 = a2;
    if ( a2 && !SepCheckAcl((ACL *)(v35 + 5), v19) )
      goto LABEL_127;
    v35[3] = 20;
    v43 = v54;
    *((_WORD *)v35 + 11) = v54;
    v36 = (ACL *)((char *)v36 + v43);
  }
  else
  {
    v35[3] = 0;
    v37 = a2;
  }
  if ( v50 && v18 )
  {
    memmove(v36, v18, v20);
    if ( !v37 || v20 >= 8 && v20 == v36->AclSize && RtlValidAcl(v36) )
    {
      v35[4] = (_DWORD)v36 - (_DWORD)v35;
      v36->AclSize = v22;
      v36 = (ACL *)((char *)v36 + v22);
      goto LABEL_88;
    }
LABEL_127:
    ExFreePoolWithTag(v35, 0);
    return 3221225591LL;
  }
  v35[4] = 0;
LABEL_88:
  if ( !v48 )
  {
    v38 = 0;
    goto LABEL_92;
  }
  memmove(v36, v48, (unsigned int)v44);
  v36->Sbz1 = v51;
  if ( !v37 || RtlValidSid(v36) )
  {
    v38 = (_DWORD)v36 - (_DWORD)v35;
    v36 = (ACL *)((char *)v36 + v52);
LABEL_92:
    v35[1] = v38;
    if ( !v49 )
    {
      v39 = 0;
      goto LABEL_96;
    }
    memmove(v36, v49, HIDWORD(v44));
    v36->Sbz1 = v46;
    if ( !v37 || RtlValidSid(v36) )
    {
      v39 = (_DWORD)v36 - (_DWORD)v35;
LABEL_96:
      v35[2] = v39;
      *a5 = v35;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v35, 0);
  return 3221225592LL;
}
