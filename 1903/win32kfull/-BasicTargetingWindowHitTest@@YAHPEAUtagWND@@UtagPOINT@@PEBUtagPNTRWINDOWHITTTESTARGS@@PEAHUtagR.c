/*
 * XREFs of ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C0203860
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204D90 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C82C4 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C020363C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 */

__int64 __fastcall BasicTargetingWindowHitTest(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        int a10)
{
  int v14; // edi
  int v15; // eax
  BOOL v16; // eax
  _DWORD *v17; // rbx
  __int64 result; // rax
  unsigned __int16 v19; // [rsp+90h] [rbp+18h] BYREF

  v14 = 0;
  if ( !(unsigned int)IsCompositionInputWindow((const struct tagWND *)a1) || (v15 = 1, (*(_DWORD *)(a3 + 36) & 8) == 0) )
    v15 = 0;
  v16 = BasicTargetingHitTest(
          a1,
          *(_QWORD *)(a3 + 40),
          a2,
          &v19,
          a8,
          *(_DWORD *)(a3 + 84),
          a5,
          a9,
          *(_DWORD *)(a3 + 88) == 1,
          a10,
          v15);
  v17 = a7;
  *a7 = v19;
  if ( v16 )
  {
    if ( !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)a1)
      || (*(_DWORD *)(a3 + 36) & 1) == 0 )
    {
      goto LABEL_9;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      *a6 = 1;
LABEL_9:
      result = 1LL;
      LOBYTE(v14) = *v17 == 0;
      *a4 = v14;
      return result;
    }
  }
  return 0LL;
}
