/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180033828
 * Callers:
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180033454 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
