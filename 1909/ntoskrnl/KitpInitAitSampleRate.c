/*
 * XREFs of KitpInitAitSampleRate @ 0x140A20348
 * Callers:
 *     KitInitialize @ 0x140A20314 (KitInitialize.c)
 * Callees:
 *     strstr @ 0x14019FD30 (strstr.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetSystemInformation @ 0x1401C40D0 (ZwSetSystemInformation.c)
 *     KitpReadUlongFromKey @ 0x140789E94 (KitpReadUlongFromKey.c)
 *     KitpOpenRegKey @ 0x140789F0C (KitpOpenRegKey.c)
 */

NTSTATUS __fastcall KitpInitAitSampleRate(__int64 a1, __int64 a2)
{
  const char *v2; // rcx
  __int64 v3; // rdx
  NTSTATUS v4; // eax
  int v5; // ecx
  NTSTATUS result; // eax
  int SystemInformation; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  SystemInformation = 0;
  Handle = 0LL;
  if ( a1 )
  {
    v2 = *(const char **)(a1 + 216);
    if ( (!v2 || !strstr(v2, "SAFEBOOT:")) && KitpOpenRegKey((__int64)v2, a2, &Handle) >= 0 )
    {
      v4 = KitpReadUlongFromKey(Handle, v3, &SystemInformation);
      v5 = SystemInformation;
      if ( v4 < 0 )
        v5 = 0;
      SystemInformation = v5;
    }
  }
  result = ZwSetSystemInformation(SystemAitSamplingValue, &SystemInformation, 4uLL);
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
