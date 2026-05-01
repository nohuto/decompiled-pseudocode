/*
 * XREFs of ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x18041F090
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x18041CF40 (-Commit@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803BE2D4 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18040E820 (-ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@.c)
 */

__int64 __fastcall CAppLayout::_CommitLayoutItems(CAppLayout *this)
{
  unsigned __int64 v1; // r14
  int v2; // ebx
  unsigned __int64 i; // rdi
  __int64 v5; // rax
  __int64 v7[2]; // [rsp+20h] [rbp-29h] BYREF
  struct tagRECT v8; // [rsp+30h] [rbp-19h] BYREF
  struct tagRECT v9; // [rsp+40h] [rbp-9h] BYREF
  struct tagRECT v10; // [rsp+50h] [rbp+7h] BYREF

  v1 = *((_QWORD *)this + 14);
  v2 = 0;
  for ( i = 0LL; i < v1; ++i )
  {
    if ( v2 < 0 )
      break;
    v5 = *((_QWORD *)this + 13);
    v7[0] = 0LL;
    v2 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>((_QWORD *)(v5 + 8 * i), v7);
    if ( v2 >= 0
      && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7[0] + 24LL))(v7[0]) == 1
       || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7[0] + 24LL))(v7[0]) == 4) )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, struct tagRECT *))(*(_QWORD *)v7[0] + 56LL))(v7[0], 0LL, &v9);
      v8 = v9;
      (*(void (__fastcall **)(__int64, __int64, struct tagRECT *))(*(_QWORD *)v7[0] + 104LL))(v7[0], 1LL, &v8);
      v2 = ImmersiveApplicationLayout::ComputeAppViewData((CAppLayout *)((char *)this + 64), &v8, &v8, &v10);
      if ( v2 >= 0 )
        (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v7[0] + 120LL))(v7[0], &v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  }
  return (unsigned int)v2;
}
