/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1405F6E18 (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x1408C77C0 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockVadShared @ 0x14001AF48 (MiUnlockVadShared.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x140075560 (MiLockVadShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiFillMapFileInfo @ 0x14084D3B8 (MiFillMapFileInfo.c)
 */

PVOID __fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v4; // r8d
  unsigned int v5; // r15d
  PVOID v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *PoolWithTag; // rax
  _QWORD *v10; // rcx
  char *v11; // rbx
  _QWORD *i; // rdi
  _QWORD **v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int16 v17; // dx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // r13
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // eax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-68h]
  _BYTE v34[48]; // [rsp+28h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a2 & 1 | 2;
  if ( (a2 & 2) == 0 )
    v4 = a2 & 1;
  v5 = v4 | 4;
  if ( (a2 & 4) == 0 )
    v5 = v4;
  v6 = 0LL;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v33 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v34);
    v33 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  v7 = *(_QWORD *)(BugCheckParameter1 + 1592);
  if ( v7 )
  {
    v8 = v7 + 1;
    if ( v8 <= 0x555555555555555LL )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48 * v8, 0x3031704Du);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        v10 = *(_QWORD **)(BugCheckParameter1 + 1576);
        v11 = PoolWithTag;
        i = 0LL;
        while ( v10 )
        {
          i = v10;
          v10 = (_QWORD *)*v10;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !i )
            {
              *(_QWORD *)v11 = 0LL;
              goto LABEL_39;
            }
            v13 = (_QWORD **)i[1];
            v14 = (__int64)i;
            v15 = i;
            if ( v13 )
            {
              v16 = *v13;
              for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
                i = v16;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v15 )
                  break;
                v15 = i;
              }
            }
            MiLockVadShared((__int64)CurrentThread, v14);
            if ( (unsigned int)MiVadDeleted(v14) == 1 || v19 == 1 )
              goto LABEL_15;
            if ( (v17 & 0x4000) == 0 )
              break;
            if ( v5 >= 4 )
            {
              *(_QWORD *)v11 = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
              *((_QWORD *)v11 + 1) = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                                    - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                                    + 1) << 12;
              v24 = *(unsigned int *)(v14 + 52);
              LODWORD(v24) = v24 & 0x7FFFFFFF;
              if ( (v24 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) < 0x7FFFFFFFDLL )
                v25 = (v24 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
              else
                v25 = 0LL;
              *((_QWORD *)v11 + 3) = v25;
              *((_DWORD *)v11 + 4) = *(_DWORD *)(BugCheckParameter1 + 736);
              *((_DWORD *)v11 + 5) = 0x2000;
              v26 = v19 - 3;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  v28 = v27 - 1;
                  if ( v28 )
                  {
                    if ( v28 == 1 )
                      *((_DWORD *)v11 + 5) = 8396800;
                  }
                  else
                  {
                    *((_DWORD *)v11 + 5) = 536879104;
                  }
                }
                else
                {
                  *((_DWORD *)v11 + 5) = 2105344;
                }
              }
              else
              {
                v29 = *((_DWORD *)v11 + 5);
                if ( (*(_DWORD *)(v14 + 48) & 0x20000) == 0 )
                  v29 = 4202496;
                *((_DWORD *)v11 + 5) = v29;
              }
              v32 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCuLL | 2;
              goto LABEL_57;
            }
LABEL_15:
            MiUnlockVadShared((__int64)CurrentThread, v14);
          }
          if ( v19 != 2 || (v17 & 0xF8) != 0x38 || (v5 & 1) == 0 )
          {
            if ( (v5 & 2) != 0 )
            {
              MiFillMapFileInfo(v18, v11);
              v32 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_57:
              *(_QWORD *)v11 = v32;
              goto LABEL_32;
            }
            goto LABEL_15;
          }
          v20 = **(_QWORD **)(v14 + 72);
          *(_QWORD *)v11 = MiReferenceControlAreaFile(v20);
          *((_QWORD *)v11 + 1) = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
          *((_QWORD *)v11 + 2) = *(_QWORD *)(*(_QWORD *)v20 + 32LL);
          *((_QWORD *)v11 + 3) = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                                - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                                + 1) << 12;
          *((_DWORD *)v11 + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 56LL) + 60LL);
          if ( (*(_DWORD *)(v14 + 64) & 0x8000000) != 0 )
          {
            v22 = *((_QWORD *)v11 + 1) & 0xFFFFFFFFFFFFE03FuLL;
          }
          else
          {
            v21 = *((_QWORD *)v11 + 1) & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v20 + 15LL) & 0xF0));
            *((_QWORD *)v11 + 1) = v21;
            v22 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v20 + 15LL) << 9)) & 0x1C00;
          }
          *((_QWORD *)v11 + 1) = v22;
          if ( (v5 & 2) != 0 )
          {
            v30 = HIBYTE(*(_DWORD *)(v14 + 64)) & 1 | *((_QWORD *)v11 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
            *((_QWORD *)v11 + 1) = v30;
            *((_QWORD *)v11 + 1) = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v14 + 48) >> 2)) & 0x3E;
            v31 = *(unsigned int *)(v14 + 52);
            LODWORD(v31) = v31 & 0x7FFFFFFF;
            *((_QWORD *)v11 + 4) = (v31 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
          }
LABEL_32:
          MiUnlockVadShared((__int64)CurrentThread, v14);
          v11 += 48;
        }
      }
    }
  }
LABEL_39:
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  if ( v33 == 1 )
    KiUnstackDetachProcess((__int64)v34, 0LL);
  return v6;
}
