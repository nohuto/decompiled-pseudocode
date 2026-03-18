/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1C0285110
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0047BC0 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C0129F4C (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C012AD38 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C0284EFC (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *this,
        struct _LUID *a2,
        unsigned int a3,
        struct _DPI_INFORMATION *a4)
{
  unsigned int v4; // r14d
  int Win32DpiValues; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _UNICODE_STRING *v25; // r9
  int v26; // eax
  _BYTE v27[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v28[40]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (unsigned int)a2;
  memset(v28, 0, 0x20uLL);
  Win32DpiValues = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v28);
  v12 = Win32DpiValues;
  if ( Win32DpiValues >= 0 )
  {
    v27[0] = 0;
    v17 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v27, 0);
    v21 = v17;
    if ( v17 >= 0 )
    {
      UpdateScaleFactorForOverride(a4, a3, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v28);
      LODWORD(v21) = DpiPersistence::WriteDpiToRegistry(this, (const struct _LUID *)v4, a3, v25);
      if ( (int)v21 >= 0 )
      {
        v26 = dword_1C00A26DC;
        if ( (*((_BYTE *)a4 + 92) & 0x20) != 0 )
          v26 = a3;
        dword_1C00A26DC = v26;
      }
      LogScaleFactor(*this, v4, 0, a4);
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v22 + 24) = v21;
      WdLogEvent5_WdError(v22);
    }
    if ( v27[0] )
      DxgkReleaseSessionModeChangeLock(v24, v23);
    return (unsigned int)v21;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
}
