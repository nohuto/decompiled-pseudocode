/*
 * XREFs of ??1CAutoTGO@@QEAA@XZ @ 0x1C01208D4
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C01379CC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     NtGdiEngCheckAbort @ 0x1C02962B0 (NtGdiEngCheckAbort.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C0298E20 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::~CAutoTGO(CAutoTGO *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
