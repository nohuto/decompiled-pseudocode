/*
 * XREFs of RIMAssignTouchType @ 0x1C013B0DC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     RIMIsParallelDevice @ 0x1C013E7D4 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C013F010 (RIMRetrieveLinkCollection.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0142C68 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
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
  _WORD v12[40]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v13[80]; // [rsp+A0h] [rbp-29h] BYREF

  memset(v12, 0, 0x48uLL);
  memset(v13, 0, 0x48uLL);
  v10[0] = 1;
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 13, 0, 71, (__int64)v13, (__int64)v10, a2);
  if ( (int)(SpecificButtonCaps + 0x80000000) < 0 || SpecificButtonCaps == -1072627705 )
    *(_DWORD *)(a1 + 312) |= 4u;
  v10[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 13, 0, 81, (__int64)v12, (__int64)v10, a2);
  v6 = SpecificValueCaps;
  if ( ((SpecificValueCaps + 0x80000000) & 0x80000000) != 0 || SpecificValueCaps == -1072627705 )
  {
    v10[0] = 1;
    v6 = rimHidP_GetSpecificValueCaps(2, 13, 0, 85, (__int64)v12, (__int64)v10, a2);
    if ( v6 < 0 )
    {
      v8 = v12[3];
      *(_DWORD *)(a1 + 312) |= 0x20u;
      *(_WORD *)(a1 + 728) = v8;
    }
    else
    {
      v11[0] = 0;
      *(_DWORD *)(a1 + 24) = 2;
      v7 = Win32AllocPoolZInit(0x28uLL, 1903194962LL);
      *(_QWORD *)(a1 + 712) = v7;
      if ( !v7
        || (unsigned int)RIMIsParallelDevice(a1, a2, v11) && !(unsigned int)RIMRetrieveLinkCollection(a1, a2, v11[0]) )
      {
        return (unsigned int)-1073741668;
      }
    }
  }
  return (unsigned int)v6;
}
