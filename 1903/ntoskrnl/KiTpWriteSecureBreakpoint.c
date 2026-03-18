/*
 * XREFs of KiTpWriteSecureBreakpoint @ 0x1402ADB64
 * Callers:
 *     KiTpWriteBreakpoint @ 0x1402AD9DC (KiTpWriteBreakpoint.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14001A590 (RtlLookupFunctionEntry.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiTpWriteSecureBreakpoint(__int64 a1, char a2)
{
  struct _MDL *PoolWithTag; // rbx
  PRUNTIME_FUNCTION v5; // rax
  PRUNTIME_FUNCTION v6; // r13
  NTSTATUS v7; // esi
  DWORD BeginAddress; // eax
  unsigned __int64 v9; // rsi
  unsigned int v10; // r15d
  __int16 v11; // dx
  unsigned __int64 v12; // r12
  unsigned __int64 ImageBase; // [rsp+28h] [rbp-100h] BYREF
  __int64 v16; // [rsp+30h] [rbp-F8h]
  _QWORD v17[14]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v18[64]; // [rsp+B0h] [rbp-78h] BYREF

  memset(v18, 0, sizeof(v18));
  PoolWithTag = 0LL;
  if ( !a2 || *(_BYTE *)(a1 + 49) )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = 1;
    v6 = 0LL;
  }
  else
  {
    v5 = RtlLookupFunctionEntry(*(_QWORD *)(a1 + 8), &ImageBase, 0LL);
    v6 = v5;
    if ( !v5 )
    {
      v7 = -1073741811;
      goto LABEL_15;
    }
    BeginAddress = v5->BeginAddress;
    v9 = ImageBase + BeginAddress;
    v10 = v6->EndAddress - BeginAddress;
  }
  v11 = v9;
  v16 = (unsigned int)v9;
  v12 = ((v9 & 0xFFF) + v10 + 4095LL) >> 12;
  if ( (unsigned int)v12 <= 2 )
  {
    PoolWithTag = (struct _MDL *)v18;
    ImageBase = (unsigned __int64)v18;
  }
  else
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v12 + 48, 0x70727446u);
    ImageBase = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_15;
    }
    v11 = v16;
  }
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * (v12 + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(v9 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = v11 & 0xFFF;
  PoolWithTag->ByteCount = v10;
  MiProbeAndLockPages(PoolWithTag, 0, 0);
  memset(v17, 0, 0x68uLL);
  LOBYTE(v17[3]) = a2;
  v17[1] = *(_QWORD *)(a1 + 8);
  v17[2] = v6;
  v7 = VslpEnterIumSecureMode(2, 73LL, 0LL, (__int64)v17);
  if ( v7 >= 0 && !*(_BYTE *)(a1 + 49) )
    *(_BYTE *)(a1 + 49) = 1;
LABEL_15:
  if ( PoolWithTag )
  {
    MmUnlockPages(PoolWithTag);
    if ( PoolWithTag != (struct _MDL *)v18 )
      ExFreePoolWithTag(PoolWithTag, 0x70727446u);
  }
  return (unsigned int)v7;
}
