/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x1C025B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C0139528 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C023F5F8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C025AAF8 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C025B3FC (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C025B890 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall NtGdiAddRemoteFontToDC(HDC a1, struct tagDOWNLOADFONTHEADER *a2, unsigned int a3, ULONG64 a4)
{
  struct _UNIVERSAL_FONT_ID *v4; // rdi
  unsigned int RemoteFonts; // ebx
  int v8; // r14d
  _BYTE *v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // esi
  struct tagDOWNLOADFONTHEADER *v13; // rdx
  struct _FONTFILEVIEW **v14; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B8h]
  int v17; // [rsp+54h] [rbp-B4h]
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v19[8]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v20; // [rsp+68h] [rbp-A0h]
  _BYTE v21[128]; // [rsp+70h] [rbp-98h] BYREF
  struct tagDOWNLOADFONTHEADER *v22; // [rsp+128h] [rbp+20h] BYREF

  v4 = (struct _UNIVERSAL_FONT_ID *)a4;
  RemoteFonts = 0;
  v8 = 0;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      v4 = (struct _UNIVERSAL_FONT_ID *)MmUserProbeAddress;
    v18 = *(_QWORD *)v4;
    v4 = (struct _UNIVERSAL_FONT_ID *)&v18;
    v20 = &v18;
  }
  v16 = 0;
  v17 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v15, a1);
  if ( !v15 )
    return 0LL;
  v14 = 0LL;
  v10 = 0LL;
  v22 = a2;
  v11 = cMapRemoteFonts(&v22, a3, v21, 1LL);
  v12 = v11;
  v13 = v22;
  if ( v22 )
  {
    if ( v11 )
    {
      v10 = v21;
      v8 = 1;
      LODWORD(v22) = 1;
      RemoteFonts = bCreateFontFileView((const struct _FONTFILEVIEW *)v21, v13, a3, &v14, v11);
      if ( RemoteFonts )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v19);
        RemoteFonts = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                        (PUBLIC_PFTOBJ *)v19,
                        (struct XDCOBJ *)&v15,
                        v14,
                        v12,
                        0LL,
                        v4,
                        (int *)&v22);
        v8 = (int)v22;
      }
    }
  }
  if ( !RemoteFonts )
  {
    if ( v8 )
      vUnmapRemoteFonts(v10);
  }
  XDCOBJ::vUnlockFast((XDCOBJ *)&v15);
  return RemoteFonts;
}
