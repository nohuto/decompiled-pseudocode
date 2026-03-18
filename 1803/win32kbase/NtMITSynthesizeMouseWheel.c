/*
 * XREFs of NtMITSynthesizeMouseWheel @ 0x1C00B4E90
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C0140248 (ApiSetEditionSynthesizeMouseWheel.c)
 */

__int64 __fastcall NtMITSynthesizeMouseWheel(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int128 v5; // xmm1
  int v6; // ebx
  __int64 v7; // rcx
  _OWORD v9[2]; // [rsp+40h] [rbp-68h] BYREF
  __m128i v10; // [rsp+60h] [rbp-48h]
  __int128 v11; // [rsp+70h] [rbp-38h]
  __m128i v12; // [rsp+80h] [rbp-28h]
  __int128 v13; // [rsp+90h] [rbp-18h]
  __int64 v14; // [rsp+C0h] [rbp+18h] BYREF

  v3 = a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v14, a2, a3);
  if ( a1 + 32 < a1 || a1 + 32 > MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v10 = *(__m128i *)a1;
  v5 = *(_OWORD *)(a1 + 16);
  v11 = v5;
  v12 = v10;
  v13 = v5;
  if ( (_mm_srli_si128(v10, 8).m128i_i32[1] & 0x1800) != 0 )
  {
    v9[0] = v10;
    v9[1] = v5;
    v6 = ApiSetEditionSynthesizeMouseWheel(v9, v3);
  }
  else
  {
    v6 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
