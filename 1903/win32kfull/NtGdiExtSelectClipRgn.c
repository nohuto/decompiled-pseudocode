/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1C00611A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005D7B4 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005ED54 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0060D68 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00610E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiExtSelectClipRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v5; // ebx
  DC *v7[2]; // [rsp+20h] [rbp-89h] BYREF
  struct REGION *v8[4]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v9[32]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v10[2]; // [rsp+70h] [rbp-39h] BYREF
  __int16 v11; // [rsp+80h] [rbp-29h]
  _BYTE v12[32]; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v13[2]; // [rsp+C0h] [rbp+17h] BYREF
  __int16 v14; // [rsp+D0h] [rbp+27h]
  struct REGION *v15; // [rsp+128h] [rbp+7Fh] BYREF

  v5 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    if ( v7[0] )
    {
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a2, 1);
        if ( v8[0] )
        {
          v5 = DC::iSelect(v7[0], v8[0], a3);
          if ( v5 )
          {
            v10[0] = 0LL;
            v10[1] = 0LL;
            v11 = 256;
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v9, (struct XDCOBJ *)v7, 1);
            v5 = 0;
            if ( (v9[24] & 1) != 0 )
            {
              v15 = XDCOBJ::prgnEffRao(v7);
              v5 = RGNOBJ::iComplexity((RGNOBJ *)&v15);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v9);
            if ( v10[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v10);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
      }
      else if ( a3 == 5 )
      {
        v5 = DC::iSelect(v7[0], 0LL, 5);
        if ( v5 )
        {
          v13[0] = 0LL;
          v13[1] = 0LL;
          v14 = 256;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v7, 1);
          v5 = 0;
          if ( (v12[24] & 1) != 0 )
          {
            v15 = DC::prgnVisSnap(v7[0]);
            v5 = RGNOBJ::iComplexity((RGNOBJ *)&v15);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v12);
          if ( v13[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v13);
        }
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v5;
}
