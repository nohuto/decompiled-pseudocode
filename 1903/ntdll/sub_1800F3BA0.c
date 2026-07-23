/*
 * XREFs of sub_1800F3BA0 @ 0x1800F3BA0
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F36C0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     RtlCreateUmsThreadContext @ 0x1800F3460 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F35D0 (RtlDeleteUmsThreadContext.c)
 */

__int64 __fastcall sub_1800F3BA0(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // rsi
  NTSTATUS v4; // edi
  int v5; // eax
  _QWORD *v6; // rbx
  _DWORD ThreadInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  _QWORD *v10; // [rsp+30h] [rbp-18h]
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  v3 = NtCurrentTeb();
  v4 = -1073741811;
  if ( a2 )
  {
    v5 = RtlCreateUmsThreadContext(&BaseAddress);
    v6 = BaseAddress;
    v4 = v5;
    if ( v5 < 0 )
      goto LABEL_5;
    *((_QWORD *)BaseAddress + 156) = v3;
    v6[160] = v6;
    v6[159] = SLODWORD(v3->ClientId.UniqueThread);
    ThreadInformation[1] = 0;
    ThreadInformation[0] = 1;
    v9 = a2;
    v10 = v6;
    v4 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUmsInformation, ThreadInformation, 0x18u);
    if ( v4 < 0 )
    {
LABEL_5:
      if ( v6 )
        RtlDeleteUmsThreadContext(v6);
    }
    else
    {
      v3->TlsSlots[4] = v6;
    }
  }
  return (unsigned int)v4;
}
