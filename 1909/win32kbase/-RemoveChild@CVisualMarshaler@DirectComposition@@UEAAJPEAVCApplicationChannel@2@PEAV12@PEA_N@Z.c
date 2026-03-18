/*
 * XREFs of ?RemoveChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C007D710
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // esi
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
      *((_DWORD *)a3 + 4) |= 8u;
      *((_QWORD *)a3 + 24) = *((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = a3;
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
