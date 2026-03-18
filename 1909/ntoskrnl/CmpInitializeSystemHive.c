/*
 * XREFs of CmpInitializeSystemHive @ 0x140A0DC40
 * Callers:
 *     CmpInitializePreloadedHives @ 0x140A0DB54 (CmpInitializePreloadedHives.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpSetupLoggingState @ 0x14076247C (CmpSetupLoggingState.c)
 */

__int64 __fastcall CmpInitializeSystemHive(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  __int64 v6; // rbx
  int v7; // ecx
  __int64 result; // rax
  _BYTE v9[8]; // [rsp+60h] [rbp-198h] BYREF
  ULONG_PTR v10; // [rsp+68h] [rbp-190h] BYREF
  ULONG_PTR BugCheckParameter3[44]; // [rsp+70h] [rbp-188h] BYREF

  v2 = *(_QWORD *)(a1 + 168);
  v9[0] = 0;
  v10 = 0LL;
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v5 = CmpCreateHive(
         &v10,
         1u,
         0x12u,
         2u,
         v2,
         0LL,
         (__int64)&CmpSystemFileName,
         589832,
         0LL,
         0LL,
         v9,
         (__int64)BugCheckParameter3);
  if ( v5 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)BugCheckParameter3, v5);
  v6 = v10;
  CmpSetupLoggingState(v10, (unsigned int *)(*(_QWORD *)(a1 + 240) + 2868LL));
  if ( v9[0] == 1 )
    CmpInitRmLogOnLoad = 1;
  if ( CmpShareSystemHives )
    *(_DWORD *)(v6 + 160) |= 0x8000u;
  if ( CmStateSeparationEnabled && !CmStateSeparationDevMode )
    *(_DWORD *)(v6 + 160) = *(_DWORD *)(v6 + 160) & 0xFFFF7FFD | 0x8000;
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 64) + 4088LL);
  CmpBootType = v7;
  if ( !CmSelfHeal )
  {
    BYTE2(NlsMbCodePageTag) = 0;
    if ( (v7 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 3uLL, v6, 0LL);
  }
  result = CmpLinkHiveToMaster(
             (__int64)&CmRegistryMachineSystemName,
             0LL,
             v6,
             0,
             dword_140425000,
             0,
             0LL,
             a2,
             0LL,
             0LL,
             1);
  if ( (int)result >= 0 )
  {
    qword_140424FF0 = v6;
    return 0LL;
  }
  return result;
}
