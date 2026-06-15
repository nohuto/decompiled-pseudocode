/*
 * XREFs of WPP_SF_dID @ 0x180102860
 * Callers:
 *     ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x180101460 (-ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dID(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_0f7e38c9827a35e9d5a2ad6ce79f9155_Traceguids, 19LL, &v5);
}
