/*
 * XREFs of ??1ViewEventRegistration@@QEAA@XZ @ 0x18026923C
 * Callers:
 *     ?Release@?$CRefCountedObject@UViewEventRegistration@@@@UEAAKXZ @ 0x18026DCB0 (-Release@-$CRefCountedObject@UViewEventRegistration@@@@UEAAKXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@UViewEventRegistration@@@std@@EEAAXXZ @ 0x1802821C0 (-_Destroy@-$_Ref_count_obj@UViewEventRegistration@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ViewEventRegistration::~ViewEventRegistration(ViewEventRegistration *this)
{
  HSTRING v2; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  v2 = (HSTRING)*((_QWORD *)this + 1);
  if ( v2 )
    WindowsDeleteString(v2);
  if ( *(_QWORD *)this )
    WindowsDeleteString(*(HSTRING *)this);
}
