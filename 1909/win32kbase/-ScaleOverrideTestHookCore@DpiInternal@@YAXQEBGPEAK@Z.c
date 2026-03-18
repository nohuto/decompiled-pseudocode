/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C00B621C
 * Callers:
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00B616C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C009BD00 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+80h] [rbp-80h]
  const wchar_t *v29; // [rsp+88h] [rbp-78h]
  int *v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  _BYTE v36[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Dest[16]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t v38[80]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 ^= v9 + (v6 >> 2) + 2080 * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 & 0x7FFFFFFF;
  v11 = RtlStringCbPrintfW(Dest, 0x16uLL, L"%d", v10);
  v15 = v11;
  if ( v11 < 0
    || (v16 = RtlStringCbPrintfW(
                v38,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                Dest),
        v15 = v16,
        v16 < 0) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v13, v12, v14);
    *(_QWORD *)(v22 + 24) = v15;
    *(_QWORD *)(v22 + 32) = v10;
    WdLogEvent5_WdAssertion(v22);
  }
  else
  {
    v24 = 0;
    QueryTable.Name = v38;
    v25 = 0;
    v29 = L"DesktopScaleFactor";
    QueryTable.QueryRoutine = 0LL;
    v30 = &v24;
    v32 = &v25;
    QueryTable.Flags = 5;
    QueryTable.EntryContext = 0LL;
    QueryTable.DefaultType = 0;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 0;
    v27 = 0LL;
    v28 = 288;
    v31 = 0x4000000;
    v33 = 4;
    v34 = 0LL;
    v35 = 0;
    memset(v36, 0, sizeof(v36));
    v17 = RtlQueryRegistryValues(0, L"\\Registry\\Machine\\", &QueryTable, 0LL, 0LL);
    v21 = v17;
    if ( v17 >= 0 )
    {
      if ( v24 != v25 )
        *(_DWORD *)a2 = v24;
    }
    else if ( v17 != -1073741772 )
    {
      v23 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v23 + 24) = v21;
      WdLogEvent5_WdError(v23);
    }
  }
}
