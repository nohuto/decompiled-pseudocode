/*
 * XREFs of ?SetOldAppLayout@CAppLayoutOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x18041A710
 * Callers:
 *     ?SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z @ 0x1803A7340 (-SetOldAppLayout@BackOperation@@UEAAXPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
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
