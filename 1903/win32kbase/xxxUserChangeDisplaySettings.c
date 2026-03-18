/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1C004B020
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C004AD90 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C004B91C (_xxxUserChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B9BC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        _OWORD *a1,
        _WORD *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  USHORT v9; // di
  size_t v10; // rbx
  const UNICODE_STRING *v11; // rax
  const void *v12; // rdx
  unsigned __int16 v13; // bx
  WORD v14; // di
  struct _devicemodeW *v15; // rax
  ULONG64 v16; // rcx
  void *v17; // rdi
  unsigned int v18; // r14d
  _DWORD *v19; // rax
  char *v20; // r8
  __int64 v21; // rbx
  BOOL v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // r13d
  _WORD *v27; // rcx
  __int16 v28; // ax
  _WORD *v29; // rax
  unsigned int v30; // r9d
  unsigned int v32; // ebx
  char v33; // [rsp+40h] [rbp-288h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-284h]
  PCUNICODE_STRING String1[4]; // [rsp+50h] [rbp-278h] BYREF
  struct _devicemodeW *v36; // [rsp+70h] [rbp-258h]
  _QWORD v37[5]; // [rsp+78h] [rbp-250h] BYREF
  unsigned __int16 v38; // [rsp+A0h] [rbp-228h]
  WORD v39; // [rsp+A4h] [rbp-224h]
  BOOL v40; // [rsp+A8h] [rbp-220h] BYREF
  unsigned int v41; // [rsp+ACh] [rbp-21Ch] BYREF
  unsigned int v42; // [rsp+B0h] [rbp-218h] BYREF
  int v43; // [rsp+B4h] [rbp-214h] BYREF
  int v44; // [rsp+B8h] [rbp-210h] BYREF
  int v45; // [rsp+BCh] [rbp-20Ch] BYREF
  int v46; // [rsp+C0h] [rbp-208h] BYREF
  int v47; // [rsp+C4h] [rbp-204h] BYREF
  int v48; // [rsp+C8h] [rbp-200h] BYREF
  int v49; // [rsp+CCh] [rbp-1FCh] BYREF
  int v50; // [rsp+D0h] [rbp-1F8h] BYREF
  int v51; // [rsp+D4h] [rbp-1F4h] BYREF
  int v52; // [rsp+D8h] [rbp-1F0h] BYREF
  __int64 v53; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-1E0h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-1D8h]
  void *v56; // [rsp+F8h] [rbp-1D0h]
  struct tagDESKTOP *v57; // [rsp+100h] [rbp-1C8h]
  __int64 v58; // [rsp+108h] [rbp-1C0h]
  void *Src[2]; // [rsp+110h] [rbp-1B8h]
  GUID ActivityId; // [rsp+120h] [rbp-1A8h] BYREF
  EVENT_DATA_DESCRIPTOR v61; // [rsp+130h] [rbp-198h] BYREF
  int *v62; // [rsp+150h] [rbp-178h]
  __int64 v63; // [rsp+158h] [rbp-170h]
  int *v64; // [rsp+160h] [rbp-168h]
  __int64 v65; // [rsp+168h] [rbp-160h]
  int *v66; // [rsp+170h] [rbp-158h]
  __int64 v67; // [rsp+178h] [rbp-150h]
  int *v68; // [rsp+180h] [rbp-148h]
  __int64 v69; // [rsp+188h] [rbp-140h]
  int *v70; // [rsp+190h] [rbp-138h]
  __int64 v71; // [rsp+198h] [rbp-130h]
  int *v72; // [rsp+1A0h] [rbp-128h]
  __int64 v73; // [rsp+1A8h] [rbp-120h]
  int *v74; // [rsp+1B0h] [rbp-118h]
  __int64 v75; // [rsp+1B8h] [rbp-110h]
  int *v76; // [rsp+1C0h] [rbp-108h]
  __int64 v77; // [rsp+1C8h] [rbp-100h]
  int *v78; // [rsp+1D0h] [rbp-F8h]
  __int64 v79; // [rsp+1D8h] [rbp-F0h]
  int *v80; // [rsp+1E0h] [rbp-E8h]
  __int64 v81; // [rsp+1E8h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1F0h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+210h] [rbp-B8h] BYREF
  BOOL *v84; // [rsp+220h] [rbp-A8h]
  __int64 v85; // [rsp+228h] [rbp-A0h]
  unsigned int *v86; // [rsp+230h] [rbp-98h]
  __int64 v87; // [rsp+238h] [rbp-90h]
  int *v88; // [rsp+240h] [rbp-88h]
  __int64 v89; // [rsp+248h] [rbp-80h]
  __int64 *v90; // [rsp+250h] [rbp-78h]
  __int64 v91; // [rsp+258h] [rbp-70h]
  __int64 *v92; // [rsp+260h] [rbp-68h]
  __int64 v93; // [rsp+268h] [rbp-60h]
  char *v94; // [rsp+270h] [rbp-58h]
  __int64 v95; // [rsp+278h] [rbp-50h]

  v34 = a4;
  v57 = a3;
  v56 = a5;
  v54 = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v55 = MEMORY[0xFFFFF78000000320];
  v53 = v55 * KeQueryTimeIncrement();
  memset(String1, 0, sizeof(String1));
  v36 = 0LL;
  memset(v37, 0, 24);
  v37[3] = gptiCurrent;
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
    v9 = (USHORT)Src[0];
    v10 = LOWORD(Src[0]);
    v11 = (const UNICODE_STRING *)Win32AllocPoolWithQuota(LOWORD(Src[0]) + 18LL, 0x73726447u);
    String1[0] = v11;
    if ( !v11 )
    {
      xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(String1);
      return 0xFFFFFFFFLL;
    }
    PushW32ThreadLock(v11, &String1[1], Win32FreePool);
    String1[0]->Buffer = &String1[0][1].Length;
    String1[0]->Length = v9;
    String1[0]->MaximumLength = v9 + 2;
    if ( v9 )
    {
      v12 = Src[1];
      if ( (char *)Src[1] + v10 > (void *)MmUserProbeAddress || (char *)Src[1] + v10 < Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(String1[0]->Buffer, v12, v10);
    }
    String1[0]->Buffer[v10 >> 1] = 0;
  }
  if ( !a2 )
    goto LABEL_20;
  if ( ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v38 = a2[34];
  v13 = v38;
  v14 = a2[35];
  v39 = v14;
  if ( v38 < 0xBCu )
  {
    xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(String1);
    return 4294967294LL;
  }
  if ( v38 > 0xDCu )
  {
    v32 = -2;
LABEL_55:
    xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(String1);
    return v32;
  }
  v15 = (struct _devicemodeW *)Win32AllocPoolWithQuota(v14 + 220LL, 0x73726447u);
  v36 = v15;
  if ( !v15 )
  {
    v32 = -1;
    goto LABEL_55;
  }
  PushW32ThreadLock(v15, v37, Win32FreePool);
  if ( v13 + v14 )
  {
    v16 = (ULONG64)a2 + v13 + (unsigned int)v14;
    if ( v16 > MmUserProbeAddress || v16 < (unsigned __int64)a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v36, a2, v13);
  memmove(&v36[1], (char *)a2 + v13, v14);
  v36->dmSize = 220;
  v36->dmDriverExtra = v14;
LABEL_20:
  v17 = v56;
  v18 = xxxUserChangeDisplaySettingsInternal(String1[0], v36, v57, v34, v56, a6, a7);
  v19 = Win32AllocPoolZInit(0x90uLL, 1682142037LL);
  v21 = (__int64)v19;
  if ( v19 )
  {
    *v19 = 4;
    v19[1] = 144;
    v19[10] = 0;
    *((_QWORD *)v19 + 4) = 0LL;
    v22 = 0;
    *(_QWORD *)(v21 + 8) = 0LL;
    *(_QWORD *)(v21 + 16) = 0LL;
    *(_QWORD *)(v21 + 24) = 0LL;
    *(_QWORD *)(v21 + 56) = v53;
    if ( a2 )
      v22 = v36 != 0LL;
    v23 = v22 | *(_DWORD *)(v21 + 140) & 0xFFFFFFFE;
    *(_DWORD *)(v21 + 140) = v23;
    if ( !a1 || !String1[0] || !String1[0]->Length || (v24 = 2, !String1[0]->Buffer) )
      v24 = 0;
    v25 = (v17 == 0LL ? 8 : 0) | (a6 == KernelMode ? 4 : 0) | v24 & 0xFFFFFFF3 | v23 & 0xFFFFFFF1;
    *(_DWORD *)(v21 + 140) = v25;
    v26 = v34;
    *(_DWORD *)(v21 + 48) = v34;
    *(_DWORD *)(v21 + 52) = v18;
    if ( (v25 & 2) != 0 )
    {
      v25 = 16LL;
      v27 = (_WORD *)(v21 + 108);
      v20 = (char *)String1[0]->Buffer - v21 - 108;
      do
      {
        if ( v25 == -2147483630 )
          break;
        v28 = *(_WORD *)((char *)v27 + (_QWORD)v20);
        if ( !v28 )
          break;
        *v27++ = v28;
        --v25;
      }
      while ( v25 );
      v29 = v27 - 1;
      if ( v25 )
        v29 = v27;
      *v29 = 0;
      if ( !v25 )
        *(_WORD *)(v21 + 108) = 0;
    }
    if ( (*(_DWORD *)(v21 + 140) & 1) != 0 && v36->dmSize >= 0xB4u )
    {
      *(_DWORD *)(v21 + 64) = v36->dmFields;
      *(_QWORD *)(v21 + 68) = *(_QWORD *)&v36->dmOrientation;
      *(_DWORD *)(v21 + 76) = v36->dmBitsPerPel;
      *(_DWORD *)(v21 + 80) = v36->dmPelsWidth;
      *(_DWORD *)(v21 + 84) = v36->dmPelsHeight;
      *(_DWORD *)(v21 + 88) = v36->dmDisplayFrequency;
      *(_DWORD *)(v21 + 92) = v36->dmDriverExtra;
      *(_DWORD *)(v21 + 96) = v36->dmDisplayOrientation;
      *(_DWORD *)(v21 + 100) = v36->dmDisplayFixedOutput;
      *(_DWORD *)(v21 + 104) = v36->dmDisplayFlags;
    }
    ((void (__fastcall *)(__int64, __int64, char *))qword_1C0215140)(v21, v25, v20);
    v58 = MEMORY[0xFFFFF78000000320];
    v54 = v58 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v30 = dword_1C020F458;
    if ( dword_1C020F458 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F458, 0x200000000004uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)(v21 + 108));
      v40 = a2 == 0LL;
      v84 = &v40;
      v85 = 4LL;
      v41 = v26;
      v86 = &v41;
      v87 = 4LL;
      v42 = v18;
      v88 = (int *)&v42;
      v89 = 4LL;
      v90 = &v53;
      v91 = 8LL;
      v92 = &v54;
      v93 = 8LL;
      v33 = a6;
      v94 = &v33;
      v95 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020F458, &unk_1C01E382E, &ActivityId, 0LL, 9u, &pData);
      v30 = dword_1C020F458;
    }
    if ( (*(_DWORD *)(v21 + 140) & 1) != 0 && v30 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F458, 0x200000000004uLL) )
      {
        v43 = *(_DWORD *)(v21 + 64);
        v62 = &v43;
        v63 = 4LL;
        v44 = *(_DWORD *)(v21 + 68);
        v64 = &v44;
        v65 = 4LL;
        v45 = *(_DWORD *)(v21 + 72);
        v66 = &v45;
        v67 = 4LL;
        v46 = *(_DWORD *)(v21 + 80);
        v68 = &v46;
        v69 = 4LL;
        v47 = *(_DWORD *)(v21 + 84);
        v70 = &v47;
        v71 = 4LL;
        v48 = *(_DWORD *)(v21 + 88);
        v72 = &v48;
        v73 = 4LL;
        v49 = *(_DWORD *)(v21 + 92);
        v74 = &v49;
        v75 = 4LL;
        v50 = *(_DWORD *)(v21 + 96);
        v76 = &v50;
        v77 = 4LL;
        v51 = *(_DWORD *)(v21 + 100);
        v78 = &v51;
        v79 = 4LL;
        v52 = *(_DWORD *)(v21 + 104);
        v80 = &v52;
        v81 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020F458, &unk_1C01E37A1, &ActivityId, 0LL, 0xCu, &v61);
      }
    }
    Win32FreePool(v21);
  }
  xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(String1);
  return v18;
}
