/*
 * XREFs of ndisReadBindPaths @ 0x1C00CB698
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C00C598C (ndisInitializeConfiguration.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C005184C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 */

__int64 __fastcall ndisReadBindPaths(__int64 a1, _RTL_QUERY_REGISTRY_TABLE *a2, const WCHAR *a3)
{
  __int64 v5; // rsi
  bool v6; // r15
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  const WCHAR *v9; // r14
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  void *v13; // rcx
  PVOID PoolWithTag; // rax
  ULONG v15; // r8d
  const WCHAR *v16; // r14
  __int64 v17; // r12
  __int64 v18; // rbx
  _UNICODE_STRING v20; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+48h] BYREF
  __int64 Context; // [rsp+A8h] [rbp+58h] BYREF

  SourceString = 0LL;
  Context = 0LL;
  v5 = a1;
  v6 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0xCu, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, a1);
  a2->QueryRoutine = 0LL;
  Context = 0LL;
  a2[1].Flags = 20;
  a2[1].DefaultType = 0;
  a2[2].QueryRoutine = 0LL;
  a2->Flags = 1;
  a2->Name = L"Linkage";
  a2[2].Flags = 0;
  a2[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&ndisReadParameter;
  a2[1].Name = L"RootDevice";
  a2[1].EntryContext = &SourceString;
  a2[2].Name = 0LL;
  v7 = RtlQueryRegistryValuesEx(0x40000000u, a3, a2, &Context, 0LL);
  v8 = v7;
  if ( v7 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v7 < 0 || (_DWORD)Context != 7 )
  {
    v6 = SourceString != 0LL;
    if ( v7 >= 0 )
      v8 = -1073741823;
    goto LABEL_21;
  }
  if ( SourceString )
    v6 = 1;
  else
    SourceString = *(PCWSTR *)(v5 + 3832);
  v9 = SourceString;
  v10 = 24;
  v11 = 0;
  if ( !*SourceString )
    goto LABEL_33;
  do
  {
    v12 = v11;
    RtlInitUnicodeString(&DestinationString, v9);
    ++v11;
    v10 += DestinationString.Length + ndisDeviceStr.Length + 18;
    v9 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
  }
  while ( *v9 );
  v5 = a1;
  if ( v11 )
  {
    v13 = *(void **)(a1 + 3800);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x6E61444Eu);
    *(_QWORD *)(a1 + 3800) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
      **(_DWORD **)(a1 + 3800) = v11;
      if ( v11 > 1 )
      {
        *(_DWORD *)(a1 + 124) |= 0x8000000u;
        *(_DWORD *)(a1 + 1880) |= 0x10000000u;
      }
      v16 = SourceString;
      v17 = 16LL * v11 + *(_QWORD *)(a1 + 3800) + 24LL;
      while ( *v16 )
      {
        RtlInitUnicodeString(&v20, v16);
        if ( v20.Length > 0x1000u )
        {
          v8 = -1073741670;
          break;
        }
        v18 = *(_QWORD *)(a1 + 3800) + 16LL * v12;
        v16 += ((unsigned __int64)v20.Length + 2) >> 1;
        *(_WORD *)(v18 + 8) = 0;
        *(_QWORD *)(v18 + 16) = v17;
        *(_WORD *)(v18 + 10) = v20.Length + ndisDeviceStr.Length + 2;
        DestinationString.Length = 0;
        DestinationString.Buffer = (wchar_t *)(v17 + ndisDeviceStr.Length);
        DestinationString.MaximumLength = v20.Length + 2;
        RtlCopyUnicodeString((PUNICODE_STRING)(v18 + 8), &ndisDeviceStr);
        RtlUpcaseUnicodeString(&DestinationString, &v20, 0);
        *(_WORD *)(v18 + 8) += DestinationString.Length;
        --v12;
        v17 += 2 * ((unsigned __int64)*(unsigned __int16 *)(v18 + 10) >> 1);
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
      {
        v8 = RtlUnicodeStringCopy(
               (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 3800) + 8LL),
               (const struct _UNICODE_STRING *)(a1 + 3840),
               v15);
        if ( v8 )
        {
          if ( (unsigned __int8)byte_1C00A025C >= 2u )
            WPP_SF_qD(0xDu, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, a1, v8);
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  else
  {
LABEL_33:
    v8 = -1073741811;
  }
LABEL_21:
  if ( v6 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0xEu, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, v5);
  return v8;
}
