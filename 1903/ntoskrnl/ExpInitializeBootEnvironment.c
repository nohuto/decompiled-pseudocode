/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140A22C7C
 * Callers:
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitializeBootEnvironment(__int64 a1)
{
  __int64 result; // rax

  dword_1404324F0 = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 240LL);
  result = *(_QWORD *)(a1 + 240);
  qword_1404324F8 = *(_QWORD *)(result + 2600);
  return result;
}
