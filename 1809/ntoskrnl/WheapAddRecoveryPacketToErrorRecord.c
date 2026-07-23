/*
 * XREFs of WheapAddRecoveryPacketToErrorRecord @ 0x140320A14
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x140320C44 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall WheapAddRecoveryPacketToErrorRecord(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned int v5; // esi
  unsigned int v8; // edx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int128 v11; // xmm1
  _OWORD *v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _OWORD v17[5]; // [rsp+20h] [rbp-50h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 10);
  v5 = a1[6];
  if ( (unsigned int)v3 >= v5 )
    return (unsigned int)-1073741789;
  memset(v17, 0, sizeof(v17));
  v9 = a2 + 128;
  v8 = 0;
  DWORD2(v17[1]) = a1[7];
  HIDWORD(v17[1]) = a1[2];
  *(_QWORD *)&v17[0] = 0x341454857LL;
  DWORD2(v17[0]) = 80;
  *(_QWORD *)&v17[3] = a2;
  if ( (_WORD)v3 )
  {
    v9 += 72 * v3;
    v10 = *(_DWORD *)(v9 - 72) + *(_DWORD *)(v9 - 68);
  }
  else
  {
    v10 = 72 * v5 + 128;
  }
  if ( a3 - v10 < 0x50 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v11 = v17[1];
    *(_WORD *)(v9 + 8) = 768;
    *(_DWORD *)v9 = v10;
    *(_DWORD *)(v9 + 4) = 80;
    *(_DWORD *)(v9 + 48) = 0;
    *(GUID *)(v9 + 16) = WHEA_ERROR_PACKET_SECTION_GUID;
    v12 = (_OWORD *)(a2 + v10);
    *v12 = v17[0];
    v13 = v17[2];
    v12[1] = v11;
    v14 = v17[3];
    v12[2] = v13;
    v15 = v17[4];
    v12[3] = v14;
    v12[4] = v15;
    ++*(_WORD *)(a2 + 10);
  }
  return v8;
}
