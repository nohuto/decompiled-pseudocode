/*
 * XREFs of ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180026780
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023450 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C1A88 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Reallocate(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r8
  _DWORD *v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = a2;
  v4 = (_DWORD *)(*a1 - 24);
  if ( v4[3] >= (int)v2
    || (int)v2 <= 0
    || (v5 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, __int64))(**(_QWORD **)v4 + 16LL))(
               *(_QWORD *)v4,
               v4,
               v2,
               2LL)) == 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(a1);
  }
  result = v5 + 24;
  *a1 = result;
  return result;
}
