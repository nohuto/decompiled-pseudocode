/*
 * XREFs of _CmCreateInterfaceClassWorker @ 0x14072D114
 * Callers:
 *     _CmCreateInterfaceClass @ 0x14072CF98 (_CmCreateInterfaceClass.c)
 * Callees:
 *     _CmOpenInterfaceClassRegKey @ 0x140627CC0 (_CmOpenInterfaceClassRegKey.c)
 *     _CmRaiseCreateEvent @ 0x14071B5D4 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateInterfaceClassWorker(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, bool *a5, __int16 a6)
{
  int v9; // ebx
  bool v10; // dl
  _DWORD v12[6]; // [rsp+40h] [rbp-18h] BYREF

  v12[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmOpenInterfaceClassRegKey(a1, a2, a3, (__int64)a4, a3, 1, (__int64)a4, v12);
    if ( v9 >= 0 )
    {
      v10 = v12[0] == 1;
      *a5 = v12[0] == 1;
      if ( v10 )
        CmRaiseCreateEvent(a1, a2, 4u, *a4);
    }
  }
  return (unsigned int)v9;
}
