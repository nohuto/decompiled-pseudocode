/*
 * XREFs of sub_1800DFCB0 @ 0x1800DFCB0
 * Callers:
 *     sub_1800E0CA0 @ 0x1800E0CA0 (sub_1800E0CA0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DFCB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 68)
    || *(_QWORD *)(a1 + 24) != *(_QWORD *)(a1 + 8)
    || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 24), (_QWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 160LL))(a2, a1 + 24);
  }
  *(_BYTE *)(a1 + 68) = 0;
  return result;
}
