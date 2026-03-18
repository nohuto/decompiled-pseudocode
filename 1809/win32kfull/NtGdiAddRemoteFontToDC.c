/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x1C026E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C015F168 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0256BA4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C026E284 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C026EBE8 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C026F0C0 (vUnmapRemoteFonts.c)
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
  struct _FONTFILEVIEW **v14; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 *v17; // [rsp+58h] [rbp-D0h]
  _QWORD v18[6]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v19[128]; // [rsp+90h] [rbp-98h] BYREF
  struct tagDOWNLOADFONTHEADER *v20; // [rsp+148h] [rbp+20h] BYREF

  v4 = (struct _UNIVERSAL_FONT_ID *)a4;
  RemoteFonts = 0;
  v8 = 0;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      v4 = (struct _UNIVERSAL_FONT_ID *)MmUserProbeAddress;
    v15 = *(_QWORD *)v4;
    v4 = (struct _UNIVERSAL_FONT_ID *)&v15;
    v17 = &v15;
  }
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( v18[0] )
  {
    v14 = 0LL;
    v10 = 0LL;
    v20 = a2;
    v11 = cMapRemoteFonts(&v20, a3, v19, 1LL);
    v12 = v11;
    v13 = v20;
    if ( v20 )
    {
      if ( v11 )
      {
        v10 = v19;
        v8 = 1;
        LODWORD(v20) = 1;
        RemoteFonts = bCreateFontFileView((const struct _FONTFILEVIEW *)v19, v13, a3, &v14, v11);
        if ( RemoteFonts )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v16);
          RemoteFonts = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                          (PUBLIC_PFTOBJ *)v16,
                          (struct XDCOBJ *)v18,
                          v14,
                          v12,
                          0LL,
                          v4,
                          (int *)&v20);
          v8 = (int)v20;
        }
      }
    }
    if ( !RemoteFonts )
    {
      if ( v8 )
        vUnmapRemoteFonts(v10);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v18);
    return RemoteFonts;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v18);
    return 0LL;
  }
}
