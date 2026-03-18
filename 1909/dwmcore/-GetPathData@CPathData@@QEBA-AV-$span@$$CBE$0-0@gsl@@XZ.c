/*
 * XREFs of ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1801E5C04
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A5654 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18024B1F0 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CPathData::GetPathData(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32) - v2;
  *a2 = v3;
  if ( v3 < 0 || (a2[1] = v2) == 0 && v3 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a2;
}
