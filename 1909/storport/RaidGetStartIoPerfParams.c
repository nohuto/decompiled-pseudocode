/*
 * XREFs of RaidGetStartIoPerfParams @ 0x1C001EE00
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 */

__int64 __fastcall RaidGetStartIoPerfParams(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // ecx
  int v7; // edx
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rdx

  if ( !a1 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v10 = 34LL;
    goto LABEL_23;
  }
  if ( !a2 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v10 = 35LL;
    goto LABEL_23;
  }
  if ( !a3 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v10 = 36LL;
    goto LABEL_23;
  }
  v3 = a3[1];
  if ( v3 < 0x10 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v10 = 37LL;
    goto LABEL_23;
  }
  v4 = **(_QWORD **)(a1 - 16);
  if ( !v4 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v10 = 38LL;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 96);
  else
    v5 = *(_QWORD *)(a2 + 48);
  if ( !v5 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v10 = 39LL;
LABEL_23:
    WPP_SF_(v9->AttachedDevice, v10, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids);
    return 3238002694LL;
  }
  v6 = *(_DWORD *)(v5 + 18);
  if ( v3 >= 0x14 && *a3 == 2 )
    a3[4] = v6;
  else
    *a3 = 1;
  a3[3] = *(_DWORD *)(v5 + 24);
  if ( (*(_BYTE *)(v4 + 4740) & 2) == 0
    || (unsigned __int16)v6 >= *(_WORD *)(v4 + 4742)
    || (v7 = *(unsigned __int8 *)(BYTE2(v6) + ((unsigned __int16)v6 << 6) + *(_QWORD *)(v4 + 4760)),
        a3[2] = v7,
        v7 == 255) )
  {
    a3[2] = 0;
  }
  return 0LL;
}
