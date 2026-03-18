/*
 * XREFs of xxxPSMTextOut @ 0x1C0210A28
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0207FC0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 *     GreGetTextMetricsW @ 0x1C00FAD74 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     GreGetTextColor @ 0x1C012F9C0 (GreGetTextColor.c)
 *     CALL_LPK @ 0x1C0132C50 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxClientPSMTextOut @ 0x1C01E2234 (xxxClientPSMTextOut.c)
 *     GetPrefixCount @ 0x1C022C6B0 (GetPrefixCount.c)
 */

HDC __fastcall xxxPSMTextOut(HDC a1, __int64 a2, unsigned int a3, const WCHAR *a4, unsigned int a5, unsigned int a6)
{
  unsigned __int16 *v6; // rsi
  unsigned int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  int v12; // r12d
  HDC result; // rax
  int PrefixCount; // edi
  int TextMetricsW; // eax
  int v16; // ebx
  LONG v17; // edi
  int TextColor; // eax
  int v19; // ebx
  struct tagSIZE v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-98h]
  __int128 v23; // [rsp+88h] [rbp-78h]
  _OWORD v24[5]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v25; // [rsp+100h] [rbp+0h] BYREF

  v6 = &qword_1C032FF60;
  v20 = 0LL;
  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = 0;
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    RtlInitUnicodeString(&DestinationString, a4);
    return xxxClientPSMTextOut(a1, v10, a3, &DestinationString.Length, a5, a6);
  }
  else if ( a5 < 0xFF
         || (result = (HDC)Win32AllocPool(2LL * (int)(a5 + 1), 1953657685LL), (v6 = (unsigned __int16 *)result) != 0LL) )
  {
    PrefixCount = GetPrefixCount(a4, a5, v6, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutWInternal(a1, v10, a3, 0, 0LL, v6, a5 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      memset(v24, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v24);
      v22 = v24[0];
      v23 = v24[2];
      if ( TextMetricsW )
      {
        v16 = v23;
        v12 = DWORD1(v22);
      }
      else
      {
        v16 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, v6, (unsigned __int16)PrefixCount, &v20, 1);
        v10 += v20.cx - v16;
      }
      GreGetTextExtentW(a1, &v6[(unsigned __int16)PrefixCount], 1u, &v20, 1);
      v17 = v12 + a3 + 1;
      v25.left = v10;
      v25.top = v17;
      v25.bottom = v17 + 1;
      v25.right = v10 + LOWORD(v20.cx) - v16 / 2;
      TextColor = GreGetTextColor(a1);
      v19 = GreSetBkColor(a1, TextColor);
      GreExtTextOutWInternal(a1, v10, v17, 2u, &v25, (unsigned __int16 *)&pwsz, 0, 0LL, 0LL, 0);
      GreSetBkColor(a1, v19);
    }
    result = (HDC)&qword_1C032FF60;
    if ( v6 != &qword_1C032FF60 )
      return (HDC)Win32FreePool(v6);
  }
  return result;
}
