/*
 * XREFs of ??$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z @ 0x180021F6C
 * Callers:
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180015160 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x180021D94 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CAnimationPrimitiveBuffer>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
