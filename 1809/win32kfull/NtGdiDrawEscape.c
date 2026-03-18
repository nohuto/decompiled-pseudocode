/*
 * XREFs of NtGdiDrawEscape @ 0x1C02919F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     GreDrawEscape @ 0x1C0260448 (GreDrawEscape.c)
 */

__int64 __fastcall NtGdiDrawEscape(HDC a1, unsigned int a2, int a3, _BYTE *a4)
{
  SIZE_T v5; // rsi
  int v8; // ebx
  _BYTE *v9; // r15
  void *v10; // rdi
  HANDLE v12; // rax
  int v13; // eax
  _BYTE v14[64]; // [rsp+50h] [rbp-88h] BYREF

  v5 = a3;
  v8 = 0;
  v9 = a4;
  v10 = 0LL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    if ( a3 > 64 || (int)((a3 + 3) & 0xFFFFFFFC) > 64 )
    {
      if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
        v12 = (HANDLE)GrepSecureVirtualMemory(a4, v5, 2LL);
      else
        v12 = MmSecureVirtualMemory(a4, v5, 2u);
      v10 = v12;
      v13 = 0;
      if ( !v10 )
        v13 = -1;
      v8 = v13;
    }
    else
    {
      v9 = v14;
      if ( &a4[a3] < a4 || (unsigned __int64)&a4[a3] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v14, a4, a3);
    }
    if ( v8 >= 0 )
      v8 = GreDrawEscape(a1, a2, v5, (__int64)v9);
    if ( v10 )
    {
      if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
        GrepUnsecureVirtualMemory(v10);
      else
        MmUnsecureVirtualMemory(v10);
    }
  }
  else if ( a3 )
  {
    return (unsigned int)-1;
  }
  else
  {
    return (unsigned int)GreDrawEscape(a1, a2, 0, 0LL);
  }
  return (unsigned int)v8;
}
