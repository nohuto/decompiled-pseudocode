/*
 * XREFs of ?GetTranspose@CMILMatrix@@QEBA?AV1@XZ @ 0x1801E247C
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801BE678 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?transpose@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBU4123@@Z @ 0x1801E3440 (-transpose@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBU4123@@Z.c)
 */

__int64 __fastcall CMILMatrix::GetTranspose(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rax
  __int64 v3; // r8
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 result; // rax
  _BYTE v8[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (_OWORD *)Windows::Foundation::Numerics::transpose(v8, a1, a2);
  *(_DWORD *)(v3 + 64) = 0;
  v4 = v2[1];
  *(_OWORD *)v3 = *v2;
  v5 = v2[2];
  *(_OWORD *)(v3 + 16) = v4;
  v6 = v2[3];
  result = v3;
  *(_OWORD *)(v3 + 32) = v5;
  *(_OWORD *)(v3 + 48) = v6;
  return result;
}
