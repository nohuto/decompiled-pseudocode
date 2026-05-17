/*
 * XREFs of RtlZombifyActivationContext @ 0x1800DE8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlZombifyActivationContext(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // r8
  char v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || ((a1 - 1) | 7) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( (v3 & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        v4 = *(_QWORD *)(a1 + 40);
        v5 = *(_QWORD *)(a1 + 24);
        v7 = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, char *))(a1 + 32))(
          2LL,
          a1,
          v5,
          v4,
          0LL,
          &v7);
        v3 = *(_DWORD *)(a1 + 4);
      }
      *(_DWORD *)(a1 + 4) = v3 | 1;
    }
  }
  return v1;
}
