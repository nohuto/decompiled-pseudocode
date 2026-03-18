/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140A22D5C
 * Callers:
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitializeBootEnvironment(__int64 a1)
{
  __int64 result; // rax

  dword_140432490 = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 240LL);
  result = *(_QWORD *)(a1 + 240);
  qword_140432498 = *(_QWORD *)(result + 2600);
  return result;
}
