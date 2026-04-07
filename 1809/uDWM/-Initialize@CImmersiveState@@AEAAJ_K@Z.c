/*
 * XREFs of ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180028990
 * Callers:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18002870C (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x1800287D0 (-UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033EA0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     wcscmp_0 @ 0x18004E2C6 (wcscmp_0.c)
 */

__int64 __fastcall CImmersiveState::Initialize(CImmersiveState *this, unsigned __int64 a2)
{
  char *v2; // rsi
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int v7; // r15d
  HMONITOR v9; // r14
  bool v10; // al
  unsigned int v11; // edx
  __m128i v12; // xmm0
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // xmm0_8
  LONG left; // eax
  unsigned __int64 v16; // rcx
  LONG right; // eax
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // [rsp+30h] [rbp-D0h]
  __int128 v26; // [rsp+38h] [rbp-C8h] BYREF
  HMONITOR v27; // [rsp+48h] [rbp-B8h]
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR ClassName[264]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (char *)this + 16;
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 24LL);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           a2);
  Blink = WindowListForDesktop->Blink;
  if ( Blink != WindowListForDesktop )
  {
    v7 = v25;
    do
    {
      if ( (HIDWORD(Blink[6].Flink) & 0x40000000) == 0 )
      {
        if ( LODWORD(Blink[7].Flink) == 6 )
        {
          if ( !CImmersiveState::UpdateInfoIfTaskbar(this, (HWND *)Blink) && (HIDWORD(Blink[37].Blink) & 0xFFF) == 9 )
          {
            if ( SHIBYTE(Blink[37].Flink) >= 0 )
              *((_BYTE *)this + 56) = 1;
            *(struct _LIST_ENTRY *)((char *)this + 72) = Blink[3];
          }
        }
        else if ( LODWORD(Blink[7].Flink) == 12 )
        {
          if ( !*((_QWORD *)this + 6) )
            *((_QWORD *)this + 6) = Blink;
        }
        else if ( LODWORD(Blink[7].Flink) == 1
               && GetClassNameW((HWND)Blink[2].Blink, ClassName, 260)
               && (!wcscmp_0(ClassName, L"Shell_SecondaryTrayWnd") || !wcscmp_0(ClassName, L"Shell_TrayWnd")) )
        {
          v9 = MonitorFromWindow((HWND)Blink[2].Blink, 0);
          if ( v9 )
          {
            if ( !wcscmp_0(ClassName, L"Shell_TrayWnd") )
              *((_QWORD *)this + 8) = v9;
            v10 = 0;
            v11 = 0;
            if ( *((_DWORD *)this + 10) )
            {
              v22 = 0LL;
              while ( !v10 )
              {
                v10 = v9 == *(HMONITOR *)(v22 + *(_QWORD *)v2 + 16);
                ++v11;
                v22 += 24LL;
                if ( v11 >= *((_DWORD *)this + 10) )
                  goto LABEL_21;
              }
            }
            else
            {
LABEL_21:
              if ( !v10 )
              {
                mi.cbSize = 40;
                memset_0(&mi.rcMonitor, 0, 0x24uLL);
                if ( GetMonitorInfoW(v9, &mi) )
                {
                  v12 = (__m128i)Blink[3];
                  v27 = v9;
                  v13 = v12.m128i_i64[0];
                  v14 = _mm_srli_si128(v12, 8).m128i_u64[0];
                  left = v13;
                  if ( mi.rcWork.left < (int)v13 )
                    left = mi.rcWork.left;
                  v16 = HIDWORD(v13);
                  LODWORD(v26) = left;
                  if ( mi.rcWork.top < (int)v16 )
                    LODWORD(v16) = mi.rcWork.top;
                  DWORD1(v26) = v16;
                  right = v14;
                  if ( mi.rcWork.right > (int)v14 )
                    right = mi.rcWork.right;
                  v18 = HIDWORD(v14);
                  DWORD2(v26) = right;
                  if ( mi.rcWork.bottom > SHIDWORD(v14) )
                    LODWORD(v18) = mi.rcWork.bottom;
                  HIDWORD(v26) = v18;
                  v19 = *((unsigned int *)v2 + 6);
                  v20 = v19 + 1;
                  if ( (int)v19 + 1 >= (unsigned int)v19 )
                    v7 = v19 + 1;
                  if ( v20 < (unsigned int)v19 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(
                      0x14u,
                      0LL,
                      0,
                      v20 < (unsigned int)v19 ? 0x80070216 : 0,
                      0xB5u);
                  }
                  else if ( v7 <= *((_DWORD *)v2 + 5) )
                  {
                    v23 = *(_QWORD *)v2;
                    v24 = 3 * v19;
                    *(_OWORD *)(v23 + 8 * v24) = v26;
                    *(_QWORD *)(v23 + 8 * v24 + 16) = v27;
                    *((_DWORD *)v2 + 6) = v7;
                  }
                  else
                  {
                    v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 0x18u, 1, &v26);
                    if ( v21 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC0u);
                  }
                }
              }
            }
          }
        }
      }
      Blink = Blink->Blink;
    }
    while ( Blink != WindowListForDesktop );
  }
  return 0LL;
}
