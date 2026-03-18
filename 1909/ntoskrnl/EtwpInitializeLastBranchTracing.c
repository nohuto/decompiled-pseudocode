/*
 * XREFs of EtwpInitializeLastBranchTracing @ 0x14076DDB4
 * Callers:
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 EtwpInitializeLastBranchTracing()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  if ( ((unsigned __int8)&EtwpLastBranchLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_14046B580 = 0;
  dword_14046B584 = 0;
  EtwpLastBranchLookAsideList = 0uLL;
  result = ((__int64 (__fastcall *)(int *, unsigned int *))off_1404246E0[0])(&v1, &v2);
  if ( (_BYTE)result )
  {
    EtwpLastBranchStackSize = v1;
    result = v2;
    EtwpLastBranchSupportedOptions = v2;
  }
  return result;
}
