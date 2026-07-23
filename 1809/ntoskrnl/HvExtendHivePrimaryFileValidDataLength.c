/*
 * XREFs of HvExtendHivePrimaryFileValidDataLength @ 0x1407FBDE8
 * Callers:
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvExtendHivePrimaryFileValidDataLength(__int64 a1, int a2, int a3)
{
  int (__fastcall *v3)(__int64, _QWORD, int *, __int64, int); // rax
  unsigned int v5; // ebx
  int v8; // [rsp+30h] [rbp-28h] BYREF
  int *v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2 - 4;
  v11 = -16843010;
  v9 = &v11;
  v3 = *(int (__fastcall **)(__int64, _QWORD, int *, __int64, int))(a1 + 40);
  v10 = 4;
  v5 = 0;
  if ( v3(a1, 0LL, &v8, 1LL, a3) >= 0 )
  {
    if ( (int)CmpFileFlushAndPurge(a1, 0) < 0 )
      return (unsigned int)-1073741491;
    return v5;
  }
  else
  {
    return (unsigned int)-1073741491;
  }
}
