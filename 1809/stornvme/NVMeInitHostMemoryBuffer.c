/*
 * XREFs of NVMeInitHostMemoryBuffer @ 0x1C000E4E8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0017310 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeInitHostMemoryBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  unsigned int v5; // edi
  int *v6; // rdx
  char v7; // r13
  __int64 v9; // rax
  int v10; // r12d
  __int64 v11; // r8
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ebp
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  void *v18; // rcx
  int v19; // r9d
  size_t Size; // [rsp+28h] [rbp-180h]
  unsigned int v22; // [rsp+64h] [rbp-144h]
  _DWORD v23[2]; // [rsp+68h] [rbp-140h]
  _QWORD Src[16]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v25[16]; // [rsp+F0h] [rbp-B8h] BYREF

  v4 = (_QWORD *)(a1 + 3696);
  v5 = 0;
  v6 = *(int **)(a1 + 3696);
  v7 = 0;
  if ( v6 )
  {
    v7 = 1;
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(a1 + 1528);
  v10 = 0;
  v11 = (unsigned int)(*(_DWORD *)(v9 + 276) << 12);
  v12 = *(_DWORD *)(v9 + 272) << 12;
  if ( v12 )
  {
    v13 = *(_DWORD *)(a1 + 112);
    if ( v13 )
    {
      if ( v13 != -1 )
      {
        v12 = *(_DWORD *)(a1 + 112);
        if ( (v13 & 0xFFF) != 0 )
          v12 = (v13 + 4095) & 0xFFFFF000;
        if ( v12 < (unsigned int)v11 )
          v12 = v11;
      }
      v22 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL) >> 7) & 0xF) + 12);
      v14 = StorPortExtendedFunction(69LL, a1, v11, v12);
      if ( v14 )
        goto LABEL_19;
      v5 = 8;
      NVMeZeroMemory(Src, 0x80u);
      v15 = 0LL;
      v16 = 8LL;
      do
      {
        v17 = v25[v15 / 2 + 1];
        v10 += v17;
        Src[v15 / 2] = v25[v15 / 2];
        v15 += 4LL;
        v23[v15] = v17 / v22;
        --v16;
      }
      while ( v16 );
      v14 = StorPortExtendedFunction(0LL, a1, 136LL, 1701672526LL);
      if ( v14 )
        goto LABEL_17;
      *(_DWORD *)*v4 = v10;
      memmove((void *)(*v4 + 8LL), Src, 0x80uLL);
      *(_DWORD *)(*v4 + 4LL) = 128;
      v6 = *(int **)(a1 + 3696);
LABEL_16:
      v18 = v6 + 2;
      v19 = *v6;
      LODWORD(Size) = v6[1];
      LOBYTE(v6) = 1;
      v14 = NVMeSetHostMemoryBuffer(a1, (int)v6, v7, v19, v18, Size);
      if ( !v14 )
        return v14;
LABEL_17:
      if ( v5 )
        StorPortExtendedFunction(70LL, a1, v25, v5);
      goto LABEL_19;
    }
  }
  v14 = -1056964606;
LABEL_19:
  if ( *v4 )
  {
    StorPortExtendedFunction(1LL, a1, *v4, a4);
    *v4 = 0LL;
  }
  return v14;
}
