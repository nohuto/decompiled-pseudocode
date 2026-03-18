/*
 * XREFs of ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01F7E44
 * Callers:
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01F6DC0 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01F7FCC (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall Edgy::_PostEdgyInertia(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // bx
  __int64 result; // rax
  __int64 v7; // rcx

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = a3;
  result = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( result )
  {
    v7 = *(_QWORD *)(result + 40);
    if ( *(char *)(v7 + 20) >= 0 && *(char *)(v7 + 19) >= 0 )
      return PostMessage(result, 573, 0, v5 | (v4 << 16));
  }
  return result;
}
