/*
 * XREFs of ?InitializeSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800A11EC
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z @ 0x18009FFE0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800A01D0 (-AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AlpcPort::InitializeSectionListEntryPool(AlpcPort *this)
{
  unsigned __int64 v2; // rdi
  AlpcPort *v3; // rax
  AlpcPort *v4; // rbx
  AlpcPort **v5; // rcx

  v2 = 0LL;
  while ( 1 )
  {
    v3 = (AlpcPort *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v4 = v3;
    if ( v3 )
      memset_0(v3, 0, 0x30uLL);
    else
      v4 = 0LL;
    if ( !v4 )
      break;
    v5 = (AlpcPort **)*((_QWORD *)this + 7);
    if ( *v5 != (AlpcPort *)((char *)this + 48) )
      __fastfail(3u);
    *(_QWORD *)v4 = (char *)this + 48;
    ++v2;
    *((_QWORD *)v4 + 1) = v5;
    *v5 = v4;
    ++*((_QWORD *)this + 8);
    *((_QWORD *)this + 7) = v4;
    if ( v2 >= 0x20 )
      return 0LL;
  }
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
  return 2147942414LL;
}
