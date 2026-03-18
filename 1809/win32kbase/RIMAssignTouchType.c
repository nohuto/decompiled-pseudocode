/*
 * XREFs of RIMAssignTouchType @ 0x1C0114FC4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     RIMIsParallelDevice @ 0x1C01186B4 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C0118EA0 (RIMRetrieveLinkCollection.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C011C7F0 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMAssignTouchType(__int64 a1, __int64 a2)
{
  int SpecificButtonCaps; // eax
  int SpecificValueCaps; // eax
  int v6; // ebx
  void *v7; // rax
  __int16 v8; // ax
  _WORD v10[2]; // [rsp+40h] [rbp-89h] BYREF
  _DWORD v11[3]; // [rsp+44h] [rbp-85h] BYREF
  _BYTE v12[6]; // [rsp+50h] [rbp-79h] BYREF
  __int16 v13; // [rsp+56h] [rbp-73h]
  _BYTE v14[80]; // [rsp+A0h] [rbp-29h] BYREF

  v10[0] = 1;
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 13, 0, 71, (__int64)v14, (__int64)v10, a2);
  if ( (int)(SpecificButtonCaps + 0x80000000) < 0 || SpecificButtonCaps == -1072627705 )
    *(_DWORD *)(a1 + 308) |= 0x10u;
  v10[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 13, 0, 81, (__int64)v12, (__int64)v10, a2);
  v6 = SpecificValueCaps;
  if ( ((SpecificValueCaps + 0x80000000) & 0x80000000) != 0 || SpecificValueCaps == -1072627705 )
  {
    v10[0] = 1;
    v6 = rimHidP_GetSpecificValueCaps(2, 13, 0, 85, (__int64)v12, (__int64)v10, a2);
    if ( v6 < 0 )
    {
      v8 = v13;
      *(_DWORD *)(a1 + 308) |= 0x80u;
      *(_WORD *)(a1 + 720) = v8;
    }
    else
    {
      v11[0] = 0;
      *(_DWORD *)(a1 + 24) = 2;
      v7 = Win32AllocPoolZInit(0x28uLL, 0x71707352u);
      *(_QWORD *)(a1 + 704) = v7;
      if ( !v7
        || (unsigned int)RIMIsParallelDevice(a1, a2, v11) && !(unsigned int)RIMRetrieveLinkCollection(a1, a2, v11[0]) )
      {
        return (unsigned int)-1073741668;
      }
    }
  }
  return (unsigned int)v6;
}
