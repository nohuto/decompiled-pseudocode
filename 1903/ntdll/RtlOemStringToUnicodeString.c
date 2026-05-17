/*
 * XREFs of RtlOemStringToUnicodeString @ 0x180061CE0
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x180061A30 (RtlDnsHostNameToComputerName.c)
 * Callees:
 *     RtlxOemStringToUnicodeSize @ 0x180022080 (RtlxOemStringToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x180061F00 (RtlOemToUnicodeN.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

__int64 __fastcall RtlOemStringToUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edi
  __int64 v10; // rax
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize(a2);
  if ( v6 > 0xFFFE )
    return 3221225712LL;
  *a1 = v6 - 2;
  if ( a3 )
  {
    a1[1] = v6;
    v10 = sub_18006D6B8(v6, 2LL);
    *((_QWORD *)a1 + 1) = v10;
    if ( !v10 )
      return 3221225495LL;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > a1[1] || v7 < 2 )
      return 2147483653LL;
  }
  v8 = RtlOemToUnicodeN(*((_QWORD *)a1 + 1), *a1, (unsigned int)&v11, *((_QWORD *)a2 + 1), *a2);
  if ( v8 >= 0 )
  {
    *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v11 >> 1)) = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( a3 )
    {
      RtlDeleteBoundaryDescriptor(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v8;
}
