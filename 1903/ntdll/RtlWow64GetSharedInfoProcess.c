/*
 * XREFs of RtlWow64GetSharedInfoProcess @ 0x1800793D0
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800023F0 (RtlWow64SuspendThread.c)
 *     RtlWow64SuspendProcess @ 0x1800DB550 (RtlWow64SuspendProcess.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwReadVirtualMemory @ 0x18009CEC0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlWow64GetSharedInfoProcess(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = ZwQueryInformationProcess(a1, 26LL, &v8);
  if ( (int)result >= 0 )
  {
    if ( v8 )
    {
      v7 = v8 + 1152;
      *a2 = 1;
      return ZwReadVirtualMemory(a1, v7, a3, 40LL, 0LL);
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
