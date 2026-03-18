/*
 * XREFs of KiConfigureHeteroProcessorsTarget @ 0x1402A3000
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiConfigureHeteroProcessorsTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // esi
  __int64 *v9; // r9
  _BYTE *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int16 i; // r9
  unsigned __int64 v18; // rcx
  unsigned __int16 v19; // cx
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // r10
  unsigned int v30; // ebx
  __int64 *v31; // rcx
  signed __int32 v32; // eax
  unsigned int v33; // ebx
  __int64 result; // rax
  _DWORD v35[14]; // [rsp+20h] [rbp-38h] BYREF
  int v36; // [rsp+78h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v36 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v36);
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
      v10 = (_BYTE *)(*(_QWORD *)a2 + 8LL);
      v11 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v12 = *v9;
        v13 = *(unsigned __int8 *)(*v9 + 208);
        *(_BYTE *)(v12 + 24226) = *(v10 - 1);
        *(_BYTE *)(v12 + 24225) = *v10;
        *(_BYTE *)(v12 + 24224) = *(v10 - 2);
        v14 = &qword_140573908[2 * v13];
        v15 = *(_QWORD *)(v12 + 200);
        if ( *v10 )
          *v14 &= ~v15;
        else
          *v14 |= v15;
        v10 += 3;
        ++v9;
        --v11;
      }
      while ( v11 );
    }
    v16 = 0LL;
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v18 = *(_QWORD *)(KeNodeBlock[i] + 136) - ((*(_QWORD *)(KeNodeBlock[i] + 136) >> 1) & 0x5555555555555555LL);
      if ( (unsigned int)((0x101010101010101LL
                         * (((v18 & 0x3333333333333333LL)
                           + ((v18 >> 2) & 0x3333333333333333LL)
                           + (((v18 & 0x3333333333333333LL) + ((v18 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
      {
        if ( v16 )
        {
          v16 = 0LL;
          break;
        }
        v16 = KeNodeBlock[i];
      }
    }
    KeHeteroSystem = 0;
    KeHeteroSystemVirtual = 0;
    KeHeteroSystemQos = 0;
    if ( v16 )
    {
      if ( *(_DWORD *)(a2 + 12) )
      {
        KeHeteroSystem = 1;
        KeHeteroSystemVirtual = 1;
        KeHeteroSystemQos = 1;
        goto LABEL_49;
      }
      if ( *(_DWORD *)(a2 + 16) )
      {
        v19 = *(_WORD *)(v16 + 144);
        v20 = *(_DWORD *)(a2 + 8);
        KeHeteroSystem = 1;
        KeHeteroSystemQos = v20;
        if ( v19 >= *(_WORD *)(a2 + 24) )
          v21 = 0LL;
        else
          v21 = *(_QWORD *)(a2 + 8LL * v19 + 32);
        if ( v19 >= *(_WORD *)(a2 + 192) )
          v22 = 0LL;
        else
          v22 = *(_QWORD *)(a2 + 8LL * v19 + 200);
        if ( v19 >= *(_WORD *)(a2 + 360) )
          v23 = 0LL;
        else
          v23 = *(_QWORD *)(a2 + 8LL * v19 + 368);
        if ( v19 >= *(_WORD *)(a2 + 528) )
          v24 = 0LL;
        else
          v24 = *(_QWORD *)(a2 + 8LL * v19 + 536);
        v25 = *(_QWORD *)(v16 + 136);
        v26 = v25 & v21;
        v27 = v25 & v22;
        v28 = v25 & v23;
        v29 = v25 & v24;
      }
      else
      {
        v28 = *(_QWORD *)(v16 + 136);
        v29 = v28;
        v26 = v28;
        v27 = v28;
      }
      v30 = 1;
      v31 = (__int64 *)(v16 + 224);
      while ( 1 )
      {
        if ( v30 == 1 )
        {
          *(v31 - 2) = v27;
          *(v31 - 1) = v26;
          *v31 = v26;
          goto LABEL_48;
        }
        if ( v30 == 2 )
          break;
        if ( v30 == 3 )
        {
          *(v31 - 2) = v29;
          *(v31 - 1) = v28;
          *v31 = v28;
        }
        else if ( v30 == 4 )
        {
          *(v31 - 2) = v29;
          *(v31 - 1) = v28;
LABEL_46:
          *v31 = *(_QWORD *)(v16 + 136);
        }
LABEL_48:
        ++v30;
        v31 += 3;
        if ( v30 >= 5 )
          goto LABEL_49;
      }
      *(v31 - 2) = v27;
      *(v31 - 1) = v26;
      goto LABEL_46;
    }
  }
LABEL_49:
  v32 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v33 = ~v32 & 0x80000000;
  if ( (v32 & 0x7FFFFFFF) != 0 )
  {
    v35[0] = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v33 )
        break;
      KeYieldProcessorEx(v35);
    }
  }
  else
  {
    result = v33 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
