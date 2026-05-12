/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1C006CC50
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00068B0 (RaidIsUnitControlSupported.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     _TlgCreateWsz @ 0x1C000E4E0 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C000E558 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E600 (_TlgKeywordOn.c)
 *     RaidIsUnitQueueLocked @ 0x1C0010228 (RaidIsUnitQueueLocked.c)
 *     RaidUnlockUnitQueue @ 0x1C0010238 (RaidUnlockUnitQueue.c)
 *     RaCallMiniportUnitControl @ 0x1C00152A4 (RaCallMiniportUnitControl.c)
 *     RaidUnitRegisterInterfaces @ 0x1C0018EA4 (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C0018FC4 (RaidUnitGetInitialTimestamp.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C00190B4 (RaidUnitGetPowerCycleCount.c)
 *     RaidGetD3ColdInterface @ 0x1C001D5C0 (RaidGetD3ColdInterface.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0022CC4 (RaidUnitConvertToNormalUnit.c)
 *     RaidUnitRestartQueue @ 0x1C002316C (RaidUnitRestartQueue.c)
 *     RaidGetD3ColdCapability @ 0x1C0023320 (RaidGetD3ColdCapability.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     RaidUnitGetDeviceParameters @ 0x1C006D420 (RaidUnitGetDeviceParameters.c)
 *     RaUnitInitializeWMI @ 0x1C0070A94 (RaUnitInitializeWMI.c)
 */

__int64 __fastcall RaUnitStartDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  _BYTE *v8; // r9
  __int64 v9; // rcx
  const WCHAR *v10; // rdx
  const GUID *v11; // r9
  const struct _TlgProvider_t *v12; // r10
  unsigned __int16 *v13; // r11
  unsigned __int16 *v14; // rdx
  unsigned __int16 *v15; // rcx
  __int64 v16; // rax
  const struct _TlgProvider_t *v17; // rcx
  char D3ColdCapability; // al
  char v20; // cl
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22; // [rsp+31h] [rbp-CFh] BYREF
  char v23; // [rsp+32h] [rbp-CEh] BYREF
  char v24; // [rsp+33h] [rbp-CDh] BYREF
  char v25; // [rsp+34h] [rbp-CCh] BYREF
  char v26; // [rsp+35h] [rbp-CBh] BYREF
  char v27; // [rsp+36h] [rbp-CAh] BYREF
  char v28; // [rsp+37h] [rbp-C9h] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
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
  unsigned __int16 *v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  const struct _TlgProvider_t *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int16 *v58; // [rsp+120h] [rbp+20h]
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

  if ( *(_DWORD *)(a1 + 48) != 1 )
  {
    RaUnitInitializeWMI();
    RaidUnitRegisterInterfaces(a1);
    if ( (unsigned int)RaidIsUnitQueueLocked(a1) )
    {
      RaidUnlockUnitQueue(v4);
      RaidUnitRestartQueue(v5);
    }
    *(_DWORD *)(a1 + 48) = 1;
    RaidUnitConvertToNormalUnit(a1);
    if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 1752)) >= 0 && *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_DWORD *)(a1 + 1824) & 8) != 0
        || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1752)), v20 = 2, !D3ColdCapability) )
      {
        v20 = 0;
      }
      *(_BYTE *)(a1 + 449) = v20 | *(_BYTE *)(a1 + 449) & 0xFD;
    }
    else
    {
      *(_BYTE *)(a1 + 449) &= ~2u;
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
    *(_BYTE *)(a1 + 449) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  *(_QWORD *)(a1 + 3032) = 0x10000000LL;
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  if ( *(_QWORD *)(a1 + 104) && (unsigned int)dword_1C0062058 > 5 && TlgKeywordOn(v7, 0x400000000000uLL) )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v29 = *(_DWORD *)(v9 + 56);
    v21 = *(_BYTE *)(a1 + 96);
    v22 = *(_BYTE *)(a1 + 97);
    v23 = *(_BYTE *)(a1 + 98);
    v10 = *(const WCHAR **)(v9 + 4800);
    v24 = *(_BYTE *)(a1 + 128);
    v25 = *v8 & 0x1F;
    v26 = *v8 >> 5;
    v27 = v8[1] & 0x7F;
    v28 = v8[1] >> 7;
    v36 = *(_QWORD *)(a1 + 2968);
    v30 = *(_DWORD *)(a1 + 2960);
    v31 = *(_DWORD *)(a1 + 1800);
    v32 = *(_DWORD *)(a1 + 1804);
    v33 = *(_DWORD *)(a1 + 1808);
    v34 = *(_DWORD *)(a1 + 1812);
    v35 = *(_DWORD *)(a1 + 1820);
    v39 = v9 + 5128;
    v40 = 16LL;
    v41 = a1 + 1976;
    v43 = &v29;
    v45 = &v21;
    v47 = &v22;
    v49 = &v23;
    v42 = 16LL;
    v44 = 4LL;
    v46 = 1LL;
    v48 = 1LL;
    v50 = 1LL;
    TlgCreateWsz(&pDesc, v10);
    v14 = &Context.EnableBitsCount + 2;
    v15 = &Context.EnableBitsCount + 2;
    LODWORD(v16) = 0;
    if ( a1 != -160 )
    {
      v15 = (unsigned __int16 *)(a1 + 160);
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(a1 + 160 + v16) );
    }
    v52 = v15;
    v53 = v16 + 1;
    LODWORD(v16) = 0;
    v54 = 0;
    v17 = (const struct _TlgProvider_t *)(&Context.EnableBitsCount + 2);
    if ( v12 )
    {
      v17 = v12;
      v16 = -1LL;
      do
        ++v16;
      while ( *((_BYTE *)&v12->LevelPlus1 + v16) );
    }
    v55 = v17;
    v56 = v16 + 1;
    LODWORD(v16) = 0;
    v57 = 0;
    if ( v13 )
    {
      v14 = v13;
      v16 = -1LL;
      do
        ++v16;
      while ( *((_BYTE *)v13 + v16) );
    }
    v58 = v14;
    v59 = v16 + 1;
    v61 = v64;
    v63 = *(_QWORD *)(a1 + 120);
    v64[0] = *(unsigned __int16 *)(a1 + 112);
    v65 = &v24;
    v67 = &v25;
    v69 = &v26;
    v71 = &v27;
    v73 = &v28;
    v75 = &v36;
    v77 = &v30;
    v79 = &v31;
    v81 = &v32;
    v83 = &v33;
    v85 = &v34;
    v87 = &v35;
    v60 = 0;
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
    TlgWrite(v17, &unk_1C0057265, (LPCGUID)0xFFFFFFFFFFFFFFFFLL, v11, 0x1Au, &pData);
  }
  return RaidCompleteRequestEx(a2, 0, 0);
}
