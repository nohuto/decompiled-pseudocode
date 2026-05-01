/*
 * XREFs of ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x180301DEC
 * Callers:
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x180302FD8 (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     _lambda_b322da6b43750fc8b19fab06879e6370_::operator() @ 0x18030B59C (_lambda_b322da6b43750fc8b19fab06879e6370_--operator().c)
 *     _lambda_3620ca84e17db7610b457f2d5c27bd2d_::operator() @ 0x180313B20 (_lambda_3620ca84e17db7610b457f2d5c27bd2d_--operator().c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall D2DUtil::ConvertColor(
        struct _D3DCOLORVALUE *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        float a3,
        float a4)
{
  struct _D3DCOLORVALUE *result; // rax
  float v5[6]; // [rsp+0h] [rbp-18h]

  v5[3] = a3;
  v5[0] = (float)(((unsigned __int16)retstr & 0xFF00 | ((unsigned __int8)retstr << 16) | (unsigned int)BYTE2(retstr)) >> 16)
        / 255.0;
  v5[1] = (float)(unsigned __int8)((unsigned __int16)((unsigned __int16)retstr & 0xFF00) >> 8) / 255.0;
  result = this;
  v5[2] = (float)BYTE2(retstr) / 255.0;
  *(struct _D3DCOLORVALUE *)&this->r = *(struct _D3DCOLORVALUE *)v5;
  return result;
}
