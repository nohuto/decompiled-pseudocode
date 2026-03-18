/*
 * XREFs of ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00E8ACC
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E9980 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     MonitorGetLinkInfoFromTarget @ 0x1C00E6EAC (MonitorGetLinkInfoFromTarget.c)
 */

__int64 __fastcall DxgkpCopyMonitorLinkInfoToFlags(DXGADAPTER *a1, struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  int v6; // r8d
  unsigned int v7; // edx
  __int16 v8; // r10
  unsigned int v9; // edx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v10 = 0LL;
  v3 = *((unsigned int *)a2 + 479);
  v11 = 0;
  LODWORD(result) = MonitorGetLinkInfoFromTarget(a1, v3, (__int64)&v10);
  v6 = *((_DWORD *)a2 + 513);
  if ( (int)result >= 0 )
  {
    v8 = WORD2(v10);
    v9 = v6 & 0xFFFFF63F | (4
                          * (WORD2(v10) & 0x200 | (8
                                                 * (BYTE4(v10) & 4 | (2 * (BYTE4(v10) & 1 | (2 * (BYTE4(v10) & 2)))) | 1))));
    *((_DWORD *)a2 + 513) = v9;
    if ( *((_BYTE *)a1 + 2520) )
      v7 = v9 | 0x4000;
    else
      v7 = ((unsigned __int16)v9 ^ (unsigned __int16)(8 * v8)) & 0x4000 ^ v9;
  }
  else
  {
    v7 = v6 & 0xFFFFB61F;
  }
  *((_DWORD *)a2 + 513) = v7;
  return (unsigned int)result;
}
