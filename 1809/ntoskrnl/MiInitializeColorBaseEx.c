/*
 * XREFs of MiInitializeColorBaseEx @ 0x140028994
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiInitializeColorBase @ 0x14017E618 (MiInitializeColorBase.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184C44 (MiDemoteValidLargePageOneLevel.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiInitializeColorBaseSession @ 0x1400E7770 (MiInitializeColorBaseSession.c)
 */

__int64 __fastcall MiInitializeColorBaseEx(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r9
  unsigned int v3; // r10d
  unsigned __int16 *v4; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return MiInitializeColorBaseSession(v3);
  if ( v2 > 0x7FFFFFFEFFFFLL
    && (v2 < qword_14043CB80 || v2 > qword_14043B5F0)
    && (v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  }
  return MiInitializePageColorBase(v4, v3, v1);
}
