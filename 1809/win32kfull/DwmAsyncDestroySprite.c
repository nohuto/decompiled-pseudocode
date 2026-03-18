/*
 * XREFs of DwmAsyncDestroySprite @ 0x1C000DF28
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000DCCC (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00CC540 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall DwmAsyncDestroySprite(PVOID Object, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD v8[18]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v8, 0, 0x34uLL);
    v8[0] = 3407884;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741827;
    *(_QWORD *)&v8[11] = a2;
    EtwUpdateEvent(a2, 1073741827LL, v5, v6);
    v4 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v4;
}
