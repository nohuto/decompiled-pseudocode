/*
 * XREFs of MmGetFileNameForSection @ 0x14084CFC4
 * Callers:
 *     DbgkpSectionToFileHandle @ 0x1408127A8 (DbgkpSectionToFileHandle.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 */

__int64 __fastcall MmGetFileNameForSection(__int64 a1, __int64 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  unsigned __int64 v8; // r14
  char *v9; // rsi
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // ebp
  PVOID v13; // rax
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  *a2 = 0LL;
  if ( (v2 & 0x20) == 0 )
    return 3221225545LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20206D4Du);
  *a2 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v8 = MiSectionControlArea(a1);
  v9 = (char *)MiReferenceControlAreaFile(v8);
  v10 = ObQueryNameStringMode(v9, *a2, 0x400u, &v14, 0);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_11;
  if ( v10 == -1073741820 )
  {
    ExFreePoolWithTag((PVOID)*a2, 0);
    v12 = v14 + 1024;
    if ( v14 >= 0xFFFFFC00 || v14 == 0 )
    {
      *a2 = 0LL;
      MiDereferenceControlAreaFile(v8, (unsigned __int64)v9);
      return 3221225495LL;
    }
    v13 = ExAllocatePoolWithTag(PagedPool, v12, 0x20206D4Du);
    *a2 = (__int64)v13;
    if ( !v13 )
    {
      v3 = -1073741801;
LABEL_11:
      MiDereferenceControlAreaFile(v8, (unsigned __int64)v9);
      return v3;
    }
    v11 = ObQueryNameStringMode(v9, (__int64)v13, v12, &v14, 0);
    if ( v11 >= 0 )
      goto LABEL_11;
  }
  MiDereferenceControlAreaFile(v8, (unsigned __int64)v9);
  ExFreePoolWithTag((PVOID)*a2, 0);
  result = (unsigned int)v11;
  *a2 = 0LL;
  return result;
}
