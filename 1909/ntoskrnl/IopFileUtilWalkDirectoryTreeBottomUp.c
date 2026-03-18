/*
 * XREFs of IopFileUtilWalkDirectoryTreeBottomUp @ 0x1406DA500
 * Callers:
 *     NtEnableLastKnownGood @ 0x1406DA230 (NtEnableLastKnownGood.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14068B714 (IopFileUtilWalkDirectoryTreeHelper.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeBottomUp(PCUNICODE_STRING SourceString)
{
  __int64 Length; // r14
  int v3; // edi
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  UNICODE_STRING *v9; // rbx
  PVOID *v10; // rax
  int v11; // [rsp+30h] [rbp-D8h]
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  PVOID p_P; // [rsp+50h] [rbp-B8h]
  __int64 v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int FileInformation[256]; // [rsp+68h] [rbp-A0h] BYREF

  Length = SourceString->Length;
  p_P = &P;
  P = &P;
  v3 = 0;
  v14[1] = (__int64)v14;
  v14[0] = (__int64)v14;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, Length + 38, 0x75466F49u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_5;
  }
  memset(PoolWithTag, 0, Length + 38);
  v5[1].Length = 0;
  v5[1].MaximumLength = SourceString->Length;
  v5[1].Buffer = &v5[2].Length;
  RtlCopyUnicodeString(v5 + 1, SourceString);
  v6 = P;
  if ( *((PVOID **)P + 1) != &P )
LABEL_19:
    __fastfail(3u);
  *(_QWORD *)&v5->Length = P;
  v5->Buffer = (wchar_t *)&P;
  v6[1] = v5;
  P = v5;
  if ( v5 == (UNICODE_STRING *)&P )
    goto LABEL_14;
  do
  {
    v3 = IopFileUtilWalkDirectoryTreeHelper(v5 + 1, 8, 0LL, 0LL, FileInformation, v11, (__int64)&P);
    if ( v3 < 0 )
    {
LABEL_5:
      while ( 1 )
      {
        v5 = (UNICODE_STRING *)P;
LABEL_6:
        if ( v5 == (UNICODE_STRING *)&P )
          return (unsigned int)v3;
        if ( (PVOID *)v5->Buffer != &P )
          goto LABEL_19;
        v7 = *(_QWORD *)&v5->Length;
        if ( *(UNICODE_STRING **)(*(_QWORD *)&v5->Length + 8LL) != v5 )
          goto LABEL_19;
        P = *(PVOID *)&v5->Length;
        *(_QWORD *)(v7 + 8) = &P;
        ExFreePoolWithTag(v5, 0x75466F49u);
      }
    }
    v5 = *(UNICODE_STRING **)&v5->Length;
  }
  while ( v5 != (UNICODE_STRING *)&P );
  while ( 1 )
  {
    v5 = (UNICODE_STRING *)P;
LABEL_14:
    if ( v5 == (UNICODE_STRING *)&P )
      break;
    v9 = (UNICODE_STRING *)p_P;
    if ( *(PVOID **)p_P != &P )
      goto LABEL_19;
    v10 = (PVOID *)*((_QWORD *)p_P + 1);
    if ( *v10 != p_P )
      goto LABEL_19;
    p_P = (PVOID)*((_QWORD *)p_P + 1);
    *v10 = &P;
    v3 = IopFileUtilWalkDirectoryTreeHelper(
           v9 + 1,
           7,
           (__int64 (__fastcall *)(UNICODE_STRING *, UNICODE_STRING *, __int64, __int64))PpLastGoodDeleteFilesCallback,
           0LL,
           FileInformation,
           v11,
           (__int64)v14);
    ExFreePoolWithTag(v9, 0x75466F49u);
  }
  if ( v3 < 0 )
    goto LABEL_6;
  return (unsigned int)v3;
}
