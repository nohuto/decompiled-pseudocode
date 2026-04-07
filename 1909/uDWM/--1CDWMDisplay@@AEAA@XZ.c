/*
 * XREFs of ??1CDWMDisplay@@AEAA@XZ @ 0x18002C4F4
 * Callers:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18002C4A4 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18002C8C8 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMDisplay::~CDWMDisplay(CDWMDisplay *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
