/*
 * XREFs of VfMajorRegisterHandlers @ 0x140936B18
 * Callers:
 *     VfInitVerifierComponents @ 0x1409276D0 (VfInitVerifierComponents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfMajorRegisterHandlers(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 result; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx

  result = (unsigned int)(a1 - 28);
  if ( (unsigned __int8)(a1 - 28) > 0xE2u )
  {
    if ( (unsigned __int8)a1 > 0x1Bu )
      v14 = (unsigned int)((_BYTE)a1 != 0xFF) + 28;
    else
      v14 = (unsigned __int8)a1;
    v15 = (_QWORD *)((char *)&ViMajorVerifierRoutines + 96 * v14);
    v15[3] = a5;
    v15[4] = a6;
    v15[5] = a7;
    v15[6] = a8;
    v15[7] = a9;
    v15[8] = a10;
    v15[9] = a11;
    v15[10] = a12;
    result = a13;
    v15[11] = a13;
    v15[1] = a3;
    v15[2] = a4;
    *v15 = a2;
  }
  return result;
}
