/*
 * XREFs of MiAdvanceVadHint @ 0x140695E30
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B44 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EC0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544C0 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140859178 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  int v7; // r11d
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // r9d
  unsigned int v12; // ecx

  result = (unsigned int)(8 * (a3[2] - qword_14043A528));
  v4 = a1 >> 4;
  v5 = a2 >> 4;
  if ( (unsigned int)v5 >= (unsigned int)result )
  {
    v6 = result + *a3;
    if ( (unsigned int)v4 < v6 )
    {
      v7 = 0;
      if ( (unsigned int)v4 < (unsigned int)result )
      {
        LODWORD(v4) = 8 * (a3[2] - qword_14043A528);
        v7 = 1;
      }
      if ( (unsigned int)v5 >= v6 )
      {
        LODWORD(v5) = v6 - 1;
        v7 = 1;
      }
      v8 = v5;
      v9 = v5 - result;
      v10 = v8 - v4;
      v11 = v4 - result;
      v12 = v10 + 1;
      if ( v12 == 1 && !v7 || v11 == a3[4] )
      {
        result = (unsigned int)(v9 + 1);
        if ( a3[6] < (unsigned int)result )
        {
          a3[6] = result;
          if ( a3[5] < v12 )
            a3[5] = v12;
        }
        a3[4] = result;
      }
      else if ( v7 != 1 )
      {
        result = (unsigned int)(v9 + 1);
        a3[5] = v12;
        a3[6] = result;
      }
    }
  }
  return result;
}
