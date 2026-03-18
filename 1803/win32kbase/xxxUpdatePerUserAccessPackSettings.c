/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C010BC40
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     GetProcessLuid @ 0x1C003CBE0 (GetProcessLuid.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     FastGetProfileIntW @ 0x1C00A80D0 (FastGetProfileIntW.c)
 *     RtlStringCchCopyW @ 0x1C00A8900 (RtlStringCchCopyW.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C0109DD0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C0109E20 (-CalculateMouseTable@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C010A470 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C010A4C0 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C010A700 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C010BA00 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(const UNICODE_STRING *a1)
{
  int v2; // r13d
  ULONG v3; // edi
  ULONG v4; // esi
  ULONG v5; // r15d
  ULONG v6; // r12d
  ULONG v7; // r8d
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  void *v28; // rdi
  __int64 v29; // rsi
  NTSTATUS v30; // eax
  int v31; // r14d
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v35; // [rsp+3Ch] [rbp-C4h]
  BOOL v36; // [rsp+40h] [rbp-C0h]
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszDest[128]; // [rsp+60h] [rbp-A0h] BYREF

  AuthenticationId = 0LL;
  GetProcessLuid(0LL, &AuthenticationId);
  if ( AuthenticationId.LowPart != 999 || (v2 = 1, AuthenticationId.HighPart) )
    v2 = 0;
  FastGetProfileIntW((__int64)a1, 15LL, (const WCHAR *)L"Flags", 0, &Value, 0);
  v3 = Value & 1;
  FastGetProfileIntW((__int64)a1, 14LL, (const WCHAR *)L"Flags", 0, &Value, 0);
  v4 = Value & 1;
  FastGetProfileIntW((__int64)a1, 16LL, (const WCHAR *)L"Flags", 0, &Value, 0);
  v5 = Value & 1;
  FastGetProfileIntW((__int64)a1, 17LL, (const WCHAR *)L"Flags", 0, &Value, 0);
  v6 = Value & 1;
  FastGetProfileIntW((__int64)a1, 27LL, (const WCHAR *)L"On", 0, &Value, 0);
  v36 = Value != 0;
  FastGetProfileIntW((__int64)a1, 28LL, (const WCHAR *)L"On", 0, &Value, 0);
  Length = Value != 0;
  FastGetProfileIntW((__int64)a1, 18LL, (const WCHAR *)L"Flags", 0, &Value, 0);
  v35 = Value & 1;
  FastGetProfileIntW((__int64)a1, 29LL, (const WCHAR *)L"Flags", 0, &Value, 0);
  v7 = Value & 1;
  v33 = v7;
  if ( v2 )
  {
    if ( v3 )
    {
      dword_1C01A4E8C |= 1u;
      v8 = gdwPUDFlags | 1;
    }
    else
    {
      dword_1C01A4E8C &= ~1u;
      v8 = gdwPUDFlags & 0xFFFFFFFE;
    }
    gdwPUDFlags = v8;
    if ( (dword_1C01A4E84 & 1) != 0 && !v3 )
    {
      xxxTurnOffStickyKeys();
      v7 = v33;
    }
    if ( v4 )
    {
      dword_1C01A4E84 |= 1u;
      v9 = gdwPUDFlags | 2;
    }
    else
    {
      dword_1C01A4E84 &= ~1u;
      v9 = gdwPUDFlags & 0xFFFFFFFD;
    }
    if ( v5 )
    {
      dword_1C01A4E64 |= 1u;
      v10 = v9 | 4;
    }
    else
    {
      dword_1C01A4E64 &= ~1u;
      v10 = v9 & 0xFFFFFFFB;
    }
    if ( v6 )
    {
      dword_1C01A4E4C |= 1u;
      v11 = v10 | 8;
    }
    else
    {
      dword_1C01A4E4C &= ~1u;
      v11 = v10 & 0xFFFFFFF7;
    }
    if ( v35 )
    {
      dword_1C01A4E54 |= 1u;
      v12 = v11 | 0x10;
    }
    else
    {
      dword_1C01A4E54 &= ~1u;
      v12 = v11 & 0xFFFFFFEF;
    }
    if ( v36 )
    {
      gdwPUDFlags = v12 | 0x20020;
      *(_DWORD *)gpsi |= 0x80u;
    }
    else
    {
      gdwPUDFlags = v12 & 0xFFFDFFDF;
      *(_DWORD *)gpsi &= ~0x80u;
    }
    v13 = gdwPUDFlags & 0xFFFBFFBF;
    if ( Length )
      v13 = gdwPUDFlags | 0x40040;
    if ( v7 )
    {
      dword_1C01A4E04 |= 1u;
      v14 = v13 | 0x80;
    }
    else
    {
      dword_1C01A4E04 &= ~1u;
      v14 = v13 & 0xFFFFFF7F;
    }
    gdwPUDFlags = v14;
    goto LABEL_74;
  }
  if ( (((unsigned __int8)gdwPUDFlags ^ (unsigned __int8)dword_1C01A4E8C) & 1) == 0 )
  {
    if ( v3 )
      v15 = dword_1C01A4E8C | 1;
    else
      v15 = dword_1C01A4E8C & 0xFFFFFFFE;
    dword_1C01A4E8C = v15;
  }
  if ( (dword_1C01A4E84 & 1) == (((unsigned int)gdwPUDFlags >> 1) & 1) )
  {
    if ( (dword_1C01A4E84 & 1) != 0 )
    {
      if ( !v4 )
      {
        xxxTurnOffStickyKeys();
        v7 = v33;
LABEL_41:
        dword_1C01A4E84 &= ~1u;
        goto LABEL_42;
      }
    }
    else if ( !v4 )
    {
      goto LABEL_41;
    }
    dword_1C01A4E84 |= 1u;
  }
LABEL_42:
  v16 = gdwPUDFlags;
  if ( (((unsigned __int8)dword_1C01A4E64 ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 2)) & 1) == 0 )
  {
    if ( v5 )
      v17 = dword_1C01A4E64 | 1;
    else
      v17 = dword_1C01A4E64 & 0xFFFFFFFE;
    dword_1C01A4E64 = v17;
  }
  if ( (((unsigned __int8)dword_1C01A4E4C ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 3)) & 1) == 0 )
  {
    if ( v6 )
      v18 = dword_1C01A4E4C | 1;
    else
      v18 = dword_1C01A4E4C & 0xFFFFFFFE;
    dword_1C01A4E4C = v18;
  }
  if ( (((unsigned __int8)dword_1C01A4E54 ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 4)) & 1) == 0 )
  {
    if ( v35 )
      v19 = dword_1C01A4E54 | 1;
    else
      v19 = dword_1C01A4E54 & 0xFFFFFFFE;
    dword_1C01A4E54 = v19;
  }
  if ( (((unsigned __int8)gdwPUDFlags ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 12)) & 0x20) == 0 )
  {
    if ( v36 )
      v16 = gdwPUDFlags | 0x20000;
    else
      v16 = gdwPUDFlags & 0xFFFDFFFF;
    gdwPUDFlags = v16;
  }
  if ( (((unsigned __int8)v16 ^ (unsigned __int8)(v16 >> 12)) & 0x40) == 0 )
  {
    if ( Length )
      v16 |= 0x40000u;
    else
      v16 &= ~0x40000u;
    gdwPUDFlags = v16;
  }
  if ( (((unsigned __int8)dword_1C01A4E04 ^ (unsigned __int8)(v16 >> 7)) & 1) == 0 )
  {
    if ( v7 )
      v20 = dword_1C01A4E04 | 1;
    else
      v20 = dword_1C01A4E04 & 0xFFFFFFFE;
    dword_1C01A4E04 = v20;
  }
LABEL_74:
  FastGetProfileIntW((__int64)a1, 15LL, (const WCHAR *)L"Flags", 0x52u, &Value, 0);
  v21 = Value & 0xFFFFFFFE;
  if ( (dword_1C01A4E8C & 1) != 0 )
    v21 = Value | 1;
  Value = v21;
  dword_1C01A4E8C = v21;
  FastGetProfileIntW((__int64)a1, 15LL, (const WCHAR *)L"DelayBeforeAcceptance", 0x3E8u, &::Value, 0);
  FastGetProfileIntW((__int64)a1, 15LL, (const WCHAR *)L"AutoRepeatRate", 0x1F4u, &dword_1C01A4E98, 0);
  FastGetProfileIntW((__int64)a1, 15LL, (const WCHAR *)L"AutoRepeatDelay", 0x3E8u, &dword_1C01A4E94, 0);
  FastGetProfileIntW((__int64)a1, 15LL, (const WCHAR *)L"BounceTime", 0, &dword_1C01A4E9C, 0);
  FastGetProfileIntW((__int64)a1, 19LL, (const WCHAR *)L"Flags", 2u, &dword_1C01A4E14, 0);
  FastGetProfileIntW((__int64)a1, 19LL, (const WCHAR *)L"FSTextEffect", 0, &dword_1C01A4E18, 0);
  FastGetProfileIntW((__int64)a1, 19LL, (const WCHAR *)L"WindowsEffect", 0, &dword_1C01A4E30, 0);
  FastGetProfileIntW((__int64)a1, 20LL, (const WCHAR *)L"On", 0, &Value, 0);
  v22 = gdwPUDFlags & 0xFFFF7FFF;
  if ( Value )
    v22 = gdwPUDFlags | 0x8000;
  gdwPUDFlags = v22;
  *((_DWORD *)gpsi + 544) = (v22 >> 15) & 1;
  FastGetProfileIntW((__int64)a1, 14LL, (const WCHAR *)L"Flags", 0x1D2u, &Value, 0);
  v23 = Value & 0xFFFFFFFE;
  if ( (dword_1C01A4E84 & 1) != 0 )
    v23 = Value | 1;
  Value = v23;
  dword_1C01A4E84 = v23;
  FastGetProfileIntW((__int64)a1, 16LL, (const WCHAR *)L"Flags", 0x12u, &Value, 0);
  v24 = Value & 0xFFFFFFFE;
  if ( (dword_1C01A4E64 & 1) != 0 )
    v24 = Value | 1;
  Value = v24;
  dword_1C01A4E64 = v24;
  FastGetProfileIntW((__int64)a1, 16LL, (const WCHAR *)L"MaximumSpeed", 0x28u, &dword_1C01A4E68, 0);
  FastGetProfileIntW((__int64)a1, 16LL, (const WCHAR *)L"TimeToMaximumSpeed", 0xBB8u, &dword_1C01A4E6C, 0);
  if ( dword_1C01A4E68 - 10 > 0x15E )
    dword_1C01A4E68 = 40;
  if ( dword_1C01A4E6C - 1000 > 0xFA0 )
    dword_1C01A4E6C = 3000;
  CalculateMouseTable();
  gbMKMouseMode = ((dword_1C01A4E64 & 0x80) != 0) ^ (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)gNumLockVk >> 2))) != 0);
  if ( (dword_1C01A4E64 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW((__int64)a1, 17LL, (const WCHAR *)L"Flags", 0x12u, &Value, 0);
  v25 = Value & 0xFFFFFFFE;
  if ( (dword_1C01A4E4C & 1) != 0 )
    v25 = Value | 1;
  Value = v25;
  dword_1C01A4E4C = v25;
  FastGetProfileIntW((__int64)a1, 18LL, (const WCHAR *)L"Flags", 2u, &Value, 0);
  v26 = Value & 0xFFFFFFFE;
  if ( (dword_1C01A4E54 & 1) != 0 )
    v26 = Value | 1;
  Value = v26;
  dword_1C01A4E54 = v26;
  if ( gpKbdNlsTbl )
  {
    if ( *(_DWORD *)(gpKbdNlsTbl + 16) == 16 && *(_QWORD *)(gpKbdNlsTbl + 24) )
      gpusMouseVKey = *(_QWORD *)(gpKbdNlsTbl + 24);
    if ( (*(_BYTE *)(gpKbdNlsTbl + 2) & 2) != 0 )
    {
      gNumLockVk = 36;
      gOemScrollVk = 21;
    }
  }
  FastGetProfileIntW((__int64)a1, 18LL, (const WCHAR *)L"TimeToWait", 0x493E0u, &dword_1C01A4E58, 0);
  FastGetProfileIntW((__int64)a1, 29LL, (const WCHAR *)L"Flags", 0x52u, &Value, 0);
  v27 = Value & 0xFFFFFFFE;
  if ( (dword_1C01A4E04 & 1) != 0 )
    v27 = Value | 1;
  Value = v27;
  dword_1C01A4E04 = v27;
  v33 = gdwPolicyFlags;
  v28 = OpenCacheKeyEx(a1, 0x1Du, 0x20019u, &v33);
  if ( v28 )
  {
    while ( 1 )
    {
      Length = 268;
      v29 = Win32AllocPoolWithQuota(268LL, 0x72707355u);
      if ( !v29 )
      {
LABEL_115:
        ZwClose(v28);
        goto LABEL_116;
      }
      RtlInitUnicodeString(&DestinationString, L"High Contrast Scheme");
      v30 = ZwQueryValueKey(v28, &DestinationString, KeyValuePartialInformation, (PVOID)v29, Length, &Length);
      if ( ((v30 + 0x80000000) & 0x80000000) != 0 || v30 == -2147483643 )
        break;
      Win32FreePool(v29);
      if ( !v33 )
        goto LABEL_115;
      ZwClose(v28);
      v28 = OpenCacheKeyEx(a1, 0x1Du, 0x20019u, &v33);
      if ( !v28 )
        goto LABEL_116;
    }
    v31 = 128;
    if ( *(_DWORD *)(v29 + 8) >> 1 < 0x80u )
      v31 = *(_DWORD *)(v29 + 8) >> 1;
    if ( *(_DWORD *)(v29 + 8) < 2u )
    {
      pszDest[0] = 0;
    }
    else
    {
      *(_WORD *)(v29 + 2LL * (unsigned int)(v31 - 1) + 12) = 0;
      RtlStringCchCopyW(pszDest, 0x80uLL, (NTSTRSAFE_PCWSTR)(v29 + 12));
    }
    Win32FreePool(v29);
    ZwClose(v28);
    if ( v31 )
      RtlStringCchCopyW(&gHighContrastDefaultScheme, 0x80uLL, pszDest);
  }
LABEL_116:
  gAudioDescription = 12;
  FastGetProfileIntW((__int64)a1, 48LL, (const WCHAR *)L"On", 0, &dword_1C01A4AE4, 0);
  FastGetProfileIntW((__int64)a1, 48LL, (const WCHAR *)L"Locale", 0, &dword_1C01A4AE8, 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
