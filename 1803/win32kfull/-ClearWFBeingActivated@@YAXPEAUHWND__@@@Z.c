/*
 * XREFs of ?ClearWFBeingActivated@@YAXPEAUHWND__@@@Z @ 0x1C0138E20
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

void __fastcall ClearWFBeingActivated(HWND a1)
{
  __int64 v1; // rax

  v1 = ValidateHwnd(a1);
  if ( v1 )
    SetOrClrWF(0, v1, 528, 1);
}
