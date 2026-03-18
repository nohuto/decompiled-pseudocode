/*
 * XREFs of NtGdiAddRemoteMMInstanceToDC @ 0x1C0279A90
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C0165F50 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026FC54 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z @ 0x1C0278724 (-GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z.c)
 */

__int64 __fastcall NtGdiAddRemoteMMInstanceToDC(HDC a1, char *Src, size_t Size)
{
  size_t v3; // rsi
  unsigned int v6; // r14d
  __int64 result; // rax
  struct _FONTFILEVIEW **v8; // rax
  struct _FONTFILEVIEW **v9; // r8
  struct _FONTFILEVIEW *v10; // rax
  int v11; // [rsp+44h] [rbp-114h] BYREF
  __int64 v12; // [rsp+48h] [rbp-110h] BYREF
  int v13; // [rsp+50h] [rbp-108h]
  int v14; // [rsp+54h] [rbp-104h]
  char v15[8]; // [rsp+58h] [rbp-100h] BYREF
  _OWORD v16[8]; // [rsp+60h] [rbp-F8h] BYREF
  _DWORD v17[20]; // [rsp+E0h] [rbp-78h] BYREF

  v3 = (unsigned int)Size;
  memset(v17, 0, sizeof(v17));
  v6 = 0;
  memset(v16, 0, 0x78uLL);
  v13 = 0;
  v14 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v12, a1);
  result = v12;
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 36) & 1) == 0 && (unsigned int)v3 <= 0x50 )
    {
      if ( (_DWORD)v3 && ((unsigned __int64)&Src[v3] > MmUserProbeAddress || &Src[v3] < Src) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, Src, v3);
      if ( v17[3] <= 0x10u )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
        if ( (unsigned int)GreGetBaseUFIBits((struct _UNIVERSAL_FONT_ID *)v17, (struct _FONTFILEVIEW *)v16) )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v15);
          v8 = (struct _FONTFILEVIEW **)PALLOCMEM2(0x80uLL, 1986422343LL, 1);
          v9 = v8;
          if ( v8 )
          {
            v11 = 0;
            v10 = (struct _FONTFILEVIEW *)(v8 + 1);
            *v9 = v10;
            *((_QWORD *)&v16[5] + 1) = 0LL;
            DWORD1(v16[6]) = 0;
            *(_OWORD *)v10 = v16[0];
            *((_OWORD *)v10 + 1) = v16[1];
            *((_OWORD *)v10 + 2) = v16[2];
            *((_OWORD *)v10 + 3) = v16[3];
            *((_OWORD *)v10 + 4) = v16[4];
            *((_OWORD *)v10 + 5) = v16[5];
            *((_OWORD *)v10 + 6) = v16[6];
            *((_QWORD *)v10 + 14) = *(_QWORD *)&v16[7];
            v6 = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                   (PUBLIC_PFTOBJ *)v15,
                   (struct XDCOBJ *)&v12,
                   v9,
                   1u,
                   (struct tagDESIGNVECTOR *)&v17[2],
                   0LL,
                   &v11);
          }
          else
          {
            v6 = 0;
          }
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
        GreReleaseSemaphoreInternal(ghsemPublicPFT);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v12);
    return v6;
  }
  return result;
}
