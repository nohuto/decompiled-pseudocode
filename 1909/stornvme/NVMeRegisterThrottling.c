/*
 * XREFs of NVMeRegisterThrottling @ 0x1C00054A0
 * Callers:
 *     NVMeEnableThrottling @ 0x1C0005340 (NVMeEnableThrottling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeRegisterThrottling(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 result; // rax

  v4 = a2;
  v5 = a3;
  if ( *(_QWORD *)(a1 + 8LL * a2 + 3800) )
    return 3238002695LL;
  result = StorPortExtendedFunction(0LL, a1, 32LL);
  if ( !(_DWORD)result )
  {
    MEMORY[0] = v4;
    MEMORY[8] = 0LL;
    MEMORY[0x10] = 10 * v5;
    MEMORY[0x18] = 0;
    *(_QWORD *)(a1 + 8 * v4 + 3800) = 0LL;
    return 0LL;
  }
  return result;
}
