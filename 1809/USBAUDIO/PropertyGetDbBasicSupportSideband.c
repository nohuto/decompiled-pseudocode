/*
 * XREFs of PropertyGetDbBasicSupportSideband @ 0x1C0025B68
 * Callers:
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000A4A0 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000ABB0 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetDbBasicSupportSideband(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // r9d
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // r10
  _OWORD *v9; // r11
  unsigned int v10; // r8d
  _OWORD *v11; // r10
  int v12; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 92);
  v4 = 4;
  v6 = 16 * v3 + 56;
  if ( (unsigned int)*a2 >= 4 )
  {
    v7 = 0;
    *(_DWORD *)a3 = 515;
    if ( (unsigned int)*a2 >= 0x28 )
    {
      *(_DWORD *)(a3 + 4) = v6;
      v4 = 40;
      *(_QWORD *)(a3 + 24) = 3LL;
      *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
      *(_QWORD *)(a3 + 32) = 1LL;
      if ( *a2 >= v6 )
      {
        v8 = *(_QWORD *)(a1 + 128);
        *(_DWORD *)(a3 + 40) = 2;
        v9 = (_OWORD *)(a3 + 56);
        *(_DWORD *)(a3 + 52) = 2;
        v4 = 16 * v3 + 56;
        *(_DWORD *)(a3 + 44) = 16;
        *(_DWORD *)(a3 + 48) = v3;
        v10 = 0;
        if ( v3 )
        {
          v11 = (_OWORD *)(v8 + 16);
          do
          {
            v12 = *(_DWORD *)(a1 + 96);
            if ( _bittest(&v12, v10) )
              *v9 = *v11;
            ++v10;
            v11 += 2;
            ++v9;
          }
          while ( v10 < v3 );
        }
      }
    }
  }
  else
  {
    v4 = 16 * *(_DWORD *)(a1 + 92) + 56;
    v7 = -1073741789;
  }
  result = v7;
  *a2 = v4;
  return result;
}
