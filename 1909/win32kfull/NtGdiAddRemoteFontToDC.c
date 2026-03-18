/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x1C0286C00
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C0165F50 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026FC54 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C0286464 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C0286E5C (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C0287330 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall NtGdiAddRemoteFontToDC(
        HDC a1,
        struct tagDOWNLOADFONTHEADER *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4)
{
  _BYTE *v8; // r15
  unsigned int RemoteFonts; // ebx
  int v10; // r14d
  unsigned int v12; // eax
  unsigned int v13; // esi
  struct tagDOWNLOADFONTHEADER *v14; // rdx
  __int64 v15; // [rsp+40h] [rbp-D8h] BYREF
  struct _FONTFILEVIEW **v16; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 *v19; // [rsp+68h] [rbp-B0h]
  _BYTE v20[128]; // [rsp+70h] [rbp-A8h] BYREF
  struct tagDOWNLOADFONTHEADER *v21; // [rsp+138h] [rbp+20h] BYREF

  memset(v20, 0, 0x78uLL);
  v8 = 0LL;
  RemoteFonts = 0;
  v15 = 0LL;
  v10 = 0;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct _UNIVERSAL_FONT_ID *)MmUserProbeAddress;
    v15 = *(_QWORD *)a4;
    a4 = (struct _UNIVERSAL_FONT_ID *)&v15;
    v19 = &v15;
  }
  v17[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v17, a1);
  if ( !v17[0] )
    return 0LL;
  v16 = 0LL;
  v21 = a2;
  v12 = cMapRemoteFonts(&v21, a3, v20, 1LL);
  v13 = v12;
  v14 = v21;
  if ( v21 )
  {
    if ( v12 )
    {
      v8 = v20;
      v10 = 1;
      LODWORD(v21) = 1;
      RemoteFonts = bCreateFontFileView((const struct _FONTFILEVIEW *)v20, v14, a3, &v16, v12);
      if ( RemoteFonts )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v18);
        RemoteFonts = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                        (PUBLIC_PFTOBJ *)v18,
                        (struct XDCOBJ *)v17,
                        v16,
                        v13,
                        0LL,
                        a4,
                        (int *)&v21);
        v10 = (int)v21;
      }
    }
  }
  if ( !RemoteFonts )
  {
    if ( v10 )
      vUnmapRemoteFonts(v8);
  }
  XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  return RemoteFonts;
}
