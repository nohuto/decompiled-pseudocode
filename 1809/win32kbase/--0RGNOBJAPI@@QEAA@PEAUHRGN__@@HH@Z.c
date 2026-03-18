/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0
 * Callers:
 *     GreGetRgnBox @ 0x1C001C9F0 (GreGetRgnBox.c)
 *     GreOffsetRgn @ 0x1C001CB60 (GreOffsetRgn.c)
 *     bDeleteRegion @ 0x1C001CC90 (bDeleteRegion.c)
 *     GreGetRegionData @ 0x1C001D400 (GreGetRegionData.c)
 *     GreSetRectRgn @ 0x1C001E010 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F480 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C001F6F0 (SetRectRgnIndirect.c)
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 *     GreRectInRegion @ 0x1C006A120 (GreRectInRegion.c)
 *     GrePtInRegion @ 0x1C0071910 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C0089B70 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C008D3F0 (NtGdiEqualRgn.c)
 *     GreCopyVisRgn @ 0x1C009D9C0 (GreCopyVisRgn.c)
 *     EngDeleteRgn @ 0x1C01070E0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0107160 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     HmgLock @ 0x1C0022520 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x1C00229F0 (HmgPentryFromPobj.c)
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C0025730 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00AA28C (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3, int a4)
{
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdi
  char v13; // cl
  int v15; // [rsp+34h] [rbp-B4h] BYREF
  int v16; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-A8h] BYREF
  struct _RECTL v18; // [rsp+50h] [rbp-98h] BYREF
  __int64 v19; // [rsp+60h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-78h] BYREF
  int *v21; // [rsp+90h] [rbp-58h]
  int v22; // [rsp+98h] [rbp-50h]
  int v23; // [rsp+9Ch] [rbp-4Ch]
  _QWORD *v24; // [rsp+A0h] [rbp-48h]
  int v25; // [rsp+A8h] [rbp-40h]
  int v26; // [rsp+ACh] [rbp-3Ch]
  int *v27; // [rsp+B0h] [rbp-38h]
  int v28; // [rsp+B8h] [rbp-30h]
  int v29; // [rsp+BCh] [rbp-2Ch]

  v17[1] = this;
  *(_QWORD *)this = 0LL;
  v8 = (_QWORD *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x20uLL);
  PushThreadGuardedObject(
    v8,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64),
    (__int64)UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic);
  v9 = HmgLock((unsigned int)a2, 4);
  v10 = v9;
  *(_QWORD *)this = v9;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 12) = a3;
  if ( !v9 )
    return this;
  v11 = 1;
  if ( a4 && *(_WORD *)(v9 + 12) != 1 )
  {
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v15 = 82559;
      v21 = &v15;
      v22 = 4;
      v23 = 0;
      v17[0] = 0x1000000LL;
      v24 = v17;
      v25 = 8;
      v26 = 0;
      v16 = 0;
      v27 = &v16;
      v28 = 4;
      v29 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019DEB9, 0LL, 0LL, 5u, &pData);
      v10 = *(_QWORD *)this;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
    goto LABEL_26;
  }
  if ( !*(_DWORD *)(v9 + 36) )
  {
    v12 = *(_QWORD *)(HmgPentryFromPobj((_DWORD *)v9) + 16);
    if ( !v12 )
      goto LABEL_24;
    v18 = *(struct _RECTL *)v12;
    v19 = *(_QWORD *)(v12 + 16);
    v13 = _mm_cvtsi128_si32((__m128i)v18);
    if ( (v13 & 0x11) == 0x10 )
    {
      if ( (v13 & 0x20) == 0 )
        goto LABEL_24;
      if ( v18.top == 1 )
      {
        RGNOBJ::vSet(this);
LABEL_22:
        *(_DWORD *)v12 &= ~0x20u;
        goto LABEL_24;
      }
      if ( v18.top != 2 )
        goto LABEL_24;
      if ( (((v18.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((HIDWORD(v19) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v19 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v18.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        RGNOBJ::vSet(this, (struct _RECTL *)&v18.right);
        goto LABEL_22;
      }
    }
    v11 = 0;
    goto LABEL_24;
  }
  if ( !(unsigned int)GrepIsPreviousModeKernel() )
    v11 = 0;
LABEL_24:
  if ( !v11 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_26:
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  return this;
}
