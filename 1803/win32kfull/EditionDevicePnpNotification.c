/*
 * XREFs of EditionDevicePnpNotification @ 0x1C0056BB0
 * Callers:
 *     <none>
 * Callees:
 *     PostDeviceNotification @ 0x1C005A518 (PostDeviceNotification.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D405C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D4150 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D4284 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D4320 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020C834 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020CB20 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall EditionDevicePnpNotification(__int64 a1)
{
  int v1; // esi
  struct DEVICEINFO *v3; // rcx
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  int v6; // eax
  int v7; // eax
  struct RawInputManagerDeviceObject *v8; // rbx
  InteractiveControlManager *v9; // rax
  struct RawInputManagerDeviceObject *v10; // rbx
  InteractiveControlManager *v11; // rax

  v1 = 0;
  v3 = *(struct DEVICEINFO **)a1;
  v4 = 2LL;
  v5 = *((_BYTE *)v3 + 48);
  if ( v5 != 2 )
  {
    if ( v5 > 1u )
      return;
    if ( *(_DWORD *)(a1 + 20) != 2 )
    {
      if ( *(_DWORD *)(a1 + 20) != 3 )
        return;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v1 = *(_DWORD *)(a1 + 16);
  switch ( *(_DWORD *)(a1 + 20) )
  {
    case 1:
      if ( v3 )
      {
        v7 = *((_DWORD *)v3 + 50);
        if ( (v7 & 0x100) != 0 )
        {
          v10 = (struct DEVICEINFO *)((char *)v3 - 80);
          v11 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceAttach(v11, v10);
        }
        else if ( (v7 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceAttached((struct DEVICEINFO *)((char *)v3 - 80));
        }
      }
      break;
    case 2:
      if ( (*((_DWORD *)v3 + 50) & 0x200) != 0 )
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)(((unsigned __int64)v3 - 80) & -(__int64)(v3 != 0LL)));
LABEL_13:
      v4 = 1LL;
LABEL_14:
      PostDeviceNotification(0LL, *(struct DEVICEINFO **)a1, v1);
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 184LL) & 0x1000) != 0 && (unsigned __int64)(v4 - 1) <= 1 )
        ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
      return;
    case 3:
      if ( (*((_DWORD *)v3 + 50) & 0x200) != 0 )
        InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)(((unsigned __int64)v3 - 80) & -(__int64)(v3 != 0LL)));
      goto LABEL_14;
    case 4:
      v6 = *((_DWORD *)v3 + 50);
      if ( (v6 & 0x100) != 0 )
      {
        v8 = (struct RawInputManagerDeviceObject *)(((unsigned __int64)v3 - 80) & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64));
        v9 = InteractiveControlManager::Instance();
        InteractiveControlManager::OnDeviceRemoval(v9, v8);
      }
      else if ( (v6 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)(((unsigned __int64)v3 - 80) & -(__int64)(v3 != 0LL)));
      }
      break;
  }
}
