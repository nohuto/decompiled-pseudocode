/*
 * XREFs of ExpGetSystemBasicInformation @ 0x1400047D8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1405CB2C0 (MmGetNumberOfPhysicalPages.c)
 *     ExSystemExceptionFilter @ 0x140749ED0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemBasicInformation(__int64 a1)
{
  unsigned __int16 v2; // r8
  int Group; // ecx
  unsigned __int64 v4; // rcx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  unsigned __int16 v6; // r8
  _DWORD *v7; // r10
  unsigned int v8; // r11d
  int v9; // r9d
  int v10; // eax
  int v11; // eax

  v2 = *(_WORD *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69];
  Group = KeGetCurrentPrcb()->Group;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = 0x7FFFFFFEFFFFLL;
  if ( (unsigned __int16)Group >= (unsigned __int16)KeActiveProcessors )
    v4 = 0LL;
  else
    v4 = qword_140572748[Group];
  *(_QWORD *)(a1 + 48) = v4;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(v2);
  v9 = -1;
  v10 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v10 = NumberOfPhysicalPages;
  v7[3] = v10;
  v11 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v6) + 7872LL) <= 0xFFFFFFFFuLL )
    v11 = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v6) + 7872LL);
  v7[4] = v11;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v6) + 7880LL) <= 0xFFFFFFFFuLL )
    v9 = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v6) + 7880LL);
  v7[5] = v9;
  return v8;
}
