/*
 * XREFs of NVMeSplitIoCommandCompletion @ 0x1C0012D90
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSplitIoCommandCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  bool v7; // zf
  _DWORD *v8; // rdx
  unsigned __int8 v9; // cl
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r11
  unsigned int v18; // eax
  unsigned __int64 v19; // r11
  unsigned int v20; // edx
  bool v21; // cc
  unsigned int v22; // r8d
  _QWORD *v23; // r9
  __int64 v24; // rax
  char v25; // al
  unsigned __int64 v26; // [rsp+38h] [rbp+10h] BYREF

  result = GetSrbExtension(a2);
  v6 = result;
  if ( *(_BYTE *)(v5 + 3) != 1 )
  {
    *(_BYTE *)(result + 4253) |= 8u;
    return result;
  }
  v7 = *(_BYTE *)(v5 + 2) == 40;
  v26 = 0LL;
  if ( v7 )
  {
    v8 = (_DWORD *)(v5 + 60);
    v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v9 = *(_BYTE *)(a2 + 7);
    v8 = (_DWORD *)(v5 + 16);
  }
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v9 + 1640) + 52LL);
  v26 = *(_QWORD *)(result + 4136);
  v11 = (unsigned __int16)*(_DWORD *)(result + 4144) + 1;
  v12 = (v10 + *v8 - 1) / v10;
  v26 += v11;
  v13 = v12 - v11;
  v14 = HIDWORD(v26);
  *(_DWORD *)(result + 4136) = v26;
  *(_DWORD *)(result + 4140) = v14;
  *(_WORD *)(result + 4144) = v13 - 1;
  v15 = *(_QWORD *)(result + 4120);
  v16 = v10 * v11;
  v17 = v16 + (*(_QWORD *)(v6 + 4120) & 0xFFFLL);
  v18 = (v15 + v16) & 0xFFF;
  v19 = v17 >> 12;
  v20 = (v10 * v13 + v18 + 4095) >> 12;
  if ( !(_DWORD)v19 )
  {
    *(_QWORD *)(v6 + 4120) = v18 + (v15 & 0xFFFFFFFFFFFFF000uLL);
    if ( v20 != 1 )
    {
      v21 = v20 <= 2;
      if ( v20 != 2 )
        goto LABEL_18;
      *(_QWORD *)(v6 + 4128) = *(_QWORD *)v6;
LABEL_17:
      v21 = v20 <= 2;
LABEL_18:
      if ( !v21 )
        *(_QWORD *)(v6 + 4128) = StorPortGetPhysicalAddress(a1, a2, v6, &v26);
      goto LABEL_20;
    }
    goto LABEL_11;
  }
  *(_QWORD *)(v6 + 4120) = v18 + *(_QWORD *)(v6 + 8LL * (unsigned int)(v19 - 1));
  if ( v20 == 1 )
  {
LABEL_11:
    *(_QWORD *)(v6 + 4128) = 0LL;
    goto LABEL_20;
  }
  if ( v20 != 2 )
  {
    v22 = 0;
    v23 = (_QWORD *)v6;
    do
    {
      v24 = v22 + (unsigned int)v19;
      ++v22;
      *v23++ = *(_QWORD *)(v6 + 8 * v24);
    }
    while ( v22 < v20 - 1 );
    goto LABEL_17;
  }
  *(_QWORD *)(v6 + 4128) = *(_QWORD *)(v6 + 8LL * (unsigned int)v19);
LABEL_20:
  *(_BYTE *)(a2 + 3) = 0;
  v25 = *(_BYTE *)(v6 + 4253);
  *(_QWORD *)(v6 + 4224) = 0LL;
  *(_BYTE *)(v6 + 4253) = v25 & 0xF8 | 6;
  return ProcessCommand(a1, a2);
}
