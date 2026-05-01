/*
 * XREFs of ?TabletModeChanged@TouchKeyboardExperienceManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1802BC4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::TabletModeChanged(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 544);
  *(_DWORD *)(a1 + 392) = a2;
  if ( v2 )
    *(_BYTE *)(*(_QWORD *)(v2 + 96) + 487LL) = a2 == 1;
  return 0LL;
}
