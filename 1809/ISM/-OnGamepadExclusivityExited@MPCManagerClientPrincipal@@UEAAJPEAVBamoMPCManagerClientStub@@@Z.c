/*
 * XREFs of ?OnGamepadExclusivityExited@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@@Z @ 0x1800DF700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnGamepadExclusivityExited(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 7) + 1048LL);
  result = 0LL;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, struct BamoMPCManagerClientStub *))(*(_QWORD *)v2 + 64LL))(v2, a2);
  return result;
}
