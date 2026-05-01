/*
 * XREFs of ?SetOldAppLayout@CAppLayoutOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x1803B7E70
 * Callers:
 *     ?SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x180342270 (-SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAppLayoutOperation::SetOldAppLayout(CAppLayoutOperation *this, struct IAppLayout *a2)
{
  char *v2; // rbx

  v2 = (char *)this + 16;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  (*(void (__fastcall **)(struct IAppLayout *, GUID *, char *))(*(_QWORD *)a2 + 192LL))(
    a2,
    &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
    v2);
}
