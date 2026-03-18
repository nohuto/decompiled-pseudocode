/*
 * XREFs of rimDoRimDevChangeCallback @ 0x1C0069BF8
 * Callers:
 *     rimDoRimDevChange @ 0x1C0069B2C (rimDoRimDevChange.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

_UNKNOWN **__fastcall rimDoRimDevChangeCallback(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  __int64 (__fastcall *v4)(_QWORD *); // rdi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // r8d
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 632);
  if ( v4 )
  {
    memset(v11, 0, 0x20uLL);
    v8 = *(unsigned __int8 *)(a2 + 48);
    LODWORD(v11[0]) = a3;
    v9 = RimDeviceTypeToRimInputType(a2, v8);
    v11[2] = *(_QWORD *)(a1 + 400);
    v11[3] = *(_QWORD *)(a2 + 32);
    LODWORD(v11[1]) = v9;
    HIDWORD(v11[0]) = v10;
    return (_UNKNOWN **)v4(v11);
  }
  return result;
}
