/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C015C06C
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C015BF20 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z @ 0x1C015C1C4 (-FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, int a2)
{
  struct _UNICODE_STRING *v2; // rsi
  __int64 v5; // rcx
  const WCHAR *v6; // rdx
  unsigned int i; // ebp
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  NTSTATUS v10; // edi
  void *ExportAddress; // rbp
  void *v12; // rax
  void *v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // esi
  _QWORD *v17; // rax
  bool v18; // zf
  _QWORD *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rax

  v2 = (struct _UNICODE_STRING *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x38uLL);
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_24:
      v23 = WdLogNewEntry5_WdError(v5);
      v22 = -1073741811;
      *(_QWORD *)(v23 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v23);
      return v22;
    }
    v6 = L"\\SystemRoot\\System32\\drivers\\dxgmms2.sys";
  }
  else
  {
    v6 = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString(v2, v6);
  for ( i = 0; ; ++i )
  {
    v8 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v2, 0x38uLL);
    v10 = v8;
    if ( v8 >= 0 || v8 == -1073741554 )
      break;
    if ( i >= 0xA )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9);
      v20[7] = 0LL;
      v20[5] = v10;
      v20[6] = i;
      v20[3] = 275LL;
      v20[4] = 27LL;
      WdLogEvent5_WdCriticalError(v20);
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
        v8);
      __debugbreak();
    }
  }
  *(_BYTE *)this = 1;
  ExportAddress = DXGMMS_EXPORT::FindExportAddress(this, "VidMmInterface", 0xFu);
  v12 = DXGMMS_EXPORT::FindExportAddress(this, "VidSchInterface", 0x10u);
  v13 = v12;
  if ( !ExportAddress || !v12 )
    goto LABEL_24;
  v14 = operator new(0x10uLL, 0x4B677844u, (POOL_TYPE)512);
  v16 = a2 + 1;
  if ( v14 )
  {
    *(_DWORD *)v14 = v16;
    v14[1] = ExportAddress;
  }
  *((_QWORD *)this + 9) = v14;
  if ( v14 )
  {
    v17 = operator new(0x10uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v17 )
    {
      *(_DWORD *)v17 = v16;
      v17[1] = v13;
    }
    v18 = *((_QWORD *)this + 9) == 0LL;
    *((_QWORD *)this + 8) = v17;
    if ( !v18 )
      return 0LL;
  }
  v21 = WdLogNewEntry5_WdLowResource(v15);
  v22 = -1073741801;
  *(_QWORD *)(v21 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v21);
  return v22;
}
