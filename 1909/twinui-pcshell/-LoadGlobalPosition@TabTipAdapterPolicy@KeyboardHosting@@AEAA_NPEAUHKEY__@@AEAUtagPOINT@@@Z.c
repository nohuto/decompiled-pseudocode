/*
 * XREFs of ?LoadGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NPEAUHKEY__@@AEAUtagPOINT@@@Z @ 0x18034BAC0
 * Callers:
 *     ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x18034BC3C (-LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadGlobalPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        HKEY a2,
        struct tagPOINT *a3)
{
  char v3; // bl
  const WCHAR *v6; // r8
  const WCHAR *v8; // r8
  bool v9; // r15
  bool v10; // di
  const WCHAR *v11; // r8
  LONG v12; // eax
  LONG v13; // eax
  int v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+44h] [rbp-1Ch] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-18h] BYREF
  DWORD v18; // [rsp+4Ch] [rbp-14h] BYREF
  DWORD v19; // [rsp+50h] [rbp-10h] BYREF
  DWORD v20[3]; // [rsp+54h] [rbp-Ch] BYREF
  LONG pvData; // [rsp+90h] [rbp+30h] BYREF
  LONG v22; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  pvData = 0;
  v6 = (const WCHAR *)*((_QWORD *)this + 14);
  v22 = 0;
  pcbData = 4;
  v18 = 4;
  if ( !RegGetValueW(a2, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v6, 0x10u, 0LL, &pvData, &pcbData)
    && !RegGetValueW(a2, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", *((LPCWSTR *)this + 15), 0x10u, 0LL, &v22, &v18) )
  {
    v8 = (const WCHAR *)*((_QWORD *)this + 16);
    v15 = 0;
    v9 = 1;
    v19 = 4;
    v10 = 1;
    if ( !RegGetValueW(a2, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v8, 0x10u, 0LL, &v15, &v19) )
      v9 = v15 != 0;
    v11 = (const WCHAR *)*((_QWORD *)this + 17);
    v16 = 0;
    v20[0] = 4;
    if ( !RegGetValueW(a2, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v11, 0x10u, 0LL, &v16, v20) )
      v10 = v16 != 0;
    v3 = 1;
    v12 = -pvData;
    if ( v9 )
      v12 = pvData;
    a3->x = v12;
    v13 = -v22;
    if ( v10 )
      v13 = v22;
    a3->y = v13;
  }
  return v3;
}
