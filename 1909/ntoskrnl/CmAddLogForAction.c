/*
 * XREFs of CmAddLogForAction @ 0x1406BB324
 * Callers:
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x140660810 (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x140661700 (CmpGetValueData.c)
 *     CmpConstructNameWithStatus @ 0x140668850 (CmpConstructNameWithStatus.c)
 *     CmpTransWriteLog @ 0x1406BB81C (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1406BBAE8 (HvBufferCheckSum.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  ULONG v5; // r15d
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // rcx
  const void **v11; // r14
  int v12; // eax
  unsigned int v13; // r15d
  bool v14; // cc
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, _QWORD, _DWORD *); // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  ULONG v19; // eax
  unsigned int v20; // eax
  unsigned __int16 v21; // cx
  unsigned int v22; // eax
  unsigned int v23; // ebx
  _DWORD *PoolWithTag; // rax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // r13
  char *v28; // rbx
  size_t v29; // r8
  void *v30; // rdx
  char *v31; // rcx
  BOOLEAN v32; // al
  __int64 v33; // r13
  int v34; // ebx
  CLFS_INFORMATION *v35; // rax
  CLFS_INFORMATION *v36; // r15
  int v38; // ebx
  char *v39; // rcx
  __int64 v40; // rdx
  size_t v41; // r8
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned __int16 v44; // cx
  __int64 v45; // r8
  char *v46; // rcx
  _DWORD v47[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v48; // [rsp+48h] [rbp-21h] BYREF
  __int64 v49; // [rsp+50h] [rbp-19h]
  _DWORD v50[2]; // [rsp+58h] [rbp-11h] BYREF
  void *Src; // [rsp+60h] [rbp-9h] BYREF
  CLFS_LSN plsnFinish; // [rsp+68h] [rbp-1h] BYREF
  int v53[20]; // [rsp+70h] [rbp+7h]
  unsigned int v54; // [rsp+D0h] [rbp+67h]
  ULONG pcbInfoBuffer; // [rsp+D8h] [rbp+6Fh] BYREF
  size_t Size; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v57; // [rsp+E8h] [rbp+7Fh]

  pcbInfoBuffer = a2;
  v2 = 0;
  v47[1] = 0;
  v50[1] = 0;
  v47[0] = -1;
  v4 = 0LL;
  v50[0] = -1;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  plsnFinish.ullOffset = 0LL;
  v8 = 0;
  v57 = 0LL;
  v54 = -1;
  v9 = *(_DWORD *)(v6 + 48);
  pcbInfoBuffer = 0;
  LODWORD(Size) = 0;
  v49 = 0LL;
  if ( (v9 & 0x80u) != 0 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v53 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 4192LL);
  if ( !*(_QWORD *)(*(_QWORD *)v53 + 96LL) || !*(_QWORD *)(v6 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v48 = 0LL;
  CmpConstructNameWithStatus(v10, &v48);
  v11 = (const void **)v48;
  if ( v48 )
  {
    v12 = *(_DWORD *)(a1 + 68);
    if ( !v12 || v12 == 2 )
    {
      v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
    }
    else
    {
      if ( v12 <= 3 )
        goto LABEL_21;
      if ( v12 <= 6 )
      {
        v13 = 80;
        v14 = (unsigned int)(v12 - 4) <= 1;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v15 + 8);
        if ( v14 )
        {
          v54 = *(_DWORD *)(a1 + 92);
          v17 = v16(v15, v54, v47);
          v57 = v17;
          v18 = v17;
          if ( v17 )
          {
            v19 = *(_DWORD *)(v17 + 4);
            pcbInfoBuffer = v19;
            if ( v19 >= 0x80000000 )
            {
              v19 += 0x80000000;
              pcbInfoBuffer = v19;
            }
            LODWORD(Size) = v19;
            v20 = v19 + 80;
            if ( v20 < 0x50 )
            {
              v34 = -1073741675;
LABEL_42:
              if ( v57 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                  v47);
              if ( v4 )
                ExFreePoolWithTag(v4, 0);
              goto LABEL_46;
            }
            v13 = v20;
            goto LABEL_16;
          }
        }
        else
        {
          v54 = *(_DWORD *)(a1 + 88);
          v57 = v16(v15, v54, v47);
          v18 = v57;
          if ( v57 )
          {
LABEL_16:
            v21 = *(_WORD *)(v18 + 2);
            if ( (*(_BYTE *)(v18 + 16) & 1) != 0 )
              v21 *= 2;
            v7 = v21;
            v2 = v21 + v13;
            goto LABEL_19;
          }
        }
LABEL_69:
        v34 = -1073741670;
LABEL_46:
        CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
        return (unsigned int)v34;
      }
      if ( v12 != 9 )
      {
        if ( v12 == 7 || v12 == 8 )
        {
          v2 = 56;
          goto LABEL_21;
        }
        if ( v12 != 11 )
          goto LABEL_21;
        v13 = 64;
        v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 8LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
                *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL),
                v50);
        v49 = v43;
        if ( v43 )
        {
          v44 = *(_WORD *)(v43 + 72);
          if ( (*(_BYTE *)(v43 + 2) & 0x20) != 0 )
            v44 *= 2;
          v8 = v44;
          v2 = v44 + 64;
          goto LABEL_19;
        }
        goto LABEL_69;
      }
      v38 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
    }
    v13 = 64;
    v2 = v38 + 64;
LABEL_19:
    if ( v2 < v13 )
    {
      v34 = -1073741675;
      goto LABEL_40;
    }
    v5 = pcbInfoBuffer;
LABEL_21:
    v22 = *(unsigned __int16 *)v11;
    v23 = v22 + v2;
    if ( v23 < v22 )
    {
      v34 = -1073741562;
      goto LABEL_40;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v23, 0x20204D43u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_74:
      v34 = -1073741670;
LABEL_40:
      if ( v49 )
        (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
          v50);
      goto LABEL_42;
    }
    PoolWithTag[1] = v23;
    PoolWithTag[2] = 1;
    *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
    *((_WORD *)PoolWithTag + 16) = *(_WORD *)v11;
    *((_WORD *)PoolWithTag + 17) = *((_WORD *)v11 + 1);
    v25 = *(_DWORD *)(a1 + 68);
    if ( !v25 || v25 == 2 )
    {
      PoolWithTag[3] = (v25 != 0) + 1;
      PoolWithTag[12] = *(_DWORD *)(a1 + 72);
      *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
      memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
      v39 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
      *((_QWORD *)v4 + 7) = v39;
      v40 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
      v41 = *(unsigned int *)(v40 + 24);
    }
    else
    {
      if ( v25 <= 3 )
        goto LABEL_35;
      if ( v25 <= 6 )
      {
        v48 = 0xFFFFFFFFLL;
        v26 = 0;
        if ( v25 == 4 )
        {
          v4[3] = 3;
        }
        else
        {
          LOBYTE(v26) = v25 != 5;
          v4[3] = v26 + 4;
        }
        v27 = v57;
        v4[16] = *(_DWORD *)(v57 + 12);
        *((_QWORD *)v4 + 5) = v4 + 20;
        memmove(v4 + 20, v11[1], *(unsigned __int16 *)v11);
        v28 = (char *)v4 + *(unsigned __int16 *)v11 + 80;
        *((_QWORD *)v4 + 7) = v28;
        if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
          CmpCopyCompressedName((unsigned __int64)v28, v7, v27 + 20, *(unsigned __int16 *)(v27 + 2));
        else
          memmove(v28, (const void *)(v27 + 20), v7);
        *((_WORD *)v4 + 25) = v7;
        *((_WORD *)v4 + 24) = v7;
        if ( *(_DWORD *)(a1 + 68) != 6 )
        {
          v4[17] = v5;
          if ( CmpGetValueData(
                 *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                 v54,
                 v27,
                 (unsigned int *)&Size,
                 (__int64)&Src,
                 (__int64)&pcbInfoBuffer,
                 (__int64)&v48) )
          {
            v29 = (unsigned int)Size;
            v30 = Src;
            v31 = &v28[v7];
            *((_QWORD *)v4 + 9) = v31;
            memmove(v31, v30, v29);
            if ( (_BYTE)pcbInfoBuffer == 1 )
              ExFreePoolWithTag(Src, 0);
            else
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                &v48);
            goto LABEL_35;
          }
          goto LABEL_74;
        }
        v4[17] = 0;
        *((_QWORD *)v4 + 9) = 0LL;
LABEL_35:
        *v4 = HvBufferCheckSum(v4, (unsigned int)v4[1]);
        v32 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
        v33 = *(_QWORD *)v53;
        v34 = CmpTransWriteLog(v53[0], (int)v4, v4[1], v32 != 0 ? 2 : 0, &plsnFinish);
        if ( v34 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
          *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = plsnFinish;
        pcbInfoBuffer = 120;
        v35 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
        v36 = v35;
        if ( v35 )
        {
          ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v33 + 88), v35, &pcbInfoBuffer);
          ExFreePoolWithTag(v36, 0);
        }
        goto LABEL_40;
      }
      if ( v25 != 9 )
      {
        switch ( v25 )
        {
          case 7:
            PoolWithTag[3] = 6;
            *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 14;
            memmove(PoolWithTag + 14, v11[1], *(unsigned __int16 *)v11);
            v4[12] = *(_DWORD *)(a1 + 88);
            break;
          case 8:
            PoolWithTag[3] = 7;
            *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 14;
            memmove(PoolWithTag + 14, v11[1], *(unsigned __int16 *)v11);
            *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 88);
            break;
          case 11:
            PoolWithTag[3] = 9;
            *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
            memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
            v45 = v49;
            v46 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
            *((_QWORD *)v4 + 7) = v46;
            if ( (*(_BYTE *)(v45 + 2) & 0x20) != 0 )
              CmpCopyCompressedName((unsigned __int64)v46, v8, v45 + 76, *(unsigned __int16 *)(v45 + 72));
            else
              memmove(v46, (const void *)(v45 + 76), v8);
            *((_WORD *)v4 + 25) = v8;
            *((_WORD *)v4 + 24) = v8;
            break;
        }
        goto LABEL_35;
      }
      PoolWithTag[3] = 8;
      *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
      memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
      v42 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
      v4[12] = v42;
      v41 = v42;
      v39 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
      *((_QWORD *)v4 + 7) = v39;
      v40 = *(_QWORD *)(a1 + 88);
    }
    memmove(v39, (const void *)(v40 + 32), v41);
    goto LABEL_35;
  }
  return 3221225626LL;
}
