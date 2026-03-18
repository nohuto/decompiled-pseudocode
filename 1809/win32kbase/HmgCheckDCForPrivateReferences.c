/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1C00F90F4
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0082B34 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C001C84C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C001E314 (HmgIsObjectOwnedByW32Pid.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C009EE44 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C009EE8C (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(struct OBJECT **this, unsigned int a2)
{
  struct OBJECT *v4; // rax
  struct HPATH__ *v6; // rdx
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v11[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct OBJECT *v12; // [rsp+58h] [rbp-A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v14; // [rsp+F0h] [rbp-10h]
  int v15; // [rsp+F8h] [rbp-8h]
  int v16; // [rsp+FCh] [rbp-4h]
  _QWORD *v17; // [rsp+100h] [rbp+0h]
  int v18; // [rsp+108h] [rbp+8h]
  int v19; // [rsp+10Ch] [rbp+Ch]
  int *v20; // [rsp+110h] [rbp+10h]
  int v21; // [rsp+118h] [rbp+18h]
  int v22; // [rsp+11Ch] [rbp+1Ch]
  int *v23; // [rsp+120h] [rbp+20h]
  int v24; // [rsp+128h] [rbp+28h]
  int v25; // [rsp+12Ch] [rbp+2Ch]

  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[17], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[18], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[19], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[11], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[142], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[149], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[20], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[148], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[21], a2) )
    return 1LL;
  v4 = DC::prgnRao((DC *)this);
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v4, a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(this[62], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(this[263], a2) )
  {
    return 1LL;
  }
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[12], a2) )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v9 = 0;
        v25 = 0;
        v17 = v10;
        v20 = &v8;
        v14 = &v7;
        v23 = &v9;
        v7 = 83417;
        v15 = 4;
        v10[0] = 0x1000000LL;
        v18 = 8;
        v8 = 1;
        v21 = 4;
        v24 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019DEED, 0LL, 0LL, 6u, &pData);
      }
    }
    return 1LL;
  }
  v6 = this[25];
  if ( v6 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v11, v6);
    if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v12, a2) )
    {
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v17 = v10;
        v20 = &v8;
        v14 = &v9;
        v23 = &v7;
        v9 = 86327;
        v15 = 4;
        v10[0] = 0x1000000LL;
        v18 = 8;
        v8 = 1;
        v21 = 4;
        v7 = 1;
        v24 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019DEED, 0LL, 0LL, 6u, &pData);
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
      return 1LL;
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v11);
  }
  return 0LL;
}
