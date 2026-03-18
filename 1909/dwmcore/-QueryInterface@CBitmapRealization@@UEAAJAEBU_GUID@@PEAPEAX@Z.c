/*
 * XREFs of ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067E60
 * Callers:
 *     ?QueryInterface@CBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1630 (-QueryInterface@CBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1640 (-QueryInterface@CBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1650 (-QueryInterface@CBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::QueryInterface(CBitmapRealization *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  int v5; // edi

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 32LL))(this);
    if ( v5 < 0 )
    {
      *a3 = 0LL;
      return (unsigned int)v5;
    }
  }
  else
  {
    *a3 = this;
    v5 = 0;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v5;
}
