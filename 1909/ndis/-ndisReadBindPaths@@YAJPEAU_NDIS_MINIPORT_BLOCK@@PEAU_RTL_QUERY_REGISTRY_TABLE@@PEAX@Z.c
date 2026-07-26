/*
 * XREFs of ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x1C002C580
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C0105F58 (ndisInitializeConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C007F6F8 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 */

__int64 __fastcall ndisReadBindPaths(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _RTL_QUERY_REGISTRY_TABLE *a2,
        const WCHAR *a3)
{
  bool v4; // r15
  struct _RTL_QUERY_REGISTRY_TABLE *v5; // rbx
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  NTSTATUS v7; // eax
  int v8; // edx
  unsigned int v9; // edi
  const WCHAR *v10; // r14
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _NDIS_BIND_PATHS *PoolWithTag; // rax
  const WCHAR *v16; // r14
  char *v17; // r12
  char *v18; // rbx
  int v20; // eax
  _UNICODE_STRING v21; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp+48h] BYREF
  __int64 Context; // [rsp+B8h] [rbp+58h] BYREF

  SourceString = 0LL;
  v4 = 0;
  v5 = a2;
  v6 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      12,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1);
  }
  Context = 0LL;
  v5->Name = L"Linkage";
  v5->QueryRoutine = 0LL;
  v5[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&ndisReadParameter;
  v5->Flags = 1;
  v5[1].Name = L"RootDevice";
  v5[1].Flags = 20;
  v5[1].EntryContext = &SourceString;
  v5[1].DefaultType = 0;
  v5[2].QueryRoutine = 0LL;
  v5[2].Flags = 0;
  v5[2].Name = 0LL;
  v7 = RtlQueryRegistryValuesEx(0x40000000u, a3, v5, &Context, 0LL);
  v9 = v7;
  if ( v7 == -1073741772 )
  {
    v9 = 0;
  }
  else if ( v7 < 0 || (_DWORD)Context != 7 )
  {
    v4 = SourceString != 0LL;
    if ( v7 >= 0 )
      v9 = -1073741823;
    goto LABEL_21;
  }
  if ( SourceString )
    v4 = 1;
  else
    SourceString = (PCWSTR)v6->BaseName.Buffer;
  v10 = SourceString;
  v11 = 24;
  v12 = 0;
  if ( !*SourceString )
    goto LABEL_33;
  do
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    v13 = v12;
    RtlInitUnicodeString(&DestinationString, v10);
    ++v12;
    v11 += DestinationString.Length + ndisDeviceStr.Length + 18;
    v10 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
  }
  while ( *v10 );
  LOBYTE(v6) = (_BYTE)a1;
  if ( v12 )
  {
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ExFreePoolWithTag(BindPaths, 0);
    PoolWithTag = (_NDIS_BIND_PATHS *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6E61444Eu);
    a1->BindPaths = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      a1->BindPaths->Number = v12;
      if ( v12 > 1 )
      {
        a1->PnPFlags |= 0x8000000u;
        a1->InfoFlags |= 0x10000000u;
      }
      v16 = SourceString;
      v17 = (char *)&a1->BindPaths[1] + 16 * v12;
      while ( *v16 )
      {
        *(_QWORD *)&v21.Length = 0LL;
        v21.Buffer = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        RtlInitUnicodeString(&v21, v16);
        if ( v21.Length > 0x1000u )
        {
          v9 = -1073741670;
          break;
        }
        v18 = (char *)a1->BindPaths + 16 * v13;
        v16 += ((unsigned __int64)v21.Length + 2) >> 1;
        *((_WORD *)v18 + 4) = 0;
        *((_QWORD *)v18 + 2) = v17;
        *((_WORD *)v18 + 5) = v21.Length + ndisDeviceStr.Length + 2;
        DestinationString.Length = 0;
        DestinationString.Buffer = (wchar_t *)&v17[ndisDeviceStr.Length];
        DestinationString.MaximumLength = v21.Length + 2;
        RtlCopyUnicodeString((PUNICODE_STRING)(v18 + 8), &ndisDeviceStr);
        RtlUpcaseUnicodeString(&DestinationString, &v21, 0);
        *((_WORD *)v18 + 4) += DestinationString.Length;
        --v13;
        v17 += 2 * ((unsigned __int64)*((unsigned __int16 *)v18 + 5) >> 1);
      }
      if ( (a1->Flags & 0x80u) != 0 )
      {
        v20 = RtlUnicodeStringCopy(a1->BindPaths->Paths, &a1->MiniportName);
        v9 = v20;
        if ( v20 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2,
              13,
              13,
              &WPP_a3868331fe073391203672ef2b551460_Traceguids,
              (char)a1,
              v20);
        }
      }
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
LABEL_33:
    v9 = -1073741811;
  }
LABEL_21:
  if ( v4 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      13,
      14,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)v6);
  }
  return v9;
}
