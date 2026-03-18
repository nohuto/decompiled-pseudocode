/*
 * XREFs of ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01C46C8
 * Callers:
 *     FreeHidProcessRequest @ 0x1C0102E38 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01C48E4 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x1C01C4D70 (FreeHidTLCInfo.c)
 */

void __fastcall DerefExcludeRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, int a3)
{
  __int64 v3; // rax
  bool v4; // zf

  if ( !a2 )
  {
    if ( (*((_DWORD *)a1 + 5) & 8) != 0 )
      --*(_DWORD *)(*((_QWORD *)a1 + 3) + 40LL);
    v3 = *((_QWORD *)a1 + 3);
    v4 = (*(_DWORD *)(v3 + 36))-- == 1;
    if ( v4
      && a3
      && !(*(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 24LL) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 32LL) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 36LL)) )
    {
      FreeHidTLCInfo();
    }
  }
}
