/*
 * XREFs of WheaWmiDispatch @ 0x14019C190
 * Callers:
 *     <none>
 * Callees:
 *     WheapWmiRegisterInfo @ 0x14019C1EC (WheapWmiRegisterInfo.c)
 *     WheapWmiExecuteMethod @ 0x14034271C (WheapWmiExecuteMethod.c)
 *     WheapWmiGetAllData @ 0x140342944 (WheapWmiGetAllData.c)
 *     WheapWmiGetSingleInstance @ 0x1403429A8 (WheapWmiGetSingleInstance.c)
 */

__int64 __fastcall WheaWmiDispatch(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( !(_DWORD)a1 )
    return WheapWmiGetAllData(a1, a3, a4, a6);
  v6 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)v6 )
    return WheapWmiGetSingleInstance(v6, a3, a4, a6);
  v7 = (unsigned int)(v6 - 7);
  if ( !(_DWORD)v7 )
    return WheapWmiRegisterInfo(v7, a3, a4, a6);
  if ( (_DWORD)v7 == 1 )
    return WheapWmiExecuteMethod(a2, a3, a4, a6);
  *a6 = 0;
  return 3221225488LL;
}
