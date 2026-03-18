/*
 * XREFs of DpiPdoHandleQueryId @ 0x1C015F260
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000E210 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiAppendNumberToString @ 0x1C015FAFC (DpiAppendNumberToString.c)
 *     DpiAppendStringToString @ 0x1C0160CFC (DpiAppendStringToString.c)
 */

__int64 __fastcall DpiPdoHandleQueryId(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 appended; // rbx
  char v5; // di
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  const WCHAR *v10; // rax
  const WCHAR *v11; // rdx
  unsigned __int16 *v12; // rax
  const WCHAR *v13; // rcx
  void *v14; // rdi
  unsigned int v15; // esi
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  PVOID v33; // rax
  void *v34; // rsi
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp+27h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(appended) = 0;
  DestinationString.Buffer = 0LL;
  v5 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v6 )
  {
    v12 = (unsigned __int16 *)(v3 + 512);
    if ( *(_DWORD *)(v3 + 496) == 1 && !*v12 )
    {
      v11 = L"DISPLAY\\Default_Monitor";
      goto LABEL_12;
    }
    v13 = L"DISPLAY\\";
    goto LABEL_41;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v12 = (unsigned __int16 *)(v3 + 512);
    if ( *(_DWORD *)(v3 + 496) != 1 )
    {
      v14 = 0LL;
      v15 = 0;
      do
      {
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        v15 += 256;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x74727044u);
        v14 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(appended) = -1073741801;
          v32 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
          *(_QWORD *)(v32 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v32);
          return (unsigned int)appended;
        }
        memset(PoolWithTag, 0, v15);
        v21 = RtlStringCbPrintfW(
                (wchar_t *)v14,
                v15,
                L"VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X&%ws,VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&%ws,VIDEO"
                 "\\VEN_%04X&DEV_%04X&%ws,VIDEO\\%ws,,");
        v22 = v21;
      }
      while ( v21 == -2147483643 );
      if ( v21 < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        LODWORD(appended) = -1073741823;
        v26 = WdLogNewEntry5_WdError(v24, v23, v25);
        *(_QWORD *)(v26 + 24) = v22;
LABEL_27:
        WdLogEvent5_WdError(v26);
        return (unsigned int)appended;
      }
      appended = (int)DpiAppendStringToString((PCWSTR)v14, L",,", &DestinationString);
      ExFreePoolWithTag(v14, 0);
      if ( (int)appended < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v28, v27, v29);
        *(_QWORD *)(v26 + 24) = appended;
        goto LABEL_27;
      }
      if ( DestinationString.Length >> 1 )
      {
        v30 = 0LL;
        v31 = DestinationString.Length >> 1;
        do
        {
          if ( DestinationString.Buffer[v30] == 44 )
            DestinationString.Buffer[v30] = 0;
          ++v30;
          --v31;
        }
        while ( v31 );
      }
      goto LABEL_42;
    }
    if ( !*v12 )
    {
      v11 = L"MONITOR\\Default_Monitor";
      goto LABEL_12;
    }
    v13 = L"MONITOR\\";
LABEL_41:
    LODWORD(appended) = DpiAppendStringToString(v13, v12, &DestinationString);
    if ( (int)appended < 0 )
      return (unsigned int)appended;
    goto LABEL_42;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = (const WCHAR *)(v3 + 716);
    if ( *(_DWORD *)(v3 + 496) == 1 && !*v10 )
    {
      v11 = L"*PNP09FF";
      goto LABEL_12;
    }
LABEL_11:
    v11 = v10;
LABEL_12:
    RtlInitUnicodeString(&DestinationString, v11);
    goto LABEL_43;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = (const WCHAR *)(v3 + 614);
    if ( !*(_WORD *)(v3 + 614) )
    {
      DpiAppendNumberToString(L"UID", *(_DWORD *)(v3 + 504), &DestinationString);
LABEL_42:
      v5 = 1;
      goto LABEL_43;
    }
    goto LABEL_11;
  }
  if ( v9 != 2 || !*(_QWORD *)(v3 + 968) )
  {
    LODWORD(appended) = *(_DWORD *)(a2 + 48);
    return (unsigned int)appended;
  }
  DestinationString = *(struct _UNICODE_STRING *)(v3 + 960);
LABEL_43:
  v33 = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength + 2LL, 0x74727044u);
  v34 = v33;
  if ( v33 )
  {
    memset(v33, 0, DestinationString.MaximumLength + 2LL);
    memmove(v34, DestinationString.Buffer, DestinationString.MaximumLength);
    *(_QWORD *)(a2 + 56) = v34;
  }
  else
  {
    LODWORD(appended) = -1073741801;
  }
  if ( v5 == 1 )
    RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)appended;
}
