/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x1C01D4150
 * Callers:
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01D4268 (InvalidateWEFCOMPOSITEDDCEs.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UnionRect @ 0x1C0079C20 (UnionRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01D3CCC (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01D3E04 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

__int64 __fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1)
{
  __int64 result; // rax
  __int64 Prop; // rax
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  struct tagWND *v5; // rcx
  struct tagRECT v6; // [rsp+20h] [rbp-28h] BYREF

  result = GreGetBounds(*(_QWORD *)(a1 + 8), &v6, 4LL);
  if ( (_DWORD)result )
  {
    Prop = GetProp(*(_QWORD *)(a1 + 32), (unsigned __int16)atomLayer, 1LL);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) + 27LL) & 0x10) != 0 )
    {
      return UnionRect((_DWORD *)(Prop + 16), (int *)(Prop + 16), &v6.left);
    }
    else
    {
      IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
      v5 = *(struct tagWND **)(a1 + 32);
      if ( IsResourceAcquiredExclusiveLite )
        return InvalidateWEFCOMPOSITEDWindow(v5, (__m128i *)&v6);
      else
        return PostCOMPOSITEDInvalidateAPC(v5, &v6);
    }
  }
  return result;
}
