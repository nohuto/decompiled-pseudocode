/*
 * XREFs of GreConvertRedirectionToMemDC @ 0x1C02994BC
 * Callers:
 *     UpdateSpriteArea @ 0x1C00CB6CC (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00CC7A0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00CD178 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00CD2C0 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

__int64 __fastcall GreConvertRedirectionToMemDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // r8
  __int64 v5; // rax
  __int64 *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  MDCOBJA::MDCOBJA((MDCOBJA *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    if ( !*((_DWORD *)v7[0] + 8) )
    {
      v5 = v7[0][6];
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2128) & 0x400) != 0 )
        {
          *((_DWORD *)v7[0] + 9) &= 0xFFFFBFFE;
          v3 = 1;
          *((_DWORD *)v4 + 8) = 1;
          if ( a2 )
            *(_DWORD *)(v4[62] + 112) &= ~0x800u;
        }
      }
    }
    XDCOBJ::vAltUnlockFast(v7);
  }
  return v3;
}
