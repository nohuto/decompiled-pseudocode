/*
 * XREFs of PostDeviceNotification @ 0x1C010DA04
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C010CAB0 (EditionDevicePnpNotification.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C010D7F0 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01D45B0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C010D1F0 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C010DC4C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     PostPointerEventMessage @ 0x1C01EF880 (PostPointerEventMessage.c)
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C01F6D30 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 */

void __fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned int v5; // r8d
  __int16 v9; // bp
  __int16 v10; // r14
  struct tagPROCESS_HID_TABLE *v11; // rsi
  __int64 v12; // rax
  int v13; // r15d
  struct tagPROCESS_HID_REQUEST *v14; // rax
  unsigned int v15; // r8d

  v5 = *((unsigned __int8 *)a2 + 48);
  v9 = 0;
  v10 = 0;
  v11 = (struct tagPROCESS_HID_TABLE *)RawInputManagerObject::gHidRequestTable[4];
  if ( *((_BYTE *)a2 + 48) )
  {
    if ( --v5 )
    {
      if ( v5 == 1 )
      {
        v12 = *((_QWORD *)a2 + 58);
        v9 = *(_WORD *)(v12 + 42);
        v10 = *(_WORD *)(v12 + 40);
      }
    }
    else
    {
      v9 = 1;
      v10 = 6;
    }
  }
  else
  {
    v9 = 1;
    v10 = 2;
  }
  v13 = 0;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
  {
    if ( a4 == 2 )
      Edgy::OnDeviceRemoval(*(Edgy **)a2, (void *)1);
    if ( a5 )
    {
      PostPointerEventMessage(*((_QWORD *)a2 + 60), 568LL, a4, 1LL);
      if ( a4 == 1 )
      {
        v13 = 712;
      }
      else if ( a4 == 2 )
      {
        v13 = 713;
      }
      PostMessage(-1, v13, a5, 0);
    }
  }
  if ( a1 )
  {
    if ( *((_WORD *)a1 + 9) == v10 && *((_WORD *)a1 + 8) == v9 )
      PostHidNotification(a1, a2, v5, a4);
  }
  else
  {
    while ( v11 != (struct tagPROCESS_HID_TABLE *)&RawInputManagerObject::gHidRequestTable[4] )
    {
      v14 = InProcessDeviceTypeRequestTable(v11, v9, v10);
      if ( v14 )
        PostHidNotification(v14, a2, v15, a4);
      v11 = *(struct tagPROCESS_HID_TABLE **)v11;
    }
  }
}
