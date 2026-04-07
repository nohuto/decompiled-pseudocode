/*
 * XREFs of ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x1800073D4
 * Callers:
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x1800072B8 (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180007348 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180007370 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x1800075F8 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     floor_0 @ 0x18004E25A (floor_0.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 */

void __fastcall CTopLevelWindow::GetTitleBarInfo(CTopLevelWindow *this, struct tagTITLEBARINFOEX *a2, bool *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  int SystemMetrics; // eax
  LONG v10; // ecx
  int v11; // edx
  __int64 v12; // rax
  RECT *v13; // r14
  DWORD *v14; // rbx
  int i; // esi
  __int64 v16; // rdx
  int v17; // eax
  int v18; // [rsp+20h] [rbp-48h] BYREF
  RECT v19; // [rsp+24h] [rbp-44h]

  if ( CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 146)) )
  {
    *a3 = 1;
    *(_QWORD *)a2->rgstate = 0LL;
    *(_QWORD *)&a2->rgstate[2] = 0LL;
    *(_QWORD *)&a2->rgstate[4] = 0LL;
    memset_0(a2->rgrect, 0, sizeof(a2->rgrect));
    v8 = a2->rgstate[0];
    LODWORD(v8) = v8 | 0x100000;
    a2->rgstate[0] = v8;
    if ( (*(_DWORD *)(*((_QWORD *)this + 90) + 100LL) & 0xC00000) != 0 )
    {
      wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsageToService(v8, v6, v7);
      a2->rcTitleBar.left = *((_DWORD *)this + 147);
      SystemMetrics = GetSystemMetrics(8);
      a2->rcTitleBar.top = (int)floor_0((float)((float)SystemMetrics * *(float *)(*((_QWORD *)this + 90) + 304LL)) + 0.5);
      v10 = *((_DWORD *)this + 30) - *((_DWORD *)this + 148);
      a2->rcTitleBar.right = v10;
      a2->rcTitleBar.bottom = *((_DWORD *)this + 149);
      v11 = *((_DWORD *)this + 146);
      if ( (v11 & 0x10000) != 0 )
      {
        v12 = *((_QWORD *)this + 65);
        if ( (v11 & 0x20000) != 0 )
          a2->rcTitleBar.right = v10 - *(_DWORD *)(v12 + 120);
        else
          a2->rcTitleBar.left += *(_DWORD *)(v12 + 120);
      }
      OffsetRect(
        &a2->rcTitleBar,
        *(_DWORD *)(*((_QWORD *)this + 90) + 48LL),
        *(_DWORD *)(*((_QWORD *)this + 90) + 52LL));
      a2->rgstate[1] = 0x8000;
      v13 = &a2->rgrect[2];
      v14 = &a2->rgstate[2];
      for ( i = 2; i <= 5; ++i )
      {
        v16 = 1LL;
        switch ( i )
        {
          case 2:
            v18 = 1;
            break;
          case 3:
            v18 = 2;
            v16 = 2LL;
            break;
          case 4:
            v18 = 0;
            v16 = 0LL;
            break;
          case 5:
            v18 = 3;
            v16 = 3LL;
            break;
        }
        v17 = *((_DWORD *)this + 146);
        if ( (v17 & dword_1800BE650[2 * v16]) != 0 )
        {
          if ( (v17 & dword_1800BE650[2 * v16 + 1]) != 0 )
          {
            if ( *(_DWORD *)(*((_QWORD *)this + v16 + 60) + 376LL) == 2 )
              *v14 |= 8u;
          }
          else
          {
            *v14 |= 1u;
          }
        }
        else
        {
          *v14 |= 0x8000u;
        }
        if ( (*v14 & 0x8000) == 0 )
        {
          CTopLevelWindow::NcAdornmentInfoQuery(this, (struct NCADORNMENT_INFO *)&v18);
          if ( (*((_BYTE *)this + 584) & 0x20) != 0 )
          {
            v19.top = *((_DWORD *)this + 161);
            if ( i == 5 )
              v19.right = *((_DWORD *)this + 30) - *((_DWORD *)this + 160);
          }
          *v13 = v19;
        }
        ++v14;
        ++v13;
      }
    }
    else
    {
      a2->rgstate[0] = v8 | 0x8000;
    }
  }
  else
  {
    *a3 = 0;
  }
}
