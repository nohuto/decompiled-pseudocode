/*
 * XREFs of PostDeviceNotification @ 0x1C005A518
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0056BB0 (EditionDevicePnpNotification.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C005A314 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x1C019F620 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0057DEC (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C005A118 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     PostPointerEventMessage @ 0x1C01B7760 (PostPointerEventMessage.c)
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C01BDED4 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 */

void __fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int16 v8; // bp
  __int16 v9; // r14
  struct tagPROCESS_HID_TABLE *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // r15d
  struct tagPROCESS_HID_REQUEST *v13; // rax

  v8 = 0;
  v9 = 0;
  v10 = (struct tagPROCESS_HID_TABLE *)RawInputManagerObject::gHidRequestTable[4];
  if ( *((_BYTE *)a2 + 48) )
  {
    if ( *((_BYTE *)a2 + 48) == 1 )
    {
      v8 = 1;
      v9 = 6;
    }
    else if ( *((_BYTE *)a2 + 48) == 2 )
    {
      v11 = *((_QWORD *)a2 + 58);
      v8 = *(_WORD *)(v11 + 42);
      v9 = *(_WORD *)(v11 + 40);
    }
  }
  else
  {
    v8 = 1;
    v9 = 2;
  }
  v12 = 0;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
  {
    if ( a4 == 2 )
      Edgy::OnDeviceRemoval(*(Edgy **)a2, (void *)1);
    if ( a5 )
    {
      PostPointerEventMessage(*((_QWORD *)a2 + 60), 568LL, a4, 1LL);
      if ( a4 == 1 )
      {
        v12 = 712;
      }
      else if ( a4 == 2 )
      {
        v12 = 713;
      }
      PostMessage(-1LL, v12, a5, 0LL);
    }
  }
  if ( a1 )
  {
    if ( *((_WORD *)a1 + 9) == v9 && *((_WORD *)a1 + 8) == v8 )
      PostHidNotification(a1, a2);
  }
  else
  {
    while ( v10 != (struct tagPROCESS_HID_TABLE *)&RawInputManagerObject::gHidRequestTable[4] )
    {
      v13 = InProcessDeviceTypeRequestTable(v10, v8, v9);
      if ( v13 )
        PostHidNotification(v13, a2);
      v10 = *(struct tagPROCESS_HID_TABLE **)v10;
    }
  }
}
