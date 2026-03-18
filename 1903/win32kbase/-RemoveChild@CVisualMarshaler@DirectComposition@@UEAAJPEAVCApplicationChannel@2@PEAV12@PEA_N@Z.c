/*
 * XREFs of ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C007F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAV12@@Z @ 0x1C007F688 (-UnlinkVisualChildInternal@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // edi
  _QWORD *i; // rcx
  __int64 v10; // rax

  v4 = 0;
  if ( *((DirectComposition::CVisualMarshaler **)a3 + 22) == this )
  {
    for ( i = (_QWORD *)((char *)this + 160);
          (struct DirectComposition::CVisualMarshaler *)*i != a3;
          i = (_QWORD *)(*i + 168LL) )
    {
      ;
    }
    *i = *((_QWORD *)a3 + 21);
    v10 = *(_QWORD *)a3;
    *((_QWORD *)a3 + 21) = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CVisualMarshaler *))(v10 + 272))(a3) )
    {
      DirectComposition::CVisualMarshaler::UnlinkVisualChildInternal(this, a2, a3);
      *a4 = 1;
    }
    else
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, a3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
