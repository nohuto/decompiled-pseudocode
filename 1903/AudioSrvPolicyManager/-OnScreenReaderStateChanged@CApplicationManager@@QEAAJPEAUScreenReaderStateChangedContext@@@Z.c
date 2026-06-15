/*
 * XREFs of ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x18001D4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_Sddd @ 0x1800182BC (WPP_SF_Sddd.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001BAD4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800263D0 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     pow @ 0x1800351A8 (pow.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnScreenReaderStateChanged(
        CApplicationManager *this,
        struct ScreenReaderStateChangedContext *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const wchar_t *v5; // r9
  int v6; // ecx
  int v7; // eax
  float v8; // xmm3_4
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  int v12; // edx
  int v14; // [rsp+80h] [rbp+8h] BYREF
  float v15; // [rsp+88h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+90h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v16 = v4;
  v14 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = L"Disabled";
    if ( *((_DWORD *)a2 + 2) )
      v5 = L"Enabled";
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      *(unsigned int *)(*(_QWORD *)a2 + 192LL),
      *(unsigned int *)(*(_QWORD *)a2 + 196LL),
      v5,
      *(_DWORD *)(*(_QWORD *)a2 + 196LL),
      *(_DWORD *)(*(_QWORD *)a2 + 192LL),
      *((_DWORD *)a2 + 3));
  }
  v6 = 0;
  if ( *((int *)a2 + 3) <= 0 )
    v6 = *((_DWORD *)a2 + 3);
  v7 = -24;
  if ( v6 > -24 )
    v7 = v6;
  *((_DWORD *)a2 + 3) = v7;
  v15 = (float)v7;
  if ( COERCE_INT((float)v7) == -8388608 )
    v8 = 0.0;
  else
    v8 = pow(10.0, (float)v7 / 20.0);
  v9 = TsSessionIdScreenReaderStateChanged(
         *(_DWORD *)(*(_QWORD *)a2 + 196LL),
         *(_DWORD *)(*(_QWORD *)a2 + 192LL),
         *((_DWORD *)a2 + 2),
         v8,
         &v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v9);
    }
    AudPolicyLogError("CApplicationManager::OnScreenReaderStateChanged", 2979, v10);
  }
  else
  {
    v11 = *((_DWORD *)a2 + 2) == 0;
    v12 = *(_DWORD *)(*(_QWORD *)a2 + 524LL);
    *(_DWORD *)(*(_QWORD *)a2 + 524LL) = v11;
    if ( v14 || v12 != v11 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)this, *(_DWORD *)(*(_QWORD *)a2 + 196LL), 3u);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v10;
}
