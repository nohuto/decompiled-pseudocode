/*
 * XREFs of SiGetSystemDeviceName @ 0x1406E2DD4
 * Callers:
 *     SyspartDirectGetSystemPartition @ 0x1406E2DB0 (SyspartDirectGetSystemPartition.c)
 *     SyspartDirectGetSystemDisk @ 0x14072E560 (SyspartDirectGetSystemDisk.c)
 *     SyspartGetFirmwarePartition @ 0x140741624 (SyspartGetFirmwarePartition.c)
 *     SyspartDirectGetFirmwareSystemPartition @ 0x140749B00 (SyspartDirectGetFirmwareSystemPartition.c)
 *     IopFindSystemDevice @ 0x14085C084 (IopFindSystemDevice.c)
 *     SyspartGetSystemPartition @ 0x14093263C (SyspartGetSystemPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDeviceName(
        __int64 (__fastcall *a1)(_QWORD, void **),
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v8; // edi
  int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // edi
  void *Src; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-60h]
  unsigned int *v15; // [rsp+30h] [rbp-58h]
  _DWORD SystemInformation[8]; // [rsp+38h] [rbp-50h] BYREF

  v15 = a4;
  *a4 = 0;
  Src = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v8 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v8 = 0;
    if ( SystemInformation[4] < 3 )
      v8 = SystemInformation[4];
  }
  v9 = a1(v8, &Src);
  if ( v9 >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)Src + v10) );
    v11 = 2 * v10 + 2;
    v14 = v11;
    if ( a2 && a3 >= v11 )
    {
      v9 = 0;
      memmove(a2, Src, v11);
    }
    else
    {
      v9 = -1073741789;
    }
    *a4 = v11;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v9;
}
