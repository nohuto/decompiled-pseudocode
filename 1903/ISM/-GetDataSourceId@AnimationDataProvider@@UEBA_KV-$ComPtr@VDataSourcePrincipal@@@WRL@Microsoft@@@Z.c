/*
 * XREFs of ?GetDataSourceId@AnimationDataProvider@@UEBA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1800D0090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AnimationDataProvider::GetDataSourceId(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // [rsp+48h] [rbp+10h]

  v3 = *a2 + 8;
  v6 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return v6;
}
