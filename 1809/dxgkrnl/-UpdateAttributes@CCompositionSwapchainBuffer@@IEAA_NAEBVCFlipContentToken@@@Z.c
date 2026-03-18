/*
 * XREFs of ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C0056790
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C00566C0 (-NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C00560C0 (-EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ.c)
 */

char __fastcall CCompositionSwapchainBuffer::UpdateAttributes(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2)
{
  char v2; // r8
  char v4; // cl
  __int64 v6; // rax
  int v7; // r9d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float v11; // xmm1_4
  float v12; // xmm1_4
  int v13; // esi
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  __int128 v20; // xmm5
  __int64 v21; // xmm0_8

  v2 = *((_BYTE *)a2 + 121);
  v4 = 0;
  if ( (v2 & 1) != 0 )
  {
    v6 = *((_QWORD *)a2 + 16);
    if ( *((_QWORD *)this + 7) != v6 )
    {
      *((_QWORD *)this + 7) = v6;
      *((_DWORD *)this + 41) = *((_DWORD *)this + 41) & 0xFFFFFFFE | (v6 != 0);
      v4 = 1;
      v2 = *((_BYTE *)a2 + 121);
    }
  }
  if ( (v2 & 2) != 0 )
  {
    v7 = *((unsigned __int8 *)a2 + 136);
    if ( ((*((_DWORD *)this + 41) >> 1) & 1) != v7 )
    {
      v4 = 1;
      *((_DWORD *)this + 41) ^= ((unsigned __int8)*((_DWORD *)this + 41) ^ (unsigned __int8)(2 * v7)) & 2;
      v2 = *((_BYTE *)a2 + 121);
    }
  }
  if ( (v2 & 0x10) != 0 )
  {
    v8 = *((_DWORD *)a2 + 37);
    if ( *((_DWORD *)this + 28) != v8 )
    {
      *((_DWORD *)this + 28) = v8;
      v4 = 1;
      v2 = *((_BYTE *)a2 + 121);
    }
  }
  if ( (v2 & 0x20) != 0 )
  {
    v9 = *((_DWORD *)a2 + 38);
    if ( *((_DWORD *)this + 12) != v9 )
    {
      *((_DWORD *)this + 12) = v9;
      v4 = 1;
      v2 = *((_BYTE *)a2 + 121);
    }
  }
  if ( (v2 & 0x40) != 0 )
  {
    v10 = *((_DWORD *)a2 + 39);
    if ( *((_DWORD *)this + 23) != v10 )
    {
      *((_DWORD *)this + 23) = v10;
      v4 = 1;
      v2 = *((_BYTE *)a2 + 121);
    }
  }
  if ( (v2 & 4) != 0 )
  {
    v11 = *((float *)a2 + 35);
    if ( *((float *)this + 29) != v11 )
    {
      *((float *)this + 29) = v11;
      v4 = 1;
      v2 = *((_BYTE *)a2 + 121);
    }
  }
  if ( (v2 & 8) != 0 )
  {
    v12 = *((float *)a2 + 36);
    if ( *((float *)this + 32) != v12 )
    {
      *((float *)this + 32) = v12;
      v4 = 1;
      v2 = *((_BYTE *)a2 + 121);
    }
  }
  if ( v2 < 0
    && (*((_DWORD *)this + 24) != *((_DWORD *)a2 + 40)
     || *((_DWORD *)this + 25) != *((_DWORD *)a2 + 41)
     || *((_DWORD *)this + 26) != *((_DWORD *)a2 + 42)
     || *((_DWORD *)this + 27) != *((_DWORD *)a2 + 43)) )
  {
    v4 = 1;
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 10);
  }
  *((_DWORD *)this + 41) ^= (*((_DWORD *)this + 41) ^ (*((unsigned __int8 *)a2 + 122) << 10)) & 0x400;
  if ( (*((_BYTE *)a2 + 122) & 1) != 0 )
  {
    v13 = *((_DWORD *)a2 + 44);
    if ( v13 )
    {
      if ( (int)CFlipExBuffer::EnsureHDR10MetaData(this) < 0 )
      {
        v13 = 0;
      }
      else if ( v13 == 1 )
      {
        v14 = *((_QWORD *)this + 42);
        v15 = *((_DWORD *)a2 + 51);
        v16 = *(_QWORD *)((char *)a2 + 196);
        *(_OWORD *)v14 = *(_OWORD *)((char *)a2 + 180);
        *(_QWORD *)(v14 + 16) = v16;
        *(_DWORD *)(v14 + 24) = v15;
      }
      else if ( v13 == 2 )
      {
        v17 = *((_QWORD *)this + 42);
        v18 = *(_OWORD *)((char *)a2 + 196);
        v19 = *(_OWORD *)((char *)a2 + 212);
        v20 = *(_OWORD *)((char *)a2 + 228);
        v21 = *(_QWORD *)((char *)a2 + 244);
        *(_OWORD *)v17 = *(_OWORD *)((char *)a2 + 180);
        *(_OWORD *)(v17 + 16) = v18;
        *(_OWORD *)(v17 + 32) = v19;
        *(_OWORD *)(v17 + 48) = v20;
        *(_QWORD *)(v17 + 64) = v21;
      }
    }
    *((_DWORD *)this + 86) = v13;
    return 1;
  }
  return v4;
}
