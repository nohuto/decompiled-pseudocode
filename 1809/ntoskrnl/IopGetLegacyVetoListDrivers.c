/*
 * XREFs of IopGetLegacyVetoListDrivers @ 0x1405C9B80
 * Callers:
 *     IoGetLegacyVetoList @ 0x1405B1B64 (IoGetLegacyVetoList.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401B8DF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1401BAA70 (ZwQueryDirectoryObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByName @ 0x1405C9DA0 (ObReferenceObjectByName.c)
 *     IopAppendLegacyVeto @ 0x14083B9DC (IopAppendLegacyVeto.c)
 */

void __fastcall IopGetLegacyVetoListDrivers(__int64 a1)
{
  void *v2; // rbx
  _QWORD *PoolWithTag; // rsi
  BOOLEAN RestartScan; // r13
  NTSTATUS v5; // ecx
  ULONG v6; // r12d
  unsigned __int16 v7; // r14
  _WORD *v8; // rax
  NTSTATUS v9; // eax
  unsigned __int16 v10; // r15
  __int64 v11; // r9
  _DWORD *Object; // [rsp+40h] [rbp-39h]
  __int64 v13; // [rsp+48h] [rbp-31h] BYREF
  PVOID v14; // [rsp+50h] [rbp-29h]
  int v15; // [rsp+58h] [rbp-21h] BYREF
  const wchar_t *v16; // [rsp+60h] [rbp-19h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  ULONG BufferLength; // [rsp+E8h] [rbp+6Fh] BYREF
  ULONG Context; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v15 = 1048590;
  Context = 0;
  v16 = L"\\Driver";
  DirectoryHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  v2 = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  v13 = 0LL;
  PoolWithTag = 0LL;
  RestartScan = 1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v5 < 0 )
  {
    **(_DWORD **)(a1 + 24) = v5;
  }
  else
  {
    v6 = 202;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCAuLL, 0x6F697050u);
    if ( PoolWithTag )
    {
      v7 = 188;
      LODWORD(v13) = 12320768;
      v8 = ExAllocatePoolWithTag(PagedPool, 0xBCuLL, 0x6F697050u);
      v14 = v8;
      v2 = v8;
      if ( !v8 )
      {
        **(_DWORD **)(a1 + 24) = -1073741670;
        goto LABEL_15;
      }
      *v8 = 0;
      while ( 1 )
      {
        v9 = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, v6, 1u, RestartScan, &Context, &BufferLength);
        if ( v9 == -1073741789 )
        {
          v6 = BufferLength;
          ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x6F697050u);
          if ( !PoolWithTag )
            break;
          v9 = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, v6, 1u, RestartScan, &Context, &BufferLength);
        }
        RestartScan = 0;
        if ( v9 < 0 )
          goto LABEL_13;
        v10 = *(_WORD *)PoolWithTag + 18;
        if ( v10 > v7 )
        {
          ExFreePoolWithTag(v2, 0);
          WORD1(v13) = v10;
          v7 = v10;
          v14 = ExAllocatePoolWithTag(PagedPool, v10, 0x6F697050u);
          v2 = v14;
          if ( !v14 )
            break;
        }
        v11 = PoolWithTag[1];
        LOWORD(v13) = v10 - 2;
        RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v2, v7, L"\\Driver\\%ws", v11);
        if ( (int)ObReferenceObjectByName(&v13, 576LL, 0LL) >= 0 )
        {
          if ( (Object[4] & 0x40) != 0 )
          {
            **(_DWORD **)(a1 + 16) = 11;
            if ( *(_QWORD *)a1 )
              IopAppendLegacyVeto(a1, PoolWithTag);
          }
          if ( (ObfDereferenceObject(Object), **(_DWORD **)(a1 + 16) == 11) && !*(_QWORD *)a1 || **(int **)(a1 + 24) < 0 )
          {
            v2 = v14;
            goto LABEL_13;
          }
        }
        v2 = v14;
        v7 = WORD1(v13);
      }
      **(_DWORD **)(a1 + 24) = -1073741670;
    }
    else
    {
      **(_DWORD **)(a1 + 24) = -1073741670;
    }
  }
LABEL_13:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
}
