/*
 * XREFs of IopQueryNameInternal @ 0x140629D54
 * Callers:
 *     IoQueryFileDosDeviceName @ 0x140627DE0 (IoQueryFileDosDeviceName.c)
 *     IopQueryName @ 0x140629D20 (IopQueryName.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400377B0 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     IopExceptionFilterMode @ 0x1402937CC (IopExceptionFilterMode.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetFileInformation @ 0x140627E84 (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140685F00 (IoVolumeDeviceToDosName.c)
 */

__int64 __fastcall IopQueryNameInternal(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        char a3,
        UNICODE_STRING *a4,
        SIZE_T NumberOfBytes,
        _DWORD *a6,
        char a7)
{
  struct _FILE_OBJECT *v8; // rdx
  UNICODE_STRING *v9; // r12
  char v10; // r13
  ULONG v11; // esi
  UNICODE_STRING *PoolWithTagPriority; // rax
  UNICODE_STRING *v13; // r14
  _DWORD *p_Type; // rcx
  NTSTATUS NameStringMode; // ebx
  UNICODE_STRING *v16; // rdx
  UNICODE_STRING *v17; // r15
  char v18; // r8
  struct _FILE_OBJECT *v19; // rbx
  char v20; // cl
  struct _IRP *v21; // r14
  NTSTATUS FileInformation; // eax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // esi
  char *v26; // r15
  ULONG Length; // ecx
  unsigned int v29; // eax
  int v30; // ecx
  __int64 v31; // [rsp+40h] [rbp-68h] BYREF
  char *v32; // [rsp+48h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-58h]
  _QWORD v34[10]; // [rsp+58h] [rbp-50h] BYREF
  bool v36; // [rsp+B8h] [rbp+10h]
  char v37; // [rsp+B8h] [rbp+10h]

  v8 = a1;
  v9 = 0LL;
  P = 0LL;
  v36 = 0;
  v10 = 0;
  v34[0] = 0LL;
  v34[1] = 0LL;
  v11 = 16;
  if ( (unsigned int)NumberOfBytes >= 0x10 )
    v11 = NumberOfBytes;
  if ( a7 == 1 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTagPriority(
                                                PagedPool,
                                                v11,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v11, 0x20206F49u);
    v9 = PoolWithTagPriority;
    P = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
    {
      NameStringMode = -1073741670;
      goto LABEL_41;
    }
    v13 = PoolWithTagPriority;
    v8 = a1;
  }
  else
  {
    v13 = (UNICODE_STRING *)v34;
    if ( (unsigned int)NumberOfBytes >= 0x10 )
      v13 = a4;
  }
  p_Type = &v8->DeviceObject->Type;
  if ( !a3 )
    goto LABEL_9;
  if ( (p_Type[13] & 0x10) != 0 )
  {
    LODWORD(v31) = 20;
    if ( v11 < 0x14 )
      goto LABEL_77;
    NameStringMode = 0;
    *(_DWORD *)&v13->Length = 131074;
    v13[1].Length = 92;
    v13->Buffer = &v13[1].Length;
  }
  else
  {
    NameStringMode = IoVolumeDeviceToDosName(p_Type, v13);
    LODWORD(v31) = v13->Length + 18;
    v8 = a1;
  }
  if ( NameStringMode < 0 )
  {
LABEL_77:
    p_Type = &v8->DeviceObject->Type;
LABEL_9:
    NameStringMode = ObQueryNameStringMode((_DWORD)p_Type, (_DWORD)v13, v11, (unsigned int)&v31, 0);
    goto LABEL_10;
  }
  v10 = 1;
LABEL_10:
  if ( NameStringMode < 0 )
  {
    if ( NameStringMode != -1073741820 )
      goto LABEL_41;
  }
  else if ( !v10 )
  {
    v36 = v13->Length == 0;
  }
  v16 = a4;
  v17 = a4 + 1;
  v18 = a3;
  if ( a3 && v10 )
  {
    if ( v11 < (unsigned int)v31 )
      Length = v11 - 16;
    else
      Length = v13->Length;
    memmove(&a4[1], v13->Buffer, Length);
    v19 = a1;
    if ( (a1->DeviceObject->Characteristics & 0x10) == 0 )
      ExFreePoolWithTag(v13->Buffer, 0);
    v16 = a4;
    v18 = a3;
  }
  else if ( a7 == 1 )
  {
    if ( (unsigned int)NumberOfBytes < 0x10 || (unsigned int)v31 > v11 )
    {
      v19 = a1;
    }
    else
    {
      a4->Length = v13->Length;
      a4->MaximumLength = v13->MaximumLength;
      memmove(v17, &v13[1], (unsigned int)v31 - 16LL);
      v16 = a4;
      v19 = a1;
      v18 = a3;
    }
  }
  else
  {
    v19 = a1;
  }
  if ( v36 )
    LODWORD(v31) = v31 + 2;
  v20 = 0;
  v37 = 0;
  if ( (unsigned int)NumberOfBytes < 0x10 || (unsigned int)v31 > v11 )
  {
    *a6 = v31;
    v20 = 1;
    v37 = 1;
  }
  else
  {
    v16->Buffer = &v17->Length;
    v17 = (UNICODE_STRING *)((char *)v17 + v13->Length);
  }
  if ( a7 == 1 )
  {
    v21 = (struct _IRP *)v9;
    if ( !v20 )
      v11 = v11 - v31 + 4;
  }
  else if ( v20 )
  {
    v21 = (struct _IRP *)v34;
    if ( (unsigned int)NumberOfBytes >= 0x10 )
      v21 = (struct _IRP *)v16;
  }
  else
  {
    v21 = (struct _IRP *)((char *)&v17[-1].Buffer + 4);
    LODWORD(v32) = HIDWORD(v17[-1].Buffer);
    v11 = (_DWORD)v16 + v11 - ((_DWORD)v17 - 4) - 2;
  }
  if ( (a7 != 1 || v18) && (v19->Flags & 2) != 0 )
    FileInformation = IopGetFileInformation(v19, v11, 9u, v21, &v31);
  else
    FileInformation = IopQueryXxxInformation(v19, (__int64)v21, (__int64)&v31, 1);
  NameStringMode = FileInformation;
  if ( (FileInformation & 0xC0000000) == 0xC0000000 )
  {
    v29 = FileInformation + 1073741822;
    if ( (unsigned int)(NameStringMode + 1073741822) > 0xE )
      goto LABEL_41;
    v30 = 18435;
    if ( !_bittest(&v30, v29) )
      goto LABEL_41;
    LODWORD(v31) = 4;
    *(_DWORD *)&v21->Type = 0;
    *(&v21->Size + 1) = 92;
    NameStringMode = 0;
    v23 = v31;
  }
  else
  {
    v23 = v31;
    if ( (unsigned int)v31 < 4 )
      v23 = 4;
    LODWORD(v31) = v23;
  }
  if ( v37 )
  {
    *a6 += *(_DWORD *)&v21->Type;
    NameStringMode = (unsigned int)NumberOfBytes < 0x10 ? -1073741820 : -2147483643;
  }
  else
  {
    v24 = v23 - 4;
    v25 = *(_DWORD *)&v21->Type;
    if ( v24 <= *(_DWORD *)&v21->Type )
      v25 = v24;
    LODWORD(v31) = (_DWORD)v17 + *(_DWORD *)&v21->Type - (_DWORD)a4;
    if ( *(&v21->Size + 1) == 92 )
    {
      if ( a7 == 1 )
        memmove(v17, &v21->Size + 1, v25);
      else
        *(_DWORD *)&v21->Type = (_DWORD)v32;
      v26 = (char *)v17 + v25;
      v32 = v26;
      *(_WORD *)v26 = 0;
      LODWORD(v31) = v31 + 2;
      *a6 = v31;
      LOWORD(v26) = (_WORD)v26 - (_WORD)a4;
      a4->Length = (_WORD)v26 - 16;
      a4->MaximumLength = (_WORD)v26 - 14;
    }
    else
    {
      NameStringMode = -1073741767;
    }
  }
LABEL_41:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)NameStringMode;
}
