/*
 * XREFs of ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180057F40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004AD20 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetDisplayName(CImmersiveApp *this, unsigned __int16 **a2)
{
  int v4; // ebp
  _WORD *v5; // r14
  char *v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  _WORD *v9; // rax
  _WORD *v10; // rax
  signed __int64 v11; // rdi
  __int16 v12; // cx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int16 *v15; // rax

  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (char *)*((_QWORD *)this + 61);
  if ( v6 && *(_WORD *)v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&v6[2 * v7] );
    v8 = v7 + 1;
    if ( v7 + 1 >= v7 && is_mul_ok(v8, 2uLL) )
    {
      v4 = 0;
      v9 = CoTaskMemAlloc(2 * v8);
      if ( v9 )
      {
        v5 = v9;
        *v9 = 0;
      }
      else
      {
        v4 = -2147024882;
      }
      if ( v4 >= 0 )
      {
        if ( v7 > 0x7FFFFFFE )
        {
          if ( v7 != -1LL )
            *v5 = 0;
        }
        else
        {
          v10 = v5;
          v11 = v6 - (char *)v5;
          while ( v8 != 1 )
          {
            v12 = *(_WORD *)((char *)v10 + v11);
            if ( !v12 )
              break;
            *v10++ = v12;
            if ( !--v8 )
              goto LABEL_15;
          }
          if ( !v8 )
LABEL_15:
            --v10;
          *v10 = 0;
        }
      }
    }
    else
    {
      v4 = -2147024362;
    }
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    if ( v5 && *v5 )
    {
      v15 = v5;
      v5 = 0LL;
      *a2 = v15;
    }
    else
    {
      wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService(v13, 3u, v14);
      v4 = -2147024882;
    }
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return (unsigned int)v4;
}
