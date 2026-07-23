/*
 * XREFs of PiDqIrpQueryCreate @ 0x140591B08
 * Callers:
 *     PiDqDispatch @ 0x140591640 (PiDqDispatch.c)
 * Callees:
 *     IoSetActivityIdThread @ 0x140006780 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x1400067A0 (IoClearActivityIdThread.c)
 *     PsGetCurrentThreadProcessId @ 0x14004D240 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     McTemplateK0pqzzzzzzz @ 0x140288E84 (McTemplateK0pqzzzzzzz.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDqQueryFreeActiveData @ 0x140591124 (PiDqQueryFreeActiveData.c)
 *     PnpIsNullGuid @ 0x1405911B0 (PnpIsNullGuid.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1405911DC (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryValidateQueryData @ 0x14059193C (PiDqQueryValidateQueryData.c)
 *     PiDqIrpComplete @ 0x140591A9C (PiDqIrpComplete.c)
 *     PiDqQuerySerializeActionQueue @ 0x140592044 (PiDqQuerySerializeActionQueue.c)
 *     PnpConvertDevpropcompkeyArrayToString @ 0x140828D9C (PnpConvertDevpropcompkeyArrayToString.c)
 *     PiDqConvertObjectTypeToString @ 0x14082BC50 (PiDqConvertObjectTypeToString.c)
 *     PiDqConvertQueryFlagsToString @ 0x14082BD18 (PiDqConvertQueryFlagsToString.c)
 *     FilterConvertToString @ 0x14090612C (FilterConvertToString.c)
 */

__int64 __fastcall PiDqIrpQueryCreate(IRP *a1)
{
  IRP *v1; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v3; // rsi
  char v4; // r14
  PVOID v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  int v8; // eax
  int ValidateQueryData; // edi
  void **v10; // r14
  unsigned int Length; // r8d
  struct _KTHREAD *v12; // rax
  PVOID v14; // r13
  void *v15; // r12
  unsigned int *v16; // r14
  int v17; // edx
  unsigned int v18; // r8d
  const wchar_t *v19; // rax
  PVOID v20; // rax
  int v21; // eax
  PVOID v22; // rax
  unsigned int v23; // eax
  PVOID v24; // rax
  unsigned int v25; // ecx
  _WORD *v26; // rdx
  PVOID v27; // rax
  int v28; // eax
  PVOID v29; // rax
  PVOID v30; // rax
  int v31; // eax
  int CurrentThreadProcessId; // eax
  __int64 v33; // rdx
  unsigned int v34; // eax
  PVOID PoolWithTag; // rax
  unsigned int v36; // ecx
  PVOID v37; // r8
  _WORD *v38; // rdx
  __int64 v39; // [rsp+20h] [rbp-118h]
  char v40; // [rsp+61h] [rbp-D7h]
  PVOID P; // [rsp+68h] [rbp-D0h]
  unsigned int NumberOfBytes; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+74h] [rbp-C4h] BYREF
  SIZE_T v44; // [rsp+78h] [rbp-C0h] BYREF
  PVOID v45; // [rsp+80h] [rbp-B8h]
  unsigned int v46; // [rsp+88h] [rbp-B0h] BYREF
  const wchar_t *v47; // [rsp+90h] [rbp-A8h]
  PVOID v48; // [rsp+98h] [rbp-A0h]
  PVOID v49; // [rsp+A0h] [rbp-98h]
  unsigned int v50; // [rsp+A8h] [rbp-90h] BYREF
  PVOID v51; // [rsp+B0h] [rbp-88h]
  PVOID FsContext2; // [rsp+B8h] [rbp-80h]
  PVOID v53; // [rsp+C0h] [rbp-78h]
  IRP *v54; // [rsp+C8h] [rbp-70h]
  struct _IO_STACK_LOCATION *v55; // [rsp+D0h] [rbp-68h]
  __int64 v56; // [rsp+D8h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp-58h]
  __int128 v58; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v59; // [rsp+F8h] [rbp-40h] BYREF

  v1 = a1;
  v54 = a1;
  v47 = (const wchar_t *)a1;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v55 = CurrentStackLocation;
  v49 = CurrentStackLocation;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  v3 = (__int64)FsContext2;
  v4 = 0;
  v5 = 0LL;
  v53 = 0LL;
  v40 = 0;
  v46 = 0;
  v50 = 0;
  v58 = 0uLL;
  if ( !FsContext2 )
  {
    ValidateQueryData = -1073741637;
    goto LABEL_17;
  }
  if ( !a1->AssociatedIrp.MasterIrp )
  {
    ValidateQueryData = -1073741811;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v3 + 64;
  ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
  v7 = *(_DWORD *)(v3 + 216);
  if ( (v7 & 8) != 0 )
  {
    ValidateQueryData = -1073741536;
  }
  else if ( (v7 & 0x10) != 0 || (v8 = v7 | 0x10, *(_DWORD *)(v3 + 216) = v8, v4 = 1, (v8 & 4) != 0) )
  {
    ValidateQueryData = -1073741637;
  }
  else
  {
    if ( CurrentStackLocation->Parameters.Read.Length >= 0x10 )
    {
      ValidateQueryData = MesDecodeBufferHandleCreate(
                            v1->AssociatedIrp.MasterIrp,
                            CurrentStackLocation->Parameters.Create.Options,
                            v3 + 16);
      if ( ValidateQueryData < 0 )
        goto LABEL_13;
      v10 = (void **)(v3 + 24);
      NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_140350000, &off_140400520, 0, v3 + 24);
      ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(v3 + 24));
      if ( ValidateQueryData < 0 )
        goto LABEL_13;
      if ( !PnpIsNullGuid(*v10) )
      {
        v59 = *(_OWORD *)*v10;
        v5 = IoSetActivityIdThread(&v59);
        v53 = v5;
        v40 = 1;
      }
      if ( (byte_140406846 & 0x40) == 0 )
      {
LABEL_12:
        *(_DWORD *)(v3 + 216) |= 4u;
LABEL_13:
        v4 = 1;
        goto LABEL_14;
      }
      v14 = 0LL;
      v45 = 0LL;
      FsContext2 = 0LL;
      v56 = 0LL;
      v49 = 0LL;
      v15 = 0LL;
      v51 = 0LL;
      v48 = 0LL;
      v16 = (unsigned int *)*v10;
      if ( (int)PiDqConvertObjectTypeToString(v16[4], &v56) < 0 )
      {
LABEL_86:
        if ( v48 )
          ExFreePoolWithTag(v48, 0x58706E50u);
        if ( v15 )
          ExFreePoolWithTag(v15, 0x58706E50u);
        if ( v49 )
          ExFreePoolWithTag(v49, 0x58706E50u);
        if ( v51 )
          ExFreePoolWithTag(v51, 0x58706E50u);
        if ( v14 )
          ExFreePoolWithTag(v14, 0x58706E50u);
        v5 = v53;
        goto LABEL_12;
      }
      v17 = 0;
      v47 = 0LL;
      v18 = v16[5];
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v19 = L"Instance";
        }
        else
        {
          if ( v18 != 2 )
          {
            v17 = -1073741811;
            goto LABEL_40;
          }
          v19 = L"Instances";
        }
      }
      else
      {
        v19 = L"Type";
      }
      v47 = v19;
LABEL_40:
      if ( v17 < 0 )
        goto LABEL_86;
      if ( v18 == 1 )
      {
        FsContext2 = (PVOID)*((_QWORD *)v16 + 3);
      }
      else if ( v18 == 2 )
      {
        v34 = v16[6];
        if ( v34 <= 2 )
          goto LABEL_86;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v34, 0x58706E50u);
        v48 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_86;
        memmove(PoolWithTag, *((const void **)v16 + 4), 2LL * v16[6]);
        v36 = v16[6] - 2;
        v37 = v48;
        if ( v16[6] != 2 )
        {
          v38 = (char *)v48 + 2 * v36;
          do
          {
            if ( !*v38 )
              *v38 = 32;
            --v38;
            --v36;
          }
          while ( v36 );
        }
        FsContext2 = v37;
      }
      NumberOfBytes = 512;
      v20 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
      P = v20;
      if ( !v20 )
      {
        v15 = 0LL;
        goto LABEL_86;
      }
      v21 = PiDqConvertQueryFlagsToString(v16[10], v20, 512LL, &NumberOfBytes);
      if ( v21 == -1073741789 )
      {
        ExFreePoolWithTag(P, 0x58706E50u);
        v22 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x58706E50u);
        P = v22;
        if ( !v22 )
        {
          v15 = 0LL;
          v14 = 0LL;
          goto LABEL_86;
        }
        v21 = PiDqConvertQueryFlagsToString(v16[10], v22, NumberOfBytes, &NumberOfBytes);
      }
      if ( v21 < 0 )
        goto LABEL_84;
      if ( (v16[10] & 4) != 0 )
      {
        v23 = v16[12];
        if ( v23 <= 2 )
          goto LABEL_84;
        v24 = ExAllocatePoolWithTag(PagedPool, 2LL * v23, 0x58706E50u);
        v49 = v24;
        if ( !v24 )
          goto LABEL_84;
        memmove(v24, *((const void **)v16 + 7), 2LL * v16[12]);
        v25 = v16[12] - 2;
        if ( v16[12] != 2 )
        {
          v26 = (char *)v49 + 2 * v25;
          do
          {
            if ( !*v26 )
              *v26 = 32;
            --v26;
            --v25;
          }
          while ( v25 );
        }
      }
      if ( !v16[16] )
        goto LABEL_62;
      NumberOfBytes_4 = 512;
      v27 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
      v51 = v27;
      if ( v27 )
      {
        v28 = PnpConvertDevpropcompkeyArrayToString(
                *((_QWORD *)v16 + 9),
                v16[16],
                (_DWORD)v27,
                512,
                (__int64)&NumberOfBytes_4);
        if ( v28 == -1073741789 )
        {
          ExFreePoolWithTag(v51, 0x58706E50u);
          v29 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x58706E50u);
          v51 = v29;
          if ( !v29 )
            goto LABEL_84;
          v28 = PnpConvertDevpropcompkeyArrayToString(
                  *((_QWORD *)v16 + 9),
                  v16[16],
                  (_DWORD)v29,
                  NumberOfBytes_4,
                  (__int64)&NumberOfBytes_4);
        }
        if ( v28 >= 0 )
        {
LABEL_62:
          if ( !v16[20] )
            goto LABEL_68;
          LODWORD(v44) = 512;
          v30 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
          v45 = v30;
          if ( v30 )
          {
            v31 = FilterConvertToString(v16[20], *((_QWORD *)v16 + 11), 512, (_DWORD)v30, (__int64)&v44);
            if ( v31 != -1073741789 )
              goto LABEL_67;
            ExFreePoolWithTag(v45, 0x58706E50u);
            v30 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v44, 0x58706E50u);
            v45 = v30;
            if ( v30 )
            {
              v31 = FilterConvertToString(v16[20], *((_QWORD *)v16 + 11), v44, (_DWORD)v30, (__int64)&v44);
LABEL_67:
              if ( v31 < 0 )
              {
LABEL_83:
                v14 = v45;
                goto LABEL_85;
              }
LABEL_68:
              if ( (byte_140406846 & 0x40) != 0 )
              {
                CurrentThreadProcessId = PsGetCurrentThreadProcessId();
                v14 = v45;
                v15 = P;
                LODWORD(v39) = CurrentThreadProcessId;
                McTemplateK0pqzzzzzzz(v56, v33, (const GUID *)v16, v3, v39, v56, v47, FsContext2, P, v49, v51, v45);
                goto LABEL_86;
              }
              goto LABEL_83;
            }
          }
          v14 = v30;
LABEL_85:
          v15 = P;
          goto LABEL_86;
        }
      }
LABEL_84:
      v14 = 0LL;
      goto LABEL_85;
    }
    ValidateQueryData = -1073741789;
  }
LABEL_14:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  CurrentStackLocation = v55;
  v1 = v54;
  if ( ValidateQueryData >= 0 )
  {
    Length = v55->Parameters.Read.Length;
    if ( Length <= 0x10 )
      v46 = 16;
    else
      ValidateQueryData = PiDqQuerySerializeActionQueue(
                            v3,
                            v54->AssociatedIrp.MasterIrp,
                            Length,
                            (unsigned int)&v46,
                            (__int64)&v50);
  }
LABEL_17:
  if ( v4 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
    if ( ValidateQueryData < 0 )
    {
      *(_DWORD *)(v3 + 216) |= 1u;
      PiDqQueryFreeActiveData(v3);
    }
    else
    {
      PiDqQueryGetNextIoctlInfo(v3, CurrentStackLocation->Parameters.Read.Length, v50, &v58);
    }
    *(_DWORD *)(v3 + 216) &= ~0x10u;
    ExReleasePushLockEx(v3 + 64, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete(v1, ValidateQueryData, v46, &v58);
  if ( v40 )
    IoClearActivityIdThread(v5);
  return (unsigned int)ValidateQueryData;
}
