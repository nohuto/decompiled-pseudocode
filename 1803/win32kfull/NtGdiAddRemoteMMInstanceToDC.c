/*
 * XREFs of NtGdiAddRemoteMMInstanceToDC @ 0x1C0248A30
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C0139528 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C023F5F8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z @ 0x1C0247874 (-GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z.c)
 */

__int64 __fastcall NtGdiAddRemoteMMInstanceToDC(HDC a1, char *Src, size_t Size)
{
  size_t v3; // rsi
  unsigned int v5; // edi
  __int64 result; // rax
  struct _FONTFILEVIEW **v7; // rax
  struct _FONTFILEVIEW **v8; // r8
  struct _FONTFILEVIEW *v9; // rax
  int v10; // [rsp+44h] [rbp-114h] BYREF
  __int64 v11; // [rsp+48h] [rbp-110h] BYREF
  int v12; // [rsp+50h] [rbp-108h]
  int v13; // [rsp+54h] [rbp-104h]
  char v14[8]; // [rsp+58h] [rbp-100h] BYREF
  _OWORD v15[5]; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v16; // [rsp+B0h] [rbp-A8h]
  __int128 v17; // [rsp+C0h] [rbp-98h]
  __int64 v18; // [rsp+D0h] [rbp-88h]
  _DWORD v19[20]; // [rsp+E0h] [rbp-78h] BYREF

  v3 = (unsigned int)Size;
  v5 = 0;
  v12 = 0;
  v13 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v11, a1);
  result = v11;
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 36) & 1) == 0 && (unsigned int)v3 <= 0x50 )
    {
      memset(v19, 0, sizeof(v19));
      if ( (_DWORD)v3 && ((unsigned __int64)&Src[v3] > MmUserProbeAddress || &Src[v3] < Src) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v19, Src, v3);
      if ( v19[3] <= 0x10u )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
        if ( (unsigned int)GreGetBaseUFIBits((struct _UNIVERSAL_FONT_ID *)v19, (struct _FONTFILEVIEW *)v15) )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v14);
          v7 = (struct _FONTFILEVIEW **)PALLOCMEM2(0x80uLL, 1986422343LL, 1);
          v8 = v7;
          if ( v7 )
          {
            v10 = 0;
            v9 = (struct _FONTFILEVIEW *)(v7 + 1);
            *v8 = v9;
            *((_QWORD *)&v16 + 1) = 0LL;
            DWORD1(v17) = 0;
            *(_OWORD *)v9 = v15[0];
            *((_OWORD *)v9 + 1) = v15[1];
            *((_OWORD *)v9 + 2) = v15[2];
            *((_OWORD *)v9 + 3) = v15[3];
            *((_OWORD *)v9 + 4) = v15[4];
            *((_OWORD *)v9 + 5) = v16;
            *((_OWORD *)v9 + 6) = v17;
            *((_QWORD *)v9 + 14) = v18;
            v5 = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                   (PUBLIC_PFTOBJ *)v14,
                   (struct XDCOBJ *)&v11,
                   v8,
                   1u,
                   (struct tagDESIGNVECTOR *)&v19[2],
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
    XDCOBJ::vUnlockFast((XDCOBJ *)&v11);
    return v5;
  }
  return result;
}
