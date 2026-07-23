/*
 * XREFs of MiGetSystemPteStatistics @ 0x14085D254
 * Callers:
 *     MmGetSessionMappedViewInformation @ 0x14084D700 (MmGetSessionMappedViewInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400F04D4 (MiGetNumberOfCachedPtes.c)
 *     RtlFindLongestRunClearEx @ 0x14016E79C (RtlFindLongestRunClearEx.c)
 */

__int64 __fastcall MiGetSystemPteStatistics(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  int NumberOfCachedPtes; // eax
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = (*(_DWORD *)(a1 + 24) & 4) != 0 ? 16 : 1;
  v7 = v6 * RtlFindLongestRunClearEx(a1, &v12);
  v8 = 0x2000000 - v6 * *(_QWORD *)(a1 + 56);
  *a3 = v7;
  if ( v8 > v7 )
    *a3 = v8;
  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  result = v10 + (unsigned int)(v6 * NumberOfCachedPtes);
  *a2 = result + v6 * *(_QWORD *)(a1 + 88);
  return result;
}
