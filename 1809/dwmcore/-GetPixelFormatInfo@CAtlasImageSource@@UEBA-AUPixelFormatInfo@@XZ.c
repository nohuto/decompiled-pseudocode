/*
 * XREFs of ?GetPixelFormatInfo@CAtlasImageSource@@UEBA?AUPixelFormatInfo@@XZ @ 0x180222750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasImageSource::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  bool v3; // cf
  __int64 result; // rax

  *(_DWORD *)a2 = 87;
  v3 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 104LL))(a1 - 8) != 0;
  result = a2;
  *(_QWORD *)(a2 + 4) = v3 ? 3 : 1;
  return result;
}
