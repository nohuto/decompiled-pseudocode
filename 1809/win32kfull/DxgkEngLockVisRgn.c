/*
 * XREFs of DxgkEngLockVisRgn @ 0x1C025B810
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00118D8 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

__int64 __fastcall DxgkEngLockVisRgn(HDC a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  MDCOBJA::MDCOBJA((MDCOBJA *)&v4, a1);
  if ( v4 )
  {
    v5 = 0;
    v2 = *v4;
    v1 = v4[6];
    HmgDecrementShareReferenceCountEx(v4, &v5);
    if ( v5 )
      bDeleteDCInternalEx(v2, 0LL);
  }
  return v1;
}
