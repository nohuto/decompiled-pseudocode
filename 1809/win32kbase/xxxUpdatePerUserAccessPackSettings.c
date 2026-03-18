/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C0045A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0013C98 (RtlStringCchCopyW.c)
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     FastGetProfileIntW @ 0x1C0046B90 (FastGetProfileIntW.c)
 *     GetProcessLuid @ 0x1C0046F00 (GetProcessLuid.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0048BA0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C0048BD0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0048C10 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C0048C30 (-CalculateMouseTable@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C0131950 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0132CF0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(const UNICODE_STRING *a1)
{
  BOOL v2; // esi
  BOOL v3; // r14d
  BOOL v4; // r15d
  BOOL v5; // r12d
  BOOL v6; // r13d
  int v7; // edx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  void *v22; // rdi
  __int64 v23; // rsi
  NTSTATUS v24; // eax
  int v25; // r14d
  int v26; // eax
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v35; // [rsp+3Ch] [rbp-C4h]
  BOOL v36; // [rsp+40h] [rbp-C0h]
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszDest[128]; // [rsp+60h] [rbp-A0h] BYREF

  AuthenticationId = 0LL;
  GetProcessLuid(0LL, &AuthenticationId);
  v2 = AuthenticationId == 999LL;
  FastGetProfileIntW((int)a1, 15, (int)L"Flags", 0, &Value, 0);
  v3 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 14, (int)L"Flags", 0, &Value, 0);
  v4 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 16, (int)L"Flags", 0, &Value, 0);
  v5 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 17, (int)L"Flags", 0, &Value, 0);
  v6 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 27, (int)L"On", 0, &Value, 0);
  v36 = Value != 0;
  FastGetProfileIntW((int)a1, 28, (int)L"On", 0, &Value, 0);
  Length = Value != 0;
  FastGetProfileIntW((int)a1, 18, (int)L"Flags", 0, &Value, 0);
  v35 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 29, (int)L"Flags", 0, &Value, 0);
  v7 = (Value & 1) != 0;
  v33 = v7;
  if ( v2 )
  {
    if ( v3 )
    {
      dword_1C01CC99C |= 1u;
      v8 = gdwPUDFlags | 1;
    }
    else
    {
      dword_1C01CC99C &= ~1u;
      v8 = gdwPUDFlags & 0xFFFFFFFE;
    }
    gdwPUDFlags = v8;
    if ( (dword_1C01CC994 & 1) != 0 && !v3 )
    {
      xxxTurnOffStickyKeys();
      v7 = v33;
    }
    if ( v4 )
    {
      dword_1C01CC994 |= 1u;
      v9 = gdwPUDFlags | 2;
    }
    else
    {
      dword_1C01CC994 &= ~1u;
      v9 = gdwPUDFlags & 0xFFFFFFFD;
    }
    if ( v5 )
    {
      dword_1C01CC974 |= 1u;
      v10 = v9 | 4;
    }
    else
    {
      dword_1C01CC974 &= ~1u;
      v10 = v9 & 0xFFFFFFFB;
    }
    if ( v6 )
    {
      dword_1C01CC95C |= 1u;
      v11 = v10 | 8;
    }
    else
    {
      dword_1C01CC95C &= ~1u;
      v11 = v10 & 0xFFFFFFF7;
    }
    if ( v35 )
    {
      dword_1C01CC964 |= 1u;
      v12 = v11 | 0x10;
    }
    else
    {
      dword_1C01CC964 &= ~1u;
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
      dword_1C01CC94C |= 1u;
      v14 = v13 | 0x80;
    }
    else
    {
      dword_1C01CC94C &= ~1u;
      v14 = v13 & 0xFFFFFF7F;
    }
    gdwPUDFlags = v14;
    goto LABEL_20;
  }
  if ( ((dword_1C01CC99C & 1) != 0) == ((gdwPUDFlags & 1) != 0) )
  {
    if ( v3 )
      v26 = dword_1C01CC99C | 1;
    else
      v26 = dword_1C01CC99C & 0xFFFFFFFE;
    dword_1C01CC99C = v26;
  }
  if ( ((dword_1C01CC994 & 1) != 0) == ((gdwPUDFlags & 2) != 0) )
  {
    if ( (dword_1C01CC994 & 1) != 0 )
    {
      if ( !v4 )
      {
        xxxTurnOffStickyKeys();
        v7 = v33;
        goto LABEL_61;
      }
    }
    else if ( !v4 )
    {
LABEL_61:
      dword_1C01CC994 &= ~1u;
      goto LABEL_62;
    }
    dword_1C01CC994 |= 1u;
  }
LABEL_62:
  v27 = gdwPUDFlags;
  if ( ((dword_1C01CC974 & 1) != 0) == ((gdwPUDFlags & 4) != 0) )
  {
    if ( v5 )
      v28 = dword_1C01CC974 | 1;
    else
      v28 = dword_1C01CC974 & 0xFFFFFFFE;
    dword_1C01CC974 = v28;
  }
  if ( ((dword_1C01CC95C & 1) != 0) == ((gdwPUDFlags & 8) != 0) )
  {
    if ( v6 )
      v29 = dword_1C01CC95C | 1;
    else
      v29 = dword_1C01CC95C & 0xFFFFFFFE;
    dword_1C01CC95C = v29;
  }
  if ( ((dword_1C01CC964 & 1) != 0) == ((gdwPUDFlags & 0x10) != 0) )
  {
    if ( v35 )
      v30 = dword_1C01CC964 | 1;
    else
      v30 = dword_1C01CC964 & 0xFFFFFFFE;
    dword_1C01CC964 = v30;
  }
  if ( ((gdwPUDFlags & 0x20000) != 0) == ((gdwPUDFlags & 0x20) != 0) )
  {
    if ( v36 )
      v27 = gdwPUDFlags | 0x20000;
    else
      v27 = gdwPUDFlags & 0xFFFDFFFF;
    gdwPUDFlags = v27;
  }
  if ( ((v27 & 0x40000) != 0) == ((v27 & 0x40) != 0) )
  {
    if ( Length )
      v27 |= 0x40000u;
    else
      v27 &= ~0x40000u;
    gdwPUDFlags = v27;
  }
  if ( ((dword_1C01CC94C & 1) != 0) == ((v27 & 0x80u) != 0) )
  {
    if ( v7 )
      v31 = dword_1C01CC94C | 1;
    else
      v31 = dword_1C01CC94C & 0xFFFFFFFE;
    dword_1C01CC94C = v31;
  }
LABEL_20:
  FastGetProfileIntW((int)a1, 15, (int)L"Flags", 82, &Value, 0);
  v15 = Value & 0xFFFFFFFE;
  if ( (dword_1C01CC99C & 1) != 0 )
    v15 = Value | 1;
  Value = v15;
  dword_1C01CC99C = v15;
  FastGetProfileIntW((int)a1, 15, (int)L"DelayBeforeAcceptance", 1000, &::Value, 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatRate", 500, &dword_1C01CC9A8, 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatDelay", 1000, &dword_1C01CC9A4, 0);
  FastGetProfileIntW((int)a1, 15, (int)L"BounceTime", 0, &dword_1C01CC9AC, 0);
  FastGetProfileIntW((int)a1, 19, (int)L"Flags", 2, &dword_1C01CFF44, 0);
  FastGetProfileIntW((int)a1, 19, (int)L"FSTextEffect", 0, &dword_1C01CFF48, 0);
  FastGetProfileIntW((int)a1, 19, (int)L"WindowsEffect", 0, &dword_1C01CFF60, 0);
  FastGetProfileIntW((int)a1, 20, (int)L"On", 0, &Value, 0);
  v16 = gdwPUDFlags & 0xFFFF7FFF;
  if ( Value )
    v16 = gdwPUDFlags | 0x8000;
  gdwPUDFlags = v16;
  *((_DWORD *)gpsi + 544) = (v16 & 0x8000) != 0;
  FastGetProfileIntW((int)a1, 14, (int)L"Flags", 466, &Value, 0);
  v17 = Value & 0xFFFFFFFE;
  if ( (dword_1C01CC994 & 1) != 0 )
    v17 = Value | 1;
  Value = v17;
  dword_1C01CC994 = v17;
  FastGetProfileIntW((int)a1, 16, (int)L"Flags", 18, &Value, 0);
  v18 = Value & 0xFFFFFFFE;
  if ( (dword_1C01CC974 & 1) != 0 )
    v18 = Value | 1;
  Value = v18;
  dword_1C01CC974 = v18;
  FastGetProfileIntW((int)a1, 16, (int)L"MaximumSpeed", 40, &dword_1C01CC978, 0);
  FastGetProfileIntW((int)a1, 16, (int)L"TimeToMaximumSpeed", 3000, &dword_1C01CC97C, 0);
  if ( dword_1C01CC978 - 10 > 0x15E )
    dword_1C01CC978 = 40;
  if ( dword_1C01CC97C - 1000 > 0xFA0 )
    dword_1C01CC97C = 3000;
  CalculateMouseTable();
  gbMKMouseMode = ((dword_1C01CC974 & 0x80u) != 0) ^ ((*((unsigned __int8 *)&gafAsyncKeyState
                                                       + ((unsigned __int64)(unsigned __int8)gNumLockVk >> 2)) & (1 << (2 * (gNumLockVk & 3) + 1))) != 0);
  if ( (dword_1C01CC974 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW((int)a1, 17, (int)L"Flags", 18, &Value, 0);
  v19 = Value & 0xFFFFFFFE;
  if ( (dword_1C01CC95C & 1) != 0 )
    v19 = Value | 1;
  Value = v19;
  dword_1C01CC95C = v19;
  FastGetProfileIntW((int)a1, 18, (int)L"Flags", 2, &Value, 0);
  v20 = Value & 0xFFFFFFFE;
  if ( (dword_1C01CC964 & 1) != 0 )
    v20 = Value | 1;
  Value = v20;
  dword_1C01CC964 = v20;
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
  FastGetProfileIntW((int)a1, 18, (int)L"TimeToWait", 300000, &dword_1C01CC968, 0);
  FastGetProfileIntW((int)a1, 29, (int)L"Flags", 82, &Value, 0);
  v21 = Value & 0xFFFFFFFE;
  if ( (dword_1C01CC94C & 1) != 0 )
    v21 = Value | 1;
  Value = v21;
  dword_1C01CC94C = v21;
  v33 = gdwPolicyFlags;
  v22 = OpenCacheKeyEx(a1, 0x1Du, 0x20019u, &v33);
  if ( v22 )
  {
    while ( 1 )
    {
      Length = 268;
      v23 = Win32AllocPoolWithQuota(268LL, 0x72707355u);
      if ( !v23 )
      {
LABEL_46:
        ZwClose(v22);
        goto LABEL_53;
      }
      RtlInitUnicodeString(&DestinationString, L"High Contrast Scheme");
      v24 = ZwQueryValueKey(v22, &DestinationString, KeyValuePartialInformation, (PVOID)v23, Length, &Length);
      if ( ((v24 + 0x80000000) & 0x80000000) != 0 || v24 == -2147483643 )
        break;
      Win32FreePool(v23);
      if ( !v33 )
        goto LABEL_46;
      ZwClose(v22);
      v22 = OpenCacheKeyEx(a1, 0x1Du, 0x20019u, &v33);
      if ( !v22 )
        goto LABEL_53;
    }
    v25 = 128;
    if ( *(_DWORD *)(v23 + 8) >> 1 < 0x80u )
      v25 = *(_DWORD *)(v23 + 8) >> 1;
    if ( *(_DWORD *)(v23 + 8) < 2u )
    {
      pszDest[0] = 0;
    }
    else
    {
      *(_WORD *)(v23 + 2LL * (unsigned int)(v25 - 1) + 12) = 0;
      RtlStringCchCopyW(pszDest, 0x80uLL, (NTSTRSAFE_PCWSTR)(v23 + 12));
    }
    Win32FreePool(v23);
    ZwClose(v22);
    if ( v25 )
      RtlStringCchCopyW(&gHighContrastDefaultScheme, 0x80uLL, pszDest);
  }
LABEL_53:
  gAudioDescription = 12;
  FastGetProfileIntW((int)a1, 48, (int)L"On", 0, &dword_1C01CC93C, 0);
  FastGetProfileIntW((int)a1, 48, (int)L"Locale", 0, &dword_1C01CC940, 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
