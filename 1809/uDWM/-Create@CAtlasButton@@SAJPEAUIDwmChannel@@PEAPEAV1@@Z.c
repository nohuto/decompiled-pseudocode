/*
 * XREFs of ?Create@CAtlasButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002343C
 * Callers:
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023360 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x18001B524 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasButton::Create(struct IDwmChannel *a1, struct CAtlasButton **a2)
{
  unsigned int v2; // ebx
  CAtlasedImage *v5; // rax
  CAtlasedImage *v6; // rdi

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147024809;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x7Fu);
    return v2;
  }
  v5 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          168LL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0xA8uLL);
    CAtlasedImage::CAtlasedImage(v6);
    *((_QWORD *)v6 + 17) = 0LL;
    *(_QWORD *)v6 = &CAtlasButton::`vftable';
    *((_QWORD *)v6 + 18) = 0LL;
    *((_QWORD *)v6 + 19) = 1LL;
    *((_BYTE *)v6 + 160) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v2 = -2147024882;
    goto LABEL_10;
  }
  *((_QWORD *)v6 + 13) = a1;
  *a2 = v6;
  return v2;
}
