/*
 * XREFs of ?GetEvictedCountOfType@CAppLayoutOperation@@UEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1803B7A70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperation::GetEvictedCountOfType(__int64 a1, char a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  __int64 v7[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h]

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v7[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 128LL))(v5, v7) >= 0 )
    {
      while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v7[0] + 24LL))(v7[0], 1LL, v8) >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 176LL))(
                *(_QWORD *)(a1 + 32),
                v9) )
          ++v2;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  }
  if ( (a2 & 4) != 0
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 80LL))(*(_QWORD *)(a1 + 24), 4LL)
    && !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 80LL))(*(_QWORD *)(a1 + 32), 4LL) )
  {
    ++v2;
  }
  return v2;
}
