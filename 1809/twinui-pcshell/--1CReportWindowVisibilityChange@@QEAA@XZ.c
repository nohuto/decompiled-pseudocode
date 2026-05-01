/*
 * XREFs of ??1CReportWindowVisibilityChange@@QEAA@XZ @ 0x1800EB978
 * Callers:
 *     ??_GCIAMGlobals@@QEAAPEAXI@Z @ 0x1800EC568 (--_GCIAMGlobals@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800E4C08 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CReportWindowVisibilityChange::~CReportWindowVisibilityChange(CReportWindowVisibilityChange *this)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi

  v1 = (__int64 *)*((_QWORD *)this + 6);
  if ( v1 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 7);
    if ( v1 != v3 )
    {
      do
        Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'(v1++);
      while ( v1 != v3 );
      v1 = (__int64 *)*((_QWORD *)this + 6);
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  if ( *(_QWORD *)this )
  {
    CoTaskMemFree(*(LPVOID *)this);
    *(_QWORD *)this = 0LL;
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
}
