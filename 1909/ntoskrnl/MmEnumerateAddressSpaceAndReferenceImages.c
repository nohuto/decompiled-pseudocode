/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BDBF0
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1405EA704 (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409032B0 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140053970 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1400539E0 (MiLockVadShared.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiUnlockVadShared @ 0x1401162B4 (MiUnlockVadShared.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiFillMapFileInfo @ 0x140886E8C (MiFillMapFileInfo.c)
 */

PVOID __fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 BugCheckParameter1, char a2)
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rbp
  PVOID v6; // r12
  int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  PVOID PoolWithTag; // rax
  _QWORD *v11; // rcx
  _QWORD *j; // rdi
  ULONG_PTR *i; // r15
  _QWORD **v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r14
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  int v27; // r8d
  int v28; // eax
  int v29; // ecx
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-68h]
  _BYTE v34[48]; // [rsp+28h] [rbp-60h] BYREF

  memset(v34, 0, sizeof(v34));
  v4 = (a2 & 1) != 0;
  if ( (a2 & 2) != 0 )
    v4 |= 2u;
  if ( (a2 & 4) != 0 )
    v4 |= 4u;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v7 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v34);
    v7 = 1;
  }
  v33 = v7;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  v8 = *(_QWORD *)(BugCheckParameter1 + 1640);
  if ( v8 )
  {
    v9 = v8 + 1;
    if ( v9 <= 0x555555555555555LL )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48 * v9, 0x3031704Du);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = *(_QWORD **)(BugCheckParameter1 + 1624);
        j = 0LL;
        for ( i = (ULONG_PTR *)PoolWithTag; v11; v11 = (_QWORD *)*v11 )
          j = v11;
        while ( j )
        {
          v14 = (_QWORD **)j[1];
          v15 = (__int64)j;
          v16 = j;
          if ( v14 )
          {
            v17 = *v14;
            for ( j = (_QWORD *)j[1]; v17; v17 = (_QWORD *)*v17 )
              j = v17;
          }
          else
          {
            for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*j == v16 )
                break;
              v16 = j;
            }
          }
          MiLockVadShared((__int64)CurrentThread, v15);
          if ( (unsigned int)MiVadDeleted(v15) == 1 || v19 == 1 )
          {
LABEL_28:
            MiUnlockVadShared((__int64)CurrentThread, v15);
            continue;
          }
          if ( (v20 & 0x100000) != 0 )
          {
            if ( v4 < 4 )
              goto LABEL_28;
            *i = (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12;
            i[1] = ((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32))
                  - (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
                  + 1) << 12;
            v25 = *(unsigned int *)(v15 + 52);
            LODWORD(v25) = v25 & 0x7FFFFFFF;
            if ( (v25 | ((unsigned __int64)*(unsigned __int8 *)(v15 + 34) << 31)) < 0x7FFFFFFFDLL )
              v26 = (v25 | ((unsigned __int64)*(unsigned __int8 *)(v15 + 34) << 31)) << 12;
            else
              v26 = 0LL;
            i[3] = v26;
            *((_DWORD *)i + 4) = *(_DWORD *)(BugCheckParameter1 + 744);
            *((_DWORD *)i + 5) = 0x2000;
            v27 = v19 - 3;
            if ( v27 )
            {
              if ( v27 == 1 )
              {
                *((_DWORD *)i + 5) = 8396800;
                v29 = 8396800;
              }
              else
              {
                v28 = *(_DWORD *)(v15 + 48);
                v29 = 0x2000;
                if ( (v28 & 0x100000) != 0 && ((v28 & 0x400000) != 0 || (v28 & 0xC0000u) >= 0x80000) )
                {
                  *((_DWORD *)i + 5) = 536879104;
                  v29 = 536879104;
                }
              }
            }
            else if ( (*(_DWORD *)(v15 + 48) & 0x3100000) == 0x2100000 )
            {
              v29 = 0x2000;
            }
            else
            {
              *((_DWORD *)i + 5) = 4202496;
              v29 = 4202496;
            }
            if ( (*(_DWORD *)(v15 + 48) & 0x300000) == 0x300000 )
              *((_DWORD *)i + 5) = v29 | 0x200000;
            v32 = *i & 0xFFFFFFFFFFFFFFFCuLL | 2;
          }
          else
          {
            if ( v19 == 2 && (v20 & 0xF80) == 0x380 && (v4 & 1) != 0 )
            {
              v21 = **(_QWORD **)(v15 + 72);
              *i = MiReferenceControlAreaFile(v21);
              i[1] = (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12;
              i[2] = *(_QWORD *)(*(_QWORD *)v21 + 32LL);
              i[3] = ((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32))
                    - (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
                    + 1) << 12;
              *((_DWORD *)i + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 56LL) + 60LL);
              if ( (*(_DWORD *)(v15 + 64) & 0x8000000) != 0 )
              {
                v23 = i[1] & 0xFFFFFFFFFFFFE03FuLL;
              }
              else
              {
                v22 = i[1] & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v21 + 15LL) & 0xF0));
                i[1] = v22;
                v23 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v21 + 15LL) << 9)) & 0x1C00;
              }
              i[1] = v23;
              if ( (v4 & 2) != 0 )
              {
                v30 = HIBYTE(*(_DWORD *)(v15 + 64)) & 1 | i[1] & 0xFFFFFFFFFFFFFFFEuLL;
                i[1] = v30;
                i[1] = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v15 + 48) >> 6)) & 0x3E;
                v31 = *(unsigned int *)(v15 + 52);
                LODWORD(v31) = v31 & 0x7FFFFFFF;
                i[4] = (v31 | ((unsigned __int64)*(unsigned __int8 *)(v15 + 34) << 31)) << 12;
              }
              goto LABEL_26;
            }
            if ( (v4 & 2) == 0 )
              goto LABEL_28;
            MiFillMapFileInfo(v18, i);
            v32 = *i & 0xFFFFFFFFFFFFFFFCuLL | 1;
          }
          *i = v32;
LABEL_26:
          MiUnlockVadShared((__int64)CurrentThread, v15);
          i += 6;
        }
        v7 = v33;
        *i = 0LL;
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  if ( v7 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v34, 0);
  return v6;
}
