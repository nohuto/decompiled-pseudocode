/*
 * XREFs of ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800C0B0C
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18006A378 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x18006A5A8 (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18006A780 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1800C0ACC (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::CreateReportForProperty(__int64 a1, int a2, void **a3, _DWORD *a4)
{
  char v8; // si
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  USHORT v13; // r8
  int v14; // ebx
  int v15; // ebx
  unsigned int v16; // ebx
  USAGE v17; // cx
  const struct std::nothrow_t *v18; // rdx
  UCHAR *v19; // rax
  void *v20; // rcx
  USHORT ValueCapsLength; // [rsp+48h] [rbp-59h] BYREF
  void *v22[3]; // [rsp+50h] [rbp-51h] BYREF
  char v23; // [rsp+68h] [rbp-39h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+78h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v22[1] = (void *)-2LL;
  v22[0] = 0LL;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v8 = 1;
  ValueCapsLength = 1;
  if ( !GazeHidParser::IsPropertySupported(a1, a2) )
    return 2147943568LL;
  v10 = *(__int64 **)(a1 + 72);
  v11 = (__int64 *)v10[1];
  v12 = v10;
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_27;
  do
  {
    if ( *((_DWORD *)v11 + 7) >= a2 )
    {
      v12 = v11;
      v11 = (__int64 *)*v11;
    }
    else
    {
      v11 = (__int64 *)v11[2];
    }
  }
  while ( !*((_BYTE *)v11 + 25) );
  if ( v12 == v10 || a2 < *((_DWORD *)v12 + 7) )
  {
LABEL_27:
    std::_Xout_of_range("invalid map<K, T> key");
    JUMPOUT(0x1800C0CDFLL);
  }
  v13 = *((_WORD *)v12 + 16);
  v14 = a2 - 1;
  if ( !v14 )
  {
    v17 = 1024;
LABEL_18:
    v22[2] = v22;
    v23 = 1;
    if ( HidP_GetSpecificValueCaps(
           HidP_Feature,
           0x12u,
           v13,
           v17,
           &ValueCaps,
           &ValueCapsLength,
           *(PHIDP_PREPARSED_DATA *)(a1 + 64)) == 1114112 )
    {
      v19 = (UCHAR *)operator new[](*(unsigned __int16 *)(a1 + 8));
      v22[0] = v19;
      if ( v19 )
      {
        *v19 = ValueCaps.ReportID;
        v20 = v22[0];
        *a3 = v22[0];
        *a4 = *(unsigned __int16 *)(a1 + 8);
        v16 = 0;
        v8 = 0;
LABEL_24:
        if ( v8 )
        {
          if ( v20 )
            operator delete(v20, v18);
        }
        return v16;
      }
      v16 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
        (const char *)0x8007000ELL);
    }
    else
    {
      v16 = -2147023728;
    }
    v20 = v22[0];
    goto LABEL_24;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v17 = 769;
    goto LABEL_18;
  }
  if ( v15 == 1 )
  {
    v17 = 512;
    goto LABEL_18;
  }
  v16 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9A,
    (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
    (const char *)0x80070057LL);
  return v16;
}
