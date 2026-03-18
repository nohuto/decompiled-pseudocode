/*
 * XREFs of ?SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0003DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C0004D84 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
  int v11; // r12d
  unsigned int v12; // esi
  struct DirectComposition::CResourceMarshaler **v13; // r8
  __int64 v14; // rsi
  __int64 v15; // r12
  unsigned int *v16; // rsi
  __int64 v17; // rax
  struct DirectComposition::CResourceMarshaler *v19; // rcx
  struct DirectComposition::CResourceMarshaler *v20; // rcx
  int v22; // [rsp+70h] [rbp+18h]

  v6 = 0;
  v10 = 0;
  *a6 = 0;
  if ( a3 != 8 && a3 != 1 || a5 && !a4 )
    v10 = -1073741811;
  v11 = 128;
  v12 = 0;
  if ( a3 == 1 )
  {
    if ( v10 < 0 )
      return (unsigned int)v10;
    do
    {
      if ( v12 >= a5 )
        break;
      v19 = a4[v12];
      if ( !v19
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v19 + 120LL))(
              v19,
              128LL) )
      {
        v10 = -1073741811;
      }
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
      if ( v12 >= a5 )
        break;
      v20 = a4[v12];
      if ( !v20
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v20 + 120LL))(
              v20,
              129LL) )
      {
        v10 = -1073741811;
      }
      ++v12;
    }
    while ( v10 >= 0 );
  }
  if ( v10 >= 0 )
  {
    if ( a3 == 1 )
      v13 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 7);
    else
      v13 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 9);
    if ( a3 != 1 )
      v11 = 512;
    v22 = v11;
    v14 = 64LL;
    if ( a3 != 1 )
      v14 = 80LL;
    v15 = 68LL;
    if ( a3 != 1 )
      v15 = 84LL;
    v16 = (unsigned int *)((char *)this + v14);
    if ( v13 )
    {
      DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        (DirectComposition::CPrimitiveGroupMarshaler *)0x50,
        a2,
        v13,
        v16);
      *((_DWORD *)this + 4) |= v22;
    }
    v17 = 56LL;
    if ( a3 != 1 )
      v17 = 72LL;
    *(_QWORD *)((char *)this + v17) = a4;
    *v16 = a5;
    *(_DWORD *)((char *)this + v15) = 0;
    *a6 = 1;
    if ( *v16 )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(a4[v6++]);
      while ( v6 < *v16 );
    }
  }
  return (unsigned int)v10;
}
