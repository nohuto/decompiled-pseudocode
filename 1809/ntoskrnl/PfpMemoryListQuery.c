/*
 * XREFs of PfpMemoryListQuery @ 0x140160BE0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14062AAF0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

__int64 __fastcall PfpMemoryListQuery(__int64 a1, char a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-B8h]
  __int64 v12; // [rsp+48h] [rbp-B0h]
  __int64 v13; // [rsp+58h] [rbp-A0h]
  __int64 v14; // [rsp+60h] [rbp-98h]
  __int64 v15; // [rsp+68h] [rbp-90h]
  __int64 v16; // [rsp+70h] [rbp-88h]
  __int64 v17; // [rsp+78h] [rbp-80h]
  __int64 v18; // [rsp+80h] [rbp-78h]
  __int64 v19; // [rsp+88h] [rbp-70h]
  __int64 v20; // [rsp+90h] [rbp-68h]
  int v21; // [rsp+100h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 24) < 0x40u )
  {
    v8 = -1073741789;
    *a3 = 64;
  }
  else
  {
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, &v10, 0xB0u, a4, &v21);
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 0;
    if ( a2 )
      ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
    *(_DWORD *)v7 = 1;
    *(_DWORD *)(v7 + 4) = 64;
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)(v7 + 16) &= 0xFFFFFFFFFFFFFF00uLL;
    *(_QWORD *)(v7 + 24) = v16 + v15 + v14 + v13 + v17;
    *(_QWORD *)(v7 + 32) = v18;
    *(_QWORD *)(v7 + 40) = v20 + v19;
    *(_QWORD *)(v7 + 48) = v10 + *((_QWORD *)&v10 + 1);
    *(_QWORD *)(v7 + 56) = v12 + v11;
    *a3 = 64;
  }
  return v8;
}
