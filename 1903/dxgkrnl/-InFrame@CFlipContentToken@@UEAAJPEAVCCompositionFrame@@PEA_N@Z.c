/*
 * XREFs of ?InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0064DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C658 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 */

__int64 __fastcall CFlipContentToken::InFrame(CFlipContentToken *this, struct CCompositionFrame *a2, bool *a3)
{
  __int64 result; // rax
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 3;
  result = CompositionSurfaceObject::NotifyTokenInFrame(*((CompositionSurfaceObject **)this + 4), this, &v6);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)this + 120) = v6;
    *a3 = 1;
  }
  return result;
}
