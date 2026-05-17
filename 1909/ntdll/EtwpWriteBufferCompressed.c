/*
 * XREFs of EtwpWriteBufferCompressed @ 0x18010E624
 * Callers:
 *     EtwpFlushBuffer @ 0x18006D534 (EtwpFlushBuffer.c)
 * Callees:
 *     RtlCompressBuffer @ 0x1800814C0 (RtlCompressBuffer.c)
 *     NtWriteFile @ 0x18009CF90 (NtWriteFile.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, _OWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // eax
  int v9; // ebp
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  char *v21; // rcx
  size_t v22; // r8
  char *v23; // rdx
  int v25; // [rsp+80h] [rbp+8h]

  *a4 = 0;
  *a3 = 0;
  v8 = RtlCompressBuffer(3u);
  v9 = v8;
  if ( v8 == -1073741789 )
  {
    v10 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 440) + *(unsigned int *)(a1 + 452)), a2, v10);
  }
  else
  {
    if ( v8 < 0 )
    {
      *a4 = 1;
      return (unsigned int)v9;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v11 = *(unsigned int *)(a1 + 452);
    v12 = *(_QWORD *)(a1 + 440);
    *(_OWORD *)(v11 + v12) = *a2;
    *(_OWORD *)(v11 + v12 + 16) = a2[1];
    *(_OWORD *)(v11 + v12 + 32) = a2[2];
    *(_OWORD *)(v11 + v12 + 48) = a2[3];
    *(_QWORD *)(v11 + v12 + 64) = *((_QWORD *)a2 + 8);
    v10 = v25 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 452) + *(_QWORD *)(a1 + 440)) = v10;
  v13 = *(_DWORD *)(a1 + 452);
  ++*(_DWORD *)(a1 + 456);
  v14 = v10 + v13;
  *(_DWORD *)(a1 + 452) = v14;
  if ( v14 >= *(_DWORD *)(a1 + 208) )
  {
    v9 = NtWriteFile();
    if ( v9 >= 0 )
    {
      v18 = *(unsigned int *)(a1 + 208);
      *(_QWORD *)(a1 + 360) += v18;
      v19 = *(_DWORD *)(a1 + 452) - v18;
      v20 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 452) = v19;
      *(_DWORD *)(a1 + 460) = v19;
      if ( v19 )
      {
        v21 = *(char **)(a1 + 440);
        v22 = v19;
        *(_DWORD *)(a1 + 456) = 1;
        v23 = &v21[*(unsigned int *)(a1 + 208)];
        *a3 = v20 - 1;
        memmove(v21, v23, v22);
      }
      else
      {
        *(_DWORD *)(a1 + 456) = 0;
        *a3 = v20;
      }
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 460);
      v16 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 452) = v15;
      v17 = v16 - 1;
      if ( !v15 )
        v17 = v16;
      *a4 = v17;
      *(_DWORD *)(a1 + 456) = v15 != 0;
    }
  }
  return (unsigned int)v9;
}
