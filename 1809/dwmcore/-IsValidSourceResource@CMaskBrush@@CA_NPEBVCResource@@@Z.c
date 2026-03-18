/*
 * XREFs of ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800A1D14
 * Callers:
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x1800A1DA0 (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMaskBrush::IsValidSourceResource(const struct CResource *a1)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 19LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 145LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 63LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 50LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 101LL) )
  {
    return 1;
  }
  return v2;
}
