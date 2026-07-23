/*
 * XREFs of PfSnPopulateReadList @ 0x140660900
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     NtCreateEvent @ 0x14062DF70 (NtCreateEvent.c)
 *     PsSetCurrentThreadPrefetching @ 0x140660E10 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x140660E58 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406612C4 (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140661458 (PfSnCleanupPrefetchSectionInfo.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD *PoolWithTag; // r12
  _KPROCESS *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  unsigned int *v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  char *v12; // rcx
  char *v13; // r15
  char *v14; // r10
  __int64 v15; // rax
  int v16; // ebx
  unsigned int v17; // ebx
  __int64 v18; // rax
  char *v19; // rdi
  unsigned int v20; // edx
  int v21; // r13d
  int v22; // r13d
  bool v23; // zf
  wchar_t *v24; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  int v26; // esi
  bool v27; // r14
  unsigned int v28; // r9d
  BOOL v29; // r11d
  int v30; // r10d
  __int64 v31; // rax
  int v32; // ecx
  int v33; // r10d
  unsigned int v34; // edx
  __int64 v35; // rcx
  int v36; // ecx
  int v37; // eax
  char v38; // [rsp+58h] [rbp-B0h] BYREF
  bool v39; // [rsp+59h] [rbp-AFh]
  int v40; // [rsp+5Ch] [rbp-ACh]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  __int64 v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h]
  __int64 v44; // [rsp+78h] [rbp-90h]
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h]
  int v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  char *v50; // [rsp+A8h] [rbp-60h]
  __int64 v51; // [rsp+B0h] [rbp-58h]
  char *v52; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v55[48]; // [rsp+100h] [rbp-8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = a1;
  LODWORD(v3) = 0;
  v4 = *(_QWORD *)(v1 + 8);
  PoolWithTag = 0LL;
  v51 = a1;
  v6 = *(_KPROCESS **)(v1 + 16);
  v41 = v4;
  v44 = v1;
  v38 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v6, 0LL, (__int64)v55);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v8 < 0 )
    goto LABEL_56;
  v9 = *(unsigned int **)v4;
  v10 = v4;
  v11 = *(_DWORD *)(v2 + 40);
  v45 = 0LL;
  LODWORD(v42) = v11;
  v12 = (char *)v9 + v9[21];
  v13 = (char *)v9 + v9[23];
  v14 = (char *)v9 + v9[25];
  v50 = v12;
  v49 = *(_QWORD *)(v4 + 64);
  v15 = *(_QWORD *)(v4 + 72);
  v16 = *(_DWORD *)(v4 + 100) & 7;
  v47 = v15;
  v17 = *(_DWORD *)(v10 + 96) & 7 | (8 * (v16 | 8));
  v52 = v14;
  v3 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
  v40 = v3;
  if ( (unsigned int)v3 >= *(_DWORD *)(v1 + 32) )
    goto LABEL_3;
  while ( 1 )
  {
    v18 = (unsigned int)v3;
    v19 = &v12[32 * v3];
    v43 = v18;
    v20 = *((_DWORD *)v19 + 5);
    if ( (v20 & 1) == 0 )
      break;
LABEL_38:
    if ( v38 )
    {
      PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v10 + 56) + 56 * v18));
      v38 = 0;
    }
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
LABEL_29:
    v3 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    v40 = v3;
    if ( (unsigned int)v3 >= *(_DWORD *)(v1 + 32) )
    {
      v4 = v41;
      goto LABEL_51;
    }
    v11 = v42;
    v10 = v41;
    v12 = v50;
    v2 = v51;
    v14 = v52;
  }
  v21 = *(_DWORD *)(v2 + 44);
  v39 = 0;
  v22 = v21 & 1;
  if ( v22 )
  {
    v23 = ((unsigned __int8)v11 & BYTE1(v20) & 0x7F) == 0;
  }
  else
  {
    v23 = !_BitScanForward((unsigned int *)&v36, (v20 >> 8) & 0x7F);
    if ( v23 )
      v36 = 7;
    v37 = v11 & (1 << v36);
    v48 = v36;
    v39 = v37 != 0;
    if ( ((unsigned __int8)v11 & (unsigned __int8)(v20 >> 1) & 0x7F) != 0 )
      goto LABEL_10;
    v39 = v37 != 0;
    v23 = v37 == 0;
  }
  if ( v23 )
  {
LABEL_37:
    v18 = v43;
    goto LABEL_38;
  }
LABEL_10:
  v24 = (wchar_t *)&v14[*((unsigned int *)v19 + 3)];
  PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v24);
  if ( !PrefetchVolumeInfoInList )
  {
LABEL_36:
    v10 = v41;
    v1 = v44;
    goto LABEL_37;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v19 + 2) + 24), 0x4C506343u);
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 3) = v22;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    RtlInitUnicodeString(&DestinationString, &v24[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
    v26 = v40;
    if ( (int)PfSnGetSectionObject(
                v41,
                PrefetchVolumeInfoInList,
                (unsigned int)&DestinationString,
                (_DWORD)v19,
                v42,
                v40,
                v22,
                (__int64)EventHandle,
                (__int64)&v45,
                (__int64)&v38) >= 0 )
    {
      v27 = v39;
      v28 = 0;
      v29 = 1;
      if ( v39 )
      {
        PoolWithTag[*((unsigned int *)PoolWithTag + 2) + 2] = 0LL;
        v28 = 1;
        ++*((_DWORD *)PoolWithTag + 2);
        v29 = *(_QWORD *)(*(_QWORD *)(v45 + 40) + 16LL) != 0LL;
      }
      v30 = 0;
      v31 = *(int *)v19;
      v32 = v31 + *((_DWORD *)v19 + 1);
      v40 = 0;
      if ( v31 < v32 )
      {
        v33 = v42;
        while ( 1 )
        {
          v34 = *(_DWORD *)&v13[8 * v31 + 4];
          if ( (v34 & 1) == 0 )
          {
            if ( (v34 & 8) != 0 && !v29 )
            {
LABEL_22:
              if ( *(_DWORD *)&v13[8 * v31] || !v27 )
              {
                PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = (unsigned __int64)*(unsigned int *)&v13[8 * v31] << 9;
                ++v28;
              }
              else
              {
                v40 = 1;
              }
              goto LABEL_24;
            }
            if ( _bittest(&v33, (v34 >> 4) & 7) )
            {
              if ( v22 )
              {
                if ( (v34 & 2) != 0 )
                  goto LABEL_22;
              }
              else if ( (v34 & 4) != 0 )
              {
                goto LABEL_22;
              }
            }
          }
LABEL_24:
          if ( ++v31 >= v32 )
          {
            v30 = v40;
            break;
          }
        }
      }
      if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v27 || !v29 || v30 )
      {
        v1 = v44;
        PoolWithTag[2] |= v17;
        *PoolWithTag = v45;
        v35 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
        *(_QWORD *)(v49 + 8 * v35) = PoolWithTag;
        PoolWithTag = 0LL;
        _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 36), v28);
        if ( v38 )
        {
          *(_DWORD *)(v47 + 4 * v35) = v26;
          v38 = 0;
        }
        else
        {
          *(_DWORD *)(v47 + 4 * v35) = -1;
        }
        goto LABEL_29;
      }
    }
    goto LABEL_36;
  }
  LODWORD(v3) = v40;
  v8 = -1073741670;
  v1 = v44;
  v4 = v41;
LABEL_56:
  *(_DWORD *)(v1 + 40) = v8;
LABEL_51:
  if ( v38 )
    PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v4 + 56) + 56LL * (unsigned int)v3));
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v55, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
