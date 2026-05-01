/*
 * XREFs of ?SetAccessibleObject@CDropFeedback@@UEAAXPEAUIRawElementProviderSimple@@@Z @ 0x1803D5B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropFeedback::SetAccessibleObject(CDropFeedback *this, struct IRawElementProviderSimple *a2)
{
  struct IRawElementProviderSimple *v2; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  struct IRawElementProviderSimple *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct IRawElementProviderSimple *)*((_QWORD *)this + 21);
  if ( v2 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IRawElementProviderSimple *))a2->lpVtbl->AddRef)(a2);
      v2 = (struct IRawElementProviderSimple *)*((_QWORD *)this + 21);
    }
    v6 = v2;
    *((_QWORD *)this + 21) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 21))(
         *((_QWORD *)this + 21),
         &GUID_18a88c04_f6d0_48c4_802d_0e30fed9a33a,
         &v5) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, *((_QWORD *)this + 5));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
