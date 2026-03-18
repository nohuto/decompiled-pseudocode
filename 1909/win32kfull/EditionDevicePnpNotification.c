/*
 * XREFs of EditionDevicePnpNotification @ 0x1C00E6D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0079528 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     PostDeviceNotification @ 0x1C00E7D84 (PostDeviceNotification.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EB6C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EC60 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020ED84 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EE18 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024E104 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024E424 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall EditionDevicePnpNotification(struct DEVICEINFO **a1)
{
  int v1; // eax
  __int64 v3; // rdi
  int v4; // ebp
  struct DEVICEINFO *v5; // rbx
  char v6; // cl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  InteractiveControlManager *v11; // rax
  int v12; // eax
  InteractiveControlManager *v13; // rax
  __int64 v14; // rcx

  v1 = *((_DWORD *)a1 + 5);
  v3 = 0LL;
  v4 = 0;
  if ( v1 == 2 )
  {
    v3 = 1LL;
  }
  else if ( *((_DWORD *)a1 + 5) == 3 )
  {
    v3 = 2LL;
  }
  v5 = *a1;
  v6 = *((_BYTE *)*a1 + 48);
  if ( v6 == 2 )
  {
    v4 = *((_DWORD *)a1 + 4);
    v7 = v1 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = *((_DWORD *)v5 + 50);
            if ( (v10 & 0x100) != 0 )
            {
              v11 = InteractiveControlManager::Instance();
              InteractiveControlManager::OnDeviceRemoval(
                v11,
                (struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 88) & -(__int64)(v5 != 0LL)));
            }
            else if ( (v10 & 0x200) != 0 )
            {
              InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 88) & -(__int64)(v5 != 0LL)));
            }
          }
        }
        else if ( (*((_DWORD *)v5 + 50) & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 88) & -(__int64)(v5 != 0LL)));
        }
      }
      else if ( (*((_DWORD *)v5 + 50) & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)(((unsigned __int64)v5 - 88) & -(__int64)(v5 != 0LL)));
      }
    }
    else if ( v5 )
    {
      v12 = *((_DWORD *)v5 + 50);
      if ( (v12 & 0x100) != 0 )
      {
        v13 = InteractiveControlManager::Instance();
        InteractiveControlManager::OnDeviceAttach(v13, (struct DEVICEINFO *)((char *)v5 - 88));
      }
      else if ( (v12 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceAttached((struct DEVICEINFO *)((char *)v5 - 88));
      }
    }
  }
  else if ( !v6 && v1 == 4 )
  {
    v14 = *((_QWORD *)v5 + 113);
    if ( v14 )
    {
      Win32FreePool(v14);
      *((_QWORD *)v5 + 113) = 0LL;
      *((_WORD *)v5 + 449) = 0;
    }
  }
  if ( v3 )
  {
    PostDeviceNotification(0LL, *a1, v4);
    if ( (*((_DWORD *)*a1 + 46) & 0x2000) != 0 && (unsigned __int64)(v3 - 1) <= 1 )
      ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0LL);
  }
}
