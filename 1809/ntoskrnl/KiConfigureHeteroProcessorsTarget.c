/*
 * XREFs of KiConfigureHeteroProcessorsTarget @ 0x14028D3F0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiConfigureHeteroProcessorsTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rbp
  __int64 v6; // rbx
  signed __int32 v7; // eax
  unsigned int v8; // esi
  __int64 *v9; // r9
  _BYTE *v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int16 i; // r9
  unsigned __int64 v16; // rcx
  unsigned __int16 v17; // cx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r11
  __int64 v26; // r10
  unsigned int v27; // ebx
  __int64 *v28; // rcx
  signed __int32 v29; // eax
  unsigned int v30; // ebx
  __int64 result; // rax
  _DWORD v32[14]; // [rsp+20h] [rbp-38h] BYREF
  int v33; // [rsp+78h] [rbp+20h] BYREF

  v5 = (volatile signed __int32 *)a3;
  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v33 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v33, a2, a3);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  if ( !KeGetPcr()->Prcb.Number )
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v9 = KiProcessorBlock;
      v10 = (_BYTE *)(*(_QWORD *)v6 + 8LL);
      v11 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v12 = *v9;
        v13 = *(unsigned __int8 *)(*v9 + 208);
        *(_BYTE *)(v12 + 24226) = *(v10 - 1);
        a2 = 2 * v13;
        *(_BYTE *)(v12 + 24225) = *v10;
        *(_BYTE *)(v12 + 24224) = *(v10 - 2);
        v14 = *(_QWORD *)(v12 + 200);
        if ( *v10 )
          qword_1405439D8[a2] &= ~v14;
        else
          qword_1405439D8[a2] |= v14;
        v10 += 3;
        ++v9;
        --v11;
      }
      while ( v11 );
    }
    a3 = 0LL;
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v16 = *(_QWORD *)(KeNodeBlock[i] + 136) - ((*(_QWORD *)(KeNodeBlock[i] + 136) >> 1) & 0x5555555555555555LL);
      a2 = v16 & 0x3333333333333333LL;
      if ( (unsigned int)((0x101010101010101LL
                         * (((v16 & 0x3333333333333333LL)
                           + ((v16 >> 2) & 0x3333333333333333LL)
                           + (((v16 & 0x3333333333333333LL) + ((v16 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
      {
        if ( a3 )
        {
          a3 = 0LL;
          break;
        }
        a3 = KeNodeBlock[i];
      }
    }
    KeHeteroSystem = 0;
    KeHeteroSystemVirtual = 0;
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) = 0;
    if ( a3 )
    {
      if ( *(_DWORD *)(v6 + 12) )
      {
        KeHeteroSystem = 1;
        KeHeteroSystemVirtual = 1;
        *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) = 1;
        goto LABEL_49;
      }
      if ( *(_DWORD *)(v6 + 16) )
      {
        v17 = *(_WORD *)(a3 + 144);
        v18 = *(_DWORD *)(v6 + 8);
        KeHeteroSystem = 1;
        *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) = v18;
        if ( v17 >= *(_WORD *)(v6 + 24) )
          v19 = 0LL;
        else
          v19 = *(_QWORD *)(v6 + 8LL * v17 + 32);
        if ( v17 >= *(_WORD *)(v6 + 192) )
          v20 = 0LL;
        else
          v20 = *(_QWORD *)(v6 + 8LL * v17 + 200);
        if ( v17 >= *(_WORD *)(v6 + 360) )
          v21 = 0LL;
        else
          v21 = *(_QWORD *)(v6 + 8LL * v17 + 368);
        if ( v17 >= *(_WORD *)(v6 + 528) )
          v22 = 0LL;
        else
          v22 = *(_QWORD *)(v6 + 8LL * v17 + 536);
        v23 = *(_QWORD *)(a3 + 136);
        v24 = v23 & v19;
        v25 = v23 & v20;
        a2 = v23 & v21;
        v26 = v23 & v22;
      }
      else
      {
        a2 = *(_QWORD *)(a3 + 136);
        v26 = a2;
        v24 = a2;
        v25 = a2;
      }
      v27 = 1;
      v28 = (__int64 *)(a3 + 216);
      while ( 1 )
      {
        if ( v27 == 1 )
        {
          *(v28 - 2) = v25;
          *(v28 - 1) = v24;
          *v28 = v24;
          goto LABEL_48;
        }
        if ( v27 == 2 )
          break;
        if ( v27 == 3 )
        {
          *(v28 - 2) = v26;
          *(v28 - 1) = a2;
          *v28 = a2;
        }
        else if ( v27 == 4 )
        {
          *(v28 - 2) = v26;
          *(v28 - 1) = a2;
LABEL_46:
          *v28 = *(_QWORD *)(a3 + 136);
        }
LABEL_48:
        ++v27;
        v28 += 3;
        if ( v27 >= 5 )
          goto LABEL_49;
      }
      *(v28 - 2) = v25;
      *(v28 - 1) = v24;
      goto LABEL_46;
    }
  }
LABEL_49:
  v29 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v30 = ~v29 & 0x80000000;
  if ( (v29 & 0x7FFFFFFF) != 0 )
  {
    v32[0] = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v30 )
        break;
      KeYieldProcessorEx(v32, a2, a3);
    }
  }
  else
  {
    result = v30 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(v5);
  return result;
}
