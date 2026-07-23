/*
 * XREFs of ObpCaptureHandleInformationEx @ 0x140862A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ObpCaptureHandleInformationEx(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v9; // r9d
  unsigned __int64 v10; // r8
  int v11; // ecx

  *a6 += 40;
  if ( *a6 >= 0x28 )
  {
    if ( a5 >= *a6 )
    {
      v9 = 0;
      v10 = (*a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = a2;
      v11 = ((__int64)*(unsigned int *)a3 >> 17) & 7 | 8;
      if ( (a3[1] & 0x2000000) == 0 )
        LOBYTE(v11) = ((__int64)*(unsigned int *)a3 >> 17) & 7;
      *(_DWORD *)(*(_QWORD *)a1 + 32LL) = v11 & 7;
      *(_WORD *)(*(_QWORD *)a1 + 30LL) = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v10 + 24) ^ (unsigned __int64)BYTE1(v10)]
                                                            + 40);
      *(_QWORD *)(*(_QWORD *)a1 + 16LL) = a4;
      **(_QWORD **)a1 = v10 + 48;
      *(_WORD *)(*(_QWORD *)a1 + 28LL) = 0;
      *(_DWORD *)(*(_QWORD *)a1 + 24LL) = a3[1] & 0x1FFFFFF;
      *(_QWORD *)a1 += 40LL;
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  else
  {
    return (unsigned int)-1073741675;
  }
  return v9;
}
