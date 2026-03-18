/*
 * XREFs of NtGdiAddRemoteMMInstanceToDC @ 0x1C0260AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C015F168 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0256BA4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z @ 0x1C025F728 (-GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z.c)
 */

__int64 __fastcall NtGdiAddRemoteMMInstanceToDC(HDC a1, char *Src, size_t Size)
{
  size_t v3; // rsi
  unsigned int v5; // edi
  struct _FONTFILEVIEW **v7; // rax
  struct _FONTFILEVIEW **v8; // r8
  struct _FONTFILEVIEW *v9; // rax
  int v10; // [rsp+44h] [rbp-134h] BYREF
  char v11[8]; // [rsp+48h] [rbp-130h] BYREF
  _QWORD v12[6]; // [rsp+50h] [rbp-128h] BYREF
  _OWORD v13[5]; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v14; // [rsp+D0h] [rbp-A8h]
  __int128 v15; // [rsp+E0h] [rbp-98h]
  __int64 v16; // [rsp+F0h] [rbp-88h]
  _DWORD v17[20]; // [rsp+100h] [rbp-78h] BYREF

  v3 = (unsigned int)Size;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    if ( (*(_DWORD *)(v12[0] + 36LL) & 1) == 0 && (unsigned int)v3 <= 0x50 )
    {
      memset(v17, 0, sizeof(v17));
      if ( (_DWORD)v3 && ((unsigned __int64)&Src[v3] > MmUserProbeAddress || &Src[v3] < Src) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, Src, v3);
      if ( v17[3] <= 0x10u )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
        if ( (unsigned int)GreGetBaseUFIBits((struct _UNIVERSAL_FONT_ID *)v17, (struct _FONTFILEVIEW *)v13) )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v11);
          v7 = (struct _FONTFILEVIEW **)PALLOCMEM2(0x80uLL, 1986422343LL, 1);
          v8 = v7;
          if ( v7 )
          {
            v10 = 0;
            v9 = (struct _FONTFILEVIEW *)(v7 + 1);
            *v8 = v9;
            *((_QWORD *)&v14 + 1) = 0LL;
            DWORD1(v15) = 0;
            *(_OWORD *)v9 = v13[0];
            *((_OWORD *)v9 + 1) = v13[1];
            *((_OWORD *)v9 + 2) = v13[2];
            *((_OWORD *)v9 + 3) = v13[3];
            *((_OWORD *)v9 + 4) = v13[4];
            *((_OWORD *)v9 + 5) = v14;
            *((_OWORD *)v9 + 6) = v15;
            *((_QWORD *)v9 + 14) = v16;
            v5 = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                   (PUBLIC_PFTOBJ *)v11,
                   (struct XDCOBJ *)v12,
                   v8,
                   1LL,
                   (struct tagDESIGNVECTOR *)&v17[2],
                   0LL,
                   &v10);
          }
          else
          {
            v5 = 0;
          }
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
        GreReleaseSemaphoreInternal(ghsemPublicPFT);
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return v5;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return 0LL;
  }
}
