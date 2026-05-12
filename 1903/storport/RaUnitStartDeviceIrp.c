/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1C006C970
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006860 (RaidIsUnitControlSupported.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     _TlgCreateWsz @ 0x1C000E488 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     RaidIsUnitQueueLocked @ 0x1C0010088 (RaidIsUnitQueueLocked.c)
 *     RaidUnlockUnitQueue @ 0x1C0010098 (RaidUnlockUnitQueue.c)
 *     RaCallMiniportUnitControl @ 0x1C0015214 (RaCallMiniportUnitControl.c)
 *     RaidUnitRestartQueue @ 0x1C001B7A8 (RaidUnitRestartQueue.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C001B7BC (RaidUnitConvertToNormalUnit.c)
 *     RaidGetD3ColdInterface @ 0x1C001B854 (RaidGetD3ColdInterface.c)
 *     RaidUnitRegisterInterfaces @ 0x1C001BA78 (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C001BB98 (RaidUnitGetInitialTimestamp.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C001BC88 (RaidUnitGetPowerCycleCount.c)
 *     RaidGetD3ColdCapability @ 0x1C00231C0 (RaidGetD3ColdCapability.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     RaUnitInitializeWMI @ 0x1C006C5E4 (RaUnitInitializeWMI.c)
 *     RaidUnitGetDeviceParameters @ 0x1C006C644 (RaidUnitGetDeviceParameters.c)
 */

__int64 __fastcall RaUnitStartDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // r9
  _BYTE *v9; // r9
  __int64 v10; // rcx
  const WCHAR *v11; // rdx
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  char D3ColdCapability; // al
  char v19; // cl
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21; // [rsp+31h] [rbp-CFh] BYREF
  char v22; // [rsp+32h] [rbp-CEh] BYREF
  char v23; // [rsp+33h] [rbp-CDh] BYREF
  char v24; // [rsp+34h] [rbp-CCh] BYREF
  char v25; // [rsp+35h] [rbp-CBh] BYREF
  char v26; // [rsp+36h] [rbp-CAh] BYREF
  char v27; // [rsp+37h] [rbp-C9h] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  int *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  char *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  char *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  char *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  __int128 *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]
  int *v58; // [rsp+120h] [rbp+20h]
  int v59; // [rsp+128h] [rbp+28h]
  int v60; // [rsp+12Ch] [rbp+2Ch]
  _DWORD *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  __int64 v63; // [rsp+140h] [rbp+40h]
  _DWORD v64[2]; // [rsp+148h] [rbp+48h] BYREF
  char *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  char *v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  char *v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  char *v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]
  char *v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+198h] [rbp+98h]
  __int64 *v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  int *v77; // [rsp+1B0h] [rbp+B0h]
  __int64 v78; // [rsp+1B8h] [rbp+B8h]
  int *v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1C8h] [rbp+C8h]
  int *v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1D8h] [rbp+D8h]
  int *v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  int *v85; // [rsp+1F0h] [rbp+F0h]
  __int64 v86; // [rsp+1F8h] [rbp+F8h]
  int *v87; // [rsp+200h] [rbp+100h]
  __int64 v88; // [rsp+208h] [rbp+108h]
  int v89; // [rsp+210h] [rbp+110h] BYREF
  char v90; // [rsp+214h] [rbp+114h]
  __int128 v91; // [rsp+218h] [rbp+118h] BYREF
  char v92; // [rsp+228h] [rbp+128h]

  if ( *(_DWORD *)(a1 + 48) != 1 )
  {
    RaUnitInitializeWMI(a1);
    RaidUnitRegisterInterfaces(a1);
    if ( (unsigned int)RaidIsUnitQueueLocked(a1) )
    {
      RaidUnlockUnitQueue(v4);
      RaidUnitRestartQueue(v5);
    }
    *(_DWORD *)(a1 + 48) = 1;
    RaidUnitConvertToNormalUnit(a1);
    if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 1496)) >= 0 && *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_DWORD *)(a1 + 1568) & 8) != 0
        || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1496)), v19 = 2, !D3ColdCapability) )
      {
        v19 = 0;
      }
      *(_BYTE *)(a1 + 161) = v19 | *(_BYTE *)(a1 + 161) & 0xFD;
    }
    else
    {
      *(_BYTE *)(a1 + 161) &= ~2u;
    }
    if ( RaidIsUnitControlSupported(a1, 2) )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v37 = 0LL;
      v36 = 1LL;
      WORD1(v36) = *(_WORD *)(v6 + 56);
      LOWORD(v37) = *(_WORD *)(a1 + 96);
      BYTE2(v37) = *(_BYTE *)(a1 + 98);
      HIDWORD(v36) = 4;
      RaCallMiniportUnitControl(v6 + 296);
    }
    *(_BYTE *)(a1 + 161) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  *(_QWORD *)(a1 + 2776) = 0x10000000LL;
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 )
  {
    LOBYTE(v37) = 0;
    v92 = 0;
    v90 = 0;
    v36 = *(_QWORD *)(v8 + 8);
    v91 = *(_OWORD *)(v8 + 16);
    v89 = *(_DWORD *)(v8 + 32);
    if ( (unsigned int)dword_1C0061058 > 5 )
    {
      if ( TlgKeywordOn(v7, 0x400000000000uLL) )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v28 = *(_DWORD *)(v10 + 56);
        v20 = *(_BYTE *)(a1 + 96);
        v21 = *(_BYTE *)(a1 + 97);
        v22 = *(_BYTE *)(a1 + 98);
        v11 = *(const WCHAR **)(v10 + 4800);
        v23 = *(_BYTE *)(a1 + 128);
        v24 = *v9 & 0x1F;
        v25 = *v9 >> 5;
        v26 = v9[1] & 0x7F;
        v27 = v9[1] >> 7;
        v35 = *(_QWORD *)(a1 + 2712);
        v29 = *(_DWORD *)(a1 + 2704);
        v30 = *(_DWORD *)(a1 + 1544);
        v31 = *(_DWORD *)(a1 + 1548);
        v32 = *(_DWORD *)(a1 + 1552);
        v33 = *(_DWORD *)(a1 + 1556);
        v34 = *(_DWORD *)(a1 + 1564);
        v39 = v10 + 5128;
        v40 = 16LL;
        v41 = a1 + 1720;
        v43 = &v28;
        v45 = &v20;
        v47 = &v21;
        v49 = &v22;
        v42 = 16LL;
        v44 = 4LL;
        v46 = 1LL;
        v48 = 1LL;
        v50 = 1LL;
        TlgCreateWsz(&pDesc, v11);
        v14 = -1LL;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)&v36 + v15) );
        v54 = 0;
        v52 = &v36;
        v53 = v15 + 1;
        v16 = -1LL;
        do
          ++v16;
        while ( *((_BYTE *)&v91 + v16) );
        v57 = 0;
        v56 = v16 + 1;
        v55 = &v91;
        do
          ++v14;
        while ( *((_BYTE *)&v89 + v14) );
        v60 = 0;
        v58 = &v89;
        v59 = v14 + 1;
        v61 = v64;
        v63 = *(_QWORD *)(a1 + 120);
        v64[0] = *(unsigned __int16 *)(a1 + 112);
        v65 = &v23;
        v67 = &v24;
        v69 = &v25;
        v71 = &v26;
        v73 = &v27;
        v75 = &v35;
        v77 = &v29;
        v79 = &v30;
        v81 = &v31;
        v83 = &v32;
        v85 = &v33;
        v87 = &v34;
        v62 = 2LL;
        v64[1] = 0;
        v66 = 1LL;
        v68 = 1LL;
        v70 = 1LL;
        v72 = 1LL;
        v74 = 1LL;
        v76 = 8LL;
        v78 = 4LL;
        v80 = 4LL;
        v82 = 4LL;
        v84 = 4LL;
        v86 = 4LL;
        v88 = 4LL;
        TlgWrite((TraceLoggingHProvider)v14, &unk_1C00561E5, v12, v13, 0x1Au, &pData);
      }
    }
  }
  return RaidCompleteRequestEx(a2, 0, 0);
}
