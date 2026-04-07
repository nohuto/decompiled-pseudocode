/*
 * XREFs of ?TryReferenceBits@CBitmapLock@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1800B9970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapLock::TryReferenceBits(unsigned __int64 this, struct IUnknown **a2)
{
  __int64 v3; // rcx
  struct IUnknown *v5; // rax

  *a2 = 0LL;
  v3 = *(_QWORD *)(this + 24);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = *(struct IUnknown **)(this + 24);
LABEL_5:
    *a2 = v5;
    return 0LL;
  }
  if ( *(_BYTE *)(this + 17) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(this - 72) + 8LL))(this - 72);
    v5 = (struct IUnknown *)(this & -(__int64)(this != 72));
    goto LABEL_5;
  }
  return 0LL;
}
