/*
 * XREFs of sub_18007EB24 @ 0x18007EB24
 * Callers:
 *     sub_180079FDC @ 0x180079FDC (sub_180079FDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007EB24(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  v1 = a1[1];
  v3 = *a1;
  if ( *a1 != v1 )
  {
    do
    {
      v4 = *(volatile signed __int32 **)(v3 + 8);
      if ( v4 )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
      v3 += 16LL;
    }
    while ( v3 != v1 );
    v3 = *a1;
  }
  a1[1] = v3;
  return result;
}
