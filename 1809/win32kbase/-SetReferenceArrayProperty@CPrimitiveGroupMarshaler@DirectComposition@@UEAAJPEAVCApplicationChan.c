/*
 * XREFs of ?SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C000D150
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C000D4A4 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  __int64 v10; // rbp
  DirectComposition::CPrimitiveGroupMarshaler *v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v15; // rbp
  DirectComposition::CPrimitiveGroupMarshaler *v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // rax

  v6 = 0;
  if ( a5 && !a4 )
    v6 = -1073741811;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v15 = 0LL;
      if ( v6 >= 0 )
      {
        do
        {
          v16 = (DirectComposition::CPrimitiveGroupMarshaler *)(unsigned int)v15;
          if ( (unsigned int)v15 >= a5 )
            break;
          if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v15] + 120LL))(
                  a4[v15],
                  108LL) )
            v6 = -1073741811;
          v15 = (unsigned int)(v15 + 1);
        }
        while ( v6 >= 0 );
        if ( v6 >= 0 )
        {
          DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
            v16,
            a2,
            *((struct DirectComposition::CResourceMarshaler ***)this + 12),
            (unsigned int *)this + 26);
          if ( *((_DWORD *)this + 27) )
            *((_DWORD *)this + 4) |= 0x80u;
          v17 = 0;
          if ( a5 )
          {
            v18 = 0LL;
            do
            {
              DirectComposition::CResourceMarshaler::AddRef(a4[v18]);
              v18 = ++v17;
            }
            while ( v17 < a5 );
          }
          *((_DWORD *)this + 27) = 0;
          *((_QWORD *)this + 12) = a4;
          *((_DWORD *)this + 26) = a5;
          *a6 = 1;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v10 = 0LL;
    if ( v6 >= 0 )
    {
      do
      {
        v11 = (DirectComposition::CPrimitiveGroupMarshaler *)(unsigned int)v10;
        if ( (unsigned int)v10 >= a5 )
          break;
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 120LL))(
                a4[v10],
                37LL) )
          v6 = -1073741811;
        v10 = (unsigned int)(v10 + 1);
      }
      while ( v6 >= 0 );
      if ( v6 >= 0 )
      {
        DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
          v11,
          a2,
          *((struct DirectComposition::CResourceMarshaler ***)this + 10),
          (unsigned int *)this + 22);
        if ( *((_DWORD *)this + 23) )
          *((_DWORD *)this + 4) |= 0x40u;
        v12 = 0;
        if ( a5 )
        {
          v13 = 0LL;
          do
          {
            DirectComposition::CResourceMarshaler::AddRef(a4[v13]);
            v13 = ++v12;
          }
          while ( v12 < a5 );
        }
        *((_DWORD *)this + 23) = 0;
        *((_QWORD *)this + 10) = a4;
        *((_DWORD *)this + 22) = a5;
        *a6 = 1;
      }
    }
  }
  return (unsigned int)v6;
}
