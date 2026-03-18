/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1C004C7F0
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C004DE90 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C004BB20 (DrvDxgkWriteDiagEntry.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004C440 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rbx
  struct _UNICODE_STRING *v13; // rdx
  USHORT Length; // r8
  void *v15; // r9
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // edx
  ULONG64 v19; // rdx
  WCHAR *v20; // rax
  __int64 v21; // r8
  PWSTR Buffer; // r9
  __int64 v23; // rdx
  int v24; // r10d
  __int64 v25; // rcx
  WORD dmSize; // cx
  char *v27; // rdx
  unsigned int v28; // r9d
  LPCGUID v29; // r9
  const GUID *v30; // r9
  char v32; // [rsp+40h] [rbp-298h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-294h]
  struct _UNICODE_STRING v34; // [rsp+50h] [rbp-288h]
  int v35; // [rsp+60h] [rbp-278h]
  BOOL v36; // [rsp+64h] [rbp-274h] BYREF
  int v37; // [rsp+68h] [rbp-270h] BYREF
  unsigned int v38; // [rsp+6Ch] [rbp-26Ch] BYREF
  int v39; // [rsp+70h] [rbp-268h] BYREF
  int v40; // [rsp+74h] [rbp-264h] BYREF
  int v41; // [rsp+78h] [rbp-260h] BYREF
  int v42; // [rsp+7Ch] [rbp-25Ch] BYREF
  int v43; // [rsp+80h] [rbp-258h] BYREF
  int v44; // [rsp+84h] [rbp-254h] BYREF
  int v45; // [rsp+88h] [rbp-250h] BYREF
  int v46; // [rsp+8Ch] [rbp-24Ch] BYREF
  int v47; // [rsp+90h] [rbp-248h] BYREF
  int v48; // [rsp+94h] [rbp-244h] BYREF
  __int64 v49; // [rsp+98h] [rbp-240h]
  __int64 v50; // [rsp+A0h] [rbp-238h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-230h]
  struct _devicemodeW *v52; // [rsp+B0h] [rbp-228h]
  __int64 v53; // [rsp+B8h] [rbp-220h] BYREF
  WCHAR *v54; // [rsp+C0h] [rbp-218h]
  void *v55; // [rsp+C8h] [rbp-210h]
  struct _UNICODE_STRING *v56; // [rsp+D0h] [rbp-208h]
  void *v57; // [rsp+D8h] [rbp-200h]
  struct _devicemodeW *v58; // [rsp+E0h] [rbp-1F8h]
  PWSTR v59; // [rsp+E8h] [rbp-1F0h]
  __int64 v60; // [rsp+F0h] [rbp-1E8h]
  __int64 v61; // [rsp+F8h] [rbp-1E0h]
  __int64 v62; // [rsp+100h] [rbp-1D8h]
  struct _devicemodeW *v63; // [rsp+108h] [rbp-1D0h]
  __int64 v64; // [rsp+110h] [rbp-1C8h]
  struct _UNICODE_STRING v65; // [rsp+120h] [rbp-1B8h]
  GUID ActivityId; // [rsp+130h] [rbp-1A8h] BYREF
  EVENT_DATA_DESCRIPTOR v67; // [rsp+140h] [rbp-198h] BYREF
  int *v68; // [rsp+160h] [rbp-178h]
  __int64 v69; // [rsp+168h] [rbp-170h]
  int *v70; // [rsp+170h] [rbp-168h]
  __int64 v71; // [rsp+178h] [rbp-160h]
  int *v72; // [rsp+180h] [rbp-158h]
  __int64 v73; // [rsp+188h] [rbp-150h]
  int *v74; // [rsp+190h] [rbp-148h]
  __int64 v75; // [rsp+198h] [rbp-140h]
  int *v76; // [rsp+1A0h] [rbp-138h]
  __int64 v77; // [rsp+1A8h] [rbp-130h]
  int *v78; // [rsp+1B0h] [rbp-128h]
  __int64 v79; // [rsp+1B8h] [rbp-120h]
  int *v80; // [rsp+1C0h] [rbp-118h]
  __int64 v81; // [rsp+1C8h] [rbp-110h]
  int *v82; // [rsp+1D0h] [rbp-108h]
  __int64 v83; // [rsp+1D8h] [rbp-100h]
  int *v84; // [rsp+1E0h] [rbp-F8h]
  __int64 v85; // [rsp+1E8h] [rbp-F0h]
  int *v86; // [rsp+1F0h] [rbp-E8h]
  __int64 v87; // [rsp+1F8h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+200h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp-B8h] BYREF
  BOOL *v90; // [rsp+230h] [rbp-A8h]
  __int64 v91; // [rsp+238h] [rbp-A0h]
  int *v92; // [rsp+240h] [rbp-98h]
  __int64 v93; // [rsp+248h] [rbp-90h]
  int *v94; // [rsp+250h] [rbp-88h]
  __int64 v95; // [rsp+258h] [rbp-80h]
  __int64 *v96; // [rsp+260h] [rbp-78h]
  __int64 v97; // [rsp+268h] [rbp-70h]
  __int64 *v98; // [rsp+270h] [rbp-68h]
  __int64 v99; // [rsp+278h] [rbp-60h]
  char *v100; // [rsp+280h] [rbp-58h]
  __int64 v101; // [rsp+288h] [rbp-50h]

  v56 = a1;
  v52 = a2;
  v63 = a2;
  v58 = a2;
  v55 = a5;
  v57 = a5;
  v53 = 0LL;
  v34 = (struct _UNICODE_STRING)0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v64 = MEMORY[0xFFFFF78000000320];
  v50 = v64 * KeQueryTimeIncrement();
  v10 = xxxUserChangeDisplaySettingsInternal(a1, a2, a3, a4, a5, a6, a7);
  v33 = v10;
  v11 = Win32AllocPoolZInit(0x90uLL);
  v12 = v11;
  v49 = v11;
  if ( v11 )
  {
    *(_DWORD *)v11 = 4;
    *(_DWORD *)(v11 + 4) = 144;
    *(_DWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    if ( a1 )
    {
      if ( a6 == UserMode )
      {
        v13 = a1;
        if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
          v13 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v65 = *v13;
        v34 = v65;
      }
      else
      {
        v34 = *a1;
      }
    }
    Length = v34.Length;
    v15 = v55;
    *(_QWORD *)(v11 + 56) = v50;
    v16 = *(_DWORD *)(v11 + 140) & 0xFFFFFFFE | (v58 != 0LL);
    *(_DWORD *)(v11 + 140) = v16;
    if ( !a1 || !Length || (v17 = 2, !v34.Buffer) )
      v17 = 0;
    v18 = (v15 == 0LL ? 8 : 0) | (a6 == KernelMode ? 4 : 0) | v17 & 0xFFFFFFF3 | v16 & 0xFFFFFFF1;
    *(_DWORD *)(v12 + 140) = v18;
    *(_DWORD *)(v12 + 48) = a4;
    *(_DWORD *)(v12 + 52) = v10;
    if ( (v18 & 2) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( Length )
        {
          v19 = (ULONG64)v34.Buffer + Length;
          if ( v19 > MmUserProbeAddress || (PWSTR)v19 < v34.Buffer )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v20 = (WCHAR *)(v12 + 108);
      v35 = 0;
      v21 = 2147483646LL;
      v61 = 2147483646LL;
      Buffer = v34.Buffer;
      v59 = v34.Buffer;
      v23 = 16LL;
      v60 = 16LL;
      v54 = (WCHAR *)(v12 + 108);
      v24 = 0;
      v25 = 0LL;
      v51 = 0LL;
      while ( v23 )
      {
        if ( !v21 || !*Buffer )
          goto LABEL_22;
        *v20++ = *Buffer;
        v54 = v20;
        v59 = ++Buffer;
        v60 = --v23;
        v61 = --v21;
        v51 = ++v25;
      }
      v54 = --v20;
      v51 = v25 - 1;
      v24 = -2147483643;
LABEL_22:
      *v20 = 0;
      v35 = v24;
      if ( v24 < 0 )
        *(_WORD *)(v12 + 108) = 0;
    }
    if ( (*(_DWORD *)(v12 + 140) & 1) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        dmSize = a2->dmSize;
        if ( dmSize )
        {
          v27 = (char *)a2 + dmSize;
          if ( (unsigned __int64)v27 > MmUserProbeAddress || v27 < (char *)a2 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      else
      {
        dmSize = a2->dmSize;
      }
      if ( dmSize >= 0xB4u )
      {
        *(_DWORD *)(v12 + 64) = a2->dmFields;
        *(_QWORD *)(v12 + 68) = *(_QWORD *)&a2->dmOrientation;
        *(_DWORD *)(v12 + 76) = a2->dmBitsPerPel;
        *(_DWORD *)(v12 + 80) = a2->dmPelsWidth;
        *(_DWORD *)(v12 + 84) = a2->dmPelsHeight;
        *(_DWORD *)(v12 + 88) = a2->dmDisplayFrequency;
        *(_DWORD *)(v12 + 92) = a2->dmDriverExtra;
        *(_DWORD *)(v12 + 96) = a2->dmDisplayOrientation;
        *(_DWORD *)(v12 + 100) = a2->dmDisplayFixedOutput;
        *(_DWORD *)(v12 + 104) = a2->dmDisplayFlags;
      }
    }
    DrvDxgkWriteDiagEntry();
    v62 = MEMORY[0xFFFFF78000000320];
    v53 = v62 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v28 = dword_1C019A200;
    if ( dword_1C019A200 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A200, 0x200000000004uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)(v12 + 108));
      v36 = v63 == 0LL;
      v90 = &v36;
      v91 = 4LL;
      v37 = a4;
      v92 = &v37;
      v93 = 4LL;
      v38 = v10;
      v94 = (int *)&v38;
      v95 = 4LL;
      v96 = &v50;
      v97 = 8LL;
      v98 = &v53;
      v99 = 8LL;
      v32 = a6;
      v100 = &v32;
      v101 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C019A200, &unk_1C0177E03, &ActivityId, v29, 9u, &pData);
      v28 = dword_1C019A200;
    }
    if ( (*(_DWORD *)(v12 + 140) & 1) != 0
      && v28 > 5
      && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A200, 0x200000000004uLL) )
    {
      v39 = *(_DWORD *)(v12 + 64);
      v68 = &v39;
      v69 = 4LL;
      v40 = *(_DWORD *)(v12 + 68);
      v70 = &v40;
      v71 = 4LL;
      v41 = *(_DWORD *)(v12 + 72);
      v72 = &v41;
      v73 = 4LL;
      v42 = *(_DWORD *)(v12 + 80);
      v74 = &v42;
      v75 = 4LL;
      v43 = *(_DWORD *)(v12 + 84);
      v76 = &v43;
      v77 = 4LL;
      v44 = *(_DWORD *)(v12 + 88);
      v78 = &v44;
      v79 = 4LL;
      v45 = *(_DWORD *)(v12 + 92);
      v80 = &v45;
      v81 = 4LL;
      v46 = *(_DWORD *)(v12 + 96);
      v82 = &v46;
      v83 = 4LL;
      v47 = *(_DWORD *)(v12 + 100);
      v84 = &v47;
      v85 = 4LL;
      v48 = *(_DWORD *)(v12 + 104);
      v86 = &v48;
      v87 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C019A200, &unk_1C0177D76, &ActivityId, v30, 0xCu, &v67);
    }
    Win32FreePool(v12);
  }
  return v10;
}
