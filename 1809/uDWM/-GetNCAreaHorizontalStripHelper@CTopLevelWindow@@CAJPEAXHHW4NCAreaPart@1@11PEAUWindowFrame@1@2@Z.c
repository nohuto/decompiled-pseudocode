/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x18003E3A4
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x1800465B0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004C1BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004C22C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHorizontalStripHelper(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // r10d
  __int64 v9; // r13
  int v10; // r15d
  int v11; // r14d
  unsigned int v12; // edi
  __int64 v13; // rsi
  int v14; // eax
  LONG top; // r8d
  int v16; // ebx
  int v17; // r14d
  int v18; // r12d
  __int64 v19; // rax
  int *v20; // r13
  CBaseObject *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // ebx
  unsigned int v30; // [rsp+34h] [rbp-A5h]
  void *v33; // [rsp+40h] [rbp-99h]
  _OWORD *v34; // [rsp+48h] [rbp-91h]
  __int64 v35; // [rsp+60h] [rbp-79h]
  __int64 v36; // [rsp+68h] [rbp-71h]
  struct tagRECT rc; // [rsp+70h] [rbp-69h] BYREF
  struct tagRECT pRect; // [rsp+80h] [rbp-59h] BYREF
  _DWORD v39[4]; // [rsp+90h] [rbp-49h] BYREF
  _DWORD v40[12]; // [rsp+A0h] [rbp-39h] BYREF

  v8 = a2;
  v9 = a7;
  v10 = a3;
  v11 = a4;
  v33 = a1;
  if ( dword_1800D7BEC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800D7BEC);
    if ( dword_1800D7BEC == -1 )
    {
      dword_1800D5070 = -2147023728;
      Init_thread_footer(&dword_1800D7BEC);
    }
    v8 = a2;
    a1 = v33;
  }
  v12 = 0;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned __int16)GetThemeRect(a1, v8, 0, 8002, &pRect) != 1168 )
    {
      v14 = 0;
      top = pRect.top;
      v39[0] = v11;
      if ( pRect.bottom - pRect.top >= 0 )
        v14 = pRect.bottom - pRect.top;
      v16 = 0;
      v17 = 0;
      v18 = v14 / 2;
      v39[1] = a5;
      v39[2] = a6;
      while ( 2 )
      {
        v19 = v9;
        if ( v16 )
          v19 = a8;
        v36 = v19;
        rc.left = pRect.left;
        rc.right = pRect.right;
        rc.top = v17 + top;
        rc.bottom = v18 + v17 + top;
        InflateRect(&rc, -1, -1);
        v20 = v39;
        v40[0] = rc.left;
        v40[1] = rc.top;
        v40[2] = rc.left + v10;
        v40[4] = rc.left + v10;
        v40[3] = rc.bottom;
        v30 = 0;
        v40[6] = rc.right - v10;
        v40[8] = rc.right - v10;
        v34 = v40;
        v40[5] = rc.top;
        v40[7] = rc.bottom;
        v40[9] = rc.top;
        v40[10] = rc.right;
        v40[11] = rc.bottom;
        do
        {
          v21 = CTopLevelWindow::s_pbsNonClientAtlas;
          v35 = v13 + 2LL * *v20;
          v22 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  104LL);
          v23 = v22;
          if ( v22 )
          {
            *(_QWORD *)(v22 + 16) = 0LL;
            *(_QWORD *)(v22 + 96) = 0LL;
            *(_DWORD *)(v22 + 8) = 1;
            *(_QWORD *)v22 = &CBitmapSource::`vftable';
            *(_DWORD *)(v22 + 80) = 0x80000000;
            *(_DWORD *)(v22 + 88) = 0x80000000;
            *(_DWORD *)(v22 + 84) = 0x80000000;
            *(_DWORD *)(v22 + 92) = 0x80000000;
          }
          else
          {
            v23 = 0LL;
          }
          if ( !v23 )
          {
            v27 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB1u);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D5070, 1u, -2147024882, 0x569u);
            return v27;
          }
          *(_QWORD *)(v23 + 16) = *((_QWORD *)v21 + 2);
          v24 = *((_QWORD *)v21 + 2);
          if ( v24 )
            _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
          v25 = 0;
          *(_OWORD *)(v23 + 80) = *v34;
          if ( *(_DWORD *)(v23 + 88) - *(_DWORD *)(v23 + 80) >= 0 )
            v25 = *(_DWORD *)(v23 + 88) - *(_DWORD *)(v23 + 80);
          *(_DWORD *)(v23 + 24) = v25;
          v26 = 0;
          if ( *(_DWORD *)(v23 + 92) - *(_DWORD *)(v23 + 84) >= 0 )
            v26 = *(_DWORD *)(v23 + 92) - *(_DWORD *)(v23 + 84);
          *(_DWORD *)(v23 + 28) = v26;
          *(_QWORD *)(v36 + 8 * v35 + 1496) = v23;
          ++v34;
          ++v20;
          ++v30;
        }
        while ( v30 < 3 );
        v10 = a3;
        ++v16;
        v9 = a7;
        v17 += v18;
        if ( v16 < 2 )
        {
          top = pRect.top;
          continue;
        }
        break;
      }
      v11 = a4;
    }
    ++v12;
    ++v13;
    if ( v12 >= 2 )
      return 0;
    a1 = v33;
    v8 = a2;
  }
}
