/*
 * XREFs of scl_CalcOrigPhantomPoints @ 0x1C02B4204
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02BE488 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall scl_CalcOrigPhantomPoints(
        __int64 a1,
        __int16 *a2,
        __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  int v6; // edi
  int v9; // ebx
  int v10; // r9d
  int v11; // r9d
  __int64 result; // rax

  v6 = a4;
  v9 = a3;
  memset(
    (void *)(*(_QWORD *)(a1 + 40)
           + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1)),
    0,
    0x20uLL);
  memset(
    (void *)(*(_QWORD *)(a1 + 32)
           + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1)),
    0,
    0x20uLL);
  v10 = *a2 - v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 32)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1)) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 32)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 2)) = v10 + a5;
  *(_DWORD *)(*(_QWORD *)(a1 + 32)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 5)) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 32)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 6)) = *a2;
  v11 = v6 + a2[3];
  *(_DWORD *)(*(_QWORD *)(a1 + 40)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 3)) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 40)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 4)) = v11 - a6;
  *(_DWORD *)(*(_QWORD *)(a1 + 40)
            + 4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 7)) = v11;
  result = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(result + 4LL
                     * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 8)) = a2[3];
  return result;
}
