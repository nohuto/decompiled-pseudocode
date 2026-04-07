/*
 * XREFs of ?Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180035F64
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CText@@AEAA@XZ @ 0x180036094 (--0CText@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::Create(struct IDwmChannel *a1, struct CText **a2)
{
  CText *v4; // rax
  CText *v5; // rbx
  struct CText *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x26u);
    return v8;
  }
  v4 = (CText *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  432LL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x1B0uLL);
    v6 = CText::CText(v5);
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_13;
  }
  v7 = (*(__int64 (__fastcall **)(struct CText *, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL))(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x26u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
