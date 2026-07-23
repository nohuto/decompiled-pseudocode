/*
 * XREFs of sub_14069296C @ 0x14069296C
 * Callers:
 *     sub_14069290C @ 0x14069290C (sub_14069290C.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?RtlULongMult@@YAJKKPEAK@Z @ 0x140324038 (-RtlULongMult@@YAJKKPEAK@Z.c)
 *     WbReAlloc @ 0x140692A70 (WbReAlloc.c)
 */

__int64 __fastcall sub_14069296C(__int64 a1, __int64 a2, UINT a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // r10d
  NTSTATUS v8; // edi
  UINT v9; // r10d
  unsigned int v10; // r11d
  unsigned int v11; // r10d
  unsigned int v12; // edx
  unsigned int v13; // ecx
  size_t Size[5]; // [rsp+20h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h]
  UINT puResult; // [rsp+60h] [rbp+18h] BYREF

  puResult = a3;
  v17 = a2;
  v4 = *(_DWORD *)a1;
  v5 = *(_DWORD *)(a1 + 8);
  LODWORD(Size[0]) = 0;
  LODWORD(NumberOfBytes) = 0;
  puResult = 0;
  v8 = RtlULongMult(v5, v4, (unsigned int *)Size);
  if ( v8 >= 0 )
  {
    v8 = RtlUIntAdd(v9, *(_DWORD *)(a1 + 24), &puResult);
    if ( v8 >= 0 )
    {
      v8 = RtlULongMult(puResult, v10, (unsigned int *)&NumberOfBytes);
      if ( v8 >= 0 )
      {
        v12 = *(_DWORD *)(a1 + 4);
        if ( v12 + 1 >= v11 )
        {
          v8 = WbReAlloc(*(PVOID *)(a1 + 16), LODWORD(Size[0]), (unsigned int)NumberOfBytes);
          if ( v8 < 0 )
            return (unsigned int)v8;
          *(_DWORD *)(a1 + 8) += *(_DWORD *)(a1 + 24);
          v11 = *(_DWORD *)(a1 + 8);
          v12 = *(_DWORD *)(a1 + 4);
        }
        if ( a4 <= v12 && v11 )
        {
          memmove(
            (void *)(*(_QWORD *)(a1 + 16) + (a4 + 1) * *(_DWORD *)a1),
            (const void *)(*(_QWORD *)(a1 + 16) + a4 * *(_DWORD *)a1),
            *(_DWORD *)a1 * (v12 - a4));
          v13 = *(_DWORD *)a1;
          ++*(_DWORD *)(a1 + 4);
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + a4 * v13) = v17;
        }
        else
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  return (unsigned int)v8;
}
