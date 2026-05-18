/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001170
 * Callers:
 *     DllMain @ 0x18000158C (DllMain.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001A68 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x1800026E8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     DwmpSignalSessionShutdown @ 0x180003ED4 (DwmpSignalSessionShutdown.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004420 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     _vsnwprintf @ 0x180005A88 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
