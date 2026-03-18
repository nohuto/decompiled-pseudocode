/*
 * XREFs of ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C005D804
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C005D730 (-NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C005D040 (-EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ.c)
 */

char __fastcall CCompositionSwapchainBuffer::UpdateAttributes(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2)
{
  char v4; // r8
  char v5; // dl
  char v6; // cl
  __int64 v7; // rax
  int v8; // r10d
  int v9; // eax
  float v10; // xmm1_4
  int v11; // eax
  float v12; // xmm2_4
  int v13; // edx
  float v14; // xmm0_4
  int v15; // eax
  int v16; // esi
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm5
  __int64 v24; // xmm0_8

  v4 = 0;
  v5 = 0;
  v6 = *((_BYTE *)a2 + 121);
  if ( (v6 & 1) != 0 )
  {
    v7 = *((_QWORD *)a2 + 16);
    if ( *((_QWORD *)this + 7) != v7 )
    {
      *((_QWORD *)this + 7) = v7;
      v4 = 1;
      *((_DWORD *)this + 41) = *((_DWORD *)this + 41) & 0xFFFFFFFE | (v7 != 0);
      v6 = *((_BYTE *)a2 + 121);
    }
  }
  if ( (v6 & 2) != 0 )
  {
    v8 = *((unsigned __int8 *)a2 + 136);
    if ( ((*((_DWORD *)this + 41) >> 1) & 1) != v8 )
    {
      v4 = 1;
      *((_DWORD *)this + 41) ^= ((unsigned __int8)*((_DWORD *)this + 41) ^ (unsigned __int8)(2 * v8)) & 2;
      v6 = *((_BYTE *)a2 + 121);
    }
  }
  if ( (v6 & 0x40) != 0 )
  {
    v9 = *((_DWORD *)a2 + 39);
    if ( *((_DWORD *)this + 23) != v9 )
    {
      *((_DWORD *)this + 23) = v9;
      v4 = 1;
      v6 = *((_BYTE *)a2 + 121);
    }
  }
  if ( v6 < 0
    && (*((_DWORD *)this + 24) != *((_DWORD *)a2 + 40)
     || *((_DWORD *)this + 25) != *((_DWORD *)a2 + 41)
     || *((_DWORD *)this + 26) != *((_DWORD *)a2 + 42)
     || *((_DWORD *)this + 27) != *((_DWORD *)a2 + 43)) )
  {
    v4 = 1;
    v5 = 1;
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 10);
    v6 = *((_BYTE *)a2 + 121);
  }
  if ( (v6 & 0x1C) != 0 )
  {
    v10 = *((float *)a2 + 35);
    v11 = *((_DWORD *)a2 + 37);
    v12 = *((float *)a2 + 36);
    if ( *((float *)this + 29) != v10 )
    {
      v4 = 1;
      *((float *)this + 29) = v10;
      v5 = 1;
    }
    if ( *((float *)this + 32) != v12 )
    {
      v4 = 1;
      *((float *)this + 32) = v12;
      v5 = 1;
    }
    if ( *((_DWORD *)this + 28) != v11 )
    {
      v4 = 1;
      *((_DWORD *)this + 28) = v11;
      v5 = 1;
    }
  }
  if ( v5 && *((_BYTE *)a2 + 180) )
  {
    *((_DWORD *)this + 37) = 0;
    *((_DWORD *)this + 38) = 0;
    v13 = (int)(float)((float)(*((_DWORD *)a2 + 42) - *((_DWORD *)a2 + 40)) * *((float *)this + 29));
    *((_DWORD *)this + 39) = v13;
    v14 = (float)(*((_DWORD *)a2 + 43) - *((_DWORD *)a2 + 41)) * *((float *)this + 32);
    *((_DWORD *)this + 35) = v13;
    *((_DWORD *)this + 40) = (int)v14;
    *((_DWORD *)this + 36) = (int)v14;
  }
  if ( (*((_BYTE *)a2 + 121) & 0x20) != 0 && !*((_BYTE *)a2 + 180) )
  {
    v15 = *((_DWORD *)a2 + 38);
    if ( *((_DWORD *)this + 12) != v15 )
    {
      *((_DWORD *)this + 12) = v15;
      v4 = 1;
    }
  }
  *((_DWORD *)this + 41) ^= (*((_DWORD *)this + 41) ^ (*((unsigned __int8 *)a2 + 122) << 10)) & 0x400;
  if ( (*((_BYTE *)a2 + 122) & 1) != 0 )
  {
    v16 = *((_DWORD *)a2 + 44);
    if ( v16 )
    {
      if ( (int)CFlipExBuffer::EnsureHDR10MetaData(this) < 0 )
      {
        v16 = 0;
      }
      else if ( v16 == 1 )
      {
        v17 = *((_QWORD *)this + 42);
        v18 = *((_DWORD *)a2 + 52);
        v19 = *((_QWORD *)a2 + 25);
        *(_OWORD *)v17 = *(_OWORD *)((char *)a2 + 184);
        *(_QWORD *)(v17 + 16) = v19;
        *(_DWORD *)(v17 + 24) = v18;
      }
      else if ( v16 == 2 )
      {
        v20 = *((_QWORD *)this + 42);
        v21 = *(_OWORD *)((char *)a2 + 200);
        v22 = *(_OWORD *)((char *)a2 + 216);
        v23 = *(_OWORD *)((char *)a2 + 232);
        v24 = *((_QWORD *)a2 + 31);
        *(_OWORD *)v20 = *(_OWORD *)((char *)a2 + 184);
        *(_OWORD *)(v20 + 16) = v21;
        *(_OWORD *)(v20 + 32) = v22;
        *(_OWORD *)(v20 + 48) = v23;
        *(_QWORD *)(v20 + 64) = v24;
      }
    }
    *((_DWORD *)this + 86) = v16;
    return 1;
  }
  return v4;
}
