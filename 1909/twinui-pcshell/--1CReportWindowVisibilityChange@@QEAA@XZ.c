/*
 * XREFs of ??1CReportWindowVisibilityChange@@QEAA@XZ @ 0x18012D9BC
 * Callers:
 *     ??_GCIAMGlobals@@QEAAPEAXI@Z @ 0x18012E888 (--_GCIAMGlobals@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180045560 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CReportWindowVisibilityChange::~CReportWindowVisibilityChange(CReportWindowVisibilityChange *this)
{
  char *v1; // rdi
  char *v3; // rsi

  v1 = (char *)*((_QWORD *)this + 6);
  if ( v1 )
  {
    v3 = (char *)*((_QWORD *)this + 7);
    if ( v1 != v3 )
    {
      do
      {
        Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64)v1);
        v1 += 8;
      }
      while ( v1 != v3 );
      v1 = (char *)*((_QWORD *)this + 6);
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  if ( *(_QWORD *)this )
  {
    CoTaskMemFree(*(LPVOID *)this);
    *(_QWORD *)this = 0LL;
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
}
