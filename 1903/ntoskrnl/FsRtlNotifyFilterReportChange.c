/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x1406C1620
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x140850670 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x1408506D0 (FsRtlNotifyReportChange.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14005B090 (PsReturnProcessPagedPoolQuota.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     PsChargePoolQuota @ 0x14011B6A0 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406C2888 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x1406C2F94 (FsRtlNotifyUpdateBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407121B0 (RtlxOemStringToUnicodeSize.c)
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
  PLIST_ENTRY v12; // r9
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *p_Flink; // rcx
  _QWORD *v17; // rdi
  char v18; // r11
  char v19; // r12
  __int16 v20; // dx
  unsigned int v21; // r13d
  _QWORD *v22; // rcx
  unsigned __int16 v23; // ax
  int v24; // r14d
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  PVOID v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  PVOID PoolWithTag; // rax
  __int64 v32; // rax
  __int16 v33; // ax
  __int64 v34; // r9
  unsigned __int16 v35; // dx
  PSTRING v36; // r10
  USHORT v37; // cx
  __int16 v38; // ax
  __int16 v39; // ax
  char *v40; // rax
  bool v41; // zf
  unsigned __int8 (__fastcall *v42)(_QWORD, PVOID, _QWORD); // rax
  unsigned __int8 (__fastcall *v43)(_QWORD, PVOID); // rax
  __int16 v44; // dx
  char *v45; // r9
  int v46; // edx
  USHORT v47; // ax
  USHORT v48; // cx
  __int16 v49; // ax
  char v50; // r10
  int v51; // r8d
  int v52; // r11d
  unsigned int v53; // r9d
  unsigned __int8 v54; // r15
  unsigned __int16 *v55; // rbx
  unsigned __int16 v56; // r14
  char *v57; // rdx
  unsigned __int16 *v58; // r14
  unsigned __int16 v59; // bx
  int v60; // r14d
  ULONG v61; // eax
  ULONG v62; // eax
  char v63; // [rsp+40h] [rbp-F8h]
  USHORT v64; // [rsp+42h] [rbp-F6h]
  unsigned __int16 v65; // [rsp+4Ch] [rbp-ECh]
  unsigned __int16 Length; // [rsp+50h] [rbp-E8h]
  USHORT v67; // [rsp+52h] [rbp-E6h]
  _QWORD *v68; // [rsp+60h] [rbp-D8h]
  OEM_STRING OemString; // [rsp+70h] [rbp-C8h] BYREF
  int v70; // [rsp+80h] [rbp-B8h]
  unsigned int v71; // [rsp+84h] [rbp-B4h]
  int v72; // [rsp+88h] [rbp-B0h]
  __int64 v73; // [rsp+90h] [rbp-A8h]
  char *v74; // [rsp+98h] [rbp-A0h]
  OEM_STRING v75; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v76; // [rsp+B0h] [rbp-88h]
  unsigned int v77; // [rsp+B4h] [rbp-84h]
  __int64 v78; // [rsp+B8h] [rbp-80h] BYREF
  char *Buffer; // [rsp+C0h] [rbp-78h]
  _QWORD *v80; // [rsp+C8h] [rbp-70h]
  _QWORD *v81; // [rsp+D0h] [rbp-68h]
  _QWORD *v82; // [rsp+D8h] [rbp-60h]
  _QWORD *v83; // [rsp+E8h] [rbp-50h]

  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v12 = NotifyList;
  v14 = v10;
  v67 = v10;
  v78 = 0LL;
  Buffer = 0LL;
  v73 = 0LL;
  *(_QWORD *)&v75.Length = 0LL;
  *(_QWORD *)&OemString.Length = 0LL;
  OemString.Buffer = 0LL;
  v63 = 0;
  v72 = 0;
  if ( !v10 && v11 )
    return;
  v74 = 0LL;
  v75.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v14 = v10;
    v12 = NotifyList;
  }
  ++*((_DWORD *)NotifySync + 16);
  p_Flink = &v12->Flink->Flink;
  v64 = v73;
  Length = v75.Length;
  v65 = OemString.Length;
  while ( 1 )
  {
    v82 = p_Flink;
    v68 = p_Flink;
    if ( p_Flink == (_QWORD *)v12 )
      break;
    v17 = p_Flink - 4;
    v81 = p_Flink - 4;
    v83 = p_Flink - 4;
    if ( v11 )
    {
      v34 = v17[17];
      v35 = *(_WORD *)v34;
      if ( !*(_WORD *)v34 || (*((_DWORD *)v17 + 19) & FilterMatch) == 0 )
        goto LABEL_40;
      v36 = NormalizedParentName;
      if ( !NormalizedParentName )
      {
        Buffer = v11->Buffer;
        v37 = v10;
        LOWORD(v78) = v10;
        v38 = *((unsigned __int8 *)v17 + 144);
        if ( (_WORD)v14 != v38 )
        {
          v37 = v14 - v38;
          LOWORD(v78) = v14 - v38;
        }
        WORD1(v78) = v37;
        v36 = (PSTRING)&v78;
        NormalizedParentName = (PSTRING)&v78;
        v34 = v17[17];
        v35 = *(_WORD *)v34;
        p_Flink = v68;
      }
      if ( v36->Length < v35 )
        goto LABEL_40;
      if ( v36->Length == v35 )
      {
        v19 = 1;
      }
      else
      {
        v39 = *((_WORD *)v17 + 36);
        if ( (v39 & 1) == 0 )
          goto LABEL_40;
        if ( (v39 & 0x10) == 0 )
        {
          v40 = v36->Buffer;
          v41 = *((_BYTE *)v17 + 144) == 1 ? v40[v35] == 92 : *(_WORD *)&v40[v35] == 92;
          if ( !v41 )
            goto LABEL_39;
        }
        v19 = 0;
      }
      if ( !memcmp(*(const void **)(v34 + 8), v36->Buffer, v35)
        && (v19
         || (v42 = (unsigned __int8 (__fastcall *)(_QWORD, PVOID, _QWORD))v17[2]) == 0LL
         || v42(v17[1], TargetContext, v17[3])) )
      {
        v43 = (unsigned __int8 (__fastcall *)(_QWORD, PVOID))v17[8];
        if ( !v43 || !FilterContext || v43(v17[1], FilterContext) )
        {
          v18 = v63;
          goto LABEL_10;
        }
      }
      goto LABEL_39;
    }
    if ( TargetContext == (PVOID)v17[3] )
    {
      OemString.Buffer = 0LL;
      v65 = 0;
      OemString.Length = 0;
      v18 = 1;
      v63 = 1;
      v19 = 0;
LABEL_10:
      v20 = *((_WORD *)v17 + 36);
      if ( (v20 & 2) == 0 )
      {
        v21 = *((_DWORD *)v17 + 24);
        if ( v21 )
        {
          v80 = 0LL;
          if ( *((_DWORD *)v17 + 25) )
          {
            v21 = *((_DWORD *)v17 + 25);
          }
          else
          {
            v22 = (_QWORD *)v17[6];
            if ( v22 != v17 + 6 )
            {
              v80 = v22 - 21;
              v21 = *(_DWORD *)(v22[2] + 8LL);
            }
          }
          if ( v19 )
          {
            v23 = 0;
            v65 = 0;
            OemString.Length = 0;
          }
          else if ( v18 )
          {
            v23 = v65;
          }
          else
          {
            v44 = v20 & 0x10;
            if ( v44 || (v45 = NormalizedParentName->Buffer, v45 != v11->Buffer) )
            {
              if ( v74 )
              {
                v48 = v64;
              }
              else
              {
                v74 = v11->Buffer;
                v48 = v10;
                v64 = v10;
                LOWORD(v73) = v10;
                v49 = *((unsigned __int8 *)v17 + 144);
                if ( v67 != v49 )
                {
                  v48 = v67 - v49;
                  v64 = v67 - v49;
                  LOWORD(v73) = v67 - v49;
                }
                WORD1(v73) = v48;
              }
              v50 = 0;
              v51 = 0;
              if ( v44 )
              {
                v57 = v74;
              }
              else
              {
                v52 = 1;
                v70 = 1;
                v53 = 0;
                v71 = 0;
                v54 = *((_BYTE *)v17 + 144);
                if ( v54 == 1 )
                {
                  v55 = (unsigned __int16 *)v17[17];
                  v56 = *v55;
                  while ( v53 < v56 )
                  {
                    if ( *(_BYTE *)(v53 + *((_QWORD *)v55 + 1)) == 92 )
                      v70 = ++v52;
                    v71 = ++v53;
                  }
                  v57 = v74;
                  while ( v74[v51] != 92 || (unsigned __int8)++v50 != v52 )
                    ++v51;
                }
                else
                {
                  v58 = (unsigned __int16 *)v17[17];
                  v59 = *v58;
                  while ( v53 < v59 >> 1 )
                  {
                    if ( *(_WORD *)(*((_QWORD *)v58 + 1) + 2LL * v53) == 92 )
                      v70 = ++v52;
                    v71 = ++v53;
                  }
                  v57 = v74;
                  while ( *(_WORD *)&v74[2 * v51] != 92 || (unsigned __int8)++v50 != v52 )
                    ++v51;
                  v51 *= v54;
                }
                v11 = FullTargetName;
                v48 = v64;
                v18 = v63;
              }
              v14 = (unsigned int)*((unsigned __int8 *)v17 + 144) + v51;
              OemString.Buffer = &v57[(unsigned int)v14];
              v47 = v48;
            }
            else
            {
              v14 = *(unsigned __int16 *)v17[17];
              v46 = *((unsigned __int8 *)v17 + 144);
              OemString.Buffer = &v45[(unsigned int)(v46 + v14)];
              v47 = NormalizedParentName->Length - v46;
            }
            v23 = v47 - v14;
            v65 = v23;
            OemString.Length = v23;
            OemString.MaximumLength = v23;
          }
          v24 = 12;
          if ( v18 )
          {
            v25 = StreamName->Length + 12;
          }
          else
          {
            if ( !v19 )
            {
              if ( *((_BYTE *)v17 + 144) == 1 )
                v60 = RtlxOemStringToUnicodeSize(&OemString) + 10;
              else
                v60 = v23 + 12;
              v24 = v60 + 2;
            }
            if ( v75.Buffer )
            {
              LOWORD(v61) = Length;
            }
            else
            {
              v75.Buffer = &v11->Buffer[TargetNameOffset];
              LOWORD(v61) = v11->Length - TargetNameOffset;
              Length = v61;
              v75.Length = v61;
              v75.MaximumLength = v61;
            }
            if ( *((_BYTE *)v17 + 144) == 1 )
              v61 = RtlxOemStringToUnicodeSize(&v75) - 2;
            else
              v61 = (unsigned __int16)v61;
            v25 = v61 + v24;
            if ( StreamName )
            {
              if ( *((_BYTE *)v17 + 144) == 2 )
              {
                v62 = StreamName->Length;
                v25 += 2;
              }
              else
              {
                v62 = RtlxOemStringToUnicodeSize(StreamName);
              }
              v25 += v62;
            }
          }
          v26 = (*((_DWORD *)v17 + 26) + 3) & 0xFFFFFFFC;
          v76 = v26;
          if ( v25 > v21 || (v77 = v26 + v25, v26 + v25 > v21) )
          {
            *((_WORD *)v17 + 36) |= 2u;
            v33 = *((_WORD *)v17 + 36);
          }
          else
          {
            v27 = 0LL;
            v28 = v17[11];
            if ( v28 )
            {
              *(_DWORD *)(v28 + *((unsigned int *)v17 + 27)) = v26 - *((_DWORD *)v17 + 27);
              *((_DWORD *)v17 + 27) = v26;
              v27 = (PVOID)(v17[11] + v26);
            }
            else
            {
              if ( !v80 )
                goto LABEL_26;
              v29 = v80[3];
              if ( v29 )
              {
                v27 = (PVOID)v80[3];
                v17[11] = v29;
              }
              else
              {
                v30 = v80[1];
                if ( !v30 )
                  goto LABEL_26;
                if ( (*(_BYTE *)(v30 + 10) & 5) != 0 )
                  v27 = *(PVOID *)(v30 + 24);
                else
                  v27 = MmMapLockedPagesSpecifyCache((PMDL)v30, 0, MmCached, 0LL, 0, 0x40000010u);
                v17[11] = v27;
              }
              *((_DWORD *)v17 + 25) = v21;
            }
LABEL_26:
            if ( !v17[11] )
            {
              PsChargePoolQuota((PEPROCESS)v17[15], PagedPool, v21);
              PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v21, 0x4E725346u);
              v17[11] = PoolWithTag;
              v17[10] = PoolWithTag;
              *((_DWORD *)v17 + 25) = v21;
              v27 = (PVOID)v17[11];
            }
            if ( v27 )
            {
              v32 = *((unsigned int *)v17 + 26);
              if ( v26 > (unsigned int)v32 )
                memset((void *)(v17[11] + v32), 0, v26 - (unsigned int)v32);
              if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                      (_DWORD)v27,
                                      Action,
                                      (unsigned int)&OemString,
                                      (unsigned int)&v75,
                                      (__int64)StreamName,
                                      *((_BYTE *)v17 + 144) == 2,
                                      v25) )
                *((_DWORD *)v17 + 26) = v26 + v25;
              else
                *((_WORD *)v17 + 36) |= 2u;
            }
            v33 = *((_WORD *)v83 + 36);
          }
          if ( (v33 & 2) != 0 && v17[11] )
          {
            if ( v17[10] )
            {
              PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v17[15], *((unsigned int *)v17 + 25));
              ExFreePoolWithTag((PVOID)v17[10], 0);
            }
            v17[11] = 0LL;
            v17[10] = 0LL;
            v17[13] = 0LL;
            *((_DWORD *)v17 + 25) = 0;
          }
          v11 = FullTargetName;
          v10 = TargetNameOffset;
        }
      }
      if ( Action == 4 )
      {
        *((_WORD *)v17 + 36) |= 8u;
      }
      else
      {
        *((_WORD *)v17 + 36) &= ~8u;
        if ( (_QWORD *)v17[6] != v17 + 6 )
          FsRtlNotifyCompleteIrpList(v17, 0LL, v14);
      }
LABEL_39:
      p_Flink = v68;
LABEL_40:
      v12 = NotifyList;
    }
    p_Flink = (_QWORD *)*p_Flink;
    v14 = v67;
  }
  v41 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v41 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
