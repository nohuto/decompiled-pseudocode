/*
 * XREFs of IopQueryNameInternal @ 0x140661764
 * Callers:
 *     IoQueryFileDosDeviceName @ 0x140660770 (IoQueryFileDosDeviceName.c)
 *     IopQueryName @ 0x140661730 (IopQueryName.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140662AD0 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140662C00 (IoVolumeDeviceToDosName.c)
 */

__int64 __fastcall IopQueryNameInternal(
        __int64 a1,
        char a2,
        char a3,
        UNICODE_STRING *a4,
        SIZE_T NumberOfBytes,
        _DWORD *a6,
        char a7)
{
  __int64 v7; // rsi
  UNICODE_STRING *v8; // r13
  bool v9; // r15
  char v10; // r14
  unsigned int v11; // ebx
  UNICODE_STRING *PoolWithTagPriority; // rax
  UNICODE_STRING *v13; // rdi
  _DWORD *v14; // rcx
  NTSTATUS NameStringMode; // eax
  NTSTATUS v16; // edx
  unsigned __int16 *v17; // rcx
  char *v18; // rsi
  char v19; // dl
  _DWORD *v20; // r10
  char v21; // r12
  _DWORD *v22; // r15
  char *v23; // rdi
  unsigned int FileInformation; // eax
  unsigned int v25; // ebx
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // r14d
  unsigned __int16 *v29; // r12
  unsigned int v30; // eax
  int v31; // ecx
  unsigned int Length; // ecx
  int v34; // [rsp+48h] [rbp-60h]
  UNICODE_STRING *P; // [rsp+50h] [rbp-58h]
  char *v36; // [rsp+58h] [rbp-50h]
  _BYTE v37[72]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+10h] BYREF
  char v40; // [rsp+C0h] [rbp+18h]
  unsigned __int16 *p_Length; // [rsp+C8h] [rbp+20h]

  p_Length = &a4->Length;
  v40 = a3;
  LOBYTE(v39) = a2;
  v7 = a1;
  v8 = 0LL;
  P = 0LL;
  v9 = 0;
  v10 = 0;
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
    v8 = PoolWithTagPriority;
    P = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
      return 3221225626LL;
    v13 = PoolWithTagPriority;
  }
  else
  {
    v13 = (UNICODE_STRING *)v37;
    if ( (unsigned int)NumberOfBytes >= 0x10 )
      v13 = a4;
  }
  v14 = *(_DWORD **)(v7 + 8);
  if ( !v40 )
  {
    NameStringMode = ObQueryNameStringMode((_DWORD)v14, (_DWORD)v13, v11, (unsigned int)&v39, 0);
LABEL_10:
    v16 = NameStringMode;
    goto LABEL_11;
  }
  if ( (v14[13] & 0x10) != 0 )
  {
    LODWORD(v39) = 20;
    if ( v11 < 0x14 )
      goto LABEL_79;
    v16 = 0;
    *(_DWORD *)&v13->Length = 131074;
    v13[1].Length = 92;
    v13->Buffer = &v13[1].Length;
    v7 = a1;
  }
  else
  {
    v16 = IoVolumeDeviceToDosName(v14, v13);
    LODWORD(v39) = v13->Length + 18;
  }
  if ( v16 < 0 )
  {
LABEL_79:
    NameStringMode = ObQueryNameStringMode(*(_QWORD *)(v7 + 8), (_DWORD)v13, v11, (unsigned int)&v39, 0);
    goto LABEL_10;
  }
  v10 = 1;
LABEL_11:
  if ( v16 < 0 )
  {
    if ( v16 != -1073741820 )
      return (unsigned int)v16;
  }
  else if ( !v10 )
  {
    v9 = v13->Length == 0;
  }
  v17 = p_Length;
  v18 = (char *)(p_Length + 8);
  v19 = v40;
  if ( !v40 || !v10 )
  {
    if ( a7 != 1 || (unsigned int)NumberOfBytes < 0x10 || (unsigned int)v39 > v11 )
      goto LABEL_20;
    *p_Length = v13->Length;
    v17[1] = v13->MaximumLength;
    memmove(v18, &v13[1], (unsigned int)v39 - 16LL);
LABEL_19:
    v19 = v40;
    v17 = p_Length;
LABEL_20:
    v20 = (_DWORD *)a1;
    goto LABEL_21;
  }
  if ( v11 < (unsigned int)v39 )
    Length = v11 - 16;
  else
    Length = v13->Length;
  memmove(p_Length + 8, v13->Buffer, Length);
  v20 = (_DWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) == 0 )
  {
    ExFreePoolWithTag(v13->Buffer, 0);
    goto LABEL_19;
  }
  v17 = p_Length;
  v19 = v40;
LABEL_21:
  if ( v9 )
    LODWORD(v39) = v39 + 2;
  v21 = 0;
  if ( (unsigned int)NumberOfBytes < 0x10 || (unsigned int)v39 > v11 )
  {
    v22 = a6;
    *a6 = v39;
    v21 = 1;
  }
  else
  {
    *((_QWORD *)v17 + 1) = v18;
    v18 += v13->Length;
    v22 = a6;
  }
  if ( a7 == 1 )
  {
    v23 = (char *)v8;
    v34 = (int)v8;
  }
  else if ( v21 )
  {
    v23 = v37;
    if ( (unsigned int)NumberOfBytes >= 0x10 )
      v23 = (char *)v17;
    v34 = (int)v23;
  }
  else
  {
    v23 = v18 - 4;
    v34 = *((_DWORD *)v18 - 1);
  }
  if ( (a7 != 1 || v19) && (v20[20] & 2) != 0 )
    FileInformation = IopGetFileInformation(v20, (__int64)&v39);
  else
    FileInformation = IopQueryXxxInformation(v20, (__int64)v23, (__int64)&v39, 1);
  v25 = FileInformation;
  if ( (FileInformation & 0xC0000000) != 0xC0000000 )
  {
    v26 = v39;
    if ( (unsigned int)v39 < 4 )
      v26 = 4;
    LODWORD(v39) = v26;
    goto LABEL_35;
  }
  v30 = FileInformation + 1073741822;
  if ( v25 + 1073741822 <= 0xE )
  {
    v31 = 18435;
    if ( _bittest(&v31, v30) )
    {
      LODWORD(v39) = 4;
      *(_DWORD *)v23 = 0;
      *((_WORD *)v23 + 2) = 92;
      v25 = 0;
      v26 = v39;
LABEL_35:
      if ( v21 )
      {
        *v22 += *(_DWORD *)v23;
        v25 = (unsigned int)NumberOfBytes < 0x10 ? -1073741820 : -2147483643;
      }
      else
      {
        v27 = v26 - 4;
        v28 = *(_DWORD *)v23;
        if ( v27 <= *(_DWORD *)v23 )
          v28 = v27;
        v29 = p_Length;
        LODWORD(v39) = (_DWORD)v18 + *(_DWORD *)v23 - (_DWORD)p_Length;
        if ( *((_WORD *)v23 + 2) == 92 )
        {
          if ( a7 == 1 )
            memmove(v18, v23 + 4, v28);
          else
            *(_DWORD *)v23 = v34;
          v36 = &v18[v28];
          *(_WORD *)v36 = 0;
          LODWORD(v39) = v39 + 2;
          *v22 = v39;
          *v29 = (_WORD)v36 - (_WORD)v29 - 16;
          v29[1] = (_WORD)v36 - (_WORD)v29 - 14;
        }
        else
        {
          v25 = -1073741767;
        }
      }
    }
  }
  if ( a7 == 1 )
    ExFreePoolWithTag(P, 0);
  return v25;
}
