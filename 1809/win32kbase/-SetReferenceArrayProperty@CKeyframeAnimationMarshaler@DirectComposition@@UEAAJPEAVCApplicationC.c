/*
 * XREFs of ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C016C640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C016C800 (-SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceArrayProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  signed int v10; // edi
  unsigned int v11; // r13d
  struct DirectComposition::CApplicationChannel *v13; // [rsp+68h] [rbp+10h]

  v13 = a2;
  v6 = 0;
  *a6 = 0;
  v10 = a4 == 0LL ? 0xC000000D : 0;
  v11 = 0;
  if ( a4 )
  {
    do
    {
      if ( v11 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v11] + 120LL))(
              a4[v11],
              10LL) )
        v10 = -1073741811;
      ++v11;
    }
    while ( v10 >= 0 );
    a2 = v13;
  }
  if ( v10 >= 0 )
  {
    if ( a3 == 14 )
    {
      if ( *((_QWORD *)this + 22) || *((_DWORD *)this + 46) )
        v10 = -1073741811;
      if ( v10 >= 0 )
      {
        *((_DWORD *)this + 46) = a5;
        *((_QWORD *)this + 22) = a4;
        *a6 = 1;
        *((_DWORD *)this + 4) &= ~0x400u;
        if ( *((_DWORD *)this + 46) )
        {
          do
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 22) + 8LL * v6++));
          while ( v6 < *((_DWORD *)this + 46) );
        }
      }
    }
    else
    {
      return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
                             this,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6);
    }
  }
  return (unsigned int)v10;
}
