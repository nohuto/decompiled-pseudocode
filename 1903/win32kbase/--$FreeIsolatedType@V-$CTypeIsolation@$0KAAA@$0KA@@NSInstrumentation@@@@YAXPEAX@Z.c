/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0053F10
 * Callers:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C0053384 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0053DE0 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01052A4 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

PVOID __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>(__int64 a1)
{
  PVOID result; // rax
  __int64 v3; // rcx

  result = gpUserTypeIsolation;
  v3 = *((_QWORD *)gpUserTypeIsolation + 1);
  if ( v3 )
    return (PVOID)NSInstrumentation::CTypeIsolation<40960,160>::Free(v3, a1);
  return result;
}
