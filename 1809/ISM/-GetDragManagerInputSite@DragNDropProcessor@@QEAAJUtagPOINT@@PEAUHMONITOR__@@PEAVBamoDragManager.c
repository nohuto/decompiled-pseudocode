/*
 * XREFs of ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180025668
 * Callers:
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180024520 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180024880 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180025070 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001E104 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x180026370 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessor::GetDragManagerInputSite(
        DragNDropProcessor *this,
        struct tagPOINT a2,
        HMONITOR a3,
        struct BamoDragManagerClientProxy *a4,
        struct InputSite **a5)
{
  struct InputSite **v6; // rdi
  struct InputSite **v7; // rsi
  struct BamoDragManagerClientProxy *v8; // rbx
  __int64 v9; // rax
  struct BamoDragManagerClientProxy *v10; // rcx
  struct InputSite *v11; // rcx
  struct BamoDragManagerClientProxy *v13; // [rsp+30h] [rbp-B8h] BYREF
  char v14[8]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-88h]

  (*(void (__fastcall **)(_QWORD, char *, struct tagPOINT, HMONITOR, int))(**((_QWORD **)this + 3) + 32LL))(
    *((_QWORD *)this + 3),
    v14,
    a2,
    a3,
    2);
  v6 = (struct InputSite **)v15[0];
  v7 = (struct InputSite **)v15[1];
  while ( v6 != v7 )
  {
    InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v6, &v13);
    v8 = v13;
    if ( v13 )
    {
      if ( v13 == a4 )
      {
        v11 = *v6;
        if ( *v6 )
        {
          (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v11 + 8LL))(v11);
          v11 = *v6;
        }
        *a5 = v11;
        (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v8 + 8LL))(v8);
        break;
      }
      v9 = *(_QWORD *)v13;
      v10 = v13;
      v13 = 0LL;
      (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(v9 + 8))(v10);
    }
    ++v6;
  }
  if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v16);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v15);
  return 0LL;
}
