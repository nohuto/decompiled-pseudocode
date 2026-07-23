/*
 * XREFs of ViGenericDriverEntry @ 0x140943A70
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ViGenericDriverEntry(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 (**v2)(void); // r9
  __int64 (*v3)(void); // rax

  v2 = *(__int64 (***)(void))(*(_QWORD *)(BugCheckParameter2 + 48) + 64LL);
  if ( !v2 || (v3 = *v2) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, BugCheckParameter2, (ULONG_PTR)v2, 0LL);
  if ( pXdvDriverEntry )
    return ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64 (*)(void)))pXdvDriverEntry)(BugCheckParameter2, a2, v3);
  else
    return v3();
}
