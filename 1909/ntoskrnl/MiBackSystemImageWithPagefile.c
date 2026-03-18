/*
 * XREFs of MiBackSystemImageWithPagefile @ 0x14073BA78
 * Callers:
 *     MmBackSystemImageWithPagefile @ 0x14073BA1C (MmBackSystemImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x14073BA78 (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiBackSystemImageWithPagefile @ 0x14073BA78 (MiBackSystemImageWithPagefile.c)
 *     MiBackSingleImageWithPagefile @ 0x14073BB98 (MiBackSingleImageWithPagefile.c)
 */

__int64 __fastcall MiBackSystemImageWithPagefile(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // r8
  int v6; // esi
  __int64 *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 196);
  result = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (v1 & 0xC) == 0 )
  {
    if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
    {
      return 3221225793LL;
    }
    else
    {
      v6 = v4;
      if ( *(_QWORD *)(a1 + 112) && (v4 & 2) == 0 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v5) )
      {
        MiBackSingleImageWithPagefile(a1);
        v6 = *(_DWORD *)(a1 + 196);
      }
      v7 = *(__int64 **)(a1 + 136);
      result = 0LL;
      if ( v7 != (__int64 *)-2LL && v7 != (__int64 *)1 )
      {
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          v12 = 1LL;
          v13 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFEuLL;
          v7 = &v12;
        }
        *(_DWORD *)(a1 + 196) = v6 | 8;
        v8 = 0;
        if ( *v7 )
        {
          v9 = 0LL;
          do
          {
            v10 = v7[v9 + 1];
            if ( !v10 )
              break;
            if ( *(_QWORD *)(v10 + 136) != 1LL )
            {
              result = MiBackSystemImageWithPagefile(v10);
              if ( (int)result < 0 )
                break;
            }
            v9 = ++v8;
          }
          while ( v8 < (unsigned __int64)*v7 );
        }
      }
      v11 = *(_DWORD *)(a1 + 196) & 0xFFFFFFF7;
      *(_DWORD *)(a1 + 196) = v11;
      if ( (int)result >= 0 )
        *(_DWORD *)(a1 + 196) = v11 | 4;
    }
  }
  return result;
}
