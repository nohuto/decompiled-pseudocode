/*
 * XREFs of DpiQuerySystemFirmwareTables @ 0x1C015CCA4
 * Callers:
 *     DpiReadSystemFirmwareTable @ 0x1C015CC30 (DpiReadSystemFirmwareTable.c)
 *     DpiEnumSystemFirmwareTables @ 0x1C0268990 (DpiEnumSystemFirmwareTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall DpiQuerySystemFirmwareTables(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *PoolWithTag; // rbx
  unsigned int v7; // esi
  int v10; // r13d
  ULONG v11; // edi
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // edx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE SystemInformation[128]; // [rsp+30h] [rbp-B8h] BYREF

  PoolWithTag = SystemInformation;
  v7 = a4;
  v10 = a1;
  if ( KeGetCurrentIrql() )
  {
    LODWORD(v15) = -1073741811;
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
    v18[3] = 275LL;
    v18[4] = 21LL;
    v18[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  else if ( (a5 || !a4) && a6 )
  {
    v11 = a4 + 16;
    if ( a4 + 16 <= 0x80 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u)) != 0LL )
    {
      PoolWithTag[1] = v10;
      *PoolWithTag = a2;
      PoolWithTag[2] = a3;
      PoolWithTag[3] = v7;
      v13 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, v11, ReturnLength);
      v15 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741789 && ReturnLength[0] >= 0x10 )
        {
          *a6 = PoolWithTag[3];
        }
        else
        {
          *a6 = 0;
          v21 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v21 + 24) = v15;
          WdLogEvent5_WdError(v21);
        }
      }
      else
      {
        v16 = PoolWithTag[3];
        *a6 = v16;
        if ( v16 <= v7 )
          v7 = v16;
        if ( a5 )
          memmove(a5, PoolWithTag + 4, v7);
      }
    }
    else
    {
      LODWORD(v15) = -1073741801;
      v20 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v20 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v20);
    }
    if ( PoolWithTag != (_DWORD *)SystemInformation )
      ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  }
  else
  {
    LODWORD(v15) = -1073741811;
    v19 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
  }
  return (unsigned int)v15;
}
