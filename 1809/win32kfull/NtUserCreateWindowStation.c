/*
 * XREFs of NtUserCreateWindowStation @ 0x1C00EBFE0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxCreateWindowStation @ 0x1C00EC474 (xxxCreateWindowStation.c)
 *     RtlStringCchCopyNW @ 0x1C00ECB28 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C015DD04 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserCreateWindowStation(
        struct _OBJECT_ATTRIBUTES *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        ULONG64 a7,
        int a8)
{
  int v9; // r12d
  ULONG64 v12; // rdi
  int v13; // eax
  const wchar_t *v14; // rdi
  unsigned __int64 v15; // rsi
  ULONG64 v16; // rdx
  _BYTE **v17; // rcx
  __int64 v18; // rdx
  _DWORD *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  void *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _OWORD *v26; // rcx
  _OWORD *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  _OWORD *v30; // rcx
  _OWORD *v31; // rax
  NTSTATUS v32; // eax
  ULONG v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // edx
  unsigned __int16 *v38; // rsi
  __int64 v39; // rdx
  __int64 ThreadWin32Thread; // rax
  ULONG v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  int Status; // [rsp+54h] [rbp-674h]
  void *v47; // [rsp+58h] [rbp-670h] BYREF
  __int64 v48; // [rsp+60h] [rbp-668h] BYREF
  _DWORD *v49; // [rsp+68h] [rbp-660h]
  unsigned __int16 *v50; // [rsp+70h] [rbp-658h] BYREF
  int v51; // [rsp+78h] [rbp-650h]
  int v52; // [rsp+80h] [rbp-648h]
  int v53; // [rsp+88h] [rbp-640h]
  __int64 v54; // [rsp+90h] [rbp-638h]
  int v55; // [rsp+A0h] [rbp-628h]
  const wchar_t *v56; // [rsp+A8h] [rbp-620h]
  _QWORD v57[3]; // [rsp+B0h] [rbp-618h] BYREF
  _QWORD v58[3]; // [rsp+C8h] [rbp-600h] BYREF
  _QWORD v59[3]; // [rsp+E0h] [rbp-5E8h] BYREF
  struct _UNICODE_STRING v60; // [rsp+F8h] [rbp-5D0h] BYREF
  struct _OBJECT_ATTRIBUTES v61; // [rsp+108h] [rbp-5C0h] BYREF
  _BYTE v62[792]; // [rsp+138h] [rbp-590h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v63; // [rsp+450h] [rbp-278h] BYREF
  wchar_t pszDest[272]; // [rsp+460h] [rbp-268h] BYREF

  v9 = a3;
  v52 = a2;
  v54 = a3;
  v53 = a4;
  v12 = a7;
  v47 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a7 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(_DWORD *)v12;
  v51 = v13;
  v55 = v13;
  v14 = *(const wchar_t **)(v12 + 8);
  v56 = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int16)v13;
  v16 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  v17 = (_BYTE **)MmUserProbeAddress;
  if ( v16 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v51) )
  {
    if ( (v13 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress);
      v17 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v16 > (unsigned __int64)v14 )
      goto LABEL_12;
  }
  if ( (v13 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v17 = 0;
LABEL_12:
  RtlStringCchCopyNW(pszDest, 9uLL, v14, v15 >> 1);
  v19 = (_DWORD *)Win32AllocPoolWithQuota(792LL, 1702064981LL);
  v49 = v19;
  if ( v19 )
  {
    v26 = (_OWORD *)a6;
    if ( a6 + 792 < a6 || a6 + 792 > MmUserProbeAddress )
      v26 = (_OWORD *)MmUserProbeAddress;
    v27 = v62;
    v28 = 6LL;
    v29 = 6LL;
    do
    {
      *v27 = *v26;
      v27[1] = v26[1];
      v27[2] = v26[2];
      v27[3] = v26[3];
      v27[4] = v26[4];
      v27[5] = v26[5];
      v27[6] = v26[6];
      v27 += 8;
      *(v27 - 1) = v26[7];
      v26 += 8;
      --v29;
    }
    while ( v29 );
    *v27 = *v26;
    *((_QWORD *)v27 + 2) = *((_QWORD *)v26 + 2);
    v30 = v19;
    v31 = v62;
    do
    {
      *v30 = *v31;
      v30[1] = v31[1];
      v30[2] = v31[2];
      v30[3] = v31[3];
      v30[4] = v31[4];
      v30[5] = v31[5];
      v30[6] = v31[6];
      v30 += 8;
      *(v30 - 1) = v31[7];
      v31 += 8;
      --v28;
    }
    while ( v28 );
    *v30 = *v31;
    *((_QWORD *)v30 + 2) = *((_QWORD *)v31 + 2);
    if ( *v19 < 8u )
    {
      v32 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
              1,
              a1,
              (unsigned __int16 (*)[256])&pszDest[16],
              &v61,
              &v63,
              &v47,
              &v60,
              &v50);
      if ( v32 >= 0 )
      {
        if ( v47 )
          PushW32ThreadLock((__int64)v47, v59, (__int64)CleanupSecurityDescriptor);
        PushW32ThreadLock((__int64)v19, v58, (__int64)Win32FreePool);
        v38 = v50;
        if ( v50 )
          PushW32ThreadLock((__int64)v50, v57, (__int64)Win32FreePool);
        LOBYTE(v37) = 0;
        Status = xxxCreateWindowStation(
                   (unsigned int)&v61,
                   v37,
                   a2,
                   v9,
                   a4,
                   a5,
                   (__int64)v19,
                   (__int64)pszDest,
                   a8,
                   (__int64)&v48);
        if ( v38 )
        {
          PopAndFreeAlwaysW32ThreadLock((__int64)v57, v39);
          v50 = 0LL;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39);
        *(_QWORD *)(ThreadWin32Thread + 16) = v58[0];
        if ( v47 )
        {
          PopAndFreeAlwaysW32ThreadLock((__int64)v59, v22);
          v47 = 0LL;
        }
        if ( Status < 0 )
        {
          v48 = 0LL;
          v41 = RtlNtStatusToDosError(Status);
          UserSetLastError(v41, v42, v43, v44);
        }
        v19 = v49;
      }
      else
      {
        v48 = 0LL;
        v33 = RtlNtStatusToDosError(v32);
        UserSetLastError(v33, v34, v35, v36);
      }
    }
    else
    {
      v48 = 0LL;
      UserSetLastError(87LL, (__int64)v27, 0LL, 128LL);
    }
    if ( v19 )
      Win32FreePool(v19);
    if ( v50 )
      Win32FreePool(v50);
    v23 = v47;
    if ( v47 )
    {
      LOBYTE(v22) = 1;
      SeReleaseSecurityDescriptor(v47, v22, 0LL);
      v47 = 0LL;
    }
  }
  else
  {
    v48 = 0LL;
    UserSetLastError(8LL, v18, v20, v21);
  }
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return v48;
}
