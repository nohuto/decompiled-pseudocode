/*
 * XREFs of ??0CD3DVidMemOnlyTexture@@IEAA@_N@Z @ 0x18004989C
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180049938 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 * Callees:
 *     <none>
 */

CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::CD3DVidMemOnlyTexture(CD3DVidMemOnlyTexture *this, char a2)
{
  CD3DVidMemOnlyTexture *result; // rax

  *((_BYTE *)this + 68) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)((char *)this + 92) = 2LL;
  *(_QWORD *)this = &CD3DVidMemOnlyTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  result = this;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 69) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *((_DWORD *)this + 45) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return result;
}
