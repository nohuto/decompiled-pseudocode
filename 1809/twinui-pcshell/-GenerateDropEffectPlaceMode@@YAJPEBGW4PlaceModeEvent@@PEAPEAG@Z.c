/*
 * XREFs of ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x180379900
 * Callers:
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x180378FDC (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 *     ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x18037A940 (-PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003B6C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x1801DB890 (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 *     ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18036633C (-InitializeMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA.c)
 */

__int64 __fastcall GenerateDropEffectPlaceMode(__int64 a1, int a2, _QWORD *a3)
{
  char v5; // si
  char v6; // r15
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // ebx
  unsigned int v11; // edx
  const void *v12; // rdi
  int v13; // eax
  int v14; // eax
  unsigned __int16 *v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h]
  const void *v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]
  unsigned __int16 v22; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int16 *v23; // [rsp+B0h] [rbp+50h] BYREF

  *a3 = 0LL;
  v5 = 1;
  v6 = 0;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
            return (unsigned int)-2147024809;
          v11 = 2102;
        }
        else
        {
          v11 = 2101;
        }
      }
      else
      {
        v11 = 2103;
      }
    }
    else
    {
      v11 = 2105;
      v5 = 0;
    }
  }
  else
  {
    v11 = 2104;
    v6 = 1;
  }
  v19 = 0LL;
  v20 = 0LL;
  v12 = 0LL;
  v21 = 0LL;
  v10 = -2147467259;
  if ( Windows::Internal::ResourceString::FindAndSize(
         &_ImageBase,
         v11,
         (__int64)a3,
         (const unsigned __int16 **)&v23,
         &v22) )
  {
    v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (LPVOID *)&v19,
            (__int64)v23,
            v22);
    v12 = v19;
    v10 = v13;
  }
  if ( v10 >= 0 )
  {
    if ( v5 )
    {
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      if ( v6 )
        v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeMessage(
                &v16,
                v12,
                a1);
      else
        v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                &v16,
                (const unsigned __int16 *)v12,
                a1);
      v10 = v14;
      if ( v14 >= 0 )
      {
        *a3 = v16;
        v16 = 0LL;
        v18 = 0LL;
        v17 = 0LL;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
    }
    else
    {
      v19 = 0LL;
      v21 = 0LL;
      v20 = 0LL;
      *a3 = v12;
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
  return (unsigned int)v10;
}
