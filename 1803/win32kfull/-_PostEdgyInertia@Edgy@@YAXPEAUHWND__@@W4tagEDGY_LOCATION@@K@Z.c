/*
 * XREFs of ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01BEF90
 * Callers:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01BDF64 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01BF134 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 */

__int64 __fastcall Edgy::_PostEdgyInertia(unsigned __int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 v3; // di
  __int64 result; // rax
  __int64 v6; // rcx

  v3 = a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( result )
  {
    v6 = *(_QWORD *)(result + 40);
    if ( *(char *)(v6 + 20) >= 0 && *(char *)(v6 + 19) >= 0 )
      return PostMessage((struct tagWND *)result, 0x23Du, 0LL, a3 | (unsigned __int64)(v3 << 16));
  }
  return result;
}
