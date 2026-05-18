/*
 * XREFs of sub_180020628 @ 0x180020628
 * Callers:
 *     sub_1800218E0 @ 0x1800218E0 (sub_1800218E0.c)
 *     sub_1800257F0 @ 0x1800257F0 (sub_1800257F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180020628(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rcx

  v2 = (volatile signed __int32 *)a1[16];
  if ( v2 )
  {
    if ( !_InterlockedDecrement(v2 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( !_InterlockedDecrement(v2 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)a1[14];
  if ( v3 )
  {
    if ( !_InterlockedDecrement(v3 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( !_InterlockedDecrement(v3 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = a1[12];
  if ( v4 )
  {
    a1[12] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_1800CBB64(a1);
}
