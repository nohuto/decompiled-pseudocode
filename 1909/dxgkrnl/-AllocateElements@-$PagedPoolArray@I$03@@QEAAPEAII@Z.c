/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C020B86C
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C0135440 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C0135520 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

PVOID __fastcall PagedPoolArray<unsigned int,4>::AllocateElements(__int64 a1, unsigned int a2)
{
  PVOID result; // rax
  SIZE_T v5; // rax

  if ( a2 <= 4 )
  {
    result = (PVOID)(a1 + 8);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    v5 = 4LL * a2;
    if ( !is_mul_ok(a2, 4uLL) )
      v5 = -1LL;
    result = operator new[](v5, 0x4B677844u, PagedPool);
  }
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 24) = a2;
  return result;
}
