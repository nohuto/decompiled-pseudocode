/*
 * XREFs of ?Retire@CFlipContentToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0064E60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C006046C (-FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z.c)
 */

void __fastcall CFlipContentToken::Retire(CFlipContentToken *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  struct FlipManagerObject *v2; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-29h] BYREF
  GUID v4; // [rsp+38h] [rbp-11h] BYREF
  GUID v5; // [rsp+50h] [rbp+7h] BYREF
  int v6; // [rsp+60h] [rbp+17h]
  GUID *v7; // [rsp+68h] [rbp+1Fh]
  GUID v8; // [rsp+70h] [rbp+27h]
  int v9; // [rsp+80h] [rbp+37h]
  _QWORD *v10; // [rsp+88h] [rbp+3Fh]

  v3[0] = *((_QWORD *)this + 13);
  v3[1] = *((_QWORD *)this + 14);
  *((_DWORD *)this + 6) = 5;
  v2 = (struct FlipManagerObject *)*((_QWORD *)this + 11);
  v3[2] = *((_QWORD *)a2 + 2);
  v7 = &v4;
  v10 = v3;
  v4 = GUID_0b09f893_2cd6_4e6b_9e4e_99d293ba136d;
  v6 = 16;
  v5 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
  v9 = 24;
  v8 = GUID_0b09f893_2cd6_4e6b_9e4e_99d293ba136d;
  FlipManagerDwmPostConsumerMessage(v2, (__int64)a2, (struct FlipPropertyItem *)&v5);
}
