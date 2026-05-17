/*
 * XREFs of sub_1800D7F2C @ 0x1800D7F2C
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlQueryCriticalSectionOwner @ 0x1800E6890 (RtlQueryCriticalSectionOwner.c)
 */

__int64 __fastcall sub_1800D7F2C(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  v4 = *(_QWORD *)(a1 + 160);
  if ( v4 )
  {
    v5 = a2 >> 11;
    LOBYTE(v5) = v5 & 1;
    *(_QWORD *)(a1 + 168) = RtlQueryCriticalSectionOwner(v4, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
