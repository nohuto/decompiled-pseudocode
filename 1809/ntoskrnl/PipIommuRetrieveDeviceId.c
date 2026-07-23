/*
 * XREFs of PipIommuRetrieveDeviceId @ 0x1407517FC
 * Callers:
 *     PiIommuAllocateExtension @ 0x140751728 (PiIommuAllocateExtension.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PipIommuValidateDeviceId @ 0x1407518D8 (PipIommuValidateDeviceId.c)
 */

__int64 __fastcall PipIommuRetrieveDeviceId(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  unsigned int (__fastcall *v2)(_QWORD, _QWORD, _QWORD, SIZE_T *); // rax
  void *v3; // rbx
  PVOID PoolWithTag; // rax
  int v7; // edi
  __int64 result; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, SIZE_T *))(BugCheckParameter2 + 64);
  v3 = 0LL;
  if ( !v2 )
  {
    v7 = -1073741637;
    goto LABEL_8;
  }
  if ( v2(*(_QWORD *)(BugCheckParameter2 + 8), 0LL, 0LL, &NumberOfBytes) != -1073741789 || !NumberOfBytes )
  {
    v7 = -1073741823;
LABEL_7:
    if ( v7 >= 0 )
      goto LABEL_8;
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x64706E50u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = -1073741670;
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, NumberOfBytes);
  v7 = (*(__int64 (__fastcall **)(_QWORD, SIZE_T, void *, _QWORD))(BugCheckParameter2 + 64))(
         *(_QWORD *)(BugCheckParameter2 + 8),
         NumberOfBytes,
         v3,
         0LL);
  if ( v7 >= 0 )
  {
    PipIommuValidateDeviceId(BugCheckParameter2, (ULONG_PTR)v3);
    goto LABEL_7;
  }
LABEL_12:
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x64706E50u);
    v3 = 0LL;
  }
LABEL_8:
  result = (unsigned int)v7;
  *a2 = v3;
  return result;
}
