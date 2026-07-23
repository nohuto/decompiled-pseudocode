/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x1406A14A0
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x140817D50 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x140817DB0 (FsRtlNotifyReportChange.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400901D0 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x14011B120 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406A264C (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x1406A2D54 (FsRtlNotifyUpdateBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x1406F8450 (RtlxOemStringToUnicodeSize.c)
 */

void __stdcall FsRtlNotifyFilterReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext,
        PVOID FilterContext)
{
  USHORT v10; // r14
  PSTRING v11; // r15
  __int64 v13; // r8
  struct _KTHREAD *CurrentThread; // rbx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v16; // rdi
  _LIST_ENTRY *v17; // rbx
  char v18; // r11
  char v19; // r12
  struct _LIST_ENTRY *Blink; // r9
  unsigned __int16 v21; // cx
  struct _LIST_ENTRY *v22; // rdx
  PSTRING v23; // r10
  USHORT v24; // cx
  __int16 Flink_low; // ax
  __int16 v26; // ax
  char *v27; // rax
  bool v28; // zf
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rax
  __int16 v31; // dx
  UINT Flink_high; // r13d
  _LIST_ENTRY *v33; // rcx
  __int16 v34; // dx
  char *v35; // r9
  int v36; // r8d
  int v37; // edx
  unsigned __int16 v38; // ax
  USHORT v39; // cx
  __int16 v40; // ax
  char v41; // r10
  int v42; // r8d
  int v43; // r11d
  unsigned int v44; // r9d
  unsigned __int8 v45; // r15
  struct _LIST_ENTRY *v46; // r14
  unsigned __int16 v47; // bx
  int v48; // r14d
  UINT v49; // r14d
  int v50; // r14d
  ULONG v51; // eax
  UINT v52; // r15d
  NTSTATUS v53; // eax
  struct _LIST_ENTRY *v54; // rcx
  struct _LIST_ENTRY *v55; // rax
  struct _LIST_ENTRY *v56; // rax
  struct _LIST_ENTRY *v57; // r10
  struct _LIST_ENTRY *PoolWithTag; // rax
  __int16 v59; // ax
  __int16 v60; // ax
  char v61; // [rsp+40h] [rbp-F8h]
  USHORT v62; // [rsp+44h] [rbp-F4h]
  unsigned __int16 v63; // [rsp+4Ch] [rbp-ECh]
  unsigned __int16 Length; // [rsp+50h] [rbp-E8h]
  int v66; // [rsp+54h] [rbp-E4h]
  OEM_STRING OemString; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v68; // [rsp+78h] [rbp-C0h]
  char *v69; // [rsp+80h] [rbp-B8h]
  int v70; // [rsp+88h] [rbp-B0h]
  unsigned int v71; // [rsp+8Ch] [rbp-ACh]
  int v72; // [rsp+90h] [rbp-A8h]
  OEM_STRING v73; // [rsp+98h] [rbp-A0h] BYREF
  UINT puResult[2]; // [rsp+A8h] [rbp-90h] BYREF
  _LIST_ENTRY **p_Flink; // [rsp+B0h] [rbp-88h]
  struct _LIST_ENTRY **p_Blink; // [rsp+B8h] [rbp-80h]
  _LIST_ENTRY *v77; // [rsp+C0h] [rbp-78h]
  _LIST_ENTRY *v78; // [rsp+C8h] [rbp-70h]
  _LIST_ENTRY *v79; // [rsp+D0h] [rbp-68h]
  _WORD v80[4]; // [rsp+D8h] [rbp-60h] BYREF
  char *Buffer; // [rsp+E0h] [rbp-58h]
  NTSTATUS v82; // [rsp+E8h] [rbp-50h]
  _LIST_ENTRY *v84; // [rsp+148h] [rbp+10h]

  v84 = NotifyList;
  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v13 = TargetNameOffset;
  v68 = 0LL;
  v69 = 0LL;
  *(_QWORD *)&v73.Length = 0LL;
  v73.Buffer = 0LL;
  *(_QWORD *)&OemString.Length = 0LL;
  OemString.Buffer = 0LL;
  v61 = 0;
  v72 = 0;
  if ( !TargetNameOffset && v11 )
    return;
  v69 = 0LL;
  v73.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v13 = TargetNameOffset;
    NotifyList = v84;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  v62 = v68;
  Length = v73.Length;
  v63 = OemString.Length;
  while ( 1 )
  {
    v79 = Flink;
    p_Flink = &Flink->Flink;
    if ( Flink == NotifyList )
      break;
    v16 = Flink - 2;
    v77 = Flink - 2;
    v17 = Flink - 2;
    v78 = v17;
    if ( v11 )
    {
      Blink = v16[8].Blink;
      v21 = (unsigned __int16)Blink->Flink;
      if ( LOWORD(Blink->Flink) && (HIDWORD(v16[4].Blink) & FilterMatch) != 0 )
      {
        v22 = v16[8].Blink;
        v23 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          Buffer = v11->Buffer;
          v24 = v10;
          v80[0] = v10;
          Flink_low = LOBYTE(v16[9].Flink);
          if ( (_WORD)v13 != Flink_low )
          {
            v24 = v13 - Flink_low;
            v80[0] = v13 - Flink_low;
          }
          v80[1] = v24;
          v23 = (PSTRING)v80;
          NormalizedParentName = (PSTRING)v80;
          Blink = v16[8].Blink;
          v22 = Blink;
          v21 = (unsigned __int16)Blink->Flink;
        }
        if ( v23->Length < v21 )
          goto LABEL_122;
        if ( v23->Length == v21 )
        {
          v19 = 1;
          goto LABEL_27;
        }
        v26 = (__int16)v16[4].Blink;
        if ( (v26 & 1) != 0 )
        {
          if ( (v26 & 0x10) != 0
            || ((v27 = &v23->Buffer[LOWORD(v22->Flink)], LOBYTE(v16[9].Flink) != 1)
              ? (v28 = *(_WORD *)v27 == 92)
              : (v28 = *v27 == 92),
                v28) )
          {
            v19 = 0;
LABEL_27:
            if ( !memcmp(Blink->Blink, v23->Buffer, v21)
              && (v19
               || (v29 = v16[1].Flink) == 0LL
               || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID, struct _LIST_ENTRY *))v29)(
                    v16->Blink,
                    TargetContext,
                    v16[1].Blink)) )
            {
              v30 = v16[4].Flink;
              if ( !v30
                || !FilterContext
                || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID))v30)(v16->Blink, FilterContext) )
              {
                v18 = v61;
                goto LABEL_35;
              }
            }
          }
        }
LABEL_122:
        NotifyList = v84;
      }
    }
    else if ( TargetContext == v16[1].Blink )
    {
      OemString.Buffer = 0LL;
      v63 = 0;
      OemString.Length = 0;
      v18 = 1;
      v61 = 1;
      v19 = 0;
LABEL_35:
      v31 = (__int16)v16[4].Blink;
      if ( (v31 & 2) == 0 )
      {
        Flink_high = (UINT)v16[6].Flink;
        if ( Flink_high )
        {
          p_Blink = 0LL;
          if ( HIDWORD(v16[6].Flink) )
          {
            Flink_high = HIDWORD(v16[6].Flink);
          }
          else
          {
            v33 = v16[3].Flink;
            if ( v33 != &v16[3] )
            {
              p_Blink = &v33[-11].Blink;
              Flink_high = (UINT)v33[1].Flink->Blink;
            }
          }
          if ( v19 )
          {
            v38 = 0;
            v63 = 0;
            OemString.Length = 0;
          }
          else if ( v18 )
          {
            v38 = v63;
          }
          else
          {
            v34 = v31 & 0x10;
            if ( v34 || (v35 = NormalizedParentName->Buffer, v35 != v11->Buffer) )
            {
              if ( !v69 )
              {
                v69 = v11->Buffer;
                v39 = v10;
                v62 = v10;
                LOWORD(v68) = v10;
                v40 = LOBYTE(v16[9].Flink);
                if ( TargetNameOffset != v40 )
                {
                  v39 = TargetNameOffset - v40;
                  v62 = TargetNameOffset - v40;
                  LOWORD(v68) = TargetNameOffset - v40;
                }
                WORD1(v68) = v39;
              }
              v41 = 0;
              v42 = 0;
              if ( !v34 )
              {
                v43 = 1;
                v70 = 1;
                v44 = 0;
                v71 = 0;
                v45 = (unsigned __int8)v16[9].Flink;
                v46 = v16[8].Blink;
                v47 = (unsigned __int16)v46->Flink;
                if ( v45 == 1 )
                {
                  while ( v44 < v47 )
                  {
                    if ( *((_BYTE *)&v46->Blink->Flink + v44) == 92 )
                      v70 = ++v43;
                    v71 = ++v44;
                  }
                  while ( v69[v42] != 92 || (unsigned __int8)++v41 != v43 )
                    ++v42;
                }
                else
                {
                  while ( v44 < v47 >> 1 )
                  {
                    if ( *((_WORD *)&v46->Blink->Flink + v44) == 92 )
                      v70 = ++v43;
                    v71 = ++v44;
                  }
                  while ( *(_WORD *)&v69[2 * v42] != 92 || (unsigned __int8)++v41 != v43 )
                    ++v42;
                  v42 *= v45;
                }
                v18 = v61;
                v11 = FullTargetName;
              }
              v66 = v42 + LOBYTE(v16[9].Flink);
              OemString.Buffer = &v69[v66];
              v38 = v62 - v66;
            }
            else
            {
              v36 = (int)v16[8].Blink->Flink;
              v37 = LOBYTE(v16[9].Flink);
              OemString.Buffer = &v35[v37 + v36];
              v38 = NormalizedParentName->Length - v37 - v36;
            }
            v63 = v38;
            OemString.Length = v38;
            OemString.MaximumLength = v38;
          }
          v48 = 12;
          if ( v18 )
          {
            v49 = StreamName->Length + 12;
          }
          else
          {
            if ( !v19 )
            {
              if ( LOBYTE(v16[9].Flink) == 1 )
                v50 = RtlxOemStringToUnicodeSize(&OemString) + 10;
              else
                v50 = v38 + 12;
              v48 = v50 + 2;
            }
            if ( v73.Buffer )
            {
              LOWORD(v51) = Length;
            }
            else
            {
              v73.Buffer = &v11->Buffer[TargetNameOffset];
              LOWORD(v51) = v11->Length - TargetNameOffset;
              Length = v51;
              v73.Length = v51;
              v73.MaximumLength = v51;
            }
            if ( LOBYTE(v16[9].Flink) == 1 )
              v51 = RtlxOemStringToUnicodeSize(&v73) - 2;
            else
              v51 = (unsigned __int16)v51;
            v49 = v51 + v48;
            if ( StreamName )
            {
              if ( LOBYTE(v16[9].Flink) == 2 )
                v49 += StreamName->Length + 2;
              else
                v49 += RtlxOemStringToUnicodeSize(StreamName);
            }
          }
          v52 = (LODWORD(v16[6].Blink) + 3) & 0xFFFFFFFC;
          puResult[1] = v52;
          v53 = RtlUIntAdd(v52, v49, puResult);
          v82 = v53;
          if ( v49 > Flink_high || v53 || puResult[0] > Flink_high )
          {
            LOWORD(v16[4].Blink) |= 2u;
            v59 = (__int16)v16[4].Blink;
            v17 = v16;
          }
          else
          {
            v54 = 0LL;
            v55 = v16[5].Blink;
            if ( v55 )
            {
              *(_DWORD *)((char *)&v55->Flink + HIDWORD(v16[6].Blink)) = v52 - HIDWORD(v16[6].Blink);
              HIDWORD(v16[6].Blink) = v52;
              v54 = (struct _LIST_ENTRY *)((char *)v16[5].Blink + v52);
              goto LABEL_104;
            }
            if ( p_Blink )
            {
              v56 = p_Blink[3];
              if ( v56 )
              {
                v54 = p_Blink[3];
                v16[5].Blink = v56;
                goto LABEL_103;
              }
              v57 = p_Blink[1];
              if ( v57 )
              {
                if ( (BYTE2(v57->Blink) & 5) != 0 )
                  v54 = v57[1].Blink;
                else
                  v54 = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache((PMDL)v57, 0, MmCached, 0LL, 0, 0x40000010u);
                v16[5].Blink = v54;
LABEL_103:
                HIDWORD(v16[6].Flink) = Flink_high;
              }
            }
LABEL_104:
            if ( !v16[5].Blink )
            {
              PsChargePoolQuota((PEPROCESS)v16[7].Blink, PagedPool, Flink_high);
              PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)17, Flink_high, 0x4E725346u);
              v16[5].Blink = PoolWithTag;
              v16[5].Flink = PoolWithTag;
              memset(v16[5].Blink, 0, Flink_high);
              HIDWORD(v16[6].Flink) = Flink_high;
              v54 = v16[5].Blink;
            }
            if ( v54 )
            {
              if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                      (_DWORD)v54,
                                      Action,
                                      (unsigned int)&OemString,
                                      (unsigned int)&v73,
                                      (__int64)StreamName,
                                      LOBYTE(v16[9].Flink) == 2,
                                      v49) )
                LODWORD(v16[6].Blink) = v52 + v49;
              else
                LOWORD(v16[4].Blink) |= 2u;
            }
            v17 = v78;
            v59 = (__int16)v78[4].Blink;
          }
          if ( (v59 & 2) != 0 && v16[5].Blink )
          {
            if ( v16[5].Flink )
            {
              PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v16[7].Blink, HIDWORD(v16[6].Flink));
              ExFreePoolWithTag(v16[5].Flink, 0);
            }
            v16[5].Blink = 0LL;
            v16[5].Flink = 0LL;
            v16[6].Blink = 0LL;
            HIDWORD(v16[6].Flink) = 0;
          }
          v11 = FullTargetName;
          v10 = TargetNameOffset;
        }
      }
      v60 = (__int16)v17[4].Blink;
      if ( Action == 4 )
      {
        LOWORD(v17[4].Blink) = v60 | 8;
      }
      else
      {
        LOWORD(v17[4].Blink) = v60 & 0xFFF7;
        if ( v16[3].Flink != &v16[3] )
          FsRtlNotifyCompleteIrpList(v16, 0LL, v13);
      }
      goto LABEL_122;
    }
    Flink = *p_Flink;
    v13 = TargetNameOffset;
  }
  v28 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v28 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
