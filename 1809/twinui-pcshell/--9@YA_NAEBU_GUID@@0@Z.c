/*
 * XREFs of ??9@YA_NAEBU_GUID@@0@Z @ 0x1800EBC40
 * Callers:
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x18006AFC0 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a1 - *a2;
  if ( *a1 == *a2 )
    v2 = a1[1] - a2[1];
  return v2 != 0;
}
