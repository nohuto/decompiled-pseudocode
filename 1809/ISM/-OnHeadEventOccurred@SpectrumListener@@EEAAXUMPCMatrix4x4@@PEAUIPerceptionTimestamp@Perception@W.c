/*
 * XREFs of ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x180059120
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x180057994 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpectrumListener::OnHeadEventOccurred(__int64 a1, __int128 *a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  MPCRawInputProvider *v6; // rcx
  int v7; // eax
  int v8[125]; // [rsp+40h] [rbp-658h] BYREF
  char v9; // [rsp+234h] [rbp-464h]
  __int128 v10; // [rsp+4B8h] [rbp-1E0h]
  __int128 v11; // [rsp+4C8h] [rbp-1D0h]
  __int128 v12; // [rsp+4D8h] [rbp-1C0h]
  __int128 v13; // [rsp+4E8h] [rbp-1B0h]
  wil::details::in1diag3 *retaddr; // [rsp+698h] [rbp+0h]

  memset_0(v8, 0, 0x640uLL);
  v8[6] = 1600;
  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 8, 0x20000, *(_DWORD *)(a1 + 28), (__int64)v8);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_8:
    wil::details::in1diag3::FailFast_Hr(
      v5,
      (void *)0xA1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18005925ALL);
  }
  v10 = *a2;
  v11 = a2[1];
  v12 = a2[2];
  v13 = a2[3];
  v9 = 1;
  AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  v6 = *(MPCRawInputProvider **)(a1 + 16);
  if ( v6 )
  {
    v7 = MPCRawInputProvider::QueueInput(v6, (struct InputInfo *)v8);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xAB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_8;
    }
  }
  if ( a1 != -80 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 80));
}
