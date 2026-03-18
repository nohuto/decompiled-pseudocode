/*
 * XREFs of NtMITSynthesizeMouseWheel @ 0x1C00EDAF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C0163984 (ApiSetEditionSynthesizeMouseWheel.c)
 */

__int64 __fastcall NtMITSynthesizeMouseWheel(ULONG64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int128 v6; // xmm2
  int v7; // ebx
  _OWORD v9[2]; // [rsp+40h] [rbp-48h] BYREF
  __m128i v10; // [rsp+60h] [rbp-28h]
  __int128 v11; // [rsp+70h] [rbp-18h]
  char v12; // [rsp+A0h] [rbp+18h] BYREF
  LPCWSTR *v13; // [rsp+A8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v13, L"MITSynthesizeMouseWheel", 0LL);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v12, v4, v5);
  if ( a1 + 32 < a1 || a1 + 32 > MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v6 = *(_OWORD *)(a1 + 16);
  v10 = *(__m128i *)a1;
  v11 = v6;
  if ( (_mm_srli_si128(v10, 8).m128i_i32[1] & 0x1800) != 0 )
  {
    v9[0] = v10;
    v9[1] = v6;
    v7 = ApiSetEditionSynthesizeMouseWheel(v9, a2);
  }
  else
  {
    v7 = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v13);
  return v7;
}
