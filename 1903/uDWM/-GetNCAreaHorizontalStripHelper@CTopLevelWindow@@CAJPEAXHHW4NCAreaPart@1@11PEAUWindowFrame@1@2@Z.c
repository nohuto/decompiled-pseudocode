/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180045F54
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180045678 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800461BC (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004E4AC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E51C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
  void *v8; // r10
  __int64 v9; // r15
  int v10; // r14d
  __int64 v11; // r12
  int v12; // esi
  __int64 v13; // rdi
  int v14; // eax
  LONG top; // r8d
  int v16; // esi
  int v17; // r13d
  int v18; // ecx
  __int64 v19; // rax
  int *v20; // r15
  struct tagRECT *v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // ebx
  void *v27; // [rsp+28h] [rbp-B9h]
  int v28; // [rsp+30h] [rbp-B1h]
  int v30; // [rsp+38h] [rbp-A9h]
  __int64 v33; // [rsp+58h] [rbp-89h]
  struct tagRECT v34; // [rsp+60h] [rbp-81h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-71h] BYREF
  struct tagRECT pRect; // [rsp+80h] [rbp-61h] BYREF
  _DWORD v37[4]; // [rsp+90h] [rbp-51h] BYREF
  _DWORD v38[6]; // [rsp+A0h] [rbp-41h] BYREF
  int v39; // [rsp+B8h] [rbp-29h]
  LONG bottom; // [rsp+BCh] [rbp-25h]
  int v41; // [rsp+C0h] [rbp-21h]
  LONG v42; // [rsp+C4h] [rbp-1Dh]
  LONG right; // [rsp+C8h] [rbp-19h]
  LONG v44; // [rsp+CCh] [rbp-15h]

  v8 = a1;
  v9 = a7;
  v10 = a3;
  v11 = a8;
  v12 = a4;
  v28 = a2;
  if ( dword_1800DEC04 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEC04);
    if ( dword_1800DEC04 == -1 )
    {
      dword_1800DC078 = -2147023728;
      Init_thread_footer(&dword_1800DEC04);
    }
    a2 = v28;
    v8 = a1;
  }
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned __int16)GetThemeRect(v8, a2, 0, 8002, &pRect) == 1168 )
    {
      v25 = 0;
    }
    else
    {
      v14 = 0;
      top = pRect.top;
      v37[0] = v12;
      if ( pRect.bottom - pRect.top >= 0 )
        v14 = pRect.bottom - pRect.top;
      v16 = 0;
      v17 = 0;
      v18 = v14 / 2;
      v30 = v14 / 2;
      v37[1] = a5;
      v37[2] = a6;
      while ( 2 )
      {
        v19 = v9;
        if ( v16 )
          v19 = v11;
        v33 = v19;
        rc.left = pRect.left;
        rc.right = pRect.right;
        rc.top = top + v17;
        rc.bottom = v18 + top + v17;
        InflateRect(&rc, -1, -1);
        v20 = v37;
        v21 = (struct tagRECT *)v38;
        v38[0] = rc.left;
        v38[1] = rc.top;
        v38[2] = v10 + rc.left;
        v38[4] = v10 + rc.left;
        v38[3] = rc.bottom;
        v39 = rc.right - v10;
        v22 = 0;
        v41 = v39;
        v38[5] = rc.top;
        bottom = rc.bottom;
        v42 = rc.top;
        right = rc.right;
        v44 = rc.bottom;
        do
        {
          v23 = 2LL * *v20 + 187;
          v34 = *v21;
          v24 = CBitmapSource::Create(
                  CTopLevelWindow::s_pbsNonClientAtlas,
                  &v34,
                  0LL,
                  (struct CBitmapSource **)(v33 + 8 * (v13 + v23)));
          v25 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DC078, 1u, v24, 0x550u, v27);
            return v25;
          }
          ++v22;
          ++v21;
          ++v20;
        }
        while ( v22 < 3 );
        v18 = v30;
        ++v16;
        v10 = a3;
        v17 += v30;
        v9 = a7;
        v11 = a8;
        if ( v16 < 2 )
        {
          top = pRect.top;
          continue;
        }
        break;
      }
      v12 = a4;
    }
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= 2 )
      return v25;
    v8 = a1;
    a2 = v28;
  }
}
