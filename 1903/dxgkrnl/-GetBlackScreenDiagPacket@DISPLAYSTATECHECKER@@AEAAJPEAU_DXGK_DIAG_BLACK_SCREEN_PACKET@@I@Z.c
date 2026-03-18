/*
 * XREFs of ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET@@I@Z @ 0x1C0295C48
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0295810 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02964BC (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C0049BF8 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049C4C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C0049D4C (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DIAG_BLACK_SCREEN_PACKET *a2,
        unsigned int a3)
{
  int BlackScreenDiagDataSize; // eax
  unsigned int v7; // ebp
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // r11
  char *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // r9
  char *v18; // r10
  __int64 i; // r8
  __int64 v20; // r10
  int v21; // edx
  unsigned int v22; // edx
  int v23; // ecx

  if ( a3 < (unsigned int)DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this) )
    return 3221225507LL;
  BlackScreenDiagDataSize = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  *((_DWORD *)a2 + 10) = 0;
  *((_QWORD *)a2 + 4) = 0LL;
  v7 = 0;
  *((_DWORD *)a2 + 1) = BlackScreenDiagDataSize;
  *(_DWORD *)a2 = 42;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_DWORD *)a2 + 12) = (*((_DWORD *)this + 453) >> 8) & 1;
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 1470);
  for ( *(_OWORD *)((char *)a2 + 56) = *(_OWORD *)((char *)this + 1832); v7 < *((_DWORD *)this + 1470); ++v7 )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v7);
    v9 = (char *)a2 + 824 * v7 + 72;
    v10 = 0LL;
    *(_QWORD *)v9 = *((_QWORD *)DisplayAdapterDiagData + 1);
    *((_DWORD *)v9 + 2) = *((_DWORD *)DisplayAdapterDiagData + 234);
    *((_DWORD *)v9 + 3) = *((_DWORD *)DisplayAdapterDiagData + 251);
    *((_DWORD *)v9 + 4) = *((_DWORD *)DisplayAdapterDiagData + 4);
    *((_DWORD *)v9 + 5) ^= (*((_DWORD *)v9 + 5) ^ *((unsigned __int8 *)DisplayAdapterDiagData + 20)) & 1;
    if ( *((_DWORD *)DisplayAdapterDiagData + 234) )
    {
      do
      {
        if ( (unsigned int)v10 >= 4 )
        {
          v12 = 8LL;
          v11 = 64LL;
          v13 = 12LL;
          v14 = 28LL;
          v15 = 32LL;
        }
        else
        {
          v11 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 104;
          v12 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 48;
          v13 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 52;
          v14 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 68;
          v15 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 72;
        }
        v16 = 192 * v10;
        *(_DWORD *)&v9[v16 + 24] = *(_DWORD *)v12;
        *(_DWORD *)&v9[v16 + 28] = *(_DWORD *)v13;
        *(_DWORD *)&v9[v16 + 32] = *(_DWORD *)v14;
        RtlStringCchCopyA(&v9[192 * v10 + 36], v12, (const char *)v15);
        v18 = &v9[v17];
        *(_OWORD *)(v18 + 56) = *(_OWORD *)v11;
        *(_OWORD *)(v18 + 72) = *(_OWORD *)(v11 + 16);
        *(_OWORD *)(v18 + 88) = *(_OWORD *)(v11 + 32);
        *(_OWORD *)(v18 + 104) = *(_OWORD *)(v11 + 48);
        *(_OWORD *)(v18 + 120) = *(_OWORD *)(v11 + 64);
        *(_OWORD *)(v18 + 136) = *(_OWORD *)(v11 + 80);
        *(_OWORD *)(v18 + 152) = *(_OWORD *)(v11 + 96);
        *(_OWORD *)(v18 + 168) = *(_OWORD *)(v11 + 112);
        *(_OWORD *)(v18 + 184) = *(_OWORD *)(v11 + 128);
        v10 = (unsigned int)(v10 + 1);
        *(_OWORD *)(v18 + 200) = *(_OWORD *)(v11 + 144);
      }
      while ( (unsigned int)v10 < *((_DWORD *)DisplayAdapterDiagData + 234) );
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)DisplayAdapterDiagData + 251); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 4 )
        v20 = 0LL;
      else
        v20 = (__int64)DisplayAdapterDiagData + 16 * (unsigned int)i + 940;
      *(_DWORD *)&v9[8 * i + 792] = *(_DWORD *)v20;
      v21 = *(_DWORD *)&v9[8 * i + 796] ^ (*(_DWORD *)&v9[8 * i + 796] ^ *(unsigned __int8 *)(v20 + 4)) & 1;
      *(_DWORD *)&v9[8 * i + 796] = v21;
      v22 = (*(_DWORD *)(v20 + 8) > 1u ? 4 : 0) | v21 & 0xFFFFFFFB;
      *(_DWORD *)&v9[8 * i + 796] = v22;
      v23 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(2 * *(_BYTE *)(v20 + 5))) & 2;
      *(_DWORD *)&v9[8 * i + 796] = v23;
      *(_DWORD *)&v9[8 * i + 796] = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(8 * *(_BYTE *)(v20 + 6))) & 8;
    }
  }
  return 0LL;
}
