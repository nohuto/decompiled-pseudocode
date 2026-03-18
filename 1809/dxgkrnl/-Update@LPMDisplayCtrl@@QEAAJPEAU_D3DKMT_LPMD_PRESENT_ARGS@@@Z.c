/*
 * XREFs of ?Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z @ 0x1C021B8B4
 * Callers:
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C021AD40 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C021AB74 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

NTSTATUS __fastcall LPMDisplayCtrl::Update(LPMDisplayCtrl *this, struct _D3DKMT_LPMD_PRESENT_ARGS *a2)
{
  __int64 v3; // rsi
  __int16 v5; // ax
  int v6; // eax
  _QWORD InputBuffer[4]; // [rsp+40h] [rbp-20h] BYREF
  LPMDisplayCtrl *v8; // [rsp+80h] [rbp+20h] BYREF

  v8 = this;
  if ( !a2 )
    return -1073741811;
  v3 = *((_QWORD *)a2 + 2);
  if ( !v3 )
    return -1073741811;
  if ( !*((_DWORD *)FileObject + 8) )
    return -1073741637;
  if ( !*((_DWORD *)FileObject + 9) )
    return -1073741808;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v5 = *((_WORD *)FileObject + 35) - 1;
  LOBYTE(InputBuffer[0]) = 1;
  WORD2(InputBuffer[0]) = v5;
  v6 = *((_DWORD *)a2 + 2);
  WORD1(InputBuffer[0]) = 0;
  HIDWORD(InputBuffer[1]) = 100;
  if ( v6 == -1 )
  {
    BYTE6(InputBuffer[0]) = 0;
  }
  else
  {
    BYTE6(InputBuffer[0]) = 1;
    LODWORD(InputBuffer[1]) = v6;
  }
  LODWORD(InputBuffer[2]) = *((_DWORD *)FileObject + 30);
  WORD2(InputBuffer[2]) = *((_WORD *)FileObject + 62);
  InputBuffer[3] = v3;
  LODWORD(v8) = 0;
  return LPMDisplayCtrl::CallDriver(FileObject, 0x83212010, InputBuffer, 0x20u, &v8, 4u, 0LL);
}
