/*
 * XREFs of ?IsGestureType@MPCInputInfoHelper@@SA_NPEAUInputInfo@@W4MPCGestureType@@@Z @ 0x18012BF78
 * Callers:
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18012C200 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputInfoHelper::IsGestureType(_DWORD *a1, int a2)
{
  return (*a1 & 0x662600) != 0 && a1[16] == a2;
}
