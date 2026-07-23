/*
 * XREFs of MiCaptureAllocateMapExtendedParameters @ 0x140677058
 * Callers:
 *     MmAllocateVirtualMemory @ 0x140676D60 (MmAllocateVirtualMemory.c)
 *     MiMapViewOfSectionExCommon @ 0x140677DD0 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCaptureAllocateMapExtendedParameters(
        unsigned __int64 *Address,
        unsigned int a2,
        char a3,
        int a4,
        _QWORD *a5)
{
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v10; // r14
  SIZE_T v11; // rcx
  int v12; // esi
  char *v13; // r14
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax

  v7 = a2;
  memset(a5, 0, 0x40uLL);
  if ( !(_DWORD)v7 )
    return Address != 0LL ? 0xC000000D : 0;
  if ( !Address )
    return 3221225485LL;
  v10 = v7;
  v11 = 16 * v7;
  if ( is_mul_ok(v7, 0x10uLL) )
  {
    result = 0LL;
  }
  else
  {
    v11 = -1LL;
    result = 3221225621LL;
  }
  if ( (int)result >= 0 )
  {
    v12 = 0;
    if ( a3 )
      ProbeForWrite(Address, v11, 8u);
    v13 = (char *)&Address[2 * v10];
    while ( Address < (unsigned __int64 *)v13 )
    {
      v14 = (unsigned __int8)*(_DWORD *)Address;
      if ( (unsigned int)(v14 - 1) > 4 || *Address >= 0x100 )
        return 3221225485LL;
      v15 = 1 << v14;
      if ( ((1 << v14) & a4) == 0 )
        return 3221225485LL;
      if ( (v15 & v12) != 0 )
        return 3221225485LL;
      v12 |= v15;
      v16 = v14 - 1;
      if ( v16 )
      {
        v18 = v16 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              if ( v20 != 1 )
                return 3221225485LL;
              a5[7] = Address[1];
            }
            else
            {
              a5[5] = Address[1];
              *((_BYTE *)a5 + 48) = 1;
            }
          }
          else
          {
            v21 = Address[1];
            a5[3] = v21;
            if ( !v21 )
              return 3221225485LL;
          }
        }
        else
        {
          v22 = Address[1];
          if ( v22 > 0xFFFFFFFF )
            return 3221225485LL;
          *((_DWORD *)a5 + 8) = v22;
          if ( (_DWORD)v22 == -1 )
            return 3221225485LL;
          *((_DWORD *)a5 + 8) = v22 + 1;
        }
      }
      else
      {
        v17 = Address[1];
        if ( a3 )
        {
          if ( (v17 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v17 + 24 > 0x7FFFFFFF0000LL || v17 + 24 < v17 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        *a5 = *(_QWORD *)v17;
        a5[1] = *(_QWORD *)(v17 + 8);
        a5[2] = *(_QWORD *)(v17 + 16);
      }
      Address += 2;
    }
    *((_DWORD *)a5 + 13) = v12;
    return 0LL;
  }
  return result;
}
