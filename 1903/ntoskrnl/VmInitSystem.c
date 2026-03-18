/*
 * XREFs of VmInitSystem @ 0x140A01180
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x1400E5320 (ExInitializeLookasideListExInternal.c)
 *     ExRegisterHost @ 0x140758824 (ExRegisterHost.c)
 */

__int64 __fastcall VmInitSystem(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+58h] [rbp-30h]
  __int64 (__fastcall **v5)(int, int, int, int, __int64); // [rsp+60h] [rbp-28h]
  __int128 v6; // [rsp+68h] [rbp-20h]

  v3[1] = 1;
  v4 = 512LL;
  v3[0] = 1114120;
  v6 = 0LL;
  v5 = &VmpHostInterface;
  result = ExRegisterHost(&VmpExtensionHost, a2, (unsigned __int16 *)v3);
  if ( (int)result >= 0 )
  {
    ExInitializeLookasideListExInternal(&VmpLargeFaultBatchLookasideList, 0LL, 0LL, 512, 0, 0x8020uLL, 1649175894, 0, 0);
    return 0LL;
  }
  return result;
}
