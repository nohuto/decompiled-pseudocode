/*
 * XREFs of ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C0052A84
 * Callers:
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0052B70 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0052DA0 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo(FlipManagerTokenInitInfo *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
