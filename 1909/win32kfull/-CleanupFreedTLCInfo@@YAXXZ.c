/*
 * XREFs of ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00E7230
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00E762C (_RegisterRawInputDevices.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00E7F5C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00E7F8C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     FreeHidTLCInfo @ 0x1C01D7FE0 (FreeHidTLCInfo.c)
 */

void CleanupFreedTLCInfo(void)
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx
  _DWORD *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7, gTLCInfoLock);
  v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  v1 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  while ( v1 != v0 )
  {
    v2 = v1;
    v1 = (_QWORD *)*v1;
    if ( !(v2[5] | v2[6] | v2[8] | v2[9]) )
      FreeHidTLCInfo();
    v0 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  }
  v3 = v0 + 2;
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( !*((_DWORD *)v5 + 5) )
    {
      if ( (_QWORD *)v4[1] != v5 || (v6 = (_QWORD *)v5[1], (_QWORD *)*v6 != v5) )
        __fastfail(3u);
      *v6 = v4;
      v4[1] = v6;
      Win32FreePool(v5);
    }
    v3 = &RawInputManagerObject::gHidRequestTable[2];
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7);
}
