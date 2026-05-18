/*
 * XREFs of sub_180074EBC @ 0x180074EBC
 * Callers:
 *     sub_1800752A0 @ 0x1800752A0 (sub_1800752A0.c)
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180074EBC(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  volatile signed __int32 *v3; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 32);
  if ( v1 )
  {
    if ( !_InterlockedDecrement(v1 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( !_InterlockedDecrement(v1 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v3 = *(volatile signed __int32 **)(a1 + 16);
  if ( v3 )
  {
    if ( !_InterlockedDecrement(v3 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( !_InterlockedDecrement(v3 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return sub_180089698(a1);
}
