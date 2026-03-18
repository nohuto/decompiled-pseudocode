/*
 * XREFs of PipCreateComputerId @ 0x1409F69A8
 * Callers:
 *     PipInitComputerIds @ 0x1409F5A4C (PipInitComputerIds.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfExW @ 0x140084A34 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpStringFromGuid @ 0x1407000C0 (_PnpStringFromGuid.c)
 *     RtlGenerateClass5Guid @ 0x140754D30 (RtlGenerateClass5Guid.c)
 */

__int64 __fastcall PipCreateComputerId(void *a1, void *a2, _WORD **a3, unsigned int a4, int *a5)
{
  unsigned int v5; // ebp
  unsigned __int16 v9; // bx
  unsigned int v10; // r8d
  _WORD **v11; // rdx
  _WORD *v12; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // bx
  UCHAR *PoolWithTag; // rax
  UCHAR *Data; // rsi
  UCHAR *v17; // rdi
  unsigned __int16 v18; // ax
  ULONG DataSize; // edi
  int Class5Guid; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-118h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-108h]
  WCHAR SourceString[40]; // [rsp+60h] [rbp-F8h] BYREF
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-A8h] BYREF

  v5 = 0;
  KeyHandle = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = 0;
  v10 = 0;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v11 = a3;
  do
  {
    v12 = *v11;
    v13 = v9 + 2;
    ++v11;
    if ( !v10 )
      v13 = v9;
    ++v10;
    v9 = *v12 + v13;
  }
  while ( v10 < a4 );
  if ( v9 > 2u )
  {
    v14 = v9 + 2;
    PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(PagedPool, v14, 0x6E697050u);
    Data = PoolWithTag;
    if ( PoolWithTag )
    {
      v17 = PoolWithTag;
      do
      {
        if ( v5 )
        {
          *(_WORD *)v17 = 38;
          v17 += 2;
        }
        v18 = **a3;
        if ( v18 )
        {
          memmove(v17, *((const void **)*a3 + 1), v18);
          v17 += 2 * ((unsigned __int64)(unsigned __int16)**a3 >> 1);
        }
        ++v5;
        ++a3;
      }
      while ( v5 < a4 );
      *(_WORD *)v17 = 0;
      DataSize = v14;
      Class5Guid = RtlGenerateClass5Guid((__int64)&unk_140379230, Data, (unsigned int)v14 - 2, (__int64)a5);
      if ( Class5Guid >= 0 )
      {
        Class5Guid = PnpStringFromGuid(a5, SourceString);
        if ( Class5Guid >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          Class5Guid = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, Data, DataSize);
          if ( Class5Guid >= 0 )
          {
            if ( a2 )
            {
              Class5Guid = RtlStringCbPrintfExW(
                             pszDest,
                             0x5CuLL,
                             0LL,
                             0LL,
                             0x800u,
                             L"%ws_%ws",
                             SourceString,
                             L"amd64",
                             *(_QWORD *)&DestinationString.Length,
                             DestinationString.Buffer);
              if ( Class5Guid >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, pszDest);
                Class5Guid = ZwSetValueKey(a2, &DestinationString, 0, 1u, 0LL, 0);
              }
            }
          }
        }
      }
      ExFreePoolWithTag(Data, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Class5Guid;
}
