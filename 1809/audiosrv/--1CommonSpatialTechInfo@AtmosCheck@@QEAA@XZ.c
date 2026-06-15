/*
 * XREFs of ??1CommonSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x1801376A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::CommonSpatialTechInfo::~CommonSpatialTechInfo(AtmosCheck::CommonSpatialTechInfo *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
    CoTaskMemFree(v3);
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
    CoTaskMemFree(v4);
}
