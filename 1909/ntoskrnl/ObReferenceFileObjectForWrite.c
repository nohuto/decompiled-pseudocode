/*
 * XREFs of ObReferenceFileObjectForWrite @ 0x14062D830
 * Callers:
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14003FA90 (ExLockHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x14007F114 (ObpIncrPointerCountEx.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14007F140 (ExSlowReplenishHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     PsDereferenceSiloContext @ 0x14012E7D0 (PsDereferenceSiloContext.c)
 *     ExFastReplenishHandleTableEntry @ 0x140136130 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x1403385F8 (ExHandleLogBadReference.c)
 *     ExpLookupHandleTableEntry @ 0x1405FBAD0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5224 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x14089D644 (ObpAuditObjectAccess.c)
 */

__int64 __fastcall ObReferenceFileObjectForWrite(ULONG_PTR BugCheckParameter1, char a2, _QWORD *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rcx
  _KPROCESS *Process; // rax
  unsigned int *v10; // rbx
  __int64 *v11; // rax
  __int64 *v12; // r14
  __int64 v13; // rax
  signed __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rax
  __int128 v17; // rt0
  unsigned __int8 v18; // tt
  unsigned __int64 v19; // rbx
  bool v20; // zf
  void *v21; // rsi
  int v22; // ebp
  int v23; // edx
  __int64 v24; // rdi
  int v25; // edx
  unsigned __int64 v26; // rcx
  int v28; // eax
  unsigned int v29; // ebx
  int v30; // eax
  signed __int32 v31[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v32; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR v33; // [rsp+80h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v32 = 0uLL;
  if ( (BugCheckParameter1 & 0x80000000) != 0LL )
  {
    if ( !a2 && BugCheckParameter1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v10 = (unsigned int *)ObpKernelHandleTable;
      BugCheckParameter1 ^= 0xFFFFFFFF80000000uLL;
      v33 = ObpKernelHandleTable;
      goto LABEL_3;
    }
  }
  else
  {
    Process = CurrentThread->ApcState.Process;
    v10 = (unsigned int *)Process[1].ActiveProcessors.Bitmap[4];
    v33 = (ULONG_PTR)v10;
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
    {
LABEL_3:
      --CurrentThread->KernelApcDisable;
      if ( (BugCheckParameter1 & 0x3FC) != 0
        && (v11 = (__int64 *)ExpLookupHandleTableEntry(v10, BugCheckParameter1), (v12 = v11) != 0LL) )
      {
        _m_prefetchw(v11);
        v13 = *v11;
        v14 = v12[1];
        *((_QWORD *)&v32 + 1) = v14;
        *(_QWORD *)&v32 = v13;
        v15 = v13;
        while ( (v15 & 0x1FFFE) != 0 )
        {
          if ( (v15 & 1) != 0 )
          {
            v6 = v14;
            *(_QWORD *)&v17 = v15;
            *((_QWORD *)&v17 + 1) = v14;
            v18 = _InterlockedCompareExchange128(v12, v14, v15 - 2, (signed __int64 *)&v17);
            v16 = v17;
            v15 = v17;
            v32 = v17;
            v14 = *((_QWORD *)&v17 + 1);
            if ( v18 )
            {
              if ( (unsigned __int16)((unsigned __int64)v16 >> 1) != 16 )
              {
                v19 = (v16 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                goto LABEL_10;
              }
              *(_QWORD *)&v32 = v16 ^ ((unsigned int)v16 ^ (2 * (unsigned int)((unsigned __int64)v16 >> 1) - 2)) & 0x1FFFE;
              v19 = ((__int64)v32 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              ObpIncrPointerCountEx((volatile signed __int64 *)v19, 32752);
              v30 = ExFastReplenishHandleTableEntry(v12, (unsigned __int64 *)&v32, 32752);
              v6 = v30;
              if ( v30 )
              {
                v6 = (unsigned int)-v30;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v19, (int)v6);
              }
LABEL_29:
              LODWORD(v14) = DWORD2(v32);
              v15 = v32;
              goto LABEL_10;
            }
            v10 = (unsigned int *)v33;
          }
          else
          {
            ExpBlockOnLockedHandleEntry(v10, v12, v15);
            _m_prefetchw(v12);
            v14 = v12[1];
            *(_QWORD *)&v32 = *v12;
            v15 = v32;
            *((_QWORD *)&v32 + 1) = v14;
          }
        }
        if ( ExLockHandleTableEntry((__int64)v10, v12) )
        {
          v19 = (*v12 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
          v32 = *(_OWORD *)v12;
          v28 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v12);
          ObpIncrPointerCountEx((volatile signed __int64 *)v19, v28 + 1);
          _InterlockedExchangeAdd64(v12, 1uLL);
          v6 = v33 + 48;
          _InterlockedOr(v31, 0);
          if ( *(_QWORD *)(v33 + 48) )
          {
            ExfUnblockPushLock((volatile __int64 *)v6, 0LL);
            LODWORD(v14) = DWORD2(v32);
            v15 = v32;
            goto LABEL_10;
          }
          goto LABEL_29;
        }
      }
      else
      {
        LODWORD(v14) = DWORD2(v32);
        v15 = v32;
      }
      if ( BugCheckParameter1 )
      {
        ExHandleLogBadReference((ULONG_PTR)v10, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
        LODWORD(v14) = DWORD2(v32);
        v15 = v32;
      }
      v19 = v33;
      v12 = 0LL;
LABEL_10:
      v20 = CurrentThread->KernelApcDisable++ == -1;
      if ( v20
        && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v6);
      }
      if ( !v12 )
      {
        v29 = -1073741816;
LABEL_35:
        *a3 = 0LL;
        return v29;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v19, 1, 1u, 0x746C6644u);
      v21 = (void *)(v19 + 48);
      if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 + 24) ^ (unsigned __int64)BYTE1(v19)] == IoFileObjectType )
      {
        v22 = v14 & 0x1FFFFFF;
        v23 = ~(unsigned __int8)(*(_DWORD *)(v19 + 128) >> 5) & 4;
        a4[1] = v22;
        v24 = (v15 >> 17) & 7;
        v25 = v23 | 2;
        *a4 = v24;
        if ( (v22 & v25) != 0 )
        {
          if ( !a2 )
            goto LABEL_22;
          if ( (*(_BYTE *)(v19 + 26) & 0x40) == 0 )
            goto LABEL_22;
          v26 = v19 - ObpInfoMaskToOffset[*(_BYTE *)(v19 + 26) & 0x7F];
          if ( !*(_BYTE *)(*(_QWORD *)v26 + 24LL) )
            goto LABEL_22;
          if ( *(_QWORD *)(*(_QWORD *)v26 + 16LL) != 1LL )
          {
            LODWORD(v24) = *a4;
LABEL_22:
            if ( (v24 & 4) == 0
              || !a2
              || (unsigned __int8)ObpAuditObjectAccess(v33, BugCheckParameter1, (_DWORD)v12, v19, v25) )
            {
              *a3 = v21;
              return 0LL;
            }
            v29 = -1073741816;
            goto LABEL_52;
          }
          v29 = -1073700858;
        }
        else
        {
          v29 = -1073741790;
        }
      }
      else
      {
        v29 = -1073741788;
      }
LABEL_52:
      PsDereferenceSiloContext(v21);
      goto LABEL_35;
    }
  }
  return 3221225480LL;
}
