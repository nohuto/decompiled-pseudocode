/*
 * XREFs of ?IsHardwareProtected@CAtlasImageSource@@UEBA_NXZ @ 0x1802228D0
 * Callers:
 *     ?IsHardwareProtected@CAtlasImageSource@@W7EBA_NXZ @ 0x1800F1320 (-IsHardwareProtected@CAtlasImageSource@@W7EBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasImageSource::IsHardwareProtected(CAtlasImageSource *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 2);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 8) + 144LL))(*(_QWORD *)(v1 + 8));
  return result;
}
