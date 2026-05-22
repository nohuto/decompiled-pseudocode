/*
 * XREFs of ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NPEAUIViewHierarchy@@I@Z @ 0x18005885C
 * Callers:
 *     ?OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FB840 (-OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ViewHelper::IsViewPartOfForegroundApplication(struct IViewHierarchy *a1, unsigned int a2)
{
  unsigned int v4; // eax
  int v5; // esi
  int v6; // eax

  v4 = (*(__int64 (__fastcall **)(struct IViewHierarchy *))(*(_QWORD *)a1 + 48LL))(a1);
  v5 = (*(__int64 (__fastcall **)(struct IViewHierarchy *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v4);
  v6 = (*(__int64 (__fastcall **)(struct IViewHierarchy *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, a2);
  return v6 && v5 && v6 == v5;
}
