/*
 * XREFs of DxgkGetAdapterBrightnessInfo @ 0x1C00450A4
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkGetAdapterBrightnessInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  void (__fastcall *v4)(_QWORD); // rax
  unsigned int v5; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_WORD *)(v2 + 4642) == 2 && (v4 = *(void (__fastcall **)(_QWORD))(v2 + 4696)) != 0LL )
    v4(*(_QWORD *)(v2 + 4648));
  else
    *a2 = 0;
  v5 = a2[1] & 0xFFFFFFFA | *(_BYTE *)(v2 + 4280) & 1 | (4 * (*(_BYTE *)(v2 + 4304) & 1));
  a2[1] = v5;
  a2[1] = v5 ^ (v5 ^ (2 * *(unsigned __int8 *)(v2 + 4264))) & 2;
  a2[2] = *(_DWORD *)(v2 + 4268);
  result = *(unsigned __int8 *)(v2 + 4272);
  a2[3] = result;
  return result;
}
