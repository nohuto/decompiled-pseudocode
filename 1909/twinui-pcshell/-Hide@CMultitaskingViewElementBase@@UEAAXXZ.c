/*
 * XREFs of ?Hide@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180384490
 * Callers:
 *     ?Hide@CSwitchItemElement@@UEAAXXZ @ 0x1803822D0 (-Hide@CSwitchItemElement@@UEAAXXZ.c)
 *     ?Hide@SwitchItemThumbnailElement@@UEAAXXZ @ 0x1803972F0 (-Hide@SwitchItemThumbnailElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::Hide(CMultitaskingViewElementBase *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  int (__fastcall **v4)(_QWORD *, _QWORD, CMultitaskingViewElementBase *, char *); // rbx
  unsigned int v5; // eax
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 72) )
  {
    v2 = (_QWORD *)(*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, __int64 *))(*(_QWORD *)this + 384LL))(
                     this,
                     &v10);
    v3 = (_QWORD *)*v2;
    v4 = (int (__fastcall **)(_QWORD *, _QWORD, CMultitaskingViewElementBase *, char *))(*(_QWORD *)*v2 + 48LL);
    v5 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 400LL))(this);
    v6 = (*v4)(v3, v5, this, &v9) < 0 || v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( v6 )
    {
      v8 = *((_QWORD *)this + 11);
      *((_BYTE *)this + 72) = 0;
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, v7, 0LL, 0LL);
    }
  }
}
