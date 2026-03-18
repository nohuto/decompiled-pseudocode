/*
 * XREFs of DpiQuerySystemFirmwareTables @ 0x1C01811C4
 * Callers:
 *     DpiReadSystemFirmwareTable @ 0x1C0181150 (DpiReadSystemFirmwareTable.c)
 *     DpiEnumSystemFirmwareTables @ 0x1C029E9D0 (DpiEnumSystemFirmwareTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall DpiQuerySystemFirmwareTables(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *PoolWithTag; // rbx
  unsigned int v7; // esi
  int v8; // r15d
  int v9; // r12d
  int v10; // r13d
  ULONG v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned int v21; // edx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE SystemInformation[128]; // [rsp+30h] [rbp-B8h] BYREF

  PoolWithTag = SystemInformation;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  if ( KeGetCurrentIrql() )
  {
    LODWORD(v20) = -1073741811;
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v23[3] = 275LL;
    v23[4] = 21LL;
    v23[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  else if ( (a5 || !a4) && a6 )
  {
    v11 = a4 + 16;
    if ( a4 + 16 <= 0x80 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u)) != 0LL )
    {
      PoolWithTag[1] = v10;
      *PoolWithTag = v9;
      PoolWithTag[2] = v8;
      PoolWithTag[3] = v7;
      v16 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, v11, ReturnLength);
      v20 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -1073741789 && ReturnLength[0] >= 0x10 )
        {
          *a6 = PoolWithTag[3];
        }
        else
        {
          *a6 = 0;
          v26 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v26 + 24) = v20;
          WdLogEvent5_WdError(v26);
        }
      }
      else
      {
        v21 = PoolWithTag[3];
        *a6 = v21;
        if ( v21 <= v7 )
          v7 = v21;
        if ( a5 )
          memmove(a5, PoolWithTag + 4, v7);
      }
    }
    else
    {
      LODWORD(v20) = -1073741801;
      v25 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v25 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v25);
    }
    if ( PoolWithTag != (_DWORD *)SystemInformation )
      ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  }
  else
  {
    LODWORD(v20) = -1073741811;
    v24 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
  }
  return (unsigned int)v20;
}
