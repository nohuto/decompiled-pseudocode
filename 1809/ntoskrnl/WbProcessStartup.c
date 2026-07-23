/*
 * XREFs of WbProcessStartup @ 0x1406D1094
 * Callers:
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x140625D34 (WbAlloc.c)
 */

__int64 __fastcall WbProcessStartup(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rax
  PVOID v7; // rcx
  unsigned int v8; // ecx
  int v9; // eax
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  if ( a3 >= 0x10 && *a2 == 8LL )
  {
    v5 = WbAlloc(0x18uLL, &P);
    if ( v5 >= 0 )
    {
      v6 = a2[1];
      if ( v6 + 24 > 0x7FFFFFFF0000LL || v6 + 24 < v6 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v6 = a2[1];
      }
      v7 = P;
      *(_OWORD *)P = *(_OWORD *)v6;
      *((_QWORD *)v7 + 2) = *(_QWORD *)(v6 + 16);
      if ( *(_DWORD *)v7 )
      {
        v5 = -1073741811;
      }
      else if ( *(_DWORD *)(a1 + 56) )
      {
        v8 = *((_DWORD *)v7 + 1);
        v9 = 60;
        if ( v8 < 0x3C )
          v9 = v8;
        *(_DWORD *)(a1 + 56) = v9;
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x42524157u);
  return (unsigned int)v5;
}
