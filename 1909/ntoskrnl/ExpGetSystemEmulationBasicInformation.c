/*
 * XREFs of ExpGetSystemEmulationBasicInformation @ 0x14012A2D8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1405CB2C0 (MmGetNumberOfPhysicalPages.c)
 *     ExSystemExceptionFilter @ 0x140749ED0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemEmulationBasicInformation(__int64 a1)
{
  unsigned __int64 v2; // r9
  unsigned __int16 v3; // r8
  int Group; // ecx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  unsigned __int16 v9; // r8
  unsigned int v10; // r10d
  _DWORD *v11; // r11
  int v12; // r9d
  int v13; // eax
  int v14; // eax

  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[17];
  v3 = *(_WORD *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69];
  Group = KeGetCurrentPrcb()->Group;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  if ( (unsigned __int16)Group >= LOWORD(KeActiveProcessors[0]) )
  {
    LODWORD(v5) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = qword_140572748[Group];
    v6 = v5;
  }
  v7 = (unsigned int)v5 | HIDWORD(v6);
  *(_QWORD *)(a1 + 48) = v7;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v7 - ((v7 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v7 - ((v7 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v7 - ((v7 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v7 - ((v7 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = v2 - 1;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(v3);
  v12 = -1;
  v13 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v13 = NumberOfPhysicalPages;
  v11[3] = v13;
  v14 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v9) + 7872LL) <= 0xFFFFFFFFuLL )
    v14 = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v9) + 7872LL);
  v11[4] = v14;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v9) + 7880LL) <= 0xFFFFFFFFuLL )
    v12 = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * v9) + 7880LL);
  v11[5] = v12;
  return v10;
}
