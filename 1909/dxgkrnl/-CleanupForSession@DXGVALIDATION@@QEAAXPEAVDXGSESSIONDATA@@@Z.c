/*
 * XREFs of ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C001A4DC
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C014520C (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVALIDATION::CleanupForSession(DXGVALIDATION *this, struct DXGSESSIONDATA *a2)
{
  void *v3; // rcx

  if ( *(_DWORD *)this )
  {
    v3 = (void *)*((_QWORD *)a2 + 2336);
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      *((_QWORD *)a2 + 2336) = 0LL;
    }
  }
}
