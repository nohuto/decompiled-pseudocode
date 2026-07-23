/*
 * XREFs of ExpGetSystemBasicInformation @ 0x1400A608C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1406269DC (MmGetNumberOfPhysicalPages.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
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

  v2 = *((_WORD *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3);
  Group = KeGetCurrentPrcb()->Group;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = 0x7FFFFFFEFFFFLL;
  if ( (unsigned __int16)Group >= LOWORD(KeActiveProcessors[0]) )
    v4 = 0LL;
  else
    v4 = qword_1405426A8[Group];
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
  if ( *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * v6) + 7104LL) <= 0xFFFFFFFFuLL )
    v11 = *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * v6) + 7104LL);
  v7[4] = v11;
  if ( *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * v6) + 7112LL) <= 0xFFFFFFFFuLL )
    v9 = *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * v6) + 7112LL);
  v7[5] = v9;
  return v8;
}
