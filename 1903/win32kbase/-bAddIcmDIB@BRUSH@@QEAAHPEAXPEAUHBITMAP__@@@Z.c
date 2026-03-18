/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0122D50
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C001F700 (HmgIncrementShareReferenceCount.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C0122E30 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HBITMAP a3)
{
  unsigned int v6; // edi
  __int64 v8; // rbx
  _QWORD *v9; // rsi

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  v8 = HmgShareLockCheck((unsigned int)a3, 5);
  if ( v8 )
  {
    v9 = PALLOCMEM2(0x18uLL, 0x6C646247u, 0);
    if ( v9 )
    {
      HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v8);
      ++*(_DWORD *)(v8 + 168);
      *v9 = a2;
      v9[1] = a3;
      v9[2] = *((_QWORD *)this + 11);
      KeAcquireGuardedMutex(ghfmMemory);
      *((_QWORD *)this + 11) = v9;
      KeReleaseGuardedMutex(ghfmMemory);
      v6 = 1;
    }
    HmgDecrementShareReferenceCountEx((struct OBJECT *)v8, 0LL);
  }
  return v6;
}
