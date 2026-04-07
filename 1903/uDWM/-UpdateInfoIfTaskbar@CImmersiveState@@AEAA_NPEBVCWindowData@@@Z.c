/*
 * XREFs of ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x18002B0B0
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18002AFEC (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 *     wcscmp_0 @ 0x18004FDE6 (wcscmp_0.c)
 */

char __fastcall CImmersiveState::UpdateInfoIfTaskbar(CImmersiveState *this, HWND *a2)
{
  char v4; // di
  HMONITOR v6; // rbx
  bool v7; // al
  __int64 v8; // rdx
  __m128i v9; // xmm0
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // xmm0_8
  LONG left; // eax
  unsigned __int64 v13; // rcx
  LONG right; // eax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  void *v21; // [rsp+28h] [rbp-D8h]
  __int128 v22; // [rsp+30h] [rbp-D0h] BYREF
  HMONITOR v23; // [rsp+40h] [rbp-C0h]
  tagMONITORINFO mi; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR ClassName[264]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  if ( GetClassNameW(a2[5], ClassName, 260)
    && (!wcscmp_0(ClassName, L"Shell_SecondaryTrayWnd") || !wcscmp_0(ClassName, L"Shell_TrayWnd")) )
  {
    v4 = 1;
    v6 = MonitorFromWindow(a2[5], 0);
    if ( v6 )
    {
      if ( !wcscmp_0(ClassName, L"Shell_TrayWnd") )
        *((_QWORD *)this + 8) = v6;
      v7 = 0;
      v8 = 0LL;
      if ( *((_DWORD *)this + 10) )
      {
        while ( !v7 )
        {
          v7 = v6 == *(HMONITOR *)(*((_QWORD *)this + 2) + 24 * v8 + 16);
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *((_DWORD *)this + 10) )
          {
            if ( v7 )
              return v4;
            goto LABEL_9;
          }
        }
      }
      else
      {
LABEL_9:
        mi.cbSize = 40;
        memset_0(&mi.rcMonitor, 0, 0x24uLL);
        if ( GetMonitorInfoW(v6, &mi) )
        {
          v9 = *((__m128i *)a2 + 3);
          v23 = v6;
          v10 = v9.m128i_i64[0];
          v11 = _mm_srli_si128(v9, 8).m128i_u64[0];
          left = v10;
          if ( mi.rcWork.left < (int)v10 )
            left = mi.rcWork.left;
          v13 = HIDWORD(v10);
          LODWORD(v22) = left;
          if ( mi.rcWork.top < (int)v13 )
            LODWORD(v13) = mi.rcWork.top;
          DWORD1(v22) = v13;
          right = v11;
          if ( mi.rcWork.right > (int)v11 )
            right = mi.rcWork.right;
          DWORD2(v22) = right;
          v15 = HIDWORD(v11);
          if ( mi.rcWork.bottom > SHIDWORD(v11) )
            LODWORD(v15) = mi.rcWork.bottom;
          v16 = *((unsigned int *)this + 10);
          HIDWORD(v22) = v15;
          v17 = v16 + 1;
          if ( (int)v16 + 1 < (unsigned int)v16 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v21);
          }
          else if ( v17 <= *((_DWORD *)this + 9) )
          {
            v19 = 3 * v16;
            v20 = *((_QWORD *)this + 2);
            *(_OWORD *)(v20 + 8 * v19) = v22;
            *(_QWORD *)(v20 + 8 * v19 + 16) = v23;
            *((_DWORD *)this + 10) = v17;
          }
          else
          {
            v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 24, 1, &v22);
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u, v21);
          }
        }
      }
    }
  }
  return v4;
}
