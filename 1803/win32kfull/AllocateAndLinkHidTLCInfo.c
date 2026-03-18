/*
 * XREFs of AllocateAndLinkHidTLCInfo @ 0x1C0005AA4
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C005A314 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C005A71C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C005A754 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AllocateAndLinkHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 *i; // rax
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v9, gTLCInfoLock);
  v4 = Win32AllocPoolZInit(48LL, 1416131413LL);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    *(_WORD *)(v4 + 16) = a1;
    *(_WORD *)(v4 + 18) = a2;
    if ( *(_QWORD *)(RawInputManagerObject::gHidRequestTable[0] + 8LL) != RawInputManagerObject::gHidRequestTable[0] )
      __fastfail(3u);
    *(_QWORD *)v4 = RawInputManagerObject::gHidRequestTable[0];
    *(_QWORD *)(v4 + 8) = RawInputManagerObject::gHidRequestTable[0];
    *(_QWORD *)(RawInputManagerObject::gHidRequestTable[0] + 8LL) = v4;
    RawInputManagerObject::gHidRequestTable[0] = v4;
    for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable[2];
          i != &RawInputManagerObject::gHidRequestTable[2];
          i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 8) == a1 )
      {
        *(_DWORD *)(v6 + 32) = *((_DWORD *)i + 5);
        break;
      }
    }
    v5 = v6;
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v9);
  return v5;
}
