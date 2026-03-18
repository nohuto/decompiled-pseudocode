/*
 * XREFs of ?QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067170
 * Callers:
 *     ?QueryInterface@CHwDisplayRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F05B0 (-QueryInterface@CHwDisplayRenderTarget@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwDisplayRenderTarget@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F05C0 (-QueryInterface@CHwDisplayRenderTarget@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::QueryInterface(
        CHwDisplayRenderTarget *this,
        const struct _GUID *a2,
        char **a3)
{
  char *v3; // rcx
  int v5; // edi
  __int64 v6; // rax

  v3 = (char *)this + 96;
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 32LL))(v3);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = v3;
      v5 = 0;
    }
    (*(void (__fastcall **)(char *))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return (unsigned int)v5;
}
