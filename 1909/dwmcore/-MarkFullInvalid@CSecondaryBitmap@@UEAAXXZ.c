/*
 * XREFs of ?MarkFullInvalid@CSecondaryBitmap@@UEAAXXZ @ 0x18004F4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180051754 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall CSecondaryBitmap::MarkFullInvalid(CSecondaryBitmap *this)
{
  int v2; // r10d
  int v3; // r11d
  int v4; // eax
  int v5; // r9d
  _DWORD *v6; // rdx
  int v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+24h] [rbp-24h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]

  CSecondaryBitmap::GetBitmapRect(this, (struct MilRectU *)&v7);
  v2 = v7;
  v3 = v9;
  if ( v7 >= v9 || (v4 = v8, v5 = v10, v8 >= v10) )
  {
    **((_DWORD **)this + 1) = 0;
  }
  else
  {
    v6 = (_DWORD *)*((_QWORD *)this + 1);
    *v6 = 2;
    v6[1] = v2;
    v6[2] = v3;
    v6[3] = v4;
    v6[4] = 16;
    v6[7] = v2;
    v6[8] = v3;
    v6[5] = v5;
    v6[6] = 16;
  }
}
