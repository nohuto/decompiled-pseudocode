/*
 * XREFs of ??$?0AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$_Ref_count_obj@UKBViewInfo@@@std@@QEAA@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18030BE7C
 * Callers:
 *     ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18030C7DC (--$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj<KBViewInfo>::_Ref_count_obj<KBViewInfo>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<KBViewInfo>::`vftable';
  v3 = *a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 52) = -1;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 16), v3);
  *(_QWORD *)(a1 + 72) = GetTickCount64();
  return a1;
}
