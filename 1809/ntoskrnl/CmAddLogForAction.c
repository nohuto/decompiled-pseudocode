/*
 * XREFs of CmAddLogForAction @ 0x1406BE17C
 * Callers:
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407F061C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407F0AAC (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x1405B0298 (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpTransWriteLog @ 0x1406F9138 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1406F9404 (HvBufferCheckSum.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  unsigned int v7; // r12d
  ULONG v8; // r15d
  int v9; // eax
  __int64 v10; // rcx
  const void **v11; // r14
  int v13; // eax
  unsigned int v14; // r15d
  __int64 v15; // rax
  int v16; // ebx
  unsigned __int16 v17; // cx
  int v18; // ebx
  bool v19; // cc
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(__int64, _QWORD, _DWORD *); // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned __int16 v25; // cx
  unsigned int v26; // eax
  unsigned int v27; // ebx
  _DWORD *PoolWithTag; // rax
  int v29; // ecx
  __int64 v30; // r8
  _WORD *v31; // rcx
  unsigned int v32; // edx
  size_t v33; // r8
  char *v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  _WORD *v38; // rbx
  size_t v39; // r8
  void *v40; // rdx
  char *v41; // rcx
  __int64 v42; // rdx
  BOOLEAN v43; // al
  __int64 v44; // r12
  CLFS_INFORMATION *v45; // rax
  CLFS_INFORMATION *v46; // r15
  _DWORD v47[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v48; // [rsp+48h] [rbp-30h] BYREF
  __int64 v49; // [rsp+50h] [rbp-28h]
  _DWORD v50[2]; // [rsp+58h] [rbp-20h] BYREF
  int v51[2]; // [rsp+60h] [rbp-18h]
  CLFS_LSN plsnFinish; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v53; // [rsp+C0h] [rbp+48h]
  ULONG pcbInfoBuffer; // [rsp+C8h] [rbp+50h] BYREF
  size_t Size; // [rsp+D0h] [rbp+58h] BYREF
  void *Src; // [rsp+D8h] [rbp+60h] BYREF

  pcbInfoBuffer = a2;
  v2 = 0;
  v47[1] = 0;
  v50[1] = 0;
  v47[0] = -1;
  v4 = 0LL;
  v50[0] = -1;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v53 = -1;
  v8 = 0;
  LODWORD(Src) = 0;
  LODWORD(Size) = 0;
  v9 = *(_DWORD *)(v6 + 48);
  v49 = 0LL;
  pcbInfoBuffer = 0;
  if ( (v9 & 0x80u) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)v51 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 4192LL);
    if ( *(_QWORD *)(*(_QWORD *)v51 + 96LL) )
    {
      if ( *(_QWORD *)(v6 + 56) && *(_DWORD *)(a1 + 68) != 13 )
      {
        v48 = 0LL;
        CmpConstructNameWithStatus(v10, &v48);
        v11 = (const void **)v48;
        if ( !v48 )
          return 3221225626LL;
        v13 = *(_DWORD *)(a1 + 68);
        if ( (v13 & 0xFFFFFFFD) != 0 )
        {
          if ( v13 <= 3 )
            goto LABEL_39;
          if ( v13 <= 6 )
          {
            v19 = (unsigned int)(v13 - 4) <= 1;
            v14 = 80;
            v20 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
            v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v20 + 8);
            if ( v19 )
            {
              v53 = *(_DWORD *)(a1 + 92);
              v22 = v21(v20, v53, v47);
              v5 = v22;
              if ( !v22 )
                goto LABEL_15;
              v23 = *(_DWORD *)(v22 + 4);
              v24 = v23 + 0x80000000;
              if ( v23 < 0x80000000 )
                v24 = v23;
              LODWORD(Src) = v24;
              LODWORD(Size) = v24;
              if ( v24 + 80 < 0x50 )
              {
                v16 = -1073741675;
LABEL_79:
                if ( v5 )
                  (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                    v47);
                if ( v4 )
                  ExFreePoolWithTag(v4, 0);
                goto LABEL_83;
              }
              v14 = v24 + 80;
            }
            else
            {
              v53 = *(_DWORD *)(a1 + 88);
              v5 = v21(v20, v53, v47);
              if ( !v5 )
                goto LABEL_15;
            }
            v25 = *(_WORD *)(v5 + 2);
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              v25 *= 2;
            v7 = v25;
            v2 = v25 + v14;
            goto LABEL_36;
          }
          if ( v13 == 7 || v13 == 8 )
          {
            v2 = 56;
            goto LABEL_39;
          }
          if ( v13 != 9 )
          {
            if ( v13 != 11 )
              goto LABEL_39;
            v14 = 64;
            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 8LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
                    *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL),
                    v50);
            v49 = v15;
            if ( !v15 )
            {
LABEL_15:
              v16 = -1073741670;
LABEL_83:
              CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
              return (unsigned int)v16;
            }
            v17 = *(_WORD *)(v15 + 72);
            if ( (*(_BYTE *)(v15 + 2) & 0x20) != 0 )
              v17 *= 2;
            v18 = v17;
            pcbInfoBuffer = v17;
            goto LABEL_35;
          }
          v18 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
        }
        else
        {
          v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL) + 24LL);
        }
        v14 = 64;
LABEL_35:
        v2 = v18 + 64;
LABEL_36:
        if ( v2 < v14 )
        {
          v16 = -1073741675;
          goto LABEL_77;
        }
        v8 = pcbInfoBuffer;
LABEL_39:
        v26 = *(unsigned __int16 *)v11;
        v27 = v26 + v2;
        if ( v27 < v26 )
        {
          v16 = -1073741562;
          goto LABEL_77;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v27, 0x20204D43u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_42:
          v16 = -1073741670;
LABEL_77:
          if ( v49 )
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 16LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
              v50);
          goto LABEL_79;
        }
        memset(PoolWithTag, 0, v27);
        v4[1] = v27;
        v4[2] = 1;
        *((_OWORD *)v4 + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
        *((_WORD *)v4 + 16) = *(_WORD *)v11;
        *((_WORD *)v4 + 17) = *((_WORD *)v11 + 1);
        v29 = *(_DWORD *)(a1 + 68);
        if ( (v29 & 0xFFFFFFFD) != 0 )
        {
          if ( v29 <= 3 )
            goto LABEL_72;
          if ( v29 <= 6 )
          {
            v48 = 0xFFFFFFFFLL;
            v36 = 0;
            if ( v29 == 4 )
            {
              v4[3] = 3;
            }
            else
            {
              LOBYTE(v36) = v29 != 5;
              v4[3] = v36 + 4;
            }
            v37 = *(_DWORD *)(v5 + 12);
            *((_QWORD *)v4 + 5) = v4 + 20;
            v4[16] = v37;
            memmove(v4 + 20, v11[1], *(unsigned __int16 *)v11);
            v38 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v11 + 80);
            *((_QWORD *)v4 + 7) = v38;
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              CmpCopyCompressedName(v38, v7, (unsigned __int8 *)(v5 + 20), *(unsigned __int16 *)(v5 + 2));
            else
              memmove(v38, (const void *)(v5 + 20), v7);
            *((_QWORD *)v4 + 7) = 0LL;
            *((_WORD *)v4 + 25) = v7;
            *((_WORD *)v4 + 24) = v7;
            if ( *(_DWORD *)(a1 + 68) == 6 )
            {
              v4[17] = 0;
              *((_QWORD *)v4 + 9) = 0LL;
            }
            else
            {
              v4[17] = (_DWORD)Src;
              if ( !CmpGetValueData(
                      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                      v53,
                      v5,
                      (unsigned int *)&Size,
                      (__int64)&Src,
                      (__int64)&pcbInfoBuffer,
                      (__int64)&v48) )
                goto LABEL_42;
              v39 = (unsigned int)Size;
              v40 = Src;
              v41 = (char *)v38 + v7;
              *((_QWORD *)v4 + 9) = v41;
              memmove(v41, v40, v39);
              *((_QWORD *)v4 + 9) = 0LL;
              if ( (_BYTE)pcbInfoBuffer == 1 )
                ExFreePoolWithTag(Src, 0);
              else
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                  &v48);
            }
LABEL_72:
            v42 = (unsigned int)v4[1];
            *((_QWORD *)v4 + 5) = 0LL;
            *v4 = HvBufferCheckSum(v4, v42);
            v43 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
            v44 = *(_QWORD *)v51;
            v16 = CmpTransWriteLog(v51[0], (int)v4, v4[1], v43 != 0 ? 2 : 0, &plsnFinish);
            if ( v16 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
              *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = plsnFinish;
            pcbInfoBuffer = 120;
            v45 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
            v46 = v45;
            if ( v45 )
            {
              ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v44 + 88), v45, &pcbInfoBuffer);
              ExFreePoolWithTag(v46, 0);
            }
            goto LABEL_77;
          }
          if ( v29 == 7 )
          {
            v4[3] = 6;
            *((_QWORD *)v4 + 5) = v4 + 14;
            memmove(v4 + 14, v11[1], *(unsigned __int16 *)v11);
            v4[12] = *(_DWORD *)(a1 + 88);
            goto LABEL_72;
          }
          if ( v29 == 8 )
          {
            v4[3] = 7;
            *((_QWORD *)v4 + 5) = v4 + 14;
            memmove(v4 + 14, v11[1], *(unsigned __int16 *)v11);
            *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 88);
            goto LABEL_72;
          }
          if ( v29 != 9 )
          {
            if ( v29 != 11 )
              goto LABEL_72;
            v4[3] = 9;
            *((_QWORD *)v4 + 5) = v4 + 16;
            memmove(v4 + 16, v11[1], *(unsigned __int16 *)v11);
            v30 = v49;
            v31 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v11 + 64);
            *((_QWORD *)v4 + 7) = v31;
            if ( (*(_BYTE *)(v30 + 2) & 0x20) != 0 )
              CmpCopyCompressedName(v31, v8, (unsigned __int8 *)(v30 + 76), *(unsigned __int16 *)(v30 + 72));
            else
              memmove(v31, (const void *)(v30 + 76), v8);
            *((_WORD *)v4 + 25) = v8;
            *((_WORD *)v4 + 24) = v8;
            goto LABEL_71;
          }
          v4[3] = *(_BYTE *)(a1 + 100) != 0 ? 10 : 8;
          *((_QWORD *)v4 + 5) = v4 + 16;
          memmove(v4 + 16, v11[1], *(unsigned __int16 *)v11);
          v32 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
          v4[12] = v32;
          v33 = v32;
          v34 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
          *((_QWORD *)v4 + 7) = v34;
          v35 = *(_QWORD *)(a1 + 88);
        }
        else
        {
          v4[3] = (v29 != 0) + 1;
          v4[12] = *(_DWORD *)(a1 + 72);
          *((_QWORD *)v4 + 5) = v4 + 16;
          memmove(v4 + 16, v11[1], *(unsigned __int16 *)v11);
          v34 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
          *((_QWORD *)v4 + 7) = v34;
          v35 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL);
          v33 = *(unsigned int *)(v35 + 24);
        }
        memmove(v34, (const void *)(v35 + 32), v33);
LABEL_71:
        *((_QWORD *)v4 + 7) = 0LL;
        goto LABEL_72;
      }
    }
  }
  return 0LL;
}
