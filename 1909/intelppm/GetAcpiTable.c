/*
 * XREFs of GetAcpiTable @ 0x1C001F7B0
 * Callers:
 *     CollectAcpiBiosInfo @ 0x1C0039178 (CollectAcpiBiosInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0004380 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall GetAcpiTable(ULONG Handle, ULONG Signature, PCSTR OemId, PCSTR OemTableId)
{
  _QWORD *v4; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rdi
  NTSTATUS v7; // ebx
  unsigned int v8; // r14d
  PVOID v9; // rax
  PVOID v10; // rsi
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  _DWORD SystemInformation[6]; // [rsp+28h] [rbp-28h] BYREF

  SystemInformation[4] = 0;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  v4 = *(_QWORD **)&Signature;
  SystemInformation[1] = 1;
  SystemInformation[0] = 1094930505;
  SystemInformation[2] = 1346584902;
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x72637250u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 1094930505;
      PoolWithTag[1] = 1;
      PoolWithTag[2] = 1346584902;
      PoolWithTag[3] = ReturnLength - 16;
      v7 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, ReturnLength, &ReturnLength);
      if ( v7 < 0 )
      {
        v7 = -1073741823;
      }
      else
      {
        v8 = v6[3];
        v9 = ExAllocatePoolWithTag(PagedPool, v8, 0x72637250u);
        v10 = v9;
        if ( v9 )
        {
          memmove(v9, v6 + 4, v8);
          *v4 = v10;
        }
        else
        {
          v7 = -1073741670;
        }
      }
      ExFreePoolWithTag(v6, 0x72637250u);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  else
  {
    v7 = -1073741823;
  }
  return (PVOID)(unsigned int)v7;
}
