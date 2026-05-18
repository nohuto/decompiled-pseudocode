/*
 * XREFs of sub_1800F5478 @ 0x1800F5478
 * Callers:
 *     sub_1800A3498 @ 0x1800A3498 (sub_1800A3498.c)
 *     sub_1800A589C @ 0x1800A589C (sub_1800A589C.c)
 * Callees:
 *     sub_1800F164C @ 0x1800F164C (sub_1800F164C.c)
 *     sub_1800F191C @ 0x1800F191C (sub_1800F191C.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 *     sub_1800F2BF8 @ 0x1800F2BF8 (sub_1800F2BF8.c)
 *     sub_1800F2F48 @ 0x1800F2F48 (sub_1800F2F48.c)
 *     sub_1800F3014 @ 0x1800F3014 (sub_1800F3014.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

__int64 __fastcall sub_1800F5478(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v6; // si
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // eax
  int v12; // ecx
  size_t v13; // r8
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 v21; // rcx
  Spectre::Utils::SpectreException *v23; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[88]; // [rsp+40h] [rbp-58h] BYREF

  sub_1800F2BF8(*(_QWORD *)(a1 + 16));
  try
  {
    v6 = sub_1800F2344(*(_QWORD *)(a1 + 16), a2, a3);
    v7 = *(_QWORD *)(a1 + 16);
  }
  catch ( Spectre::Utils::SpectreException *v23 )
  {
    v21 = sub_1800114EC(a1 + 16);
    sub_1800F2AC4(v21);
    sub_18000E668((__int64)v24, (__int64)v23);
    throw (Spectre::Utils::SpectreException *)v24;
  }
  sub_1800F2AC4(v7);
  v8 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(v8 + 1242);
  v9 = sub_1800F2F48(v8, v6);
  v10 = v9;
  if ( *(_DWORD *)(v9 + 36) == 8 )
  {
    sub_1800F191C((_QWORD *)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) + 40LL * *(unsigned int *)(v9 + 40));
  }
  else
  {
    v11 = sub_1800F3014(*(_QWORD *)(a1 + 16));
    sub_1800F164C(a1 + 32, v11);
    v12 = *(_DWORD *)(v10 + 36);
    v13 = 0LL;
    if ( v12 && (v14 = v12 - 1) != 0 && (v15 = v14 - 1) != 0 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 && (v19 = v18 - 1) != 0 )
          {
            if ( v19 == 1 )
              v13 = 64LL;
          }
          else
          {
            v13 = 16LL;
          }
        }
        else
        {
          v13 = 12LL;
        }
      }
      else
      {
        v13 = 8LL;
      }
    }
    else
    {
      v13 = 4LL;
    }
    memmove(
      (void *)(*(_QWORD *)(a1 + 32) + 4LL * *(unsigned int *)(v10 + 40)),
      (const void *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL) + 4LL * *(unsigned int *)(v10 + 40)),
      v13);
    ++*(_DWORD *)(a1 + 80);
  }
  return v6;
}
