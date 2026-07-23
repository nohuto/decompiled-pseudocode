/*
 * XREFs of MiTryLockLeafPage @ 0x1400829FC
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiDeleteClusterSection @ 0x140081EF0 (MiDeleteClusterSection.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14011B894 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiConvertStandbyToProto @ 0x14013EB50 (MiConvertStandbyToProto.c)
 *     MiMakeTransitionHeatBatch @ 0x1402CEE04 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiTryLockLeafPage(__int64 *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax

  v1 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = *v1;
      v3 = *v1;
      if ( (*v1 & 1) != 0 )
        goto LABEL_8;
      if ( (*v1 & 0xC00) != 0x800 )
        return 0LL;
      if ( MiInvalidPteConforms(v2) )
      {
        v3 = v2;
        if ( qword_14043B180 )
        {
          if ( (v2 & 0x10) == 0 )
            v3 = v2 & ~qword_14043B180;
        }
LABEL_8:
        v4 = 48 * ((v3 >> 12) & 0xFFFFFFFFFLL);
        if ( ((*(_QWORD *)(v4 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
          break;
      }
    }
    result = v4 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 - 0x58000000000LL + 24), 0x3FuLL) )
      return 0LL;
    if ( *v1 == v2 )
      return result;
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
}
