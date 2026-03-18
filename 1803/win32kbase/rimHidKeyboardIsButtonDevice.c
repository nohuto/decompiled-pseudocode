/*
 * XREFs of rimHidKeyboardIsButtonDevice @ 0x1C0103EB4
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C01036C0 (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C004DA3C (rimHidP_GetSpecificButtonCaps.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall rimHidKeyboardIsButtonDevice(struct _HIDP_PREPARSED_DATA *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  struct _HIDP_BUTTON_CAPS *v5; // rdi
  struct _HIDP_PREPARSED_DATA *v6; // r14
  unsigned __int16 *v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // r13
  struct _HIDP_PREPARSED_DATA *v10; // r14
  unsigned __int16 *v11; // r12
  int v12; // r15d
  __int64 v13; // r13
  unsigned __int16 v15; // [rsp+40h] [rbp-30h] BYREF
  struct _HIDP_PREPARSED_DATA *v16; // [rsp+48h] [rbp-28h]
  _DWORD *v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+60h] [rbp-10h]

  v17 = a3;
  v3 = 0;
  v16 = a1;
  v18 = 0LL;
  v19 = 0;
  if ( a3 )
  {
    v15 = *(_WORD *)(a2 + 46);
    v5 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolNonPaged(72LL * v15, 0x626B4852u);
    if ( v5 )
    {
      memset(v5, 0, 72LL * v15);
      v6 = v16;
      v7 = (unsigned __int16 *)&v18;
      LODWORD(v18) = 3932219;
      WORD2(v18) = 41;
      v8 = 0;
      v9 = 3LL;
      do
      {
        v15 = *(_WORD *)(a2 + 46);
        memset(v5, 0, 72LL * v15);
        if ( rimHidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v7, v5, &v15, v6) >= 0 )
          ++v8;
        ++v7;
        --v9;
      }
      while ( v9 );
      if ( v8 < 2 || *(_WORD *)(a2 + 46) > 3u )
      {
        memset(v5, 0, 72LL * v15);
        v10 = v16;
        v11 = (unsigned __int16 *)&v18;
        v18 = 0x3F004200430068LL;
        v12 = 0;
        LOWORD(v19) = 64;
        v13 = 5LL;
        do
        {
          v15 = *(_WORD *)(a2 + 46);
          memset(v5, 0, 72LL * v15);
          if ( rimHidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v11, v5, &v15, v10) >= 0 )
            ++v12;
          ++v11;
          --v13;
        }
        while ( v13 );
        if ( v12 == 5 && *(_WORD *)(a2 + 46) >= 5u )
          *v17 = 2;
      }
      else
      {
        *v17 = 3;
      }
      Win32FreePool((__int64)v5);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
