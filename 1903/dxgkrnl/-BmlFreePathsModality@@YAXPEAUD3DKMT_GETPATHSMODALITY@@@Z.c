/*
 * XREFs of ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00FC5D4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkFreePathsModality @ 0x1C014C280 (DxgkFreePathsModality.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

void __fastcall BmlFreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  void *v4; // rcx

  if ( a1 && *((_WORD *)a1 + 11) )
  {
    *((_WORD *)a1 + 10) = 0;
    v2 = 0;
    do
    {
      v3 = 272LL * v2;
      operator delete(*(void **)((char *)a1 + v3 + 272));
      memset((char *)a1 + v3 + 48, 0, 0x110uLL);
      ++v2;
    }
    while ( v2 < *((unsigned __int16 *)a1 + 11) );
    v4 = (void *)*((_QWORD *)a1 + 5);
    if ( v4 )
    {
      operator delete[](v4);
      *((_QWORD *)a1 + 5) = 0LL;
      *((_DWORD *)a1 + 9) = 0;
    }
  }
}
