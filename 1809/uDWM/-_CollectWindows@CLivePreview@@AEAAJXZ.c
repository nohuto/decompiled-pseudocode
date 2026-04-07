/*
 * XREFs of ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18007513C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180038E74 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180075F0C (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800760CC (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectWindows(CLivePreview *this)
{
  int v2; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CLivePreview *v4; // rcx
  unsigned int v5; // r13d
  unsigned int v6; // r15d
  __int64 Blink; // rbx
  struct _LIST_ENTRY *v8; // rsi
  unsigned int v9; // r12d
  bool IsTrulyMaximized; // si
  HMONITOR v11; // rax
  bool v12; // cf
  __int64 v13; // rdi
  CLivePreview *v14; // rcx
  char v15; // al
  unsigned int v16; // edi
  const wchar_t **v17; // rsi
  char v18; // di
  bool v19; // zf
  char v20; // al
  unsigned int v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  __int8 v34; // [rsp+38h] [rbp-D0h]
  unsigned int v35; // [rsp+3Ch] [rbp-CCh]
  _QWORD v36[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A8h]
  struct _LIST_ENTRY *v39; // [rsp+68h] [rbp-A0h]
  __m256i v40; // [rsp+70h] [rbp-98h] BYREF
  __int64 v41; // [rsp+90h] [rbp-78h]
  struct tagRECT rcDst; // [rsp+98h] [rbp-70h] BYREF
  WCHAR ClassName[264]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *((_QWORD *)this + 36));
  *((_QWORD *)this + 71) = 0LL;
  v5 = 0;
  v37 = 0LL;
  v6 = 0;
  LODWORD(v38) = 0;
  Blink = (__int64)WindowListForDesktop->Blink;
  v8 = WindowListForDesktop;
  v39 = WindowListForDesktop;
  *(_OWORD *)&v36[1] = 0LL;
  if ( (struct _LIST_ENTRY *)Blink != WindowListForDesktop )
  {
    v9 = v35;
    while ( 1 )
    {
      if ( !Blink || !CLivePreview::_IsEligibleForLivePreview(v4, (const struct CWindowData *)Blink) )
        goto LABEL_71;
      *(_BYTE *)(Blink + 598) &= 0x3Fu;
      IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v4, (const struct CWindowData *)Blink);
      v34 = IsTrulyMaximized;
      v11 = MonitorFromWindow(*(HWND *)(Blink + 40), 0);
      v12 = *((_DWORD *)this + 142) < 0x1Eu;
      v36[0] = v11;
      if ( v12 )
        break;
      *(_BYTE *)(Blink + 598) |= 0xC0u;
LABEL_61:
      v28 = *((unsigned int *)this + 82);
      v29 = v35;
      v40.m256i_i8[24] = v34;
      v41 = v36[0];
      v30 = v28 + 1;
      v40.m256i_i64[0] = Blink;
      *(_OWORD *)&v40.m256i_u64[1] = 0LL;
      if ( (int)v28 + 1 >= (unsigned int)v28 )
        v29 = v28 + 1;
      v2 = v30 < (unsigned int)v28 ? 0x80070216 : 0;
      v35 = v29;
      if ( v30 >= (unsigned int)v28 )
      {
        if ( v29 > *((_DWORD *)this + 81) )
        {
          v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 304, 0x28u, 1, &v40);
          v2 = v32;
          if ( v32 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0xC0u);
        }
        else
        {
          v31 = *((_QWORD *)this + 38);
          v4 = (CLivePreview *)(5 * v28);
          *(__m256i *)(v31 + 8LL * (_QWORD)v4) = v40;
          *(_QWORD *)(v31 + 8LL * (_QWORD)v4 + 32) = v41;
          *((_DWORD *)this + 82) = v29;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xB5u);
      }
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x152u);
        goto LABEL_74;
      }
      v8 = v39;
LABEL_71:
      Blink = *(_QWORD *)(Blink + 8);
      if ( (struct _LIST_ENTRY *)Blink == v8 )
        goto LABEL_74;
    }
    if ( IsTrulyMaximized )
    {
      if ( v11 )
      {
        v13 = 0LL;
        if ( !*((_DWORD *)this + 82) )
        {
LABEL_14:
          v15 = *(_BYTE *)(Blink + 598);
LABEL_30:
          if ( v15 >= 0 || (v15 & 0x40) == 0 )
          {
            ++*((_DWORD *)this + 142);
            v20 = *(_BYTE *)(Blink + 598);
            if ( v20 >= 0 )
            {
              v21 = *((_DWORD *)this + 143);
              if ( v21 >= 0xA )
              {
                v20 |= 0x80u;
                *(_BYTE *)(Blink + 598) = v20;
              }
              else
              {
                v22 = 0LL;
                *((_DWORD *)this + 143) = v21 + 1;
                if ( *((_DWORD *)this + 82) )
                {
                  while ( 1 )
                  {
                    v23 = *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v22);
                    if ( *(char *)(v23 + 598) >= 0
                      && *(_DWORD *)(v23 + 112) == 1
                      && IntersectRect(&rcDst, (const RECT *)(Blink + 48), (const RECT *)(v23 + 48))
                      && EqualRect(&rcDst, (const RECT *)(Blink + 48)) )
                    {
                      break;
                    }
                    v22 = (unsigned int)(v22 + 1);
                    if ( (unsigned int)v22 >= *((_DWORD *)this + 82) )
                      goto LABEL_42;
                  }
                  --*((_DWORD *)this + 143);
                  *(_BYTE *)(Blink + 598) |= 0x80u;
                }
LABEL_42:
                v20 = *(_BYTE *)(Blink + 598);
              }
            }
            if ( (v20 & 0x40) == 0 && ((*(_DWORD *)(Blink + 112) - 8) & 0xFFFFFFFD) == 0 )
            {
              v24 = 0LL;
              if ( !v6 )
                goto LABEL_51;
              do
              {
                if ( v36[0] == *(_QWORD *)(v36[1] + 8 * v24) )
                  break;
                v24 = (unsigned int)(v24 + 1);
              }
              while ( (unsigned int)v24 < v6 );
              if ( (unsigned int)v24 < v6 )
              {
                *(_BYTE *)(Blink + 598) |= 0x40u;
              }
              else
              {
LABEL_51:
                v25 = v6 + 1;
                if ( v6 + 1 >= v6 )
                  v9 = v6 + 1;
                if ( v25 >= v6 )
                {
                  if ( v9 > v5 )
                  {
                    v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v36[1], 8u, 1, v36);
                    if ( v27 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xC0u);
                    v6 = v38;
                    v5 = HIDWORD(v37);
                  }
                  else
                  {
                    v26 = v6;
                    v6 = v9;
                    LODWORD(v38) = v9;
                    *(_QWORD *)(v36[1] + 8 * v26) = v36[0];
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25 < v6 ? 0x80070216 : 0, 0xB5u);
                }
              }
            }
          }
          goto LABEL_61;
        }
        while ( 1 )
        {
          v14 = (CLivePreview *)*((_QWORD *)this + 38);
          if ( *((_QWORD *)v14 + 5 * v13 + 4) == v36[0]
            && CLivePreview::_IsTrulyMaximized(v14, *((const struct CWindowData **)v14 + 5 * v13)) )
          {
            break;
          }
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= *((_DWORD *)this + 82) )
            goto LABEL_14;
        }
      }
      *(_BYTE *)(Blink + 598) |= 0xC0u;
      goto LABEL_14;
    }
    if ( GetClassNameW(*(HWND *)(Blink + 40), ClassName, 260) )
    {
      v16 = 0;
      v17 = (const wchar_t **)off_1800BA6C0;
      while ( _wcsicmp(*v17, ClassName) )
      {
        ++v16;
        ++v17;
        if ( v16 >= 3 )
          goto LABEL_21;
      }
      *(_BYTE *)(Blink + 598) |= 0xC0u;
    }
LABEL_21:
    v15 = *(_BYTE *)(Blink + 598);
    if ( (v15 & 0x40) != 0 )
      goto LABEL_30;
    v18 = (*(_DWORD *)(Blink + 104) & 0x80) != 0;
    if ( CWindowData::IsImmersiveWindow((CWindowData *)Blink) )
    {
      if ( *(_QWORD *)(Blink + 544) )
        goto LABEL_28;
      v19 = (*(_DWORD *)(Blink + 100) & 0x40000000) == 0;
    }
    else
    {
      if ( *(_QWORD *)(Blink + 360) )
        goto LABEL_28;
      v19 = (*(_DWORD *)(Blink + 100) & 0xC00000) == 12582912;
    }
    if ( v19 )
    {
LABEL_29:
      v15 = (v18 << 6) | *(_BYTE *)(Blink + 598) & 0xBF;
      *(_BYTE *)(Blink + 598) = v15;
      goto LABEL_30;
    }
LABEL_28:
    v18 = 1;
    goto LABEL_29;
  }
LABEL_74:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v36[1]);
  return (unsigned int)v2;
}
