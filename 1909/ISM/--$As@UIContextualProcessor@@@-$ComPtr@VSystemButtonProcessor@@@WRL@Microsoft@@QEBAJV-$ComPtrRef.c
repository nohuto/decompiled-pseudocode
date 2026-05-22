/*
 * XREFs of ??$As@UIContextualProcessor@@@?$ComPtr@VSystemButtonProcessor@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800352E4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SystemButtonProcessor>::As<IContextualProcessor>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a2);
  return v4(v2, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, a2);
}
