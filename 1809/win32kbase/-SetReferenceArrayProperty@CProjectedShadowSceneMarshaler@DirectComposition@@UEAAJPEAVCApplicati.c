/*
 * XREFs of ?SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0173C10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C000D4A4 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetReferenceArrayProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v10; // edi
  unsigned __int64 v11; // rcx
  unsigned int v12; // esi
  struct DirectComposition::CResourceMarshaler *v13; // rcx
  struct DirectComposition::CResourceMarshaler *v14; // rcx
  struct DirectComposition::CResourceMarshaler **v15; // r8
  int v16; // r13d
  __int64 v17; // rsi
  __int64 v18; // r12
  unsigned int *v19; // rsi
  __int64 v20; // rax

  v6 = 0;
  v10 = 0;
  *a6 = 0;
  if ( a3 != 1 && a3 != 8 )
  {
    v11 = a5;
LABEL_7:
    v10 = -1073741811;
    goto LABEL_8;
  }
  v11 = a5;
  if ( a5 && !a4 )
    goto LABEL_7;
LABEL_8:
  v12 = 0;
  if ( a3 == 1 )
  {
    if ( v10 < 0 )
      return (unsigned int)v10;
    do
    {
      if ( v12 >= v11 )
        break;
      v13 = a4[v12];
      if ( !v13
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v13 + 120LL))(
              v13,
              112LL) )
      {
        v10 = -1073741811;
      }
      v11 = a5;
      ++v12;
    }
    while ( v10 >= 0 );
  }
  else
  {
    if ( v10 < 0 )
      return (unsigned int)v10;
    do
    {
      if ( v12 >= v11 )
        break;
      v14 = a4[v12];
      if ( !v14
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 120LL))(
              v14,
              113LL) )
      {
        v10 = -1073741811;
      }
      v11 = a5;
      ++v12;
    }
    while ( v10 >= 0 );
  }
  if ( v10 >= 0 )
  {
    if ( a3 == 1 )
      v15 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 7);
    else
      v15 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 9);
    v16 = 128;
    if ( a3 != 1 )
      v16 = 512;
    v17 = 64LL;
    if ( a3 != 1 )
      v17 = 80LL;
    v18 = 68LL;
    if ( a3 != 1 )
      v18 = 84LL;
    v19 = (unsigned int *)((char *)this + v17);
    if ( v15 )
    {
      DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        (DirectComposition::CPrimitiveGroupMarshaler *)0x50,
        a2,
        v15,
        v19);
      *((_DWORD *)this + 4) |= v16;
    }
    v20 = 56LL;
    if ( a3 != 1 )
      v20 = 72LL;
    *(_QWORD *)((char *)this + v20) = a4;
    *v19 = a5;
    *(_DWORD *)((char *)this + v18) = 0;
    *a6 = 1;
    if ( *v19 )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(a4[v6++]);
      while ( v6 < *v19 );
    }
  }
  return (unsigned int)v10;
}
