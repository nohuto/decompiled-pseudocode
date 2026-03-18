/*
 * XREFs of ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0049F9C
 * Callers:
 *     GetMonitorDC @ 0x1C002E29C (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0049F1C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 * Callees:
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00275A0 (SetOrCreateRectRgnIndirectPublic.c)
 *     GetMonitorRectForDpi @ 0x1C004F3F0 (GetMonitorRectForDpi.c)
 */

HRGN __fastcall GetMonitorRegionForDpi(struct tagMONITOR *a1, unsigned __int16 a2)
{
  HRGN result; // rax
  int v3; // r8d
  int v4; // eax
  char *v5; // rbx
  struct _RECTL v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return (HRGN)*((_QWORD *)a1 + 9);
  v3 = -1;
  if ( a2 == *((unsigned __int16 *)gpsi + 3499) )
  {
    v3 = 0;
  }
  else if ( a2 >= 0x60u && a2 == 24 * (a2 / 0x18u) )
  {
    v3 = (a2 - 72) / 24;
    if ( v3 >= 18 )
      v3 = -1;
  }
  v4 = 0;
  if ( v3 != -1 )
    v4 = v3;
  v5 = (char *)a1 + 8 * v4;
  result = (HRGN)*((_QWORD *)v5 + 10);
  if ( !result )
  {
    v6 = *(struct _RECTL *)GetMonitorRectForDpi(&v6, a1, a2);
    SetOrCreateRectRgnIndirectPublic((HRGN *)v5 + 10, &v6);
    return (HRGN)*((_QWORD *)v5 + 10);
  }
  return result;
}
