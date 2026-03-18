/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z @ 0x1C0155A10
 * Callers:
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAHPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154738 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAHPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAU.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01541A0 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IVRIMPOINTERINFONODE **a2,
        struct tagRIMPOINTERINFONODE *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v5; // rdi
  _QWORD *v7; // rcx
  unsigned int v8; // r9d
  _QWORD *v9; // r10
  __int64 *v10; // r11
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // r8
  __int16 *v14; // rdx
  __int16 v15; // ax

  v5 = *((_QWORD *)this + 3);
  if ( !CIVSerializer::Ensure(this, (a5 + 7) & 0xFFFFFFFFFFFFFFF8uLL) )
    return 3221225495LL;
  v11 = v5 + *v7;
  *v10 = v11;
  if ( v8 )
  {
    v12 = (_WORD *)(v11 + 12);
    v13 = v8;
    v14 = (__int16 *)((char *)a3 + 10);
    do
    {
      *((_DWORD *)v12 - 3) = *(_DWORD *)(v14 - 5);
      *(v12 - 2) = *(v14 - 1);
      v15 = *v14;
      v14 += 84;
      *v12 = v15;
      v12 += 80;
      *((_DWORD *)v12 - 5) = *(_DWORD *)(v14 - 9);
      *((_DWORD *)v12 - 4) = *(_DWORD *)(v14 - 7);
      *((_DWORD *)v12 - 17) = *(_DWORD *)(v14 - 33);
      *((_DWORD *)v12 - 16) = *(_DWORD *)(v14 - 31);
      *(_OWORD *)(v12 - 30) = *(_OWORD *)(v14 - 29);
      *(_OWORD *)(v12 - 22) = *(_OWORD *)(v14 - 21);
      *((_DWORD *)v12 - 7) = *(_DWORD *)(v14 - 13);
      *((_DWORD *)v12 - 6) = *(_DWORD *)(v14 - 11);
      *((_DWORD *)v12 - 39) = *(_DWORD *)(v14 - 81);
      *((_DWORD *)v12 - 38) = *(_DWORD *)(v14 - 79);
      *((_DWORD *)v12 - 36) = *(_DWORD *)(v14 - 75);
      *(_QWORD *)(v12 - 66) = *(_QWORD *)(v14 - 65);
      *(_QWORD *)(v12 - 62) = *(_QWORD *)(v14 - 61);
      *(_QWORD *)(v12 - 58) = *(_QWORD *)(v14 - 57);
      *(_QWORD *)(v12 - 54) = *(_QWORD *)(v14 - 53);
      *((_DWORD *)v12 - 25) = *(_DWORD *)(v14 - 49);
      *((_DWORD *)v12 - 24) = *(_DWORD *)(v14 - 47);
      *((_DWORD *)v12 - 23) = *(_DWORD *)(v14 - 45);
      *((_DWORD *)v12 - 22) = *(_DWORD *)(v14 - 43);
      *(_QWORD *)(v12 - 42) = *(_QWORD *)(v14 - 41);
      *((_DWORD *)v12 - 19) = *(_DWORD *)(v14 - 37);
      --v13;
    }
    while ( v13 );
    v11 = *v10;
  }
  *v10 = (v11 - *v9) | 1;
  return 0LL;
}
