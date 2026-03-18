/*
 * XREFs of ComputeHTCell @ 0x1C00D4940
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00D3F58 (HT_CreateDeviceHalftoneInfo.c)
 * Callees:
 *     ComputeChecksum @ 0x1C00D177C (ComputeChecksum.c)
 *     GenerateWORDPat @ 0x1C00D4EE0 (GenerateWORDPat.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall ComputeHTCell(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r13d
  unsigned int v7; // eax
  char *v8; // r14
  char *v9; // r15
  unsigned int v10; // r10d
  char *v11; // r12
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // cx
  int v14; // edi
  ULONG v15; // edi
  __int128 v16; // xmm0
  __int64 result; // rax
  __int64 v18; // xmm1_8
  int v19; // eax
  char *v20; // r10
  unsigned int v21; // ebx
  unsigned int v22; // r11d
  unsigned int v23; // eax
  char *v24; // r10
  unsigned int v25; // eax
  int v26; // r11d
  unsigned int v27; // eax
  PVOID v28; // rax
  void *v29; // rbx
  int v30; // [rsp+40h] [rbp-30h]
  _QWORD v31[5]; // [rsp+48h] [rbp-28h] BYREF
  int v32; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+58h]

  LOWORD(v32) = a1;
  v6 = 0;
  memset(v31, 0, 0x20uLL);
  if ( a1 > 0x12u )
    return 4294967282LL;
  BYTE1(v31[1]) = a1;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 184) & 0xFFFFFF8F;
  if ( a1 != 18 )
  {
    v7 = ComputeChecksum((char *)&v32, 0x48545343u, 2u);
    LODWORD(v8) = v33;
    LODWORD(v9) = v33;
    v10 = v7;
    LODWORD(v11) = v33;
    v12 = a1 >> 1;
    LOBYTE(v31[1]) = 1;
    v13 = *((unsigned __int8 *)&DefStdHTPat + 16 * v12);
    LOWORD(v14) = *((unsigned __int8 *)&DefStdHTPat + 16 * v12 + 1);
    WORD2(v31[1]) = v13;
    WORD1(v31[2]) = v14;
    goto LABEL_6;
  }
  if ( !a2 || *(_WORD *)a2 != 32 )
    return 4294967281LL;
  v19 = *(unsigned __int16 *)(a2 + 4);
  v11 = *(char **)(a2 + 8);
  v9 = *(char **)(a2 + 16);
  v20 = v11;
  v8 = *(char **)(a2 + 24);
  v14 = *(unsigned __int16 *)(a2 + 6);
  LODWORD(v33) = v19;
  v21 = v19 * v14;
  WORD2(v31[1]) = v19;
  WORD1(v31[2]) = v14;
  if ( !v11 )
  {
    v20 = v9;
    if ( v9 )
      goto LABEL_23;
    v20 = v8;
    if ( v8 )
      goto LABEL_23;
    return 4294967281LL;
  }
  if ( v9 && v8 )
  {
    if ( v11 == v9 && v11 == v8 )
      v22 = 1433629234;
    else
      v22 = 1433629235;
    goto LABEL_24;
  }
LABEL_23:
  v8 = v20;
  v9 = v20;
  LODWORD(v11) = (_DWORD)v20;
  v22 = 1433629233;
LABEL_24:
  v23 = ComputeChecksum((char *)&v32, v22, 2u);
  v25 = ComputeChecksum(v24, v23, v21);
  v10 = v25;
  if ( v26 == 1433629235 )
  {
    v27 = ComputeChecksum(v9, v25, v21);
    v10 = ComputeChecksum(v8, v27, v21);
  }
  v13 = v33;
LABEL_6:
  v30 = v13;
  v32 = (unsigned __int16)v14;
  HIWORD(v31[1]) = v13 * (7u / v13 + 1);
  LODWORD(v33) = (unsigned __int16)(HIWORD(v31[1]) + 7);
  LOWORD(v31[2]) = HIWORD(v31[1]) + 7;
  v15 = 6 * (unsigned __int16)v14 * (_DWORD)v33;
  HIDWORD(v31[2]) = v15;
  if ( !a3 )
    return ComputeChecksum((char *)v31, v10, 0x20u);
  if ( (v31[1] & 1) != 0 )
  {
    v31[3] = 0LL;
LABEL_9:
    v16 = *(_OWORD *)&v31[1];
    result = v15;
    *(_DWORD *)(a3 + 184) = v6;
    v18 = v31[3];
    *(_OWORD *)(a3 + 160) = v16;
    *(_QWORD *)(a3 + 176) = v18;
    return result;
  }
  v28 = EngAllocMem(0, v15, 0x33345448u);
  v31[3] = v28;
  v29 = v28;
  if ( v28 )
  {
    if ( (unsigned int)GenerateWORDPat((_DWORD)v11, (_DWORD)v9, (_DWORD)v8, (_DWORD)v28, v30, v33, v32) )
      goto LABEL_9;
    EngFreeMem(v29);
  }
  return 4294967294LL;
}
