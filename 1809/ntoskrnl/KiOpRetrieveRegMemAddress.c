/*
 * XREFs of KiOpRetrieveRegMemAddress @ 0x140192098
 * Callers:
 *     KiOp_Div @ 0x140191FA0 (KiOp_Div.c)
 *     KiOp_SGDTSIDT @ 0x14029CAD0 (KiOp_SGDTSIDT.c)
 *     KiOp_SLDTSTRSMSW @ 0x14029CC70 (KiOp_SLDTSTRSMSW.c)
 * Callees:
 *     KiOpComputeLinearAddress @ 0x14029C654 (KiOpComputeLinearAddress.c)
 */

__int64 __fastcall KiOpRetrieveRegMemAddress(__int64 a1, __int64 *a2, _BYTE *a3, int *a4)
{
  char v4; // bp
  unsigned __int8 v6; // cl
  __int64 v7; // r11
  __int64 v8; // rdi
  int v12; // ebx
  unsigned int v13; // ecx
  __int64 v14; // r11
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned __int8 v18; // r9
  char v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 81);
  v6 = *(_BYTE *)(a1 + 65);
  v7 = 0LL;
  v8 = 0LL;
  if ( (v6 & 0xC0) == 0xC0 )
  {
    v12 = 1;
    v13 = v6 & 7;
    v14 = v13 + 8;
    if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
      v14 = v13;
    v4 = 0;
    v7 = *(_QWORD *)(a1 + 24) + 120LL + 8 * v14;
  }
  else
  {
    if ( (v6 & 7) == 4 )
    {
      v18 = *(_BYTE *)(a1 + 66);
      if ( (v18 & 7) == 5 && v6 < 0x40u )
      {
        v19 = *(_BYTE *)(a1 + 64);
        v20 = v18;
      }
      else
      {
        v19 = *(_BYTE *)(a1 + 64);
        v20 = v18;
        v21 = (v18 & 7) + 8;
        if ( (v19 & 1) == 0 )
          v21 = v18 & 7;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v21 + 120);
      }
      v22 = (v20 >> 3) & 7;
      v23 = v22 + 8;
      if ( (v19 & 2) == 0 )
        v23 = v22;
      if ( (_DWORD)v23 != 4 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v23 + 120) << (v18 >> 6);
    }
    else
    {
      v24 = v6 & 7;
      if ( v6 < 0x40u && v24 == 5 )
      {
        if ( !*(_BYTE *)(a1 + 58) )
          v7 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v25 = v24 + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v25 = v24;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v25 + 120);
      }
    }
    v12 = 0;
  }
  v15 = 0;
  v16 = v7 + v8 + *(int *)(a1 + 68);
  v27 = v16;
  if ( !v12 && (*(_DWORD *)(a1 + 52) & 1) != 0 )
  {
    v26 = KiOpComputeLinearAddress(a1, &v27);
    v16 = v27;
    v15 = v26;
  }
  *a2 = v16;
  *a3 = v4;
  if ( a4 )
    *a4 = v12;
  return v15;
}
