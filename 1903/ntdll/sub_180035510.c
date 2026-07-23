/*
 * XREFs of sub_180035510 @ 0x180035510
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_180035B5C @ 0x180035B5C (sub_180035B5C.c)
 *     RtlSetThreadSubProcessTag @ 0x180035BB0 (RtlSetThreadSubProcessTag.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

void __fastcall sub_180035510(__int64 a1)
{
  GUID v2; // xmm0
  __int64 v3; // rax
  int v4; // r8d
  __int64 ThreadInformation; // [rsp+30h] [rbp-69h] BYREF
  __int64 v6; // [rsp+38h] [rbp-61h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-59h] BYREF

  if ( a1 )
  {
    v2 = *(GUID *)(a1 + 232);
    ThreadInformation = 0LL;
    NtCurrentTeb()->ActivityId = v2;
    if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != ThreadInformation
      && ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, &ThreadInformation, 8u) >= 0 )
    {
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = ThreadInformation;
    }
    if ( (*(_BYTE *)(a1 + 76) & 1) != 0 && (*(_BYTE *)(a1 + 104) & 1) == 0 )
    {
      RtlDeactivateActivationContextUnsafeFast(a1);
      *(_BYTE *)(a1 + 76) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 80) && (*(_BYTE *)(a1 + 104) & 2) == 0 )
    {
      RtlSetThreadSubProcessTag(0LL);
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 && (*(_BYTE *)(v3 + 436) & 1) == 0 )
    {
      if ( NtCurrentTeb()->IsImpersonating && (*(_BYTE *)(a1 + 104) & 4) == 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionInformation[0] = *(_QWORD *)(a1 + 88);
        ExceptionRecord.ExceptionInformation[1] = *(_QWORD *)(a1 + 96);
        ExceptionRecord.ExceptionCode = -1073740016;
        ExceptionRecord.NumberParameters = 2;
        RtlRaiseException(&ExceptionRecord);
        v6 = 0LL;
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &v6, 8u);
      }
      v4 = *(_DWORD *)(a1 + 104);
      if ( (v4 & 0x10) == 0 && (unsigned __int8)sub_180035B5C() )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with a transaction uncleared\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionCode = -1073740003;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
        v4 = *(_DWORD *)(a1 + 104);
      }
      if ( (v4 & 0x20) == 0 && NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with the loader lock held\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionCode = -1073740002;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
        v4 = *(_DWORD *)(a1 + 104);
      }
      if ( (v4 & 0x40) == 0 && NtCurrentTeb()->PreferredLanguages )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with preferred languages set\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionCode = -1073740001;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
        v4 = *(_DWORD *)(a1 + 104);
      }
      if ( (v4 & 0x80u) == 0 )
      {
        if ( NtCurrentTeb()->SavedPriorityState )
        {
          DbgPrintEx(
            0x54u,
            0,
            "ThreadPool: callback %p(%p) returned with background priorities set\n",
            *(const void **)(a1 + 88),
            *(const void **)(a1 + 96));
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          ExceptionRecord.ExceptionCode = -1073740000;
          ExceptionRecord.NumberParameters = 0;
          RtlRaiseException(&ExceptionRecord);
        }
      }
    }
  }
}
