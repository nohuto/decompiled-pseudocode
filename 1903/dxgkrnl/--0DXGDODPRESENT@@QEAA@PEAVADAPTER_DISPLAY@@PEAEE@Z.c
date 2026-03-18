/*
 * XREFs of ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C017E6D4
 * Callers:
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C017E638 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C0159488 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 */

DXGDODPRESENT *__fastcall DXGDODPRESENT::DXGDODPRESENT(
        DXGDODPRESENT *this,
        struct ADAPTER_DISPLAY *a2,
        BLTQUEUE *a3,
        char a4)
{
  unsigned int v4; // edi

  v4 = 0;
  *(_DWORD *)this = *((_DWORD *)a2 + 20);
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 96) = a4;
  *((_DWORD *)this + 30) = -1;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  memset((char *)this + 16, 0, 0x40uLL);
  *((_QWORD *)this + 1) = a3;
  if ( *(_DWORD *)this )
  {
    do
    {
      BLTQUEUE::BLTQUEUE(a3, this, v4, (struct _KEVENT *)(3968LL * v4 + *((_QWORD *)a2 + 14) + 912LL), a4);
      ++v4;
      a3 = (BLTQUEUE *)((char *)a3 + 2760);
    }
    while ( v4 < *(_DWORD *)this );
  }
  return this;
}
