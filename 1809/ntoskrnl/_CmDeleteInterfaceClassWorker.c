/*
 * XREFs of _CmDeleteInterfaceClassWorker @ 0x1408F937C
 * Callers:
 *     _CmDeleteInterfaceClass @ 0x1408F9250 (_CmDeleteInterfaceClass.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x14059FD20 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmDeleteCommonClassRegKey @ 0x1408F7560 (_CmDeleteCommonClassRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x1408FC154 (_CmRaiseDeleteEvent.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x1408FFFF4 (_CmGetInterfaceClassMappedPropertyKeys.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x140900E6C (_CmSetInterfaceClassMappedProperty.c)
 */

__int64 __fastcall CmDeleteInterfaceClassWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  unsigned int MatchingFilteredDeviceInterfaceList; // eax
  int v7; // r9d
  int *v8; // rdi
  unsigned int v9; // ebp
  int v10; // r8d
  int v11; // eax
  PVOID PoolWithTag; // rdi
  unsigned int v13; // r14d
  int InterfaceClassMappedPropertyKeys; // eax
  unsigned int v15; // ebp
  int v16; // ebp
  int v17; // eax
  unsigned int v19; // [rsp+50h] [rbp-48h] BYREF
  int v20; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v21[4]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  v20 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            a2,
                                            0LL,
                                            0,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0,
                                            (__int64)&v20,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList == -1073741789 )
    {
      return (unsigned int)-1073741535;
    }
    else if ( MatchingFilteredDeviceInterfaceList )
    {
      return MatchingFilteredDeviceInterfaceList;
    }
    else
    {
      v21[0] = 832;
      v8 = v21;
      v21[1] = 576;
      v9 = 0;
      v21[2] = 320;
      while ( 1 )
      {
        v10 = *v8;
        if ( !*v8 || (v10 & 0xFFFFFCBF) != 0 )
          v11 = -1073741811;
        else
          v11 = CmDeleteCommonClassRegKey(a1, a2, v10);
        if ( v11 && v11 != -1073741772 && v11 != -1073741811 && v11 != -1073741637 )
          break;
        ++v9;
        ++v8;
        if ( v9 >= 3 )
          goto LABEL_19;
      }
      v3 = v11;
      if ( v11 < 0 )
        return (unsigned int)v3;
LABEL_19:
      PoolWithTag = 0LL;
      v13 = 0;
      v19 = 0;
      do
      {
        LOBYTE(v7) = 1;
        InterfaceClassMappedPropertyKeys = CmGetInterfaceClassMappedPropertyKeys(
                                             a1,
                                             a2,
                                             0,
                                             v7,
                                             (__int64)PoolWithTag,
                                             v13,
                                             (__int64)&v19);
        v13 = v19;
        if ( InterfaceClassMappedPropertyKeys != -1073741789 )
          goto LABEL_26;
        if ( 20 * (unsigned __int64)v19 > 0xFFFFFFFF )
        {
          InterfaceClassMappedPropertyKeys = -1073741811;
          goto LABEL_28;
        }
        v15 = 20 * v19;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x52504E50u);
      }
      while ( PoolWithTag );
      InterfaceClassMappedPropertyKeys = -1073741801;
LABEL_26:
      if ( InterfaceClassMappedPropertyKeys && InterfaceClassMappedPropertyKeys != -1073741275 )
      {
LABEL_28:
        v3 = InterfaceClassMappedPropertyKeys;
        goto LABEL_44;
      }
      v16 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v17 = CmSetInterfaceClassMappedProperty(a1, a2, (int)PoolWithTag + 20 * v16, 0, 0LL, 0);
          if ( v17 )
          {
            if ( v17 != -1073741275 && v17 != -1073741790 && v17 != -1073741802 && v17 != -1073741637 )
              break;
          }
          if ( ++v16 >= v13 )
            goto LABEL_39;
        }
        v3 = v17;
      }
LABEL_39:
      if ( v3 >= 0 )
      {
        InterfaceClassMappedPropertyKeys = CmDeleteCommonClassRegKey(a1, a2, 64);
        if ( InterfaceClassMappedPropertyKeys
          && InterfaceClassMappedPropertyKeys != -1073741772
          && InterfaceClassMappedPropertyKeys != -1073741811 )
        {
          goto LABEL_28;
        }
        CmRaiseDeleteEvent(a1, a2, 4LL);
      }
LABEL_44:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  return (unsigned int)v3;
}
