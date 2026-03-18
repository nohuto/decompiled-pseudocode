/*
 * XREFs of DxgkUpdateDpiInfoForNewOverride @ 0x1C024F4D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0040CC4 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEC28 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C00BA274 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00BACE0 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 */

__int64 __fastcall DxgkUpdateDpiInfoForNewOverride(
        struct _LUID *this,
        struct _LUID *a2,
        unsigned int a3,
        struct _DPI_INFORMATION *a4)
{
  unsigned int v4; // ebp
  int Win32DpiValues; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)a2;
  memset(v16, 0, 0x20uLL);
  Win32DpiValues = QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v16);
  v10 = Win32DpiValues;
  if ( Win32DpiValues >= 0 )
  {
    UpdateScaleFactorForOverride(a4, a3, (const struct _DPI_SCALE_FACTOR_COLLECTION *)v16);
    LODWORD(v10) = DpiPersistence::WriteDpiToRegistry(this, (const struct _LUID *)v4, a3);
    if ( (int)v10 >= 0 )
    {
      v14 = dword_1C008E6D4;
      if ( (*((_BYTE *)a4 + 92) & 0x20) != 0 )
        v14 = a3;
      dword_1C008E6D4 = v14;
    }
    LogScaleFactor(*this, v4, 0, a4);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v13, v12);
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v10;
}
