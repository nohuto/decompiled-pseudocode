/*
 * XREFs of EditionRimDeviceReadNotification @ 0x1C01D42B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C01D4330 (FindRimDevBackedDeviceInfo.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C020EFA4 (-InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C024ED80 (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 */

void __fastcall EditionRimDeviceReadNotification(void *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 RimDevBackedDeviceInfo; // rax
  void *v8; // rdx
  struct RawInputManagerDeviceObject *v9; // rcx
  struct RawInputManagerDeviceObject *v10; // rbx
  InteractiveControlManager *v11; // rax

  RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, 0LL);
  if ( RimDevBackedDeviceInfo || (RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, 1LL)) != 0 )
  {
    v9 = (struct RawInputManagerDeviceObject *)*(unsigned int *)(RimDevBackedDeviceInfo + 200);
    if ( ((unsigned __int16)v9 & 0x100) != 0 )
    {
      v10 = *(struct RawInputManagerDeviceObject **)(RimDevBackedDeviceInfo + 32);
      v11 = InteractiveControlManager::Instance();
      InteractiveControlManager::OnInputReport(v11, v10, a1, a3);
    }
    else if ( ((unsigned __int16)v9 & 0x200) != 0 )
    {
      InkProcessorOnInkDeviceInputReport(v9, v8);
    }
  }
}
