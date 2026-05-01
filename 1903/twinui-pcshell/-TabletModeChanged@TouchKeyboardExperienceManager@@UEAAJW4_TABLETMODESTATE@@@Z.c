/*
 * XREFs of ?TabletModeChanged@TouchKeyboardExperienceManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180318E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::TabletModeChanged(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 576);
  *(_DWORD *)(a1 + 416) = a2;
  if ( v2 )
    *(_BYTE *)(*(_QWORD *)(v2 + 96) + 491LL) = a2 == 1;
  return 0LL;
}
