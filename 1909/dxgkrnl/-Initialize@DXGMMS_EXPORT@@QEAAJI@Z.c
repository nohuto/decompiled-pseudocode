/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C01803BC
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C0180264 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z @ 0x1C0180514 (-FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, int a2)
{
  struct _UNICODE_STRING *v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  const WCHAR *v8; // rdx
  unsigned int i; // ebp
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  NTSTATUS v13; // edi
  void *ExportAddress; // rbp
  void *v15; // rax
  void *v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // esi
  _QWORD *v23; // rax
  bool v24; // zf
  _QWORD *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebx
  __int64 v29; // rax

  v2 = (struct _UNICODE_STRING *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x38uLL);
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_24:
      v29 = WdLogNewEntry5_WdError(v6, v5, v7);
      v28 = -1073741811;
      *(_QWORD *)(v29 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v29);
      return v28;
    }
    v8 = L"\\SystemRoot\\System32\\drivers\\dxgmms2.sys";
  }
  else
  {
    v8 = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString(v2, v8);
  for ( i = 0; ; ++i )
  {
    v10 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v2, 0x38uLL);
    v13 = v10;
    if ( v10 >= 0 || v10 == -1073741554 )
      break;
    if ( i >= 0xA )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
      v26[7] = 0LL;
      v26[5] = v13;
      v26[6] = i;
      v26[3] = 275LL;
      v26[4] = 27LL;
      WdLogEvent5_WdCriticalError(v26);
    }
    else
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "An attempt to load dxgmms1.sys failed with NTSTATUS 0x%x.\n"
        "We broke into the  debugger to allow a chance for debugging this issue.\n"
        "Another attempt to load it will be made now.\n",
        v10);
      __debugbreak();
    }
  }
  *(_BYTE *)this = 1;
  ExportAddress = DXGMMS_EXPORT::FindExportAddress(this, "VidMmInterface", 0xFu);
  v15 = DXGMMS_EXPORT::FindExportAddress(this, "VidSchInterface", 0x10u);
  v16 = v15;
  if ( !ExportAddress || !v15 )
    goto LABEL_24;
  v17 = operator new[](0x10uLL, 0x4B677844u, (POOL_TYPE)512);
  v22 = a2 + 1;
  if ( v17 )
  {
    *(_DWORD *)v17 = v22;
    v17[1] = ExportAddress;
  }
  *((_QWORD *)this + 9) = v17;
  if ( v17 )
  {
    v23 = operator new[](0x10uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v23 )
    {
      *(_DWORD *)v23 = v22;
      v23[1] = v16;
    }
    v24 = *((_QWORD *)this + 9) == 0LL;
    *((_QWORD *)this + 8) = v23;
    if ( !v24 )
      return 0LL;
  }
  v27 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
  v28 = -1073741801;
  *(_QWORD *)(v27 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v27);
  return v28;
}
