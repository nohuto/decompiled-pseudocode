/*
 * XREFs of ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x1800BF980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisual::HasAntialiasedContent(CSpriteVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 240LL))(v3)
    || (**((_DWORD **)this + 28) & 0x8000) != 0 )
  {
    return 1;
  }
  return v2;
}
