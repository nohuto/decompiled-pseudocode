/*
 * XREFs of NVMeInitHostMemoryBuffer @ 0x1C000BA8C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0005640 (memmove.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00180A0 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeInitHostMemoryBuffer(__int64 a1)
{
  _QWORD *v1; // r14
  int v2; // edi
  __int64 v3; // rdx
  __int64 v5; // rax
  int v6; // r12d
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebp
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ecx
  size_t Size; // [rsp+28h] [rbp-180h]
  unsigned int v15; // [rsp+64h] [rbp-144h]
  _DWORD v16[2]; // [rsp+68h] [rbp-140h]
  _QWORD Src[16]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v18[16]; // [rsp+F0h] [rbp-B8h] BYREF

  v1 = (_QWORD *)(a1 + 3704);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 3704);
  if ( v3 )
    goto LABEL_10;
  v5 = *(_QWORD *)(a1 + 1536);
  v6 = 0;
  v7 = (unsigned int)(*(_DWORD *)(v5 + 276) << 12);
  if ( *(_DWORD *)(v5 + 272) << 12 && (v8 = *(_DWORD *)(a1 + 112)) != 0 )
  {
    v15 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 144) + 20LL) >> 7) & 0xF) + 12);
    v9 = StorPortExtendedFunction(69LL, a1, v7);
    if ( !v9 )
    {
      v2 = 8;
      NVMeZeroMemory(Src, 0x80u);
      v10 = 0LL;
      v11 = 8LL;
      do
      {
        v12 = v18[v10 / 2 + 1];
        v6 += v12;
        Src[v10 / 2] = v18[v10 / 2];
        v10 += 4LL;
        v16[v10] = v12 / v15;
        --v11;
      }
      while ( v11 );
      v9 = StorPortExtendedFunction(0LL, a1, 136LL);
      if ( v9 )
      {
LABEL_11:
        if ( v2 )
          StorPortExtendedFunction(70LL, a1, v18);
        goto LABEL_13;
      }
      *(_DWORD *)*v1 = v6;
      memmove((void *)(*v1 + 8LL), Src, 0x80uLL);
      *(_DWORD *)(*v1 + 4LL) = 128;
      v3 = *(_QWORD *)(a1 + 3704);
LABEL_10:
      LODWORD(Size) = *(_DWORD *)(v3 + 4);
      v9 = NVMeSetHostMemoryBuffer(a1, (void *)(v3 + 8), Size);
      if ( !v9 )
        return v9;
      goto LABEL_11;
    }
  }
  else
  {
    v9 = -1056964606;
  }
LABEL_13:
  if ( *v1 )
  {
    StorPortExtendedFunction(1LL, a1, *v1);
    *v1 = 0LL;
  }
  return v9;
}
