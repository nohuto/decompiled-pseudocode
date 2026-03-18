/*
 * XREFs of ?AddChild@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAV12@H1PEA_N@Z @ 0x1C0082E50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::AddChild(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        int a4,
        struct DirectComposition::CVisualMarshaler *a5,
        bool *a6)
{
  unsigned int v6; // edi
  _QWORD *i; // rax

  v6 = 0;
  *a6 = 0;
  if ( *((_QWORD *)a3 + 22) || a5 && *((DirectComposition::CVisualMarshaler **)a5 + 22) != this )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( a4 )
    {
      if ( a5 )
      {
        *((_QWORD *)a3 + 21) = *((_QWORD *)a5 + 21);
        *((_QWORD *)a5 + 21) = a3;
      }
      else
      {
        *((_QWORD *)a3 + 21) = *((_QWORD *)this + 20);
        *((_QWORD *)this + 20) = a3;
      }
    }
    else
    {
      for ( i = (_QWORD *)((char *)this + 160);
            (struct DirectComposition::CVisualMarshaler *)*i != a5;
            i = (_QWORD *)(*i + 168LL) )
      {
        ;
      }
      *((_QWORD *)a3 + 21) = a5;
      *i = a3;
    }
    DirectComposition::CResourceMarshaler::AddRef(a3);
    *((_QWORD *)a3 + 22) = this;
    *((_DWORD *)this + 4) |= 0x4000u;
    *a6 = 1;
  }
  return v6;
}
