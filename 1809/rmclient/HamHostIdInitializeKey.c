/*
 * XREFs of HamHostIdInitializeKey @ 0x18000F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18000E9B0 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?HampHostIdStoreKeyInitialize@@YAXPEBGPEAXKW4_HAM_HOSTID_STORE_CONTAINER_TYPE@@0PEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180010458 (-HampHostIdStoreKeyInitialize@@YAXPEBGPEAXKW4_HAM_HOSTID_STORE_CONTAINER_TYPE@@0PEAU_HAM_HOSTID_.c)
 */

__int64 __fastcall HamHostIdInitializeKey(
        __int64 a1,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 *a5,
        __int64 a6)
{
  unsigned int v10; // ebx
  unsigned __int16 *v11; // r11
  unsigned __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v10 = 0;
  if ( (unsigned __int8)PsmIsValidKey() )
  {
    if ( RtlValidSid(a2) )
    {
      if ( a4 > 3 )
      {
        return (unsigned int)-1073741582;
      }
      else
      {
        v11 = a5;
        if ( a5 && (int)StringCchLengthW(a5, 256LL, v13) < 0 )
          return (unsigned int)-1073741581;
        else
          HampHostIdStoreKeyInitialize(a1, a2, a3, a4, v11, a6);
      }
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v10;
}
