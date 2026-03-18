/*
 * XREFs of ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C016BA00
 * Callers:
 *     ?SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0176090 (-SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 * Callees:
 *     ?Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C016B878 (-Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceM.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // r8d
  __int64 result; // rax

  *a6 = 0;
  v7 = a3 - 48;
  if ( !v7 )
  {
    result = DirectComposition::CResourceMarshalerArray::Set((__int64)this + 280, a2, (__int64)a4, a5);
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)this + 41) = 0LL;
    *((_DWORD *)this + 86) |= 1u;
    goto LABEL_8;
  }
  if ( v7 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArray::Set((__int64)this + 304, a2, (__int64)a4, a5);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 42) = 0LL;
    *((_DWORD *)this + 86) |= 2u;
LABEL_8:
    *a6 = 1;
  }
  return result;
}
